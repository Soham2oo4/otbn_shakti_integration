// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdmem_test.h for the primary calling header

#include "Vdmem_test__pch.h"
#include "Vdmem_test___024root.h"

VL_INLINE_OPT void Vdmem_test___024root___act_sequent__TOP__6(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_sequent__TOP__6\n"); );
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__1__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__2__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__3__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__4__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__5__KET____DOT__i_secded_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____Vcellout__g_ispr_bignum_wdata_enc__BRA__6__KET____DOT__i_secded_enc__data_o))))) 
              << 0x26U));
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

VL_INLINE_OPT void Vdmem_test___024root___act_sequent__TOP__7(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_sequent__TOP__7\n"); );
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[2U] 
        = (IData)((0x13198a2e03707344ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                            ^ (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U]))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[3U] 
        = (IData)(((0x13198a2e03707344ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                             ^ (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U]))))) 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[4U] 
        = (IData)((0xa4093822299f31d0ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                            ^ (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U]))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[5U] 
        = (IData)(((0xa4093822299f31d0ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                             ^ (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U]))))) 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[6U] 
        = (IData)((0x82efa98ec4e6c89ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                           ^ (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U]))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[7U] 
        = (IData)(((0x82efa98ec4e6c89ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                            ^ (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U]))))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vdmem_test___024root___act_sequent__TOP__8(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_sequent__TOP__8\n"); );
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[2U] 
        = (IData)((0x13198a2e03707344ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                            ^ (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U]))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[3U] 
        = (IData)(((0x13198a2e03707344ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                             ^ (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U]))))) 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[4U] 
        = (IData)((0xa4093822299f31d0ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                            ^ (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U]))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[5U] 
        = (IData)(((0xa4093822299f31d0ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                             ^ (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U]))))) 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[6U] 
        = (IData)((0x82efa98ec4e6c89ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                           ^ (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U]))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[7U] 
        = (IData)(((0x82efa98ec4e6c89ULL ^ (vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                            ^ (((QData)((IData)(
                                                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U]))))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vdmem_test___024root___act_sequent__TOP__9(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_sequent__TOP__9\n"); );
    // Init
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__352__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__352__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__352__state_in;
    __Vfunc_prince_mult_prime_64bit__352__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__353__Vfuncout;
    __Vfunc_prince_nibble_red16__353__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__353__vect;
    __Vfunc_prince_nibble_red16__353__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__354__Vfuncout;
    __Vfunc_prince_nibble_red16__354__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__354__vect;
    __Vfunc_prince_nibble_red16__354__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__355__Vfuncout;
    __Vfunc_prince_nibble_red16__355__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__355__vect;
    __Vfunc_prince_nibble_red16__355__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__356__Vfuncout;
    __Vfunc_prince_nibble_red16__356__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__356__vect;
    __Vfunc_prince_nibble_red16__356__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__357__Vfuncout;
    __Vfunc_prince_nibble_red16__357__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__357__vect;
    __Vfunc_prince_nibble_red16__357__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__358__Vfuncout;
    __Vfunc_prince_nibble_red16__358__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__358__vect;
    __Vfunc_prince_nibble_red16__358__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__359__Vfuncout;
    __Vfunc_prince_nibble_red16__359__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__359__vect;
    __Vfunc_prince_nibble_red16__359__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__360__Vfuncout;
    __Vfunc_prince_nibble_red16__360__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__360__vect;
    __Vfunc_prince_nibble_red16__360__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__361__Vfuncout;
    __Vfunc_prince_nibble_red16__361__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__361__vect;
    __Vfunc_prince_nibble_red16__361__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__362__Vfuncout;
    __Vfunc_prince_nibble_red16__362__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__362__vect;
    __Vfunc_prince_nibble_red16__362__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__363__Vfuncout;
    __Vfunc_prince_nibble_red16__363__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__363__vect;
    __Vfunc_prince_nibble_red16__363__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__364__Vfuncout;
    __Vfunc_prince_nibble_red16__364__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__364__vect;
    __Vfunc_prince_nibble_red16__364__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__365__Vfuncout;
    __Vfunc_prince_nibble_red16__365__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__365__vect;
    __Vfunc_prince_nibble_red16__365__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__366__Vfuncout;
    __Vfunc_prince_nibble_red16__366__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__366__vect;
    __Vfunc_prince_nibble_red16__366__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__367__Vfuncout;
    __Vfunc_prince_nibble_red16__367__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__367__vect;
    __Vfunc_prince_nibble_red16__367__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__368__Vfuncout;
    __Vfunc_prince_nibble_red16__368__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__368__vect;
    __Vfunc_prince_nibble_red16__368__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__369__Vfuncout;
    __Vfunc_sbox4_64bit__369__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__369__state_in;
    __Vfunc_sbox4_64bit__369__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__370__Vfuncout;
    __Vfunc_sbox4_8bit__370__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__370__state_in;
    __Vfunc_sbox4_8bit__370__state_in = 0;
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0;
    __Vfunc_prince_mult_prime_64bit__352__state_in 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    __Vfunc_prince_nibble_red16__353__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__352__state_in));
    __Vfunc_prince_nibble_red16__353__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__353__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__353__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__353__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__353__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__353__Vfuncout)));
    __Vfunc_prince_nibble_red16__354__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__352__state_in));
    __Vfunc_prince_nibble_red16__354__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__354__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__354__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__354__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__354__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__354__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__355__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__352__state_in));
    __Vfunc_prince_nibble_red16__355__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__355__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__355__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__355__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__355__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__355__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__356__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__352__state_in));
    __Vfunc_prince_nibble_red16__356__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__356__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__356__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__356__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__356__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__356__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__357__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__357__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__357__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__357__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__357__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__357__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__357__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__358__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__358__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__358__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__358__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__358__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__358__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__358__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__359__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__359__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__359__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__359__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__359__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__359__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__359__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__360__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__360__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__360__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__360__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__360__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__360__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__360__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__361__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__361__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__361__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__361__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__361__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__361__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__361__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__362__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__362__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__362__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__362__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__362__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__362__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__362__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__363__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__363__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__363__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__363__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__363__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__363__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__363__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__364__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__364__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__364__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__364__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__364__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__364__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__364__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__365__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__365__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__365__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__365__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__365__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__365__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__365__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__366__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__366__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__366__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__366__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__366__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__366__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__366__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__367__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__367__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__367__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__367__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__367__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__367__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__367__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__368__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__352__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__368__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__368__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__368__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__368__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__368__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__368__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__352__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__352__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__352__Vfuncout;
    __Vfunc_sbox4_64bit__369__state_in = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    __Vfunc_sbox4_8bit__370__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__369__state_in));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__370__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__370__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__370__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__370__state_out;
    vlSelf->__Vfunc_sbox4_64bit__369__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__369__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__370__Vfuncout)));
    __Vfunc_sbox4_8bit__370__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__369__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__370__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__370__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__370__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__370__state_out;
    vlSelf->__Vfunc_sbox4_64bit__369__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__369__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__370__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__370__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__369__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__370__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__370__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__370__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__370__state_out;
    vlSelf->__Vfunc_sbox4_64bit__369__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__369__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__370__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__370__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__369__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__370__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__370__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__370__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__370__state_out;
    vlSelf->__Vfunc_sbox4_64bit__369__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__369__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__370__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__370__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__369__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__370__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__370__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__370__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__370__state_out;
    vlSelf->__Vfunc_sbox4_64bit__369__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__369__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__370__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__370__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__369__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__370__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__370__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__370__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__370__state_out;
    vlSelf->__Vfunc_sbox4_64bit__369__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__369__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__370__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__370__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__369__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__370__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__370__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__370__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__370__state_out;
    vlSelf->__Vfunc_sbox4_64bit__369__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__369__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__370__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__370__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__369__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__370__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__370__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__370__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__370__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__370__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__370__state_out;
    vlSelf->__Vfunc_sbox4_64bit__369__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__369__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__370__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__369__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__369__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[2U] 
        = (IData)(__Vfunc_sbox4_64bit__369__Vfuncout);
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[3U] 
        = (IData)((__Vfunc_sbox4_64bit__369__Vfuncout 
                   >> 0x20U));
}

VL_INLINE_OPT void Vdmem_test___024root___act_sequent__TOP__10(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_sequent__TOP__10\n"); );
    // Init
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__371__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__371__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__371__state_in;
    __Vfunc_prince_mult_prime_64bit__371__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__372__Vfuncout;
    __Vfunc_prince_nibble_red16__372__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__372__vect;
    __Vfunc_prince_nibble_red16__372__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__373__Vfuncout;
    __Vfunc_prince_nibble_red16__373__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__373__vect;
    __Vfunc_prince_nibble_red16__373__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__374__Vfuncout;
    __Vfunc_prince_nibble_red16__374__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__374__vect;
    __Vfunc_prince_nibble_red16__374__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__375__Vfuncout;
    __Vfunc_prince_nibble_red16__375__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__375__vect;
    __Vfunc_prince_nibble_red16__375__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__376__Vfuncout;
    __Vfunc_prince_nibble_red16__376__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__376__vect;
    __Vfunc_prince_nibble_red16__376__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__377__Vfuncout;
    __Vfunc_prince_nibble_red16__377__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__377__vect;
    __Vfunc_prince_nibble_red16__377__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__378__Vfuncout;
    __Vfunc_prince_nibble_red16__378__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__378__vect;
    __Vfunc_prince_nibble_red16__378__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__379__Vfuncout;
    __Vfunc_prince_nibble_red16__379__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__379__vect;
    __Vfunc_prince_nibble_red16__379__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__380__Vfuncout;
    __Vfunc_prince_nibble_red16__380__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__380__vect;
    __Vfunc_prince_nibble_red16__380__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__381__Vfuncout;
    __Vfunc_prince_nibble_red16__381__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__381__vect;
    __Vfunc_prince_nibble_red16__381__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__382__Vfuncout;
    __Vfunc_prince_nibble_red16__382__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__382__vect;
    __Vfunc_prince_nibble_red16__382__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__383__Vfuncout;
    __Vfunc_prince_nibble_red16__383__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__383__vect;
    __Vfunc_prince_nibble_red16__383__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__384__Vfuncout;
    __Vfunc_prince_nibble_red16__384__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__384__vect;
    __Vfunc_prince_nibble_red16__384__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__385__Vfuncout;
    __Vfunc_prince_nibble_red16__385__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__385__vect;
    __Vfunc_prince_nibble_red16__385__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__386__Vfuncout;
    __Vfunc_prince_nibble_red16__386__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__386__vect;
    __Vfunc_prince_nibble_red16__386__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__387__Vfuncout;
    __Vfunc_prince_nibble_red16__387__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__387__vect;
    __Vfunc_prince_nibble_red16__387__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__388__Vfuncout;
    __Vfunc_sbox4_64bit__388__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__388__state_in;
    __Vfunc_sbox4_64bit__388__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__389__Vfuncout;
    __Vfunc_sbox4_8bit__389__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__389__state_in;
    __Vfunc_sbox4_8bit__389__state_in = 0;
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0;
    __Vfunc_prince_mult_prime_64bit__371__state_in 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    __Vfunc_prince_nibble_red16__372__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__371__state_in));
    __Vfunc_prince_nibble_red16__372__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__372__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__372__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__372__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__372__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__372__Vfuncout)));
    __Vfunc_prince_nibble_red16__373__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__371__state_in));
    __Vfunc_prince_nibble_red16__373__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__373__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__373__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__373__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__373__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__373__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__374__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__371__state_in));
    __Vfunc_prince_nibble_red16__374__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__374__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__374__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__374__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__374__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__374__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__375__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__371__state_in));
    __Vfunc_prince_nibble_red16__375__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__375__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__375__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__375__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__375__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__375__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__376__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__376__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__376__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__376__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__376__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__376__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__376__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__377__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__377__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__377__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__377__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__377__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__377__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__377__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__378__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__378__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__378__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__378__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__378__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__378__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__378__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__379__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__379__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__379__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__379__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__379__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__379__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__379__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__380__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__380__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__380__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__380__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__380__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__380__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__380__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__381__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__381__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__381__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__381__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__381__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__381__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__381__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__382__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__382__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__382__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__382__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__382__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__382__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__382__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__383__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__383__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__383__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__383__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__383__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__383__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__383__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__384__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__384__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__384__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__384__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__384__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__384__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__384__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__385__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__385__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__385__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__385__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__385__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__385__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__385__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__386__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__386__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__386__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__386__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__386__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__386__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__386__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__387__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__371__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__387__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__387__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__387__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__387__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__387__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__387__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__371__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__371__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__371__Vfuncout;
    __Vfunc_sbox4_64bit__388__state_in = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    __Vfunc_sbox4_8bit__389__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__388__state_in));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__389__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__389__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__389__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__389__state_out;
    vlSelf->__Vfunc_sbox4_64bit__388__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__388__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__389__Vfuncout)));
    __Vfunc_sbox4_8bit__389__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__388__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__389__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__389__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__389__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__389__state_out;
    vlSelf->__Vfunc_sbox4_64bit__388__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__388__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__389__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__389__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__388__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__389__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__389__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__389__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__389__state_out;
    vlSelf->__Vfunc_sbox4_64bit__388__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__388__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__389__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__389__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__388__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__389__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__389__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__389__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__389__state_out;
    vlSelf->__Vfunc_sbox4_64bit__388__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__388__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__389__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__389__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__388__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__389__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__389__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__389__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__389__state_out;
    vlSelf->__Vfunc_sbox4_64bit__388__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__388__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__389__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__389__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__388__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__389__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__389__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__389__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__389__state_out;
    vlSelf->__Vfunc_sbox4_64bit__388__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__388__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__389__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__389__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__388__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__389__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__389__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__389__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__389__state_out;
    vlSelf->__Vfunc_sbox4_64bit__388__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__388__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__389__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__389__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__388__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__389__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__389__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__389__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__389__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__389__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__389__state_out;
    vlSelf->__Vfunc_sbox4_64bit__388__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__388__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__389__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__388__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__388__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[4U] 
        = (IData)(__Vfunc_sbox4_64bit__388__Vfuncout);
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[5U] 
        = (IData)((__Vfunc_sbox4_64bit__388__Vfuncout 
                   >> 0x20U));
}

VL_INLINE_OPT void Vdmem_test___024root___act_sequent__TOP__11(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_sequent__TOP__11\n"); );
    // Init
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__390__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__390__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__390__state_in;
    __Vfunc_prince_mult_prime_64bit__390__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__391__Vfuncout;
    __Vfunc_prince_nibble_red16__391__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__391__vect;
    __Vfunc_prince_nibble_red16__391__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__392__Vfuncout;
    __Vfunc_prince_nibble_red16__392__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__392__vect;
    __Vfunc_prince_nibble_red16__392__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__393__Vfuncout;
    __Vfunc_prince_nibble_red16__393__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__393__vect;
    __Vfunc_prince_nibble_red16__393__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__394__Vfuncout;
    __Vfunc_prince_nibble_red16__394__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__394__vect;
    __Vfunc_prince_nibble_red16__394__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__395__Vfuncout;
    __Vfunc_prince_nibble_red16__395__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__395__vect;
    __Vfunc_prince_nibble_red16__395__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__396__Vfuncout;
    __Vfunc_prince_nibble_red16__396__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__396__vect;
    __Vfunc_prince_nibble_red16__396__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__397__Vfuncout;
    __Vfunc_prince_nibble_red16__397__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__397__vect;
    __Vfunc_prince_nibble_red16__397__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__398__Vfuncout;
    __Vfunc_prince_nibble_red16__398__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__398__vect;
    __Vfunc_prince_nibble_red16__398__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__399__Vfuncout;
    __Vfunc_prince_nibble_red16__399__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__399__vect;
    __Vfunc_prince_nibble_red16__399__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__400__Vfuncout;
    __Vfunc_prince_nibble_red16__400__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__400__vect;
    __Vfunc_prince_nibble_red16__400__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__401__Vfuncout;
    __Vfunc_prince_nibble_red16__401__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__401__vect;
    __Vfunc_prince_nibble_red16__401__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__402__Vfuncout;
    __Vfunc_prince_nibble_red16__402__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__402__vect;
    __Vfunc_prince_nibble_red16__402__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__403__Vfuncout;
    __Vfunc_prince_nibble_red16__403__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__403__vect;
    __Vfunc_prince_nibble_red16__403__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__404__Vfuncout;
    __Vfunc_prince_nibble_red16__404__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__404__vect;
    __Vfunc_prince_nibble_red16__404__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__405__Vfuncout;
    __Vfunc_prince_nibble_red16__405__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__405__vect;
    __Vfunc_prince_nibble_red16__405__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__406__Vfuncout;
    __Vfunc_prince_nibble_red16__406__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__406__vect;
    __Vfunc_prince_nibble_red16__406__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__407__Vfuncout;
    __Vfunc_sbox4_64bit__407__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__407__state_in;
    __Vfunc_sbox4_64bit__407__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__408__Vfuncout;
    __Vfunc_sbox4_8bit__408__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__408__state_in;
    __Vfunc_sbox4_8bit__408__state_in = 0;
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0;
    __Vfunc_prince_mult_prime_64bit__390__state_in 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd;
    __Vfunc_prince_nibble_red16__391__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__390__state_in));
    __Vfunc_prince_nibble_red16__391__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__391__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__391__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__391__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__391__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__391__Vfuncout)));
    __Vfunc_prince_nibble_red16__392__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__390__state_in));
    __Vfunc_prince_nibble_red16__392__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__392__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__392__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__392__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__392__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__392__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__393__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__390__state_in));
    __Vfunc_prince_nibble_red16__393__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__393__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__393__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__393__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__393__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__393__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__394__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__390__state_in));
    __Vfunc_prince_nibble_red16__394__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__394__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__394__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__394__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__394__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__394__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__395__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__395__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__395__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__395__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__395__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__395__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__395__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__396__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__396__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__396__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__396__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__396__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__396__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__396__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__397__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__397__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__397__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__397__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__397__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__397__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__397__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__398__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__398__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__398__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__398__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__398__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__398__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__398__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__399__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__399__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__399__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__399__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__399__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__399__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__399__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__400__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__400__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__400__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__400__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__400__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__400__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__400__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__401__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__401__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__401__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__401__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__401__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__401__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__401__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__402__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__402__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__402__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__402__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__402__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__402__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__402__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__403__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__403__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__403__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__403__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__403__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__403__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__403__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__404__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__404__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__404__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__404__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__404__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__404__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__404__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__405__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__405__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__405__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__405__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__405__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__405__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__405__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__406__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__390__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__406__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__406__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__406__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__406__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__406__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__406__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__390__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__390__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__390__Vfuncout;
    __Vfunc_sbox4_64bit__407__state_in = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd;
    __Vfunc_sbox4_8bit__408__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__407__state_in));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__408__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__408__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__408__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__408__state_out;
    vlSelf->__Vfunc_sbox4_64bit__407__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__407__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__408__Vfuncout)));
    __Vfunc_sbox4_8bit__408__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__407__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__408__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__408__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__408__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__408__state_out;
    vlSelf->__Vfunc_sbox4_64bit__407__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__407__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__408__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__408__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__407__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__408__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__408__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__408__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__408__state_out;
    vlSelf->__Vfunc_sbox4_64bit__407__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__407__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__408__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__408__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__407__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__408__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__408__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__408__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__408__state_out;
    vlSelf->__Vfunc_sbox4_64bit__407__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__407__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__408__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__408__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__407__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__408__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__408__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__408__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__408__state_out;
    vlSelf->__Vfunc_sbox4_64bit__407__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__407__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__408__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__408__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__407__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__408__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__408__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__408__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__408__state_out;
    vlSelf->__Vfunc_sbox4_64bit__407__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__407__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__408__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__408__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__407__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__408__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__408__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__408__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__408__state_out;
    vlSelf->__Vfunc_sbox4_64bit__407__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__407__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__408__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__408__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__407__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__408__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__408__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__408__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__408__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__408__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__408__state_out;
    vlSelf->__Vfunc_sbox4_64bit__407__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__407__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__408__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__407__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__407__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[6U] 
        = (IData)(__Vfunc_sbox4_64bit__407__Vfuncout);
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[7U] 
        = (IData)((__Vfunc_sbox4_64bit__407__Vfuncout 
                   >> 0x20U));
}

VL_INLINE_OPT void Vdmem_test___024root___act_sequent__TOP__12(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_sequent__TOP__12\n"); );
    // Init
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__157__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__157__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__157__state_in;
    __Vfunc_prince_mult_prime_64bit__157__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__158__Vfuncout;
    __Vfunc_prince_nibble_red16__158__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__158__vect;
    __Vfunc_prince_nibble_red16__158__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__159__Vfuncout;
    __Vfunc_prince_nibble_red16__159__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__159__vect;
    __Vfunc_prince_nibble_red16__159__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__160__Vfuncout;
    __Vfunc_prince_nibble_red16__160__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__160__vect;
    __Vfunc_prince_nibble_red16__160__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__161__Vfuncout;
    __Vfunc_prince_nibble_red16__161__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__161__vect;
    __Vfunc_prince_nibble_red16__161__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__162__Vfuncout;
    __Vfunc_prince_nibble_red16__162__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__162__vect;
    __Vfunc_prince_nibble_red16__162__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__163__Vfuncout;
    __Vfunc_prince_nibble_red16__163__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__163__vect;
    __Vfunc_prince_nibble_red16__163__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__164__Vfuncout;
    __Vfunc_prince_nibble_red16__164__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__164__vect;
    __Vfunc_prince_nibble_red16__164__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__165__Vfuncout;
    __Vfunc_prince_nibble_red16__165__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__165__vect;
    __Vfunc_prince_nibble_red16__165__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__166__Vfuncout;
    __Vfunc_prince_nibble_red16__166__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__166__vect;
    __Vfunc_prince_nibble_red16__166__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__167__Vfuncout;
    __Vfunc_prince_nibble_red16__167__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__167__vect;
    __Vfunc_prince_nibble_red16__167__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__168__Vfuncout;
    __Vfunc_prince_nibble_red16__168__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__168__vect;
    __Vfunc_prince_nibble_red16__168__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__169__Vfuncout;
    __Vfunc_prince_nibble_red16__169__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__169__vect;
    __Vfunc_prince_nibble_red16__169__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__170__Vfuncout;
    __Vfunc_prince_nibble_red16__170__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__170__vect;
    __Vfunc_prince_nibble_red16__170__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__171__Vfuncout;
    __Vfunc_prince_nibble_red16__171__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__171__vect;
    __Vfunc_prince_nibble_red16__171__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__172__Vfuncout;
    __Vfunc_prince_nibble_red16__172__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__172__vect;
    __Vfunc_prince_nibble_red16__172__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__173__Vfuncout;
    __Vfunc_prince_nibble_red16__173__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__173__vect;
    __Vfunc_prince_nibble_red16__173__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__174__Vfuncout;
    __Vfunc_sbox4_64bit__174__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__174__state_in;
    __Vfunc_sbox4_64bit__174__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__175__Vfuncout;
    __Vfunc_sbox4_8bit__175__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__175__state_in;
    __Vfunc_sbox4_8bit__175__state_in = 0;
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0;
    __Vfunc_prince_mult_prime_64bit__157__state_in 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    __Vfunc_prince_nibble_red16__158__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__157__state_in));
    __Vfunc_prince_nibble_red16__158__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__158__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__158__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__158__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__158__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__158__Vfuncout)));
    __Vfunc_prince_nibble_red16__159__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__157__state_in));
    __Vfunc_prince_nibble_red16__159__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__159__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__159__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__159__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__159__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__159__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__160__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__157__state_in));
    __Vfunc_prince_nibble_red16__160__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__160__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__160__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__160__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__160__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__160__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__161__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__157__state_in));
    __Vfunc_prince_nibble_red16__161__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__161__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__161__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__161__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__161__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__161__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__162__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__162__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__162__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__162__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__162__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__162__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__162__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__163__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__163__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__163__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__163__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__163__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__163__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__163__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__164__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__164__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__164__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__164__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__164__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__164__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__164__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__165__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__165__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__165__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__165__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__165__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__165__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__165__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__166__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__166__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__166__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__166__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__166__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__166__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__166__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__167__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__167__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__167__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__167__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__167__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__167__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__167__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__168__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__168__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__168__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__168__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__168__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__168__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__168__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__169__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__169__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__169__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__169__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__169__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__169__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__169__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__170__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__170__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__170__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__170__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__170__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__170__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__170__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__171__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__171__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__171__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__171__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__171__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__171__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__171__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__172__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__172__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__172__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__172__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__172__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__172__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__172__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__173__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__157__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__173__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__173__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__173__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__173__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__173__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__173__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__157__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__157__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__157__Vfuncout;
    __Vfunc_sbox4_64bit__174__state_in = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    __Vfunc_sbox4_8bit__175__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__174__state_in));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__175__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__175__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__175__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__175__state_out;
    vlSelf->__Vfunc_sbox4_64bit__174__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__174__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__175__Vfuncout)));
    __Vfunc_sbox4_8bit__175__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__174__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__175__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__175__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__175__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__175__state_out;
    vlSelf->__Vfunc_sbox4_64bit__174__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__174__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__175__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__175__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__174__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__175__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__175__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__175__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__175__state_out;
    vlSelf->__Vfunc_sbox4_64bit__174__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__174__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__175__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__175__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__174__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__175__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__175__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__175__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__175__state_out;
    vlSelf->__Vfunc_sbox4_64bit__174__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__174__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__175__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__175__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__174__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__175__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__175__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__175__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__175__state_out;
    vlSelf->__Vfunc_sbox4_64bit__174__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__174__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__175__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__175__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__174__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__175__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__175__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__175__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__175__state_out;
    vlSelf->__Vfunc_sbox4_64bit__174__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__174__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__175__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__175__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__174__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__175__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__175__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__175__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__175__state_out;
    vlSelf->__Vfunc_sbox4_64bit__174__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__174__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__175__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__175__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__174__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__175__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__175__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__175__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__175__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__175__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__175__state_out;
    vlSelf->__Vfunc_sbox4_64bit__174__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__174__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__175__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__174__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__174__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[2U] 
        = (IData)(__Vfunc_sbox4_64bit__174__Vfuncout);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[3U] 
        = (IData)((__Vfunc_sbox4_64bit__174__Vfuncout 
                   >> 0x20U));
}

VL_INLINE_OPT void Vdmem_test___024root___act_sequent__TOP__13(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_sequent__TOP__13\n"); );
    // Init
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__176__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__176__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__176__state_in;
    __Vfunc_prince_mult_prime_64bit__176__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__177__Vfuncout;
    __Vfunc_prince_nibble_red16__177__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__177__vect;
    __Vfunc_prince_nibble_red16__177__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__178__Vfuncout;
    __Vfunc_prince_nibble_red16__178__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__178__vect;
    __Vfunc_prince_nibble_red16__178__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__179__Vfuncout;
    __Vfunc_prince_nibble_red16__179__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__179__vect;
    __Vfunc_prince_nibble_red16__179__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__180__Vfuncout;
    __Vfunc_prince_nibble_red16__180__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__180__vect;
    __Vfunc_prince_nibble_red16__180__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__181__Vfuncout;
    __Vfunc_prince_nibble_red16__181__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__181__vect;
    __Vfunc_prince_nibble_red16__181__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__182__Vfuncout;
    __Vfunc_prince_nibble_red16__182__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__182__vect;
    __Vfunc_prince_nibble_red16__182__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__183__Vfuncout;
    __Vfunc_prince_nibble_red16__183__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__183__vect;
    __Vfunc_prince_nibble_red16__183__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__184__Vfuncout;
    __Vfunc_prince_nibble_red16__184__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__184__vect;
    __Vfunc_prince_nibble_red16__184__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__185__Vfuncout;
    __Vfunc_prince_nibble_red16__185__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__185__vect;
    __Vfunc_prince_nibble_red16__185__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__186__Vfuncout;
    __Vfunc_prince_nibble_red16__186__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__186__vect;
    __Vfunc_prince_nibble_red16__186__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__187__Vfuncout;
    __Vfunc_prince_nibble_red16__187__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__187__vect;
    __Vfunc_prince_nibble_red16__187__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__188__Vfuncout;
    __Vfunc_prince_nibble_red16__188__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__188__vect;
    __Vfunc_prince_nibble_red16__188__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__189__Vfuncout;
    __Vfunc_prince_nibble_red16__189__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__189__vect;
    __Vfunc_prince_nibble_red16__189__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__190__Vfuncout;
    __Vfunc_prince_nibble_red16__190__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__190__vect;
    __Vfunc_prince_nibble_red16__190__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__191__Vfuncout;
    __Vfunc_prince_nibble_red16__191__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__191__vect;
    __Vfunc_prince_nibble_red16__191__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__192__Vfuncout;
    __Vfunc_prince_nibble_red16__192__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__192__vect;
    __Vfunc_prince_nibble_red16__192__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__193__Vfuncout;
    __Vfunc_sbox4_64bit__193__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__193__state_in;
    __Vfunc_sbox4_64bit__193__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__194__Vfuncout;
    __Vfunc_sbox4_8bit__194__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__194__state_in;
    __Vfunc_sbox4_8bit__194__state_in = 0;
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0;
    __Vfunc_prince_mult_prime_64bit__176__state_in 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    __Vfunc_prince_nibble_red16__177__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__176__state_in));
    __Vfunc_prince_nibble_red16__177__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__177__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__177__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__177__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__177__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__177__Vfuncout)));
    __Vfunc_prince_nibble_red16__178__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__176__state_in));
    __Vfunc_prince_nibble_red16__178__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__178__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__178__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__178__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__178__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__178__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__179__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__176__state_in));
    __Vfunc_prince_nibble_red16__179__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__179__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__179__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__179__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__179__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__179__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__180__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__176__state_in));
    __Vfunc_prince_nibble_red16__180__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__180__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__180__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__180__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__180__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__180__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__181__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__181__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__181__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__181__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__181__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__181__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__181__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__182__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__182__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__182__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__182__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__182__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__182__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__182__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__183__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__183__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__183__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__183__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__183__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__183__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__183__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__184__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__184__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__184__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__184__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__184__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__184__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__184__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__185__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__185__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__185__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__185__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__185__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__185__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__185__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__186__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__186__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__186__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__186__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__186__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__186__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__186__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__187__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__187__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__187__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__187__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__187__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__187__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__187__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__188__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__188__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__188__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__188__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__188__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__188__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__188__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__189__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__189__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__189__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__189__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__189__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__189__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__189__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__190__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__190__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__190__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__190__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__190__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__190__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__190__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__191__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__191__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__191__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__191__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__191__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__191__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__191__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__192__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__176__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__192__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__192__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__192__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__192__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__192__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__192__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__176__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__176__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__176__Vfuncout;
    __Vfunc_sbox4_64bit__193__state_in = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    __Vfunc_sbox4_8bit__194__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__193__state_in));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__194__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__194__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__194__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__194__state_out;
    vlSelf->__Vfunc_sbox4_64bit__193__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__193__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__194__Vfuncout)));
    __Vfunc_sbox4_8bit__194__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__193__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__194__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__194__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__194__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__194__state_out;
    vlSelf->__Vfunc_sbox4_64bit__193__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__193__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__194__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__194__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__193__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__194__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__194__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__194__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__194__state_out;
    vlSelf->__Vfunc_sbox4_64bit__193__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__193__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__194__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__194__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__193__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__194__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__194__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__194__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__194__state_out;
    vlSelf->__Vfunc_sbox4_64bit__193__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__193__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__194__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__194__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__193__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__194__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__194__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__194__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__194__state_out;
    vlSelf->__Vfunc_sbox4_64bit__193__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__193__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__194__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__194__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__193__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__194__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__194__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__194__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__194__state_out;
    vlSelf->__Vfunc_sbox4_64bit__193__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__193__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__194__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__194__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__193__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__194__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__194__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__194__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__194__state_out;
    vlSelf->__Vfunc_sbox4_64bit__193__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__193__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__194__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__194__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__193__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__194__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__194__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__194__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__194__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__194__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__194__state_out;
    vlSelf->__Vfunc_sbox4_64bit__193__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__193__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__194__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__193__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__193__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[4U] 
        = (IData)(__Vfunc_sbox4_64bit__193__Vfuncout);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[5U] 
        = (IData)((__Vfunc_sbox4_64bit__193__Vfuncout 
                   >> 0x20U));
}

VL_INLINE_OPT void Vdmem_test___024root___act_sequent__TOP__14(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_sequent__TOP__14\n"); );
    // Init
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__195__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__195__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__195__state_in;
    __Vfunc_prince_mult_prime_64bit__195__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__196__Vfuncout;
    __Vfunc_prince_nibble_red16__196__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__196__vect;
    __Vfunc_prince_nibble_red16__196__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__197__Vfuncout;
    __Vfunc_prince_nibble_red16__197__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__197__vect;
    __Vfunc_prince_nibble_red16__197__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__198__Vfuncout;
    __Vfunc_prince_nibble_red16__198__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__198__vect;
    __Vfunc_prince_nibble_red16__198__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__199__Vfuncout;
    __Vfunc_prince_nibble_red16__199__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__199__vect;
    __Vfunc_prince_nibble_red16__199__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__200__Vfuncout;
    __Vfunc_prince_nibble_red16__200__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__200__vect;
    __Vfunc_prince_nibble_red16__200__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__201__Vfuncout;
    __Vfunc_prince_nibble_red16__201__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__201__vect;
    __Vfunc_prince_nibble_red16__201__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__202__Vfuncout;
    __Vfunc_prince_nibble_red16__202__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__202__vect;
    __Vfunc_prince_nibble_red16__202__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__203__Vfuncout;
    __Vfunc_prince_nibble_red16__203__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__203__vect;
    __Vfunc_prince_nibble_red16__203__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__204__Vfuncout;
    __Vfunc_prince_nibble_red16__204__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__204__vect;
    __Vfunc_prince_nibble_red16__204__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__205__Vfuncout;
    __Vfunc_prince_nibble_red16__205__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__205__vect;
    __Vfunc_prince_nibble_red16__205__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__206__Vfuncout;
    __Vfunc_prince_nibble_red16__206__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__206__vect;
    __Vfunc_prince_nibble_red16__206__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__207__Vfuncout;
    __Vfunc_prince_nibble_red16__207__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__207__vect;
    __Vfunc_prince_nibble_red16__207__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__208__Vfuncout;
    __Vfunc_prince_nibble_red16__208__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__208__vect;
    __Vfunc_prince_nibble_red16__208__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__209__Vfuncout;
    __Vfunc_prince_nibble_red16__209__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__209__vect;
    __Vfunc_prince_nibble_red16__209__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__210__Vfuncout;
    __Vfunc_prince_nibble_red16__210__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__210__vect;
    __Vfunc_prince_nibble_red16__210__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__211__Vfuncout;
    __Vfunc_prince_nibble_red16__211__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__211__vect;
    __Vfunc_prince_nibble_red16__211__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__212__Vfuncout;
    __Vfunc_sbox4_64bit__212__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__212__state_in;
    __Vfunc_sbox4_64bit__212__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__213__Vfuncout;
    __Vfunc_sbox4_8bit__213__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__213__state_in;
    __Vfunc_sbox4_8bit__213__state_in = 0;
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0;
    __Vfunc_prince_mult_prime_64bit__195__state_in 
        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd;
    __Vfunc_prince_nibble_red16__196__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__195__state_in));
    __Vfunc_prince_nibble_red16__196__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__196__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__196__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__196__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__196__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__196__Vfuncout)));
    __Vfunc_prince_nibble_red16__197__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__195__state_in));
    __Vfunc_prince_nibble_red16__197__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__197__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__197__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__197__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__197__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__197__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__198__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__195__state_in));
    __Vfunc_prince_nibble_red16__198__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__198__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__198__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__198__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__198__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__198__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__199__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__195__state_in));
    __Vfunc_prince_nibble_red16__199__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__199__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__199__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__199__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__199__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__199__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__200__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__200__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__200__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__200__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__200__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__200__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__200__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__201__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__201__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__201__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__201__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__201__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__201__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__201__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__202__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__202__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__202__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__202__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__202__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__202__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__202__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__203__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__203__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__203__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__203__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__203__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__203__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__203__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__204__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__204__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__204__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__204__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__204__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__204__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__204__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__205__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__205__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__205__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__205__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__205__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__205__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__205__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__206__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__206__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__206__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__206__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__206__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__206__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__206__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__207__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__207__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__207__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__207__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__207__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__207__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__207__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__208__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__208__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__208__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__208__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__208__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__208__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__208__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__209__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__209__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__209__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__209__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__209__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__209__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__209__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__210__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__210__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__210__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__210__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__210__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__210__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__210__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__211__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__195__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__211__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__211__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__211__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__211__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__211__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__211__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__195__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__195__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__195__Vfuncout;
    __Vfunc_sbox4_64bit__212__state_in = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd;
    __Vfunc_sbox4_8bit__213__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__212__state_in));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__213__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__213__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__213__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__213__state_out;
    vlSelf->__Vfunc_sbox4_64bit__212__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__212__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__213__Vfuncout)));
    __Vfunc_sbox4_8bit__213__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__212__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__213__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__213__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__213__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__213__state_out;
    vlSelf->__Vfunc_sbox4_64bit__212__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__212__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__213__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__213__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__212__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__213__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__213__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__213__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__213__state_out;
    vlSelf->__Vfunc_sbox4_64bit__212__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__212__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__213__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__213__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__212__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__213__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__213__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__213__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__213__state_out;
    vlSelf->__Vfunc_sbox4_64bit__212__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__212__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__213__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__213__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__212__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__213__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__213__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__213__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__213__state_out;
    vlSelf->__Vfunc_sbox4_64bit__212__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__212__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__213__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__213__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__212__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__213__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__213__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__213__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__213__state_out;
    vlSelf->__Vfunc_sbox4_64bit__212__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__212__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__213__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__213__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__212__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__213__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__213__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__213__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__213__state_out;
    vlSelf->__Vfunc_sbox4_64bit__212__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__212__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__213__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__213__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__212__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__213__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__213__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__213__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__213__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__213__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__213__state_out;
    vlSelf->__Vfunc_sbox4_64bit__212__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__212__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__213__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__212__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__212__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[6U] 
        = (IData)(__Vfunc_sbox4_64bit__212__Vfuncout);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[7U] 
        = (IData)((__Vfunc_sbox4_64bit__212__Vfuncout 
                   >> 0x20U));
}

extern const VlWide<8>/*255:0*/ Vdmem_test__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vdmem_test___024root___act_comb__TOP__0(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*3:0*/ dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 = 0;
    CData/*3:0*/ dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 = 0;
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13;
    dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13 = 0;
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
    QData/*46:0*/ __Vfunc_extract_h2d_cmd_intg__425__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__425__Vfuncout = 0;
    VlWide<5>/*144:0*/ __Vfunc_extract_h2d_cmd_intg__425__tl;
    VL_ZERO_W(145, __Vfunc_extract_h2d_cmd_intg__425__tl);
    QData/*56:0*/ __Vfunc_get_cmd_intg__428__unused_cmd_payload;
    __Vfunc_get_cmd_intg__428__unused_cmd_payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__440__Vfuncout;
    __Vfunc_mubi4_test_invalid__440__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__440__val;
    __Vfunc_mubi4_test_invalid__440__val = 0;
    VlWide<3>/*95:0*/ __Vtemp_38;
    QData/*63:0*/ __Vtemp_87;
    QData/*63:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_174;
    VlWide<3>/*95:0*/ __Vtemp_181;
    VlWide<4>/*127:0*/ __Vtemp_192;
    // Body
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0x11fffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0xe000U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0x1e3ffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0x1c00U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0x1fcffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0x300U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0x1ff00U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0xffU & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][3U] 
        = vlSelf->dmem_test__DOT__tl_i[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][2U] 
        = ((0xffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][2U]) | (0xff000000U & vlSelf->dmem_test__DOT__tl_i[2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][0U] 
        = ((0xfffffffeU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][0U]) | (1U & vlSelf->dmem_test__DOT__tl_i[0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0x11fffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0xe000U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0x1e3ffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0x1c00U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0x1fcffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0x300U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0x1ff00U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0xffU & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][3U] 
        = vlSelf->dmem_test__DOT__tl_i[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][2U] 
        = ((0xffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][2U]) | (0xff000000U & vlSelf->dmem_test__DOT__tl_i[2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][0U] 
        = ((0xfffffffeU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][0U]) | (1U & vlSelf->dmem_test__DOT__tl_i[0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0x11fffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0xe000U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0x1e3ffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0x1c00U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0x1fcffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0x300U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0x1ff00U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0xffU & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][3U] 
        = vlSelf->dmem_test__DOT__tl_i[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][2U] 
        = ((0xffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][2U]) | (0xff000000U & vlSelf->dmem_test__DOT__tl_i[2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][0U] 
        = ((0xfffffffeU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][0U]) | (1U & vlSelf->dmem_test__DOT__tl_i[0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][0U] 
        = ((0xfffffffeU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][0U]) | (1U & vlSelf->dmem_test__DOT__tl_i[0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0x11fffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0xe000U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0x1e3ffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0x1c00U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0x1fcffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0x300U & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0x1ff00U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0xffU & vlSelf->dmem_test__DOT__tl_i[4U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][3U] 
        = vlSelf->dmem_test__DOT__tl_i[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][2U] 
        = ((0xffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][2U]) | (0xff000000U & vlSelf->dmem_test__DOT__tl_i[2U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][0U] 
        = ((0xffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][0U]) | ((IData)((((QData)((IData)(
                                                   vlSelf->dmem_test__DOT__tl_i[2U])) 
                                   << 0x28U) | (((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__tl_i[1U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                   >> 0x18U)))) 
                         << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][1U] 
        = (((IData)((((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                      << 0x28U) | (((QData)((IData)(
                                                    vlSelf->dmem_test__DOT__tl_i[1U])) 
                                    << 8U) | ((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__tl_i[0U])) 
                                              >> 0x18U)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                                 << 0x28U) | (((QData)((IData)(
                                                               vlSelf->dmem_test__DOT__tl_i[1U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                 >> 0x18U))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][2U] 
        = ((0xff000000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][2U]) | ((IData)(((((QData)((IData)(
                                                    vlSelf->dmem_test__DOT__tl_i[2U])) 
                                    << 0x28U) | (((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__tl_i[1U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                    >> 0x18U))) 
                                  >> 0x20U)) >> 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][0U] 
        = ((0xff000001U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][0U]) | (0xfffffeU & vlSelf->dmem_test__DOT__tl_i[0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__blanked_auser 
        = ((0x7f8000U & (vlSelf->dmem_test__DOT__tl_i[0U] 
                         >> 1U)) | ((([&]() {
                        vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[0U] 
                            = vlSelf->dmem_test__DOT__tl_i[0U];
                        vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[1U] 
                            = vlSelf->dmem_test__DOT__tl_i[1U];
                        vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[2U] 
                            = vlSelf->dmem_test__DOT__tl_i[2U];
                        vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[3U] 
                            = vlSelf->dmem_test__DOT__tl_i[3U];
                        vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[4U] 
                            = vlSelf->dmem_test__DOT__tl_i[4U];
                        vlSelf->__Vfunc_get_cmd_intg__428__tl[0U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[0U];
                        vlSelf->__Vfunc_get_cmd_intg__428__tl[1U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[1U];
                        vlSelf->__Vfunc_get_cmd_intg__428__tl[2U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[2U];
                        vlSelf->__Vfunc_get_cmd_intg__428__tl[3U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[3U];
                        vlSelf->__Vfunc_get_cmd_intg__428__tl[4U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__427__tl[4U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__429__tl[0U] 
                            = vlSelf->__Vfunc_get_cmd_intg__428__tl[0U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__429__tl[1U] 
                            = vlSelf->__Vfunc_get_cmd_intg__428__tl[1U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__429__tl[2U] 
                            = vlSelf->__Vfunc_get_cmd_intg__428__tl[2U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__429__tl[3U] 
                            = vlSelf->__Vfunc_get_cmd_intg__428__tl[3U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__429__tl[4U] 
                            = vlSelf->__Vfunc_get_cmd_intg__428__tl[4U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__429__payload 
                            = ((0x780000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__429__payload) 
                               | (((QData)((IData)(
                                                   vlSelf->__Vfunc_extract_h2d_cmd_intg__429__tl[3U])) 
                                   << 0xbU) | (QData)((IData)(
                                                              ((0x700U 
                                                                & (vlSelf->__Vfunc_extract_h2d_cmd_intg__429__tl[4U] 
                                                                   >> 5U)) 
                                                               | (vlSelf->__Vfunc_extract_h2d_cmd_intg__429__tl[2U] 
                                                                  >> 0x18U))))));
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__429__payload 
                            = ((0x7ffffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__429__payload) 
                               | ((QData)((IData)((0xfU 
                                                   & (vlSelf->__Vfunc_extract_h2d_cmd_intg__429__tl[0U] 
                                                      >> 0x10U)))) 
                                  << 0x2bU));
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__429__Vfuncout 
                            = vlSelf->__Vfunc_extract_h2d_cmd_intg__429__payload;
                        vlSelf->__Vfunc_get_cmd_intg__428__cmd 
                            = vlSelf->__Vfunc_extract_h2d_cmd_intg__429__Vfuncout;
                        vlSelf->__Vfunc_get_cmd_intg__428__cmd_intg 
                            = (0x7fU & (IData)((([&]() {
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_i 
                                                = vlSelf->__Vfunc_get_cmd_intg__428__cmd;
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o 
                                                = vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_i;
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x103fff800007fffULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o))))) 
                                                      << 0x39U));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x17c1ff801ff801fULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o))))) 
                                                      << 0x3aU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1bde1f87e0781e1ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o))))) 
                                                      << 0x3bU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1deee3b8e388e22ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o))))) 
                                                      << 0x3cU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1ef76cdb2c93244ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o))))) 
                                                      << 0x3dU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1f7bb56d5525488ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o))))) 
                                                      << 0x3eU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1fbdda769a46910ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o))))) 
                                                      << 0x3fU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o);
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__Vfuncout 
                                                = vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__data_o;
                                        }(), vlSelf->__Vfunc_prim_secded_inv_64_57_enc__430__Vfuncout) 
                                                >> 0x39U)));
                        __Vfunc_get_cmd_intg__428__unused_cmd_payload 
                            = (0x1ffffffffffffffULL 
                               & ([&]() {
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_i 
                                        = vlSelf->__Vfunc_get_cmd_intg__428__cmd;
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o 
                                        = vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_i;
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x103fff800007fffULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o))))) 
                                              << 0x39U));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x17c1ff801ff801fULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o))))) 
                                              << 0x3aU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1bde1f87e0781e1ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o))))) 
                                              << 0x3bU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1deee3b8e388e22ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o))))) 
                                              << 0x3cU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1ef76cdb2c93244ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o))))) 
                                              << 0x3dU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1f7bb56d5525488ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o))))) 
                                              << 0x3eU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1fbdda769a46910ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o))))) 
                                              << 0x3fU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o);
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__Vfuncout 
                                        = vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__data_o;
                                }(), vlSelf->__Vfunc_prim_secded_inv_64_57_enc__431__Vfuncout));
                        vlSelf->__Vfunc_get_cmd_intg__428__Vfuncout 
                            = vlSelf->__Vfunc_get_cmd_intg__428__cmd_intg;
                        vlSelf->__Vfunc_get_bad_cmd_intg__427__cmd_intg 
                            = vlSelf->__Vfunc_get_cmd_intg__428__Vfuncout;
                        vlSelf->__Vfunc_get_bad_cmd_intg__427__Vfuncout 
                            = (0x7fU & (~ (IData)(vlSelf->__Vfunc_get_bad_cmd_intg__427__cmd_intg)));
                    }(), (IData)(vlSelf->__Vfunc_get_bad_cmd_intg__427__Vfuncout)) 
                                     << 8U) | VL_EXTEND_II(8,7, 
                                                           ([&]() {
                        vlSelf->__Vfunc_get_bad_data_intg__432__data_intg 
                            = (0x7fU & ([&]() {
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U] = 0xffffffffU;
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U] = 0xffffffffU;
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] = 0U;
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] 
                                        = (0xfeU & 
                                           vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U]);
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] 
                                        = ((0xfdU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0xffe0003fU 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U]) 
                                                                  ^ 
                                                                  (0x5e00000fU 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U])))) 
                                                 << 1U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] 
                                        = ((0xfbU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x3e007c1U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U]) 
                                                                  ^ 
                                                                  (0x67003ff0U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U])))) 
                                                 << 2U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] 
                                        = ((0xf7U & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x3c207842U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U]) 
                                                                  ^ 
                                                                  (0xcd0fc0f0U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U])))) 
                                                 << 3U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] 
                                        = ((0xefU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0xc4438884U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U]) 
                                                                  ^ 
                                                                  (0xb671c711U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U])))) 
                                                 << 4U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] 
                                        = ((0xdfU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x488c9108U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U]) 
                                                                  ^ 
                                                                  (0xb5b65926U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U])))) 
                                                 << 5U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] 
                                        = ((0xbfU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x91152210U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U]) 
                                                                  ^ 
                                                                  (0xcbdaaa4aU 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U])))) 
                                                 << 6U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] 
                                        = ((0x7fU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x221a4420U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U]) 
                                                                  ^ 
                                                                  (0x7aed348dU 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U])))) 
                                                 << 7U)));
                                    __Vtemp_38[1U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U];
                                    __Vtemp_38[2U] 
                                        = (0xaaU ^ 
                                           vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U]);
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U] 
                                        = __Vtemp_38[1U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U] 
                                        = __Vtemp_38[2U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__Vfuncout[0U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[0U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__Vfuncout[1U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[1U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__Vfuncout[2U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__data_o[2U];
                                    vlSelf->__Vfunc_get_data_intg__433__enc_data[0U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__Vfuncout[0U];
                                    vlSelf->__Vfunc_get_data_intg__433__enc_data[1U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__Vfuncout[1U];
                                    vlSelf->__Vfunc_get_data_intg__433__enc_data[2U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__434__Vfuncout[2U];
                                    vlSelf->__Vfunc_get_data_intg__433__data_intg 
                                        = (0xffU & 
                                           vlSelf->__Vfunc_get_data_intg__433__enc_data[2U]);
                                    vlSelf->__Vfunc_get_data_intg__433__Vfuncout 
                                        = vlSelf->__Vfunc_get_data_intg__433__data_intg;
                                }(), (IData)(vlSelf->__Vfunc_get_data_intg__433__Vfuncout)));
                        vlSelf->__Vfunc_get_bad_data_intg__432__Vfuncout 
                            = (0x7fU & (~ (IData)(vlSelf->__Vfunc_get_bad_data_intg__432__data_intg)));
                    }(), (IData)(vlSelf->__Vfunc_get_bad_data_intg__432__Vfuncout)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                    << 0x28U) | (((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[1U])) 
                                  << 8U) | ((QData)((IData)(
                                                            vlSelf->dmem_test__DOT__tl_i[0U])) 
                                            >> 0x18U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
        = (IData)(((((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                     << 0x28U) | (((QData)((IData)(
                                                   vlSelf->dmem_test__DOT__tl_i[1U])) 
                                   << 8U) | ((QData)((IData)(
                                                             vlSelf->dmem_test__DOT__tl_i[0U])) 
                                             >> 0x18U))) 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U] 
        = (0xffU & (vlSelf->dmem_test__DOT__tl_i[0U] 
                    >> 1U));
    __Vfunc_extract_h2d_cmd_intg__425__tl[0U] = vlSelf->dmem_test__DOT__tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__425__tl[1U] = vlSelf->dmem_test__DOT__tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__425__tl[2U] = vlSelf->dmem_test__DOT__tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__425__tl[3U] = vlSelf->dmem_test__DOT__tl_i[3U];
    __Vfunc_extract_h2d_cmd_intg__425__tl[4U] = vlSelf->dmem_test__DOT__tl_i[4U];
    vlSelf->__Vfunc_extract_h2d_cmd_intg__425__payload 
        = ((0x780000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__425__payload) 
           | (((QData)((IData)(__Vfunc_extract_h2d_cmd_intg__425__tl[3U])) 
               << 0xbU) | (QData)((IData)(((0x700U 
                                            & (__Vfunc_extract_h2d_cmd_intg__425__tl[4U] 
                                               >> 5U)) 
                                           | (__Vfunc_extract_h2d_cmd_intg__425__tl[2U] 
                                              >> 0x18U))))));
    vlSelf->__Vfunc_extract_h2d_cmd_intg__425__payload 
        = ((0x7ffffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__425__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__425__tl[0U] 
                                       >> 0x10U)))) 
              << 0x2bU));
    __Vfunc_extract_h2d_cmd_intg__425__Vfuncout = vlSelf->__Vfunc_extract_h2d_cmd_intg__425__payload;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__425__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xfeU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_32((((0x1fffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                  ^ (0xb9000000U & 
                                     vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                 ^ (1U & (0xaaU ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xfdU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0xffe0003fU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0x5e00000fU & 
                                      vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (2U & (0xaaU ^ 
                                           vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xfbU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x3e007c1U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0x67003ff0U & 
                                      vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (4U & (0xaaU ^ 
                                           vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xf7U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x3c207842U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0xcd0fc0f0U & 
                                      vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (8U & (0xaaU ^ 
                                           vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xefU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0xc4438884U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0xb671c711U & 
                                      vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (0x10U & (0xaaU 
                                              ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xdfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x488c9108U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0xb5b65926U & 
                                      vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (0x20U & (0xaaU 
                                              ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xbfU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x91152210U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0xcbdaaa4aU & 
                                      vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (0x40U & (0xaaU 
                                              ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 6U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x221a4420U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0x7aed348dU & 
                                      vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (0x80U & (0xaaU 
                                              ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 7U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffffffcULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | (IData)((IData)(((2U & (((0xbU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      << 1U) ^ (0xfffffffeU 
                                                & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]))) 
                              | (1U & ((7U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffffff3ULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x23U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 2U)))) 
                               | (1U & ((0x13U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 2U)))))) 
              << 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffffffcfULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x83U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 4U)))) 
                               | (1U & ((0x43U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 4U)))))) 
              << 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffffff3fULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x15U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3fffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 6U)))) 
                               | (1U & ((0xdU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 6U)))))) 
              << 6U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffffcffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x45U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 8U)))) 
                               | (1U & ((0x25U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 8U)))))) 
              << 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffff3ffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x19U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0xaU)))) 
                               | (1U & ((0x85U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0xaU)))))) 
              << 0xaU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffffcfffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x49U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0xcU)))) 
                               | (1U & ((0x29U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0xcU)))))) 
              << 0xcU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffff3fffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x31U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3fffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0xeU)))) 
                               | (1U & ((0x89U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0xeU)))))) 
              << 0xeU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffcffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x91U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x10U)))) 
                               | (1U & ((0x51U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x10U)))))) 
              << 0x10U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffff3ffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xa1U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x12U)))) 
                               | (1U & ((0x61U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x12U)))))) 
              << 0x12U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffcfffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xeU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x14U)))) 
                               | (1U & ((0xc1U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x14U)))))) 
              << 0x14U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffff3fffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x26U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3feU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x16U)))) 
                               | (1U & ((0x16U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x16U)))))) 
              << 0x16U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffcffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x86U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x18U)))) 
                               | (1U & ((0x46U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x18U)))))) 
              << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffff3ffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x2aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3eU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x1aU)))) 
                               | (1U & ((0x1aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffcfffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x8aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x1cU)))) 
                               | (1U & ((0x4aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffff3fffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)((((2U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                       >> 0x1eU)) ^ 
                                ((0x52U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                 << 1U)) | (1U & ((0x32U 
                                                   == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                   >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffcffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x62U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffffffeU 
                                                 & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U]))) 
                               | (1U & ((0x92U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U]))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffff3ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xc2U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 2U)))) 
                               | (1U & ((0xa2U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 2U)))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffcfffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x2cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 4U)))) 
                               | (1U & ((0x1cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 4U)))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffff3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x8cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3fffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 6U)))) 
                               | (1U & ((0x4cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 6U)))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffcffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x54U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 8U)))) 
                               | (1U & ((0x34U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 8U)))))) 
              << 0x28U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffff3ffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x64U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0xaU)))) 
                               | (1U & ((0x94U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0xaU)))))) 
              << 0x2aU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffcfffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xc4U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0xcU)))) 
                               | (1U & ((0xa4U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0xcU)))))) 
              << 0x2cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffff3fffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x58U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3fffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0xeU)))) 
                               | (1U & ((0x38U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0xeU)))))) 
              << 0x2eU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffcffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x68U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x10U)))) 
                               | (1U & ((0x98U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x10U)))))) 
              << 0x30U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfff3ffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xc8U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x12U)))) 
                               | (1U & ((0xa8U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x12U)))))) 
              << 0x32U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffcfffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xb0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x14U)))) 
                               | (1U & ((0x70U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x14U)))))) 
              << 0x34U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xff3fffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xe0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3feU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x16U)))) 
                               | (1U & ((0xd0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x16U)))))) 
              << 0x36U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfcffffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xd6U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x18U)))) 
                               | (1U & ((0x6dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x18U)))))) 
              << 0x38U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xf3ffffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xcbU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3eU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x1aU)))) 
                               | (1U & ((0x3eU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x1aU)))))) 
              << 0x3aU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xcfffffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xb5U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xeU 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x1cU)))) 
                               | (1U & ((0xb3U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x1cU)))))) 
              << 0x3cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0x3fffffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)((((2U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                       >> 0x1eU)) ^ 
                                ((0x79U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                 << 1U)) | (1U & ((0xceU 
                                                   == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                   >> 0x1eU)))))) 
              << 0x3eU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (1U & VL_REDXOR_8(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
               & (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
        = (((QData)((IData)((0x7fU & (vlSelf->dmem_test__DOT__tl_i[0U] 
                                      >> 9U)))) << 0x39U) 
           | vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd);
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x303fff800007fffULL 
                                 & (0x5400000000000000ULL 
                                    ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x57c1ff801ff801fULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x9bde1f87e0781e1ULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x11deee3b8e388e22ULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x21ef76cdb2c93244ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x41f7bb56d5525488ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x81fbdda769a46910ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffffcULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | (IData)((IData)(((2U & (((0xbU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                 >> 1U))) 
                                     << 1U)) | (1U 
                                                & ((7U 
                                                    == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                   ^ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffff3ULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x23U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 3U))) 
                                      << 1U)) | (1U 
                                                 & ((0x13U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 2U))))))) 
              << 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffffcfULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xdU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 5U))) 
                                      << 1U)) | (1U 
                                                 & ((0x43U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 4U))))))) 
              << 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffff3fULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x25U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 7U))) 
                                      << 1U)) | (1U 
                                                 & ((0x15U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 6U))))))) 
              << 6U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffcffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x19U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 9U))) 
                                      << 1U)) | (1U 
                                                 & ((0x45U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 8U))))))) 
              << 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffff3ffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x49U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xbU))) 
                                      << 1U)) | (1U 
                                                 & ((0x29U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xaU))))))) 
              << 0xaU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffcfffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x51U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xdU))) 
                                      << 1U)) | (1U 
                                                 & ((0x31U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xcU))))))) 
              << 0xcU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffff3fffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xeU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xfU))) 
                                      << 1U)) | (1U 
                                                 & ((0x61U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xeU))))))) 
              << 0xeU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffcffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x26U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x11U))) 
                                      << 1U)) | (1U 
                                                 & ((0x16U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x10U))))))) 
              << 0x10U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffff3ffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x13U))) 
                                      << 1U)) | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x12U))))))) 
              << 0x12U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffcfffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x15U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2aU 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x14U))))))) 
              << 0x14U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffff3fffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x52U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x17U))) 
                                      << 1U)) | (1U 
                                                 & ((0x32U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x16U))))))) 
              << 0x16U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffcffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x19U))) 
                                      << 1U)) | (1U 
                                                 & ((0x62U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x18U))))))) 
              << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffff3ffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x2cU 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1aU))))))) 
              << 0x1aU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffcfffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x54U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x34U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1cU))))))) 
              << 0x1cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffff3fffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x38U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x64U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1eU))))))) 
              << 0x1eU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffcffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x68U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x21U))) 
                                      << 1U)) | (1U 
                                                 & ((0x58U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x20U))))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffff3ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1fU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x23U))) 
                                      << 1U)) | (1U 
                                                 & ((0x70U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x22U))))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffcfffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4fU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x25U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2fU 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x24U))))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffff3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x57U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x27U))) 
                                      << 1U)) | (1U 
                                                 & ((0x37U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x26U))))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffcffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3bU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x29U))) 
                                      << 1U)) | (1U 
                                                 & ((0x67U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x28U))))))) 
              << 0x28U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fff3ffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6bU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5bU 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2aU))))))) 
              << 0x2aU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffcfffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x73U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2cU))))))) 
              << 0x2cU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ff3fffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5dU 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2eU))))))) 
              << 0x2eU));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fcffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x79U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x31U))) 
                                      << 1U)) | (1U 
                                                 & ((0x75U 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x30U))))))) 
              << 0x30U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1f3ffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x5eU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x33U))) 
                                      << 1U)) | (1U 
                                                 & ((0x3eU 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x32U))))))) 
              << 0x32U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1cfffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x76U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x35U))) 
                                      << 1U)) | (1U 
                                                 & ((0x6eU 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x34U))))))) 
              << 0x34U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x13fffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x7cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x37U))) 
                                      << 1U)) | (1U 
                                                 & ((0x7aU 
                                                     == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x36U))))))) 
              << 0x36U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0xffffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)((1U & ((0x7fU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                     ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (1U & VL_REDXOR_8(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
               & (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intg_err 
        = ((vlSelf->dmem_test__DOT__tl_i[4U] >> 0x10U) 
           & (0U != ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err) 
                     | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer 
        = (((0x4000U <= (0xffffU & vlSelf->dmem_test__DOT__tl_i[3U])) 
            & (0x5fffU >= (0xffffU & vlSelf->dmem_test__DOT__tl_i[3U])))
            ? 0U : (((0x8000U <= (0xffffU & vlSelf->dmem_test__DOT__tl_i[3U])) 
                     & (0x8bffU >= (0xffffU & vlSelf->dmem_test__DOT__tl_i[3U])))
                     ? 1U : 2U));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intg_err) {
        vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer = 2U;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests 
        = ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding)) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer) 
              != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0xffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0x10000U & ((vlSelf->dmem_test__DOT__tl_i[4U] 
                                      & ((3U <= (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer)) 
                                         << 0x10U)) 
                                     & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
                                        << 0x10U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
           & (0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
           & (1U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
           & (2U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0xffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0x10000U & (vlSelf->dmem_test__DOT__tl_i[4U] 
                                     & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select) 
                                        << 0x10U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][0U] 
        = ((0xffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][0U]) | ((IData)(((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                   ? (((QData)((IData)(
                                                       vlSelf->dmem_test__DOT__tl_i[2U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__tl_i[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                  >> 0x18U)))
                                   : 0xffffffffffffffffULL)) 
                         << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][1U] 
        = (((IData)(((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                      ? (((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__tl_i[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                  >> 0x18U)))
                      : 0xffffffffffffffffULL)) >> 8U) 
           | ((IData)((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                         ? (((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                             << 0x28U) | (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__tl_i[1U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__tl_i[0U])) 
                                           >> 0x18U)))
                         : 0xffffffffffffffffULL) >> 0x20U)) 
              << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][2U] 
        = ((0xff000000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][2U]) | ((IData)((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                    ? (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__tl_i[2U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->dmem_test__DOT__tl_i[1U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                   >> 0x18U)))
                                    : 0xffffffffffffffffULL) 
                                  >> 0x20U)) >> 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][0U] 
        = ((0xff000001U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][0U]) | (0xfffffeU & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                        ? ((vlSelf->dmem_test__DOT__tl_i[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->dmem_test__DOT__tl_i[0U] 
                                              >> 1U))
                                        : vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                      << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0xffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0x10000U & (vlSelf->dmem_test__DOT__tl_i[4U] 
                                     & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select) 
                                        << 0x10U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][0U] 
        = ((0xffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][0U]) | ((IData)(((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                   ? (((QData)((IData)(
                                                       vlSelf->dmem_test__DOT__tl_i[2U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__tl_i[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                  >> 0x18U)))
                                   : 0xffffffffffffffffULL)) 
                         << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][1U] 
        = (((IData)(((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                      ? (((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__tl_i[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                  >> 0x18U)))
                      : 0xffffffffffffffffULL)) >> 8U) 
           | ((IData)((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                         ? (((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                             << 0x28U) | (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__tl_i[1U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__tl_i[0U])) 
                                           >> 0x18U)))
                         : 0xffffffffffffffffULL) >> 0x20U)) 
              << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][2U] 
        = ((0xff000000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][2U]) | ((IData)((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                    ? (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__tl_i[2U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->dmem_test__DOT__tl_i[1U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                   >> 0x18U)))
                                    : 0xffffffffffffffffULL) 
                                  >> 0x20U)) >> 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][0U] 
        = ((0xff000001U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][0U]) | (0xfffffeU & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                        ? ((vlSelf->dmem_test__DOT__tl_i[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->dmem_test__DOT__tl_i[0U] 
                                              >> 1U))
                                        : vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                      << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0xffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0x10000U & (vlSelf->dmem_test__DOT__tl_i[4U] 
                                     & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select) 
                                        << 0x10U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][0U] 
        = ((0xffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][0U]) | ((IData)(((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                   ? (((QData)((IData)(
                                                       vlSelf->dmem_test__DOT__tl_i[2U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__tl_i[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                  >> 0x18U)))
                                   : 0xffffffffffffffffULL)) 
                         << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][1U] 
        = (((IData)(((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                      ? (((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__tl_i[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                  >> 0x18U)))
                      : 0xffffffffffffffffULL)) >> 8U) 
           | ((IData)((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                         ? (((QData)((IData)(vlSelf->dmem_test__DOT__tl_i[2U])) 
                             << 0x28U) | (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__tl_i[1U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__tl_i[0U])) 
                                           >> 0x18U)))
                         : 0xffffffffffffffffULL) >> 0x20U)) 
              << 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][2U] 
        = ((0xff000000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][2U]) | ((IData)((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                    ? (((QData)((IData)(
                                                        vlSelf->dmem_test__DOT__tl_i[2U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->dmem_test__DOT__tl_i[1U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->dmem_test__DOT__tl_i[0U])) 
                                                   >> 0x18U)))
                                    : 0xffffffffffffffffULL) 
                                  >> 0x20U)) >> 8U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][0U] 
        = ((0xff000001U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][0U]) | (0xfffffeU & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                        ? ((vlSelf->dmem_test__DOT__tl_i[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->dmem_test__DOT__tl_i[0U] 
                                              >> 1U))
                                        : vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                      << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[0U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[0U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[0U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[0U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[0U][4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[1U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[1U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[1U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[1U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[1U][4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[2U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[2U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[2U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[2U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d[2U][4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int = 0ULL;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_intg = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_intg = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[0U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [0U][0U];
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[0U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [0U][1U];
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[0U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [0U][2U];
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[0U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [0U][3U];
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[0U][4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [0U][4U];
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[1U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [1U][0U];
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[1U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [1U][1U];
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[1U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [1U][2U];
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[1U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [1U][3U];
    vlSelf->dmem_test__DOT__dut__DOT__tl_win_h2d[1U][4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
        [1U][4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[7U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x10000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [1U][4U])) {
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__unnamedblk1__DOT__i = 8U;
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg 
            = (vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg 
               | (0xffffffffULL & ((IData)(0xffU) << 
                                   (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                          (3U 
                                                           & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                              [1U][3U] 
                                                              >> 3U)), 3U)))));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg 
            = (((~ ((IData)(0xffU) << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                 [1U][3U] 
                                                                 >> 3U)), 3U)))) 
                & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg) 
               | (0xffffffffULL & ((0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][0U] 
                                             >> 1U)) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                 [1U][3U] 
                                                                 >> 3U)), 3U)))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & VL_SHIFTL_III(8,32,32, 
                                                     (3U 
                                                      & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                         [1U][3U] 
                                                         >> 3U)), 6U)), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x18U))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(8U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x19U))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1aU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1bU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1cU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1dU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1eU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][2U] 
                                             >> 0x1fU)))));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][4U] >> 8U))) || (1U 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [1U][4U] 
                                                           >> 8U)))
                                                       ? 
                                                      (~ 
                                                       vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [1U][3U])
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][4U] 
                                                            >> 8U)))
                                                        ? 
                                                       (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                    [1U][3U]))))
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [1U][4U] 
                                                             >> 8U))) 
                                                        && (1U 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (7U 
                                                                           & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                           [1U][3U]))))))))));
        if ((0U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [1U][4U] >> 8U)))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xffU & 
                                           (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                              [1U][2U] 
                                              << 8U) 
                                             | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [1U][2U] 
                                                >> 0x18U)) 
                                            & (~ ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][3U])))))))));
            vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xffU & (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [1U][2U] << 8U) 
                                    | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [1U][2U] >> 0x18U)) 
                                   & ((IData)(1U) << 
                                      (7U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [1U][3U])))));
        } else if ((1U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][4U] >> 8U)))) {
            if ((4U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                 [1U][3U])) {
                if ((2U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                     [1U][3U])) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0x3fU 
                                                   & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [1U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                  [1U][2U] >> 0x1eU));
                } else {
                    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0xcfU 
                                                   & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [1U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [1U][2U] >> 0x1cU)));
                }
            } else if ((2U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                        [1U][3U])) {
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf3U 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [1U][2U] >> 0x1aU)));
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfcU 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [1U][2U] >> 0x18U)));
            }
        } else if ((2U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][4U] >> 8U)))) {
            if ((4U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                 [1U][3U])) {
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfU 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                [1U][2U] >> 0x1cU));
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf0U 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [1U][2U] >> 0x18U)));
            }
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                = (1U & (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][4U] >> 8U))));
            vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                = ((3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][4U] >> 8U))) 
                   && (0xffU == (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][2U] >> 0x18U)));
        }
    }
    if ((0x10000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [0U][4U])) {
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffffffffff00ULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | (IData)((IData)((0xffU & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                         [0U][2U] 
                                                         >> 0x18U))))))));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffffffff00ffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x19U))))))) 
                  << 8U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffffff00ffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1aU))))))) 
                  << 0x10U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffff00ffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1bU))))))) 
                  << 0x18U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffff00ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1cU))))))) 
                  << 0x20U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffff00ffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1dU))))))) 
                  << 0x28U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xff00ffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1eU))))))) 
                  << 0x30U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [0U][2U] 
                                                       >> 0x1fU)))))) 
                  << 0x38U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__unnamedblk1__DOT__i = 8U;
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wmask_intg = 0xffU;
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_intg 
            = (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                        [0U][0U] >> 1U));
        vlSelf->dmem_test__DOT__dut__DOT__imem_index_bus 
            = (0x7ffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                         [0U][3U] >> 3U));
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__imem_index_bus = 0U;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__417__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__417__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__417__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__417__Vfuncout)) 
           & ((0U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [1U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [1U][4U] 
                                                       >> 0xdU)))));
    __Vfunc_mubi4_test_invalid__418__val = (0xfU & 
                                            (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][0U] 
                                             >> 0x10U));
    __Vfunc_mubi4_test_invalid__418__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__418__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__418__val)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__418__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__instr_error 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__412__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_invalid__412__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__412__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__412__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__412__Vfuncout)) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__413__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__413__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__413__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__413__Vfuncout)));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x10000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [0U][4U])) {
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [0U][4U] >> 8U))) || (1U 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [0U][4U] 
                                                           >> 8U)))
                                                       ? 
                                                      (~ 
                                                       vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [0U][3U])
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [0U][4U] 
                                                            >> 8U)))
                                                        ? 
                                                       (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                    [0U][3U]))))
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [0U][4U] 
                                                             >> 8U))) 
                                                        && (1U 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (7U 
                                                                           & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                           [0U][3U]))))))))));
        if ((0U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [0U][4U] >> 8U)))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xffU & 
                                           (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                              [0U][2U] 
                                              << 8U) 
                                             | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][2U] 
                                                >> 0x18U)) 
                                            & (~ ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [0U][3U])))))))));
            vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xffU & (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] << 8U) 
                                    | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][2U] >> 0x18U)) 
                                   & ((IData)(1U) << 
                                      (7U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][3U])))));
        } else if ((1U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][4U] >> 8U)))) {
            if ((4U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                 [0U][3U])) {
                if ((2U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                     [0U][3U])) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0x3fU 
                                                   & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [0U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                  [0U][2U] >> 0x1eU));
                } else {
                    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0xcfU 
                                                   & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [0U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [0U][2U] >> 0x1cU)));
                }
            } else if ((2U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                        [0U][3U])) {
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf3U 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][2U] >> 0x1aU)));
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfcU 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][2U] >> 0x18U)));
            }
        } else if ((2U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][4U] >> 8U)))) {
            if ((4U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                 [0U][3U])) {
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfU 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                [0U][2U] >> 0x1cU));
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf0U 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [0U][2U] >> 0x18U)));
            }
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                = (1U & (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [0U][4U] >> 8U))));
            vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                = ((3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][4U] >> 8U))) 
                   && (0xffU == (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][2U] >> 0x18U)));
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__222__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__222__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__222__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__222__Vfuncout)) 
           & ((0U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [0U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [0U][4U] 
                                                       >> 0xdU)))));
    __Vfunc_mubi4_test_invalid__223__val = (0xfU & 
                                            (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][0U] 
                                             >> 0x10U));
    __Vfunc_mubi4_test_invalid__223__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__223__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__223__val)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__223__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__instr_error 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__217__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_invalid__217__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__217__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__217__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__217__Vfuncout)) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__218__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__218__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__218__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__218__Vfuncout)));
    vlSelf->__VdfgRegularize_hd87f99a1_2_4 = ((0U == 
                                               (7U 
                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][4U] 
                                                   >> 0xdU))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [1U][4U] 
                                                     >> 0xdU))));
    vlSelf->__VdfgRegularize_hd87f99a1_2_2 = ((0U == 
                                               (7U 
                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [0U][4U] 
                                                   >> 0xdU))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [0U][4U] 
                                                     >> 0xdU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x7f8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((8U == (0xfffcU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                       [2U][3U])) << 2U) | (((4U == 
                                              (0xfffcU 
                                               & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [2U][3U])) 
                                             << 1U) 
                                            | (0U == 
                                               (0xfffcU 
                                                & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][3U])))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x7c7U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x14U == (0xfffcU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][3U])) << 5U) | (((0x10U 
                                                 == 
                                                 (0xfffcU 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][3U])) 
                                                << 4U) 
                                               | ((0xcU 
                                                   == 
                                                   (0xfffcU 
                                                    & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][3U])) 
                                                  << 3U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x63fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x20U == (0xfffcU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][3U])) << 8U) | (((0x1cU 
                                                 == 
                                                 (0xfffcU 
                                                  & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][3U])) 
                                                << 7U) 
                                               | ((0x18U 
                                                   == 
                                                   (0xfffcU 
                                                    & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][3U])) 
                                                  << 6U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1ffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x28U == (0xfffcU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][3U])) << 0xaU) | ((0x24U 
                                                  == 
                                                  (0xfffcU 
                                                   & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][3U])) 
                                                 << 9U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x10000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [2U][4U])) {
        vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [2U][4U] >> 8U))) || (1U 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [2U][4U] 
                                                           >> 8U)))
                                                       ? 
                                                      (~ 
                                                       vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][3U])
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [2U][4U] 
                                                            >> 8U)))
                                                        ? 
                                                       (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                    [2U][3U]))))
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [2U][4U] 
                                                             >> 8U))) 
                                                        && (1U 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (7U 
                                                                           & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                           [2U][3U]))))))))));
        if ((0U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][4U] >> 8U)))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xffU & 
                                           (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                              [2U][2U] 
                                              << 8U) 
                                             | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][2U] 
                                                >> 0x18U)) 
                                            & (~ ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][3U])))))))));
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xffU & (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [2U][2U] << 8U) 
                                    | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [2U][2U] >> 0x18U)) 
                                   & ((IData)(1U) << 
                                      (7U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [2U][3U])))));
        } else if ((1U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][4U] >> 8U)))) {
            if ((4U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                 [2U][3U])) {
                if ((2U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                     [2U][3U])) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0x3fU 
                                                   & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                  [2U][2U] >> 0x1eU));
                } else {
                    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0xcfU 
                                                   & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [2U][2U] >> 0x1cU)));
                }
            } else if ((2U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                        [2U][3U])) {
                vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf3U 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [2U][2U] >> 0x1aU)));
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfcU 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [2U][2U] >> 0x18U)));
            }
        } else if ((2U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][4U] >> 8U)))) {
            if ((4U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                 [2U][3U])) {
                vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfU 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                [2U][2U] >> 0x1cU));
            } else {
                vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf0U 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  >> 0x18U))))));
                vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [2U][2U] >> 0x18U)));
            }
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [2U][4U] >> 8U))));
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = ((3U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][4U] >> 8U))) 
                   && (0xffU == (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][2U] >> 0x18U)));
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelf->__Vfunc_mubi4_test_true_strict__437__val 
                = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [2U][0U] >> 0x10U));
            vlSelf->__Vfunc_mubi4_test_true_strict__437__Vfuncout 
                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__437__val));
        }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__437__Vfuncout));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__439__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [2U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__439__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__439__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__439__Vfuncout)) 
           & ((0U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][4U] 
                                                       >> 0xdU)))));
    __Vfunc_mubi4_test_invalid__440__val = (0xfU & 
                                            (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [2U][0U] 
                                             >> 0x10U));
    __Vfunc_mubi4_test_invalid__440__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__440__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__440__val)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__440__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                  [2U][4U] >> 0x10U) & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U]));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_index = 
        (0x7fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__busy_execute_q)
                   ? ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked) 
                      >> 5U) : ((0x10000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][4U]) ? ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [1U][3U] 
                                               << 0x1bU) 
                                              | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [1U][3U] 
                                                 >> 5U))
                                 : 0U)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[0U] 
        = (IData)((((QData)((IData)((0x7fU & (- (IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U])))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[1U] 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U] 
            << 7U) | (IData)(((((QData)((IData)((0x7fU 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U])))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U]))) 
                              >> 0x20U)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[2U] 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U] 
            << 0xeU) | ((0x3f80U & ((- (IData)((0U 
                                                != 
                                                vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U]))) 
                                    << 7U)) | (vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U] 
                                               >> 0x19U)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[3U] 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U] 
            << 0x15U) | ((0x1fc000U & ((- (IData)((0U 
                                                   != 
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U]))) 
                                       << 0xeU)) | 
                         (vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U] 
                          >> 0x12U)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[4U] 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U] 
            << 0x1cU) | ((0xfe00000U & ((- (IData)(
                                                   (0U 
                                                    != 
                                                    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U]))) 
                                        << 0x15U)) 
                         | (vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U] 
                            >> 0xbU)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[5U] 
        = (((- (IData)((0U != vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U]))) 
            << 0x1cU) | (vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U] 
                         >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[6U] 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U] 
            << 3U) | (7U & ((- (IData)((0U != vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U]))) 
                            >> 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[7U] 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U] 
            << 0xaU) | ((0x3f8U & ((- (IData)((0U != 
                                               vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U]))) 
                                   << 3U)) | (vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U] 
                                              >> 0x1dU)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[8U] 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U] 
            << 0x11U) | ((0x1fc00U & ((- (IData)((0U 
                                                  != 
                                                  vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U]))) 
                                      << 0xaU)) | (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U] 
                                                   >> 0x16U)));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_bus_enc[9U] 
        = ((0xfe0000U & ((- (IData)((0U != vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U]))) 
                         << 0x11U)) | (vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U] 
                                       >> 0xfU));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [1U][4U] >> 0x10U) & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_4));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_det 
        = (1U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_4) 
                  & ((0xffU != (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                [1U][2U] >> 0x18U)) 
                     | (3U != (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [1U][4U] >> 8U))))) 
                 | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                          [1U][4U] 
                                          >> 0xdU))) 
                            | ((1U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][4U] 
                                             >> 0xdU))) 
                               | (4U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [1U][4U] 
                                               >> 0xdU))))) 
                           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__addr_sz_chk) 
                              & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk) 
                                 & ((4U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][4U] 
                                                  >> 0xdU))) 
                                    | ((1U == (7U & 
                                               (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [1U][4U] 
                                                >> 0xdU))) 
                                       | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_type_err) 
                          | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [0U][4U] >> 0x10U) & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_det 
        = (1U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_2) 
                  & ((0xffU != (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                [0U][2U] >> 0x18U)) 
                     | (3U != (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][4U] >> 8U))))) 
                 | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                          [0U][4U] 
                                          >> 0xdU))) 
                            | ((1U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][4U] 
                                             >> 0xdU))) 
                               | (4U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [0U][4U] 
                                               >> 0xdU))))) 
                           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__addr_sz_chk) 
                              & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk) 
                                 & ((4U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][4U] 
                                                  >> 0xdU))) 
                                    | ((1U == (7U & 
                                               (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][4U] 
                                                >> 0xdU))) 
                                       | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_type_err) 
                          | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))))) {
        if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state__q));
        } else if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable__q));
        } else if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xffffff00U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x20U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->dmem_test__DOT__dut__DOT__software_errs_fatal_q));
        } else if ((0x40U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_status__DOT__q));
        } else {
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__err_bits_q)));
            vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xff0000U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__err_bits_q) 
                                   << 8U)));
        }
    } else if ((0x100U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff0U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bus_intg_violation__DOT__q) 
                   << 3U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_reg_intg_violation__DOT__q) 
                              << 2U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_dmem_intg_violation__DOT__q) 
                                         << 1U) | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_imem_intg_violation__DOT__q)))));
        vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff0fU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_fatal_software__DOT__q) 
                   << 7U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_lifecycle_escalation__DOT__q) 
                              << 6U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_illegal_bus_access__DOT__q) 
                                         << 5U) | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__q) 
                                                   << 4U)))));
    } else {
        vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x200U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))
                ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q
                : ((0x400U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit))
                    ? (~ vlSelf->dmem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_q)
                    : 0xffffffffU));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [2U][4U] >> 0xdU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][4U] 
                                                       >> 0xdU)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = (0x7fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_index) 
                    ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x70U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x3fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 6U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x5fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 5U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x6fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x77U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 3U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7bU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 2U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7dU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 1U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7eU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 
        = (1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7eU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x77U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0) 
              << 3U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7dU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0) 
              << 1U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x6fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7bU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0) 
              << 2U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x5fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0) 
              << 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__13__03a7__KET__ 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                     << 7U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_index))) 
                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)(((((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                      << 7U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_index))) 
                    ^ vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0) 
                   >> 0x20U));
    __Vtemp_87 = ((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                  ^ (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)(((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                   ^ (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U])))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_87 >> 0x20U));
    __Vtemp_88 = (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U])));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_88 >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[0U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[1U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[2U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[3U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[4U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[5U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[6U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[7U] 
        = Vdmem_test__ConstPool__CONST_h9e67c271_0[7U];
    if ((0x10000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [1U][4U])) {
        VL_ASSIGNSEL_WI(256,8,(0xffU & VL_SHIFTL_III(8,32,32, 
                                                     (3U 
                                                      & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                         [1U][3U] 
                                                         >> 3U)), 6U)), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x18U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][0U] >> 0x18U) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(8U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x19U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][1U]) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1aU) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][1U] >> 8U))
                          : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1bU) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][1U] >> 0x10U))
                          : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1cU) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][1U] >> 0x18U) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1dU) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][2U]) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1eU) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][2U] >> 8U))
                          : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1fU) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][2U] >> 0x10U))
                          : 0U));
    }
    vlSelf->dmem_test__DOT__dut__DOT__dmem_req_bus 
        = (1U & ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                  [1U][4U] >> 0x10U) & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_det)) 
                                        & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int = 0ULL;
    if ((0x10000U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
         [0U][4U])) {
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffffffffff00ULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | (IData)((IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][2U] >> 0x18U) 
                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus))
                                   ? (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                      [0U][0U] >> 0x18U)
                                   : 0U))));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffffffff00ffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x19U) 
                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus))
                                    ? (0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][1U]) : 0U))) 
                  << 8U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffffff00ffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1aU) 
                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus))
                                    ? (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][1U] 
                                                >> 8U))
                                    : 0U))) << 0x10U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffff00ffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1bU) 
                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus))
                                    ? (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][1U] 
                                                >> 0x10U))
                                    : 0U))) << 0x18U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffff00ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1cU) 
                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus))
                                    ? (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][1U] >> 0x18U)
                                    : 0U))) << 0x20U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffff00ffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1dU) 
                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus))
                                    ? (0xffU & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][2U]) : 0U))) 
                  << 0x28U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xff00ffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1eU) 
                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus))
                                    ? (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][2U] 
                                                >> 8U))
                                    : 0U))) << 0x30U));
        vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffffffffffULL & vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1fU) 
                                    & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus))
                                    ? (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][2U] 
                                                >> 0x10U))
                                    : 0U))) << 0x38U));
    }
    vlSelf->dmem_test__DOT__dut__DOT__imem_write = 
        ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_access_core))) 
         && (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus));
    vlSelf->dmem_test__DOT__dut__DOT__imem_req_bus 
        = (1U & ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                  [0U][4U] >> 0x10U) & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_det)) 
                                        & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][3U]))) | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                                           | ((~ ((
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][4U] 
                                                        >> 0xdU))) 
                                                   | ((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [2U][4U] 
                                                           >> 0xdU))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [2U][4U] 
                                                             >> 0xdU))))) 
                                                  & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                     & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                        & ((4U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                [2U][4U] 
                                                                >> 0xdU))) 
                                                           | ((1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                   [2U][4U] 
                                                                   >> 0xdU))) 
                                                              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                              | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err) 
                                                 | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = (0x7fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__13__03a7__KET__) 
                    ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x70U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x3fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 6U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x5fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 5U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x6fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x77U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 3U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7bU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 2U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7dU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 1U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7eU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped;
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 
        = (1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7eU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x77U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0) 
              << 3U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7dU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0) 
              << 1U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x6fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0) 
              << 4U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7bU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0) 
              << 2U));
    dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x5fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0) 
              << 5U));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__20__03a14__KET__ 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox;
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[0U]));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[1U]));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[2U]));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[3U]));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[4U]));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[5U]));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[6U]));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[7U]));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->dmem_test__DOT__dut__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->dmem_test__DOT__dut__DOT__dmem_dummy_response_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__busy_execute_q) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_req_bus));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_wvalid 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_write_bus)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_req_bus));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__dmem_req_bus) 
            | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__missed_err_gnt_q)) 
           & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
              & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelf->dmem_test__DOT__dut__DOT__imem_dummy_response_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_req_bus) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_access_core));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_wvalid 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write_bus)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_req_bus));
    vlSelf->dmem_test__DOT__dut__DOT__mem_crc_data_in 
        = (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_req_bus)) 
            << 0x2fU) | (((QData)((IData)(((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_req_bus)
                                            ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_index_bus)
                                            : (0x3ffU 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][3U] 
                                                  >> 2U))))) 
                          << 0x20U) | (QData)((IData)(
                                                      ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_req_bus)
                                                        ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int)
                                                        : 
                                                       ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                         [1U][1U] 
                                                         << 8U) 
                                                        | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [1U][0U] 
                                                           >> 0x18U)))))));
    vlSelf->dmem_test__DOT__dut__DOT__imem_req = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_access_core)
                                                   ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en)
                                                   : (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_req_bus));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_req_bus) 
            | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__missed_err_gnt_q)) 
           & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
              & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__addr_scr 
        = (0x7fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__20__03a14__KET__) 
                    ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_wvalid 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [1U][4U] >> 0x10U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2));
    vlSelf->dmem_test__DOT__dut__DOT__imem_gnt = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q) 
                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_req));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_wvalid 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [0U][4U] >> 0x10U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_we) 
           & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
               & (0U != (1U & (~ ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                   [2U][2U] << 8U) 
                                  | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                     [2U][2U] >> 0x18U)))))) 
              | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                   >> 1U) & (0U != (1U & (~ ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                              [2U][2U] 
                                              << 8U) 
                                             | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][2U] 
                                                >> 0x18U)))))) 
                 | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                      >> 2U) & (0U != (1U & (~ ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [2U][2U] 
                                                 << 8U) 
                                                | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][2U] 
                                                   >> 0x18U)))))) 
                    | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                         >> 3U) & (0U != (1U & (~ (
                                                   (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][2U] 
                                                    << 8U) 
                                                   | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][2U] 
                                                      >> 0x18U)))))) 
                       | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                            >> 4U) & (0U != (1U & (~ 
                                                   ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][2U] 
                                                     << 8U) 
                                                    | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][2U] 
                                                       >> 0x18U)))))) 
                          | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                               >> 5U) & (0U != (1U 
                                                & (~ 
                                                   ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][2U] 
                                                     << 8U) 
                                                    | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][2U] 
                                                       >> 0x18U)))))) 
                             | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                                  >> 6U) & (0U != (1U 
                                                   & (~ 
                                                      ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][2U] 
                                                        << 8U) 
                                                       | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][2U] 
                                                          >> 0x18U)))))) 
                                | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                                     >> 7U) & (0U != 
                                               (7U 
                                                & (~ 
                                                   ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][2U] 
                                                     << 8U) 
                                                    | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][2U] 
                                                       >> 0x18U)))))) 
                                   | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (0U 
                                                  != 
                                                  (1U 
                                                   & (~ 
                                                      ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][2U] 
                                                        << 8U) 
                                                       | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][2U] 
                                                          >> 0x18U)))))) 
                                      | ((IData)((0U 
                                                  != 
                                                  (0x600U 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)))) 
                                         & (0U != (0xfU 
                                                   & (~ 
                                                      ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][2U] 
                                                        << 8U) 
                                                       | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][2U] 
                                                          >> 0x18U))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addrmiss 
        = ((~ (IData)((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit)))) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_re) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_we)));
    __Vfunc_mubi4_bool_to_mubi__30__val = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_gnt) 
                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write));
    __Vfunc_mubi4_bool_to_mubi__30__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__30__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_d 
        = __Vfunc_mubi4_bool_to_mubi__30__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__29__val = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_gnt) 
                                           & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write)));
    __Vfunc_mubi4_bool_to_mubi__29__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__29__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en 
        = __Vfunc_mubi4_bool_to_mubi__29__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_error 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intg_err)));
    __Vfunc_mubi4_test_true_loose__60__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_d;
    __Vfunc_mubi4_test_true_loose__60__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__60__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_b 
        = __Vfunc_mubi4_test_true_loose__60__Vfuncout;
    __Vfunc_mubi4_test_true_loose__59__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_test_true_loose__59__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__59__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en_b 
        = __Vfunc_mubi4_test_true_loose__59__Vfuncout;
    __Vfunc_mubi4_and_hi__47__b = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_and_hi__47__a = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
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
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__rw_collision 
        = __Vfunc_mubi4_test_true_loose__46__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__macro_write 
        = ((([&]() {
                    vlSelf->__Vfunc_mubi4_or_hi__43__b 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_pending_q;
                    vlSelf->__Vfunc_mubi4_or_hi__43__a 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
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
                            = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en;
                        vlSelf->__Vfunc_mubi4_test_true_loose__45__Vfuncout 
                            = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__45__val));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__45__Vfuncout)))) 
           & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__intg_error_w_q)));
    dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_we));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_scr_pending_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__macro_write)
            ? 9U : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__rw_collision)
                     ? 6U : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_pending_q)));
    vlSelf->dmem_test__DOT__dut__DOT__imem_wpending 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__macro_write) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__49__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_d;
                vlSelf->__Vfunc_mubi4_test_true_loose__49__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__49__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__49__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__70__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__70__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__70__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__70__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 1U) & (IData)(dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intr_state_we 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
           & (IData)(dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__cmd_we 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 4U) & (IData)(dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__load_checksum_we 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 0xaU) & (IData)(dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__ctrl_we 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 5U) & (IData)(dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 7U) & (IData)(dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 9U) & (IData)(dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intr_test_we 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 2U) & (IData)(dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addr_hit) 
            >> 3U) & (IData)(dmem_test__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    __Vfunc_mubi4_test_true_loose__62__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__62__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__62__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__62__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_intr_enable__DOT__wr_data 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en) 
           & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
              [2U][0U] >> 0x18U));
    vlSelf->dmem_test__DOT__dut__DOT__software_errs_fatal_d 
        = (1U & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__ctrl_we) 
                  & (0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__status_q)))
                  ? (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                     [2U][0U] >> 0x18U) : (IData)(vlSelf->dmem_test__DOT__dut__DOT__software_errs_fatal_q)));
    vlSelf->dmem_test__DOT__dut__DOT__err_bits_clear 
        = ((0xffffU == (0xffffU & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we))))) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__is_not_running_q));
    vlSelf->dmem_test__DOT__dut__DOT__unused_reg2hw_err_bits 
        = (1U & ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                  [2U][0U] >> 0x18U) ^ VL_REDXOR_32(
                                                    (((2U 
                                                       & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][0U] 
                                                          >> 0x18U)) 
                                                      | (0xffffU 
                                                         == 
                                                         (0xffffU 
                                                          & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                     ^ 
                                                     (((2U 
                                                        & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                           [2U][0U] 
                                                           >> 0x19U)) 
                                                       | (0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                      ^ 
                                                      (((2U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                            [2U][0U] 
                                                            >> 0x1aU)) 
                                                        | (0xffffU 
                                                           == 
                                                           (0xffffU 
                                                            & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                       ^ 
                                                       (((2U 
                                                          & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                             [2U][0U] 
                                                             >> 0x1bU)) 
                                                         | (0xffffU 
                                                            == 
                                                            (0xffffU 
                                                             & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                        ^ 
                                                        (((2U 
                                                           & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                              [2U][0U] 
                                                              >> 0x1cU)) 
                                                          | (0xffffU 
                                                             == 
                                                             (0xffffU 
                                                              & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                         ^ 
                                                         (((2U 
                                                            & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                               [2U][0U] 
                                                               >> 0x1dU)) 
                                                           | (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                          ^ 
                                                          (((2U 
                                                             & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                [2U][0U] 
                                                                >> 0x1eU)) 
                                                            | (0xffffU 
                                                               == 
                                                               (0xffffU 
                                                                & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                           ^ 
                                                           (((2U 
                                                              & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                 [2U][1U] 
                                                                 >> 7U)) 
                                                             | (0xffffU 
                                                                == 
                                                                (0xffffU 
                                                                 & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                            ^ 
                                                            (((2U 
                                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                  [2U][1U] 
                                                                  >> 8U)) 
                                                              | (0xffffU 
                                                                 == 
                                                                 (0xffffU 
                                                                  & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                             ^ 
                                                             (((2U 
                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                   [2U][1U] 
                                                                   >> 9U)) 
                                                               | (0xffffU 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                              ^ 
                                                              (((2U 
                                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                    [2U][1U] 
                                                                    >> 0xaU)) 
                                                                | (0xffffU 
                                                                   == 
                                                                   (0xffffU 
                                                                    & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                               ^ 
                                                               (((2U 
                                                                  & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                     [2U][1U] 
                                                                     >> 0xbU)) 
                                                                 | (0xffffU 
                                                                    == 
                                                                    (0xffffU 
                                                                     & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                                ^ 
                                                                (((2U 
                                                                   & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                      [2U][1U] 
                                                                      >> 0xcU)) 
                                                                  | (0xffffU 
                                                                     == 
                                                                     (0xffffU 
                                                                      & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                                 ^ 
                                                                 (((2U 
                                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                       [2U][1U] 
                                                                       >> 0xdU)) 
                                                                   | (0xffffU 
                                                                      == 
                                                                      (0xffffU 
                                                                       & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                                  ^ 
                                                                  ((2U 
                                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                       [2U][1U] 
                                                                       >> 0xeU)) 
                                                                   | (0xffffU 
                                                                      == 
                                                                      (0xffffU 
                                                                       & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_we_check 
        = ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__load_checksum_we) 
             << 0xaU) | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we) 
                         << 9U)) | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we) 
                                      << 7U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__ctrl_we) 
                                                 << 5U) 
                                                | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__cmd_we) 
                                                   << 4U))) 
                                    | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we) 
                                        << 3U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intr_test_we) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intr_state_we))))));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellinp__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__alert_test_i 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [2U][0U] >> 0x19U) & (3U == (3U & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we))))));
    vlSelf->dmem_test__DOT__dut__DOT____Vcellinp__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__alert_test_i 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
            [2U][0U] >> 0x18U) & (3U == (3U & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we))))));
    __Vtemp_160[2U] = (((IData)((0xffffU == (0xffffU 
                                             & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                        << 8U) | ((0x80U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                            [2U][0U] 
                                            >> 0x13U)) 
                                  | (((IData)((0xffffU 
                                               == (0xffffU 
                                                   & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                      << 6U) | ((0x20U 
                                                 & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][0U] 
                                                    >> 0x14U)) 
                                                | (((IData)(
                                                            (0xffffU 
                                                             == 
                                                             (0xffffU 
                                                              & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                    << 4U) 
                                                   | ((8U 
                                                       & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][0U] 
                                                          >> 0x15U)) 
                                                      | (((IData)(
                                                                  (0xffffU 
                                                                   == 
                                                                   (0xffffU 
                                                                    & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                          << 2U) 
                                                         | (3U 
                                                            & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                               [2U][1U] 
                                                               >> 0x16U)))))))));
    __Vtemp_167[2U] = ((0x8000U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                   [2U][0U] >> 0xfU)) 
                       | (((IData)((0xffffU == (0xffffU 
                                                & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                           << 0xeU) | ((0x2000U & (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][0U] 
                                                   >> 0x10U)) 
                                       | (((IData)(
                                                   (0xffffU 
                                                    == 
                                                    (0xffffU 
                                                     & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                           << 0xcU) 
                                          | ((0x800U 
                                              & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                 [2U][0U] 
                                                 >> 0x11U)) 
                                             | (((IData)(
                                                         (0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                 << 0xaU) 
                                                | ((0x200U 
                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][0U] 
                                                       >> 0x12U)) 
                                                   | __Vtemp_160[2U])))))));
    __Vtemp_174[2U] = (((IData)((0xffffU == (0xffffU 
                                             & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                        << 0x16U) | ((0x200000U & (
                                                   vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][1U] 
                                                   << 0xcU)) 
                                     | (((IData)((0xffffU 
                                                  == 
                                                  (0xffffU 
                                                   & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                         << 0x14U) 
                                        | ((0x80000U 
                                            & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [2U][1U] 
                                               << 0xbU)) 
                                           | (((IData)(
                                                       (0xffffU 
                                                        == 
                                                        (0xffffU 
                                                         & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                               << 0x12U) 
                                              | ((0x20000U 
                                                  & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][0U] 
                                                     >> 0xeU)) 
                                                 | (((IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                     << 0x10U) 
                                                    | __Vtemp_167[2U])))))));
    __Vtemp_181[2U] = ((0x20000000U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                       [2U][1U] << 0x10U)) 
                       | (((IData)((0xffffU == (0xffffU 
                                                & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                           << 0x1cU) | ((0x8000000U 
                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                            [2U][1U] 
                                            << 0xfU)) 
                                        | (((IData)(
                                                    (0xffffU 
                                                     == 
                                                     (0xffffU 
                                                      & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                            << 0x1aU) 
                                           | ((0x2000000U 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][1U] 
                                                  << 0xeU)) 
                                              | (((IData)(
                                                          (0xffffU 
                                                           == 
                                                           (0xffffU 
                                                            & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                  << 0x18U) 
                                                 | ((0x800000U 
                                                     & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        << 0xdU)) 
                                                    | __Vtemp_174[2U])))))));
    __Vtemp_192[3U] = (((IData)((3U == (3U & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we)))))) 
                        << 0xfU) | ((0x4000U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][0U] 
                                                >> 0xaU)) 
                                    | (((IData)((3U 
                                                 == 
                                                 (3U 
                                                  & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we)))))) 
                                        << 0xdU) | 
                                       ((0x1fe0U & 
                                         (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                          [2U][0U] 
                                          >> 0x13U)) 
                                        | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__cmd_we) 
                                            << 4U) 
                                           | ((8U & 
                                               (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][0U] 
                                                >> 0x15U)) 
                                              | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__ctrl_we) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        >> 0xeU)) 
                                                    | (0xffffU 
                                                       == 
                                                       (0xffffU 
                                                        & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__reg2hw[0U] = (IData)(
                                                           (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we)) 
                                                             << 0x21U) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                                [2U][1U] 
                                                                                << 8U) 
                                                                                | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                                                [2U][0U] 
                                                                                >> 0x18U)))) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__load_checksum_we)))));
    vlSelf->dmem_test__DOT__dut__DOT__reg2hw[1U] = 
        ((0xfffffffcU & ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][1U] << 0xaU) | (0x3fcU 
                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][0U] 
                                                  >> 0x16U)))) 
         | (IData)(((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we)) 
                      << 0x21U) | (((QData)((IData)(
                                                    ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][1U] 
                                                      << 8U) 
                                                     | (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__load_checksum_we)))) 
                    >> 0x20U)));
    vlSelf->dmem_test__DOT__dut__DOT__reg2hw[2U] = 
        ((0x80000000U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                         [2U][1U] << 0x11U)) | (((IData)(
                                                         (0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__err_bits_we)))))) 
                                                 << 0x1eU) 
                                                | __Vtemp_181[2U]));
    vlSelf->dmem_test__DOT__dut__DOT__reg2hw[3U] = 
        (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
          << 0x14U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable__q) 
                        << 0x13U) | ((0x40000U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][0U] 
                                                  >> 6U)) 
                                     | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intr_test_we) 
                                         << 0x11U) 
                                        | ((0x10000U 
                                            & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [2U][0U] 
                                               >> 9U)) 
                                           | __Vtemp_192[3U])))));
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT____Vcellinp__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__alert_test_i) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT____Vcellinp__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__alert_test_i) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelf->dmem_test__DOT__dut__DOT__start_d = 0U;
    if ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__status_q))) {
        if ((0x10U & vlSelf->dmem_test__DOT__dut__DOT__reg2hw[3U])) {
            if ((0xd8U == (0xffU & (vlSelf->dmem_test__DOT__dut__DOT__reg2hw[3U] 
                                    >> 5U)))) {
                vlSelf->dmem_test__DOT__dut__DOT__start_d = 1U;
            }
        }
    }
}
