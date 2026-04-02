// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_otbn_axi.h for the primary calling header

#include "Vtb_otbn_axi__pch.h"
#include "Vtb_otbn_axi___024root.h"

VL_INLINE_OPT void Vtb_otbn_axi___024root___act_comb__TOP__2(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___act_comb__TOP__2\n"); );
    // Init
    CData/*1:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____VdfgExtracted_hfe64d58f__0;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____VdfgExtracted_hfe64d58f__0 = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__239__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__239__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__239__state_in;
    __Vfunc_prince_shiftrows_64bit__239__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__240__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__240__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__240__state_in;
    __Vfunc_prince_shiftrows_64bit__240__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__241__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__241__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__241__state_in;
    __Vfunc_prince_shiftrows_64bit__241__state_in = 0;
    // Body
    __Vfunc_prince_shiftrows_64bit__239__state_in = 
        (0xc882d32f25323c54ULL ^ ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[0U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                  >> 0x18U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                >> 0x30U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)(__Vfunc_prince_shiftrows_64bit__239__state_in) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x10U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                 >> 0x28U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x38U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                 >> 0x20U))))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__239__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0 
        = __Vfunc_prince_shiftrows_64bit__239__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__240__state_in = 
        (0x64a51195e0e3610dULL ^ ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[2U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                  >> 0x18U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                >> 0x30U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)(__Vfunc_prince_shiftrows_64bit__240__state_in) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x10U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                 >> 0x28U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x38U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                 >> 0x20U))))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__240__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0 
        = __Vfunc_prince_shiftrows_64bit__240__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__241__state_in = 
        (0xd3b5a399ca0c2399ULL ^ ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[5U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[4U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                  >> 0x18U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                >> 0x30U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)(__Vfunc_prince_shiftrows_64bit__241__state_in) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x10U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                 >> 0x28U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x38U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                 >> 0x20U))))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__241__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0 
        = __Vfunc_prince_shiftrows_64bit__241__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
        = (0xc0ac29b7c97c50ddULL ^ (((QData)((IData)(
                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[6U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
           ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
           ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_scr_d 
        = (0x7fffffffffULL & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                              ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
        = (0x7fffffffffULL & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram 
                              ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_scr 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__77__val 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_pending_q;
                vlSelf->__Vfunc_mubi4_test_true_loose__77__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__77__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__77__Vfuncout))
            ? vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_scr_q
            : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_scr_d);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata = 0ULL;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rvalid = 0U;
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rvalid = 1U;
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffffeULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffffeULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)));
            }
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__p_forward_mux__DOT__unnamedblk1__DOT__k = 0x27U;
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 1U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 1U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffffdULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 1U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 1U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffffdULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 1U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 2U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 2U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffffbULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 2U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 2U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffffbULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 2U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 3U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 3U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffff7ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 3U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 3U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffff7ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 3U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 4U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 4U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffffefULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 4U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 4U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffffefULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 4U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 5U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 5U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffffdfULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 5U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 5U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffffdfULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 5U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 6U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 6U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffffbfULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 6U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 6U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffffbfULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 6U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 7U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 7U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffff7fULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 7U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 7U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffff7fULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 7U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 8U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 8U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffeffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 8U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 8U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffeffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 8U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 9U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 9U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffdffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 9U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 9U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffdffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 9U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0xaU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0xaU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffbffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0xaU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0xaU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffffbffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0xaU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0xbU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0xbU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffff7ffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0xbU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0xbU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffff7ffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0xbU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0xcU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0xcU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffefffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0xcU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0xcU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffefffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0xcU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0xdU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0xdU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffdfffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0xdU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0xdU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffdfffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0xdU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0xeU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0xeU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffbfffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0xeU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0xeU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffffbfffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0xeU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0xfU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0xfU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffff7fffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0xfU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0xfU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffff7fffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0xfU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x10U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x10U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffeffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x10U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x10U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffeffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x10U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x11U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x11U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffdffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x11U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x11U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffdffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x11U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x12U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x12U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffbffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x12U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x12U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffffbffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x12U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x13U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x13U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffff7ffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x13U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x13U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffff7ffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x13U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x14U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x14U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffefffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x14U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x14U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffefffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x14U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x15U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x15U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffdfffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x15U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x15U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffdfffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x15U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x16U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x16U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffbfffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x16U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x16U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fffbfffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x16U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x17U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x17U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fff7fffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x17U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x17U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fff7fffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x17U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x18U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x18U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffeffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x18U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x18U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffeffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x18U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x19U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x19U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffdffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x19U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x19U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffdffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x19U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x1aU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x1aU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffbffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x1aU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x1aU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ffbffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x1aU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x1bU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x1bU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ff7ffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x1bU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x1bU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7ff7ffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x1bU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x1cU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x1cU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fefffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x1cU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x1cU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fefffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x1cU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x1dU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x1dU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fdfffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x1dU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x1dU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fdfffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x1dU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x1eU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x1eU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fbfffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x1eU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x1eU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7fbfffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x1eU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x1fU)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x1fU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7f7fffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x1fU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x1fU)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7f7fffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x1fU));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x20U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x20U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x20U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x20U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x20U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x21U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x21U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x21U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x21U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x21U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x22U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x22U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x22U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x22U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x22U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x23U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x23U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x23U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x23U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x23U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x24U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x24U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x24U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x24U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x24U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x25U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x25U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x25U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x25U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x25U));
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wmask_q 
                               >> 0x26U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                                     >> 0x26U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__0)) 
                          << 0x26U));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1 
                    = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata 
                                     >> 0x26U)));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                    = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                       | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT____Vlvbound_h84107dd5__1)) 
                          << 0x26U));
            }
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rdata;
        }
    }
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____VdfgExtracted_hfe64d58f__0 
        = (3U & ((((0x7c1U == (0xfffU & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                 >> 0x14U)))) 
                   << 1U) | (0x7c0U == (0xfffU & (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                          >> 0x14U))))) 
                 | (- (IData)((0x7c8U == (0xfffU & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0x14U))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__shift_amt_s_type_bignum 
        = ((0xfeU & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                              >> 0x19U)) << 1U)) | 
           (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                          >> 0xeU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rdata_tlword 
        = ((QData)((IData)(((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata) 
                            & (IData)((0x7fffffffffULL 
                                       & (- (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata_bus_en_q)))))))) 
           & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__gen_rmask__DOT__rmask);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_kill_q)) 
           & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_access_core) 
              & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rvalid)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_rready 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_access_core)) 
               & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rvalid)) 
              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_dummy_response_q)));
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U] 
            = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rdata_tlword) 
               << 9U);
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rdata_tlword) 
                >> 0x17U) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rdata_tlword 
                                      >> 0x20U)) << 9U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U] 
            = ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rdata_tlword 
                        >> 0x20U)) >> 0x17U);
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_acc_rd_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_op_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_insn = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__csr_addr_sel = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__sel_insn = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__loop_insn = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_b_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__jump_insn = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_a_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__branch_insn = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_mac_update = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_shifter_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_a_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_a_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_x_res_operand_a_sel = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_x_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_logic_update = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_shifter_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_a_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_mod_sel = 1U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_b_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_ispr_wr = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
        = (0xf8U & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                             >> 0x19U)) << 3U));
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final) {
        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                              >> 6U))))) {
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                               >> 5U)))) {
                if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                   >> 4U)))) {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                          >> 0xcU))))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_acc_rd_en = 1U;
                                    }
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_op_en = 1U;
                                    if ((IData)((0ULL 
                                                 != 
                                                 (0x60000000ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_mac_update 
                                            = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_mac_update) 
                                               | (3U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0x1fU))))));
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                      >> 4U))))) {
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                          >> 3U))))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((2U == (7U 
                                                & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xcU))))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_insn = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0xeU)))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0xdU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU))))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_shifter_en = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_a_en = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update 
                                                    = 
                                                    ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update) 
                                                     | (3U 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                       >> 0x1fU))))));
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_x_res_operand_a_sel = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_x_en = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_mod_sel = 0U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_shifter_en = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_a_en = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update 
                                            = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update) 
                                               | (3U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0x1fU))))));
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                         >> 4U))))) {
                if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                   >> 3U)))) {
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                   >> 0xeU)))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                          >> 0xdU))))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_insn = 1U;
                                    }
                                }
                                if ((1U & (~ (IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                      >> 0xeU))))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0xdU)))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xcU)))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_shifter_en = 1U;
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_a_en = 1U;
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update 
                                                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update) 
                                                   | (3U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                     >> 0x1fU))))));
                                        }
                                    } else if ((1U 
                                                & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xcU)))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_shifter_en = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_a_en = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update 
                                            = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update) 
                                               | (3U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0x1fU))))));
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                             >> 2U))))) {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                            if ((2U == (7U & (IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                      >> 0xcU))))) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_insn = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                  >> 5U))))) {
                if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                      >> 4U))))) {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                          >> 0xeU))))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0xdU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU))))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__sel_insn = 1U;
                                            }
                                        }
                                    }
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0xeU)))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU))))) {
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1fU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                       >> 9U))))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                        >> 7U)))) {
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_b_base = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                    >> 9U)))) {
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_a_base = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 7U)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_b_base = 1U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 8U)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_a_base = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                           >> 6U)))) {
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                               >> 5U)))) {
                if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                   >> 4U)))) {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                          >> 0xeU))))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0xdU))))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec 
                                                = (0x1fffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr) 
                                                       + 
                                                       (0x3ffcU 
                                                        & ((IData)(
                                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                    >> 0x14U)) 
                                                           << 2U)))));
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__loop_insn = 1U;
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base 
                                                = (1U 
                                                   & (~ (IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0xcU))));
                                        }
                                    }
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0xeU)))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum = 1U;
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xdU)))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU))))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel 
                                                    = 
                                                    ((0xcU 
                                                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel)) 
                                                     | (((4U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                      >> 0xcU)))) 
                                                         << 1U) 
                                                        | (6U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                       >> 0xcU))))));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel 
                                                    = 
                                                    ((0xbU 
                                                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel)) 
                                                     | ((2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                     >> 0xcU)))) 
                                                        << 2U));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_logic_update 
                                                    = 
                                                    ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_logic_update) 
                                                     | (3U 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                       >> 0x1fU))))));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_shifter_en = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_a_en = 1U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_a_en = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__shift_amt_s_type_bignum;
                                            } else {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                                    = 
                                                    (0xf8U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0x19U)) 
                                                        << 3U));
                                            }
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right 
                                                = (1U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                  >> 0xcU))) 
                                                      || (1U 
                                                          & (IData)(
                                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                     >> 0x1eU)))));
                                        } else {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU))))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_a_en = 1U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel 
                                                    = 
                                                    (8U 
                                                     | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right 
                                                    = 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1eU)));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                                    = 
                                                    (0xf8U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0x19U)) 
                                                        << 3U));
                                            } else {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel 
                                                    = 
                                                    ((0xcU 
                                                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel)) 
                                                     | (((4U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                      >> 0xcU)))) 
                                                         << 1U) 
                                                        | (6U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                       >> 0xcU))))));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel 
                                                    = 
                                                    ((0xbU 
                                                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel)) 
                                                     | ((2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                     >> 0xcU)))) 
                                                        << 2U));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right 
                                                    = 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1eU)));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                                    = 
                                                    (0xf8U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0x19U)) 
                                                        << 3U));
                                            }
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_logic_update 
                                                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_logic_update) 
                                                   | (3U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                     >> 0x1fU))))));
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_shifter_en = 1U;
                                        }
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_b_en = 1U;
                                    } else if ((1U 
                                                & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xdU)))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                        if ((1U & (~ (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0xcU))))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel 
                                                = (
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel)) 
                                                   | (((4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                    >> 0xcU)))) 
                                                       << 1U) 
                                                      | (6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                     >> 0xcU))))));
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel 
                                                = (
                                                   (0xbU 
                                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel)) 
                                                   | ((2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                   >> 0xcU)))) 
                                                      << 2U));
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_logic_update 
                                                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_logic_update) 
                                                   | (3U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                     >> 0x1fU))))));
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_shifter_en = 1U;
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_a_en = 1U;
                                        }
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xcU)))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_a_en = 1U;
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__shift_amt_s_type_bignum;
                                        } else {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                                = (0xf8U 
                                                   & ((IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0x19U)) 
                                                      << 3U));
                                        }
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right 
                                            = ((1U 
                                                & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xcU))) 
                                               || (1U 
                                                   & (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0x1eU))));
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_b_en = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                 >> 2U))))) {
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                if ((0U != (7U & (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                          >> 0xcU))))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 1U;
                                }
                            }
                        }
                    }
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                          >> 3U))))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((0x7d8U == 
                                         (0xfffU & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0x14U))))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en = 0U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en = 0U;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU))))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en 
                                            = ((IData)(
                                                       ((0ULL 
                                                         != 
                                                         (0xf80ULL 
                                                          & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                        | (0x7c0U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                       >> 0x14U)))))) 
                                               | (0x7c1U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0x14U)))));
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en = 1U;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU))))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en = 1U;
                                        if ((0U != 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                         >> 0xfU))))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en = 1U;
                                        }
                                    }
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__csr_addr_sel = 1U;
                                    if ((0U != (7U 
                                                & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xcU))))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base = 1U;
                                    }
                                    if ((0x7d8U != 
                                         (0xfffU & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0x14U))))) {
                                        if ((1U == 
                                             (7U & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU))))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_ispr_wr 
                                                = tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____VdfgExtracted_hfe64d58f__0;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0xcU))))) {
                                            if ((0U 
                                                 != 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                             >> 0xfU))))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_ispr_wr 
                                                    = tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____VdfgExtracted_hfe64d58f__0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                           >> 2U)))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec 
                                        = (0x1fffU 
                                           & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr) 
                                              + ((0x1000U 
                                                  & ((IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0xcU)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0x14U)) 
                                                        << 0xbU)) 
                                                    | (0x7feU 
                                                       & ((IData)(
                                                                  (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                   >> 0x15U)) 
                                                          << 1U))))));
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base = 1U;
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec 
                                        = (0x1fffU 
                                           & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr) 
                                              + ((0x1000U 
                                                  & ((IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0x1fU)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 7U)) 
                                                        << 0xbU)) 
                                                    | ((0x7e0U 
                                                        & ((IData)(
                                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                    >> 0x19U)) 
                                                           << 5U)) 
                                                       | (0x1eU 
                                                          & ((IData)(
                                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                      >> 8U)) 
                                                             << 1U)))))));
                                }
                            }
                        }
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                           >> 2U)))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base = 1U;
                                }
                            }
                        }
                    }
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                          >> 3U))))) {
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                           >> 2U)))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 1U;
                                }
                            }
                        } else if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                  >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                      >> 4U))))) {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                           >> 2U)))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__jump_insn = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U)))) {
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__jump_insn = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                          >> 3U))))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__branch_insn = 1U;
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_base = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                  >> 5U))))) {
                if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                      >> 4U))))) {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0xeU)))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xdU)))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                   >> 0x1fU))))) {
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_rd_en = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1fU)))) {
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_wr_en = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                               >> 5U)))) {
                if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                   >> 4U)))) {
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                          >> 3U))))) {
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                           >> 2U)))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base = 1U;
                                }
                            }
                        } else if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                  >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base = 1U;
                            }
                        }
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_base = 1U;
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 1U;
                                }
                            }
                        }
                    }
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((IData)((0ULL 
                                                 != 
                                                 (0x60000000ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum = 1U;
                                    }
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum = 1U;
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                          >> 3U))))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_base = 1U;
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 1U;
                                }
                            }
                        }
                    }
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0xeU)))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0xdU))))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum = 1U;
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum = 1U;
                                            }
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                        }
                                    } else {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                      >> 4U))))) {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0xeU)))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0xdU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU))))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right 
                                                    = 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1eU)));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_b_en = 1U;
                                            }
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                                = (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU)))
                                                    ? 
                                                   (0xf8U 
                                                    & ((IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x19U)) 
                                                       << 3U))
                                                    : 0U);
                                        }
                                    } else {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right 
                                            = (1U & (IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                             >> 0x1eU)));
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_b_en = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                            = (0xf8U 
                                               & ((IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0x19U)) 
                                                  << 3U));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                   >> 4U)))) {
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                          >> 3U))))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base = 1U;
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                          >> 3U))))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base = 1U;
                                }
                            }
                        }
                    }
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0xeU)))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU))))) {
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1fU)))) {
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 1U;
                                                }
                                            }
                                        } else {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                 >> 2U))))) {
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                      >> 4U))))) {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                       >> 3U)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 2U))))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0xeU)))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU))))) {
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1fU)))) {
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_base = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                   >> 0x1fU))))) {
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1fU)))) {
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                      >> 0x1fU))))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                            }
                                        } else {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_base = 1U;
                                        }
                                    } else {
                                        if ((1U & (~ (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                              >> 0xdU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                               >> 0xcU))))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum = 1U;
                                            }
                                        }
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xdU)))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                            }
                                        } else {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum = 1U;
                                        }
                                    }
                                    if ((1U & (~ (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                          >> 0xeU))))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0xdU)))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right 
                                                    = 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1eU)));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_b_en = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                                    = 
                                                    (0xf8U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0x19U)) 
                                                        << 3U));
                                            }
                                        } else {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum = 1U;
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0xcU)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right 
                                                    = 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                >> 0x1eU)));
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_b_en = 1U;
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt 
                                                    = 
                                                    (0xf8U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                 >> 0x19U)) 
                                                        << 3U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_rready));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr = 0U;
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__csr_addr_sel) {
        if ((((0x7c8U == (0xfffU & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                            >> 0x14U)))) 
              || (0x7c0U == (0xfffU & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                               >> 0x14U))))) 
             || (0x7c1U == (0xfffU & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                              >> 0x14U)))))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr = 3U;
        } else if (((((((((0x7d0U == (0xfffU & (IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                        >> 0x14U)))) 
                          || (0x7d1U == (0xfffU & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                           >> 0x14U))))) 
                         || (0x7d2U == (0xfffU & (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                          >> 0x14U))))) 
                        || (0x7d3U == (0xfffU & (IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                         >> 0x14U))))) 
                       || (0x7d4U == (0xfffU & (IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                        >> 0x14U))))) 
                      || (0x7d5U == (0xfffU & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                       >> 0x14U))))) 
                     || (0x7d6U == (0xfffU & (IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                      >> 0x14U))))) 
                    || (0x7d7U == (0xfffU & (IData)(
                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                     >> 0x14U)))))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr = 0U;
        } else if ((0xfc0U == (0xfffU & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                 >> 0x14U))))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr = 1U;
        } else if ((0xfc1U == (0xfffU & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                 >> 0x14U))))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr = 4U;
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__ispr_addr 
            = ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                              >> 0x16U))) ? ((1U & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                            >> 0x15U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                             >> 0x14U)))
                                                  ? 8U
                                                  : 7U)
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                             >> 0x14U)))
                                                  ? 6U
                                                  : 5U))
                : ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                  >> 0x15U))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                             >> 0x14U)))
                                                  ? 2U
                                                  : 4U)
                    : ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                      >> 0x14U))) ? 1U
                        : 0U)));
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_we_bignum_onehot_enc__out_o 
        = (((IData)(((0xf80ULL == (0xf80ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                     & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
            << 0x1fU) | (((IData)(((0xf00ULL == (0xf80ULL 
                                                 & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                   & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                          << 0x1eU) | (((IData)(((0xe80ULL 
                                                  == 
                                                  (0xf80ULL 
                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                 & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                        << 0x1dU) | 
                                       (((IData)(((0xe00ULL 
                                                   == 
                                                   (0xf80ULL 
                                                    & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                  & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                         << 0x1cU) 
                                        | (((IData)(
                                                    ((0xd80ULL 
                                                      == 
                                                      (0xf80ULL 
                                                       & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                     & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                            << 0x1bU) 
                                           | (((IData)(
                                                       ((0xd00ULL 
                                                         == 
                                                         (0xf80ULL 
                                                          & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                        & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          ((0xc80ULL 
                                                            == 
                                                            (0xf80ULL 
                                                             & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             ((0xc00ULL 
                                                               == 
                                                               (0xf80ULL 
                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                              & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                ((0xb80ULL 
                                                                  == 
                                                                  (0xf80ULL 
                                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                 & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   ((0xb00ULL 
                                                                     == 
                                                                     (0xf80ULL 
                                                                      & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                           << 0x16U) 
                                                          | (((IData)(
                                                                      ((0xa80ULL 
                                                                        == 
                                                                        (0xf80ULL 
                                                                         & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                              << 0x15U) 
                                                             | (((IData)(
                                                                         ((0xa00ULL 
                                                                           == 
                                                                           (0xf80ULL 
                                                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                          & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                 << 0x14U) 
                                                                | (((IData)(
                                                                            ((0x980ULL 
                                                                              == 
                                                                              (0xf80ULL 
                                                                               & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                             & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                    << 0x13U) 
                                                                   | (((IData)(
                                                                               ((0x900ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                       << 0x12U) 
                                                                      | (((IData)(
                                                                                ((0x880ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                          << 0x11U) 
                                                                         | (((IData)(
                                                                                ((0x800ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                             << 0x10U) 
                                                                            | (((IData)(
                                                                                ((0x780ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 0xfU) 
                                                                               | (((IData)(
                                                                                ((0x700ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                ((0x680ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                ((0x600ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                ((0x580ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                ((0x500ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                ((0x480ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                ((0x400ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                ((0x380ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                ((0x300ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                ((0x280ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                ((0x200ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                ((0x180ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                ((0x100ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                ((0x80ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                ((0ULL 
                                                                                == 
                                                                                (0xf80ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_bignum))))))))))))))))))))))))))))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_b_bignum_onehot_enc__out_o 
        = (((IData)(((0x1f00000ULL == (0x1f00000ULL 
                                       & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                     & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
            << 0x1fU) | (((IData)(((0x1e00000ULL == 
                                    (0x1f00000ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                   & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                          << 0x1eU) | (((IData)(((0x1d00000ULL 
                                                  == 
                                                  (0x1f00000ULL 
                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                 & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                        << 0x1dU) | 
                                       (((IData)(((0x1c00000ULL 
                                                   == 
                                                   (0x1f00000ULL 
                                                    & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                  & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                         << 0x1cU) 
                                        | (((IData)(
                                                    ((0x1b00000ULL 
                                                      == 
                                                      (0x1f00000ULL 
                                                       & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                     & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                            << 0x1bU) 
                                           | (((IData)(
                                                       ((0x1a00000ULL 
                                                         == 
                                                         (0x1f00000ULL 
                                                          & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                        & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          ((0x1900000ULL 
                                                            == 
                                                            (0x1f00000ULL 
                                                             & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             ((0x1800000ULL 
                                                               == 
                                                               (0x1f00000ULL 
                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                              & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                ((0x1700000ULL 
                                                                  == 
                                                                  (0x1f00000ULL 
                                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                 & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   ((0x1600000ULL 
                                                                     == 
                                                                     (0x1f00000ULL 
                                                                      & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                           << 0x16U) 
                                                          | (((IData)(
                                                                      ((0x1500000ULL 
                                                                        == 
                                                                        (0x1f00000ULL 
                                                                         & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                              << 0x15U) 
                                                             | (((IData)(
                                                                         ((0x1400000ULL 
                                                                           == 
                                                                           (0x1f00000ULL 
                                                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                          & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                 << 0x14U) 
                                                                | (((IData)(
                                                                            ((0x1300000ULL 
                                                                              == 
                                                                              (0x1f00000ULL 
                                                                               & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                             & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                    << 0x13U) 
                                                                   | (((IData)(
                                                                               ((0x1200000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                       << 0x12U) 
                                                                      | (((IData)(
                                                                                ((0x1100000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                          << 0x11U) 
                                                                         | (((IData)(
                                                                                ((0x1000000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                             << 0x10U) 
                                                                            | (((IData)(
                                                                                ((0xf00000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 0xfU) 
                                                                               | (((IData)(
                                                                                ((0xe00000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                ((0xd00000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                ((0xc00000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                ((0xb00000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                ((0xa00000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                ((0x900000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                ((0x800000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                ((0x700000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                ((0x600000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                ((0x500000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                ((0x400000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                ((0x300000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                ((0x200000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                ((0x100000ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                ((0ULL 
                                                                                == 
                                                                                (0x1f00000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_bignum))))))))))))))))))))))))))))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_a_bignum_onehot_enc__out_o 
        = (((IData)(((0xf8000ULL == (0xf8000ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                     & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
            << 0x1fU) | (((IData)(((0xf0000ULL == (0xf8000ULL 
                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                   & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                          << 0x1eU) | (((IData)(((0xe8000ULL 
                                                  == 
                                                  (0xf8000ULL 
                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                 & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                        << 0x1dU) | 
                                       (((IData)(((0xe0000ULL 
                                                   == 
                                                   (0xf8000ULL 
                                                    & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                  & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                         << 0x1cU) 
                                        | (((IData)(
                                                    ((0xd8000ULL 
                                                      == 
                                                      (0xf8000ULL 
                                                       & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                     & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                            << 0x1bU) 
                                           | (((IData)(
                                                       ((0xd0000ULL 
                                                         == 
                                                         (0xf8000ULL 
                                                          & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                        & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          ((0xc8000ULL 
                                                            == 
                                                            (0xf8000ULL 
                                                             & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             ((0xc0000ULL 
                                                               == 
                                                               (0xf8000ULL 
                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                              & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                ((0xb8000ULL 
                                                                  == 
                                                                  (0xf8000ULL 
                                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                 & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   ((0xb0000ULL 
                                                                     == 
                                                                     (0xf8000ULL 
                                                                      & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                           << 0x16U) 
                                                          | (((IData)(
                                                                      ((0xa8000ULL 
                                                                        == 
                                                                        (0xf8000ULL 
                                                                         & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                              << 0x15U) 
                                                             | (((IData)(
                                                                         ((0xa0000ULL 
                                                                           == 
                                                                           (0xf8000ULL 
                                                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                          & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                 << 0x14U) 
                                                                | (((IData)(
                                                                            ((0x98000ULL 
                                                                              == 
                                                                              (0xf8000ULL 
                                                                               & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                             & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                    << 0x13U) 
                                                                   | (((IData)(
                                                                               ((0x90000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                       << 0x12U) 
                                                                      | (((IData)(
                                                                                ((0x88000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                          << 0x11U) 
                                                                         | (((IData)(
                                                                                ((0x80000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                             << 0x10U) 
                                                                            | (((IData)(
                                                                                ((0x78000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 0xfU) 
                                                                               | (((IData)(
                                                                                ((0x70000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                ((0x68000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                ((0x60000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                ((0x58000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                ((0x50000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                ((0x48000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                ((0x40000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                ((0x38000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                ((0x30000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                ((0x28000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                ((0x20000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                ((0x18000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                ((0x10000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                ((0x8000ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                ((0ULL 
                                                                                == 
                                                                                (0xf8000ULL 
                                                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata)) 
                                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_bignum))))))))))))))))))))))))))))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_insn 
        = (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_x_en)) 
            << 0x25U) | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_x_res_operand_a_sel)) 
                          << 0x24U) | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_a_en)) 
                                        << 0x23U) | 
                                       (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_mod_sel)) 
                                         << 0x22U) 
                                        | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_adder_y_op_shifter_en)) 
                                            << 0x21U) 
                                           | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_a_en)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shifter_b_en) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_right) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_shift_amt) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_a_en) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_shifter_en) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__alu_bignum_logic_res_sel) 
                                                                                << 0x10U) 
                                                                                | (((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                                >> 0x1fU)) 
                                                                                << 0xfU)) 
                                                                                | (0x4000U 
                                                                                & ((~ (IData)(
                                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                                >> 0x1fU))) 
                                                                                << 0xeU))) 
                                                                                | ((((3U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                                >> 0x19U)))) 
                                                                                << 0xdU) 
                                                                                | (((2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                                >> 0x19U)))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                                >> 0x19U)))) 
                                                                                << 0xbU) 
                                                                                | ((0U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata 
                                                                                >> 0x19U)))) 
                                                                                << 0xaU)))) 
                                                                                | ((0x300U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update) 
                                                                                | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_logic_update) 
                                                                                | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_ispr_wr) 
                                                                                | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_mac_update))))) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_adder_update) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_logic_update) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_mac_update) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__flags_ispr_wr)))))))))))))))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h91740543__0)
                ? (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid) 
                    & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U]) 
                   | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h917431f2__0))
                : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h917431f2__0)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h917431f2__0) 
               || ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h91740543__0))) 
                   || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_zero_flags 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_insn;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_zero_flags 
        = (0x3ffffffc00ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_zero_flags);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
           & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid) 
              & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h91740543__0)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__data_intg 
        = (0xffU & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h917431f2__0)
                     ? (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_integ)
                     : ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp)
                         ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                             ? ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U] 
                                 << 0x1fU) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U] 
                                              >> 1U))
                             : 0U) : 0xaaU)));
}

VL_INLINE_OPT void Vtb_otbn_axi___024root___act_comb__TOP__4(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___act_comb__TOP__4\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    __Vtemp_6[2U] = (((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h91740543__2)) 
                        & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid))
                        ? 0U : 1U) << 0x1fU) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                   ? 
                                                  ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                       >> 8U))
                                                    : 0U)
                                                   : 0U) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                      ? 
                                                     ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                       ? 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                       : 0U)
                                                      : 0U) 
                                                    << 0x12U) 
                                                   | ((IData)(
                                                              ((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                                                                 & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                                                                 ? 
                                                                ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U])) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U])) 
                                                                      << 0x17U) 
                                                                     | ((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U])) 
                                                                        >> 9U)))
                                                                  : 0ULL)
                                                                 : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data) 
                                                               >> 0x20U)) 
                                                      >> 0xfU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U] 
        = (((IData)((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                      ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                          ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U])) 
                              << 0x37U) | (((QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U])) 
                                              >> 9U)))
                          : 0ULL) : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data)) 
            << 0x11U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__data_intg) 
                          << 2U) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_error) 
                                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)) 
                                     << 1U) | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[1U] 
        = (((IData)((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                      ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                          ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U])) 
                              << 0x37U) | (((QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U])) 
                                              >> 9U)))
                          : 0ULL) : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data)) 
            >> 0xfU) | ((IData)(((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                                   & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                                   ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                                       ? (((QData)((IData)(
                                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U])) 
                                           << 0x37U) 
                                          | (((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U])) 
                                                >> 9U)))
                                       : 0ULL) : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data) 
                                 >> 0x20U)) << 0x11U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[2U] 
        = __Vtemp_6[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[3U] 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
            << 2U) | ((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h91740543__2)) 
                        & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid))
                        ? 0U : 1U) >> 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U] 
        = ((0xfffe0003U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U]) 
           | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__data_intg) 
              << 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_d2h[1U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_d2h[1U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_d2h[1U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_d2h[1U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[1U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[1U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[1U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[1U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_dmem__tl_o[3U];
}

VL_INLINE_OPT void Vtb_otbn_axi___024root___act_comb__TOP__5(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___act_comb__TOP__5\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    __Vtemp_6[2U] = (((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h91740543__0)) 
                        & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid))
                        ? 0U : 1U) << 0x1fU) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                   ? 
                                                  ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                       >> 8U))
                                                    : 0U)
                                                   : 0U) 
                                                 << 0x1aU) 
                                                | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                      ? 
                                                     ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                       ? 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                       : 0U)
                                                      : 0U) 
                                                    << 0x12U) 
                                                   | ((IData)(
                                                              ((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                                                                 & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                                                                 ? 
                                                                ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U])) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U])) 
                                                                      << 0x17U) 
                                                                     | ((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U])) 
                                                                        >> 9U)))
                                                                  : 0ULL)
                                                                 : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data) 
                                                               >> 0x20U)) 
                                                      >> 0xfU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U] 
        = (((IData)((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                      ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                          ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U])) 
                              << 0x37U) | (((QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U])) 
                                              >> 9U)))
                          : 0ULL) : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data)) 
            << 0x11U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__data_intg) 
                          << 2U) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error) 
                                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)) 
                                     << 1U) | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[1U] 
        = (((IData)((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                      & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                      ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                          ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U])) 
                              << 0x37U) | (((QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U])) 
                                              >> 9U)))
                          : 0ULL) : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data)) 
            >> 0xfU) | ((IData)(((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                                   & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                                   ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                                       ? (((QData)((IData)(
                                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[2U])) 
                                           << 0x37U) 
                                          | (((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[1U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int[0U])) 
                                                >> 9U)))
                                       : 0ULL) : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data) 
                                 >> 0x20U)) << 0x11U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[2U] 
        = __Vtemp_6[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[3U] 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
            << 2U) | ((((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h91740543__0)) 
                        & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid))
                        ? 0U : 1U) >> 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U] 
        = ((0xfffe0003U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U]) 
           | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__data_intg) 
              << 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_d2h[0U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_d2h[0U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_d2h[0U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_d2h[0U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[0U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[0U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[0U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__u_tlul_adapter_sram_imem__tl_o[3U];
}

VL_INLINE_OPT void Vtb_otbn_axi___024root___act_comb__TOP__6(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___act_comb__TOP__6\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [0U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [0U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [0U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [0U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [1U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [1U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [1U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [1U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [2U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [2U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [2U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [2U][3U];
    __Vtemp_1[1U] = (((IData)(((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                              [0U][3U] 
                                              << 1U) 
                                             | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                [0U][2U] 
                                                >> 0x1fU))))
                                ? (((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                    [0U][2U])) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                  [0U][1U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                    [0U][0U])) 
                                                    >> 0x11U)))
                                : 0ULL)) >> 0xfU) | 
                     ((IData)((((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                               [0U][3U] 
                                               << 1U) 
                                              | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                 [0U][2U] 
                                                 >> 0x1fU))))
                                 ? (((QData)((IData)(
                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                     [0U][2U])) 
                                     << 0x2fU) | (((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                   [0U][1U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                     [0U][0U])) 
                                                     >> 0x11U)))
                                 : 0ULL) >> 0x20U)) 
                      << 0x11U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][0U] 
        = (((IData)(((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                    [0U][3U] << 1U) 
                                   | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                      [0U][2U] >> 0x1fU))))
                      ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                          [0U][2U])) 
                          << 0x2fU) | (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [0U][1U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [0U][0U])) 
                                        >> 0x11U)))
                      : 0ULL)) << 0x11U) | (0x1ffffU 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                            [0U][0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][1U] 
        = __Vtemp_1[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][2U] 
        = ((0xfffe0000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [0U][2U]) | ((IData)((((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                  [0U][3U] 
                                                  << 1U) 
                                                 | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                    [0U][2U] 
                                                    >> 0x1fU))))
                                    ? (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [0U][2U])) 
                                        << 0x2fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                         [0U][1U])) 
                                         << 0xfU) | 
                                        ((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                         [0U][0U])) 
                                         >> 0x11U)))
                                    : 0ULL) >> 0x20U)) 
                         >> 0xfU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[0U][3U] 
        = ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [0U][3U]) | (3U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                         [0U][3U]));
    __Vtemp_4[1U] = (((IData)(((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                              [1U][3U] 
                                              << 1U) 
                                             | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                [1U][2U] 
                                                >> 0x1fU))))
                                ? (((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                    [1U][2U])) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                  [1U][1U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                    [1U][0U])) 
                                                    >> 0x11U)))
                                : 0ULL)) >> 0xfU) | 
                     ((IData)((((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                               [1U][3U] 
                                               << 1U) 
                                              | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                 [1U][2U] 
                                                 >> 0x1fU))))
                                 ? (((QData)((IData)(
                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                     [1U][2U])) 
                                     << 0x2fU) | (((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                   [1U][1U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                     [1U][0U])) 
                                                     >> 0x11U)))
                                 : 0ULL) >> 0x20U)) 
                      << 0x11U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][0U] 
        = (((IData)(((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                    [1U][3U] << 1U) 
                                   | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                      [1U][2U] >> 0x1fU))))
                      ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                          [1U][2U])) 
                          << 0x2fU) | (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [1U][1U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [1U][0U])) 
                                        >> 0x11U)))
                      : 0ULL)) << 0x11U) | (0x1ffffU 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                            [1U][0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][1U] 
        = __Vtemp_4[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][2U] 
        = ((0xfffe0000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [1U][2U]) | ((IData)((((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                  [1U][3U] 
                                                  << 1U) 
                                                 | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                    [1U][2U] 
                                                    >> 0x1fU))))
                                    ? (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [1U][2U])) 
                                        << 0x2fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                         [1U][1U])) 
                                         << 0xfU) | 
                                        ((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                         [1U][0U])) 
                                         >> 0x11U)))
                                    : 0ULL) >> 0x20U)) 
                         >> 0xfU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[1U][3U] 
        = ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [1U][3U]) | (3U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                         [1U][3U]));
    __Vtemp_7[1U] = (((IData)(((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                              [2U][3U] 
                                              << 1U) 
                                             | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                [2U][2U] 
                                                >> 0x1fU))))
                                ? (((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                    [2U][2U])) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                  [2U][1U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                    [2U][0U])) 
                                                    >> 0x11U)))
                                : 0ULL)) >> 0xfU) | 
                     ((IData)((((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                               [2U][3U] 
                                               << 1U) 
                                              | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                 [2U][2U] 
                                                 >> 0x1fU))))
                                 ? (((QData)((IData)(
                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                     [2U][2U])) 
                                     << 0x2fU) | (((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                   [2U][1U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                                     [2U][0U])) 
                                                     >> 0x11U)))
                                 : 0ULL) >> 0x20U)) 
                      << 0x11U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[2U][0U] 
        = (((IData)(((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                    [2U][3U] << 1U) 
                                   | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                      [2U][2U] >> 0x1fU))))
                      ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                          [2U][2U])) 
                          << 0x2fU) | (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [2U][1U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [2U][0U])) 
                                        >> 0x11U)))
                      : 0ULL)) << 0x11U) | (0x1ffffU 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                            [2U][0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[2U][1U] 
        = __Vtemp_7[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[2U][2U] 
        = ((0xfffe0000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [2U][2U]) | ((IData)((((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                  [2U][3U] 
                                                  << 1U) 
                                                 | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                    [2U][2U] 
                                                    >> 0x1fU))))
                                    ? (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                        [2U][2U])) 
                                        << 0x2fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                         [2U][1U])) 
                                         << 0xfU) | 
                                        ((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                                                         [2U][0U])) 
                                         >> 0x11U)))
                                    : 0ULL) >> 0x20U)) 
                         >> 0xfU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[2U][3U] 
        = ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
            [2U][3U]) | (3U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
                         [2U][3U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [3U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [3U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [3U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
        [3U][3U];
    if ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [0U][3U];
    }
    if ((1U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [1U][3U];
    }
    if ((2U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [2U][0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [2U][1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [2U][2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
            [2U][3U];
    }
}

VL_INLINE_OPT void Vtb_otbn_axi___024root___act_comb__TOP__7(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___act_comb__TOP__7\n"); );
    // Init
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__451__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__451__Vfuncout = 0;
    VlWide<4>/*98:0*/ __Vfunc_extract_d2h_rsp_intg__451__tl;
    VL_ZERO_W(99, __Vfunc_extract_d2h_rsp_intg__451__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__451__payload;
    __Vfunc_extract_d2h_rsp_intg__451__payload = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = (((IData)(((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U] 
                                              << 1U) 
                                             | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                                                >> 0x1fU))))
                                ? (((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U])) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U])) 
                                                    >> 0x11U)))
                                : 0ULL)) >> 0xfU) | 
                     ((IData)((((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U] 
                                               << 1U) 
                                              | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                                                 >> 0x1fU))))
                                 ? (((QData)((IData)(
                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U])) 
                                     << 0x2fU) | (((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U])) 
                                                     >> 0x11U)))
                                 : 0ULL) >> 0x20U)) 
                      << 0x11U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[0U] 
        = (((IData)(((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U] 
                                    << 1U) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                                              >> 0x1fU))))
                      ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U])) 
                          << 0x2fU) | (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U])) 
                                        >> 0x11U)))
                      : 0ULL)) << 0x11U) | ((0x1fffeU 
                                             & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U]) 
                                            | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[1U] 
        = __Vtemp_1[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[2U] 
        = ((0xfffe0000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U]) 
           | ((IData)((((1U == (7U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U] 
                                       << 1U) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U] 
                                                 >> 0x1fU))))
                         ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[2U])) 
                             << 0x2fU) | (((QData)((IData)(
                                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[1U])) 
                                           << 0xfU) 
                                          | ((QData)((IData)(
                                                             vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U])) 
                                             >> 0x11U)))
                         : 0ULL) >> 0x20U)) >> 0xfU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[3U] 
        = (7U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U]);
    __Vfunc_extract_d2h_rsp_intg__451__tl[0U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[0U];
    __Vfunc_extract_d2h_rsp_intg__451__tl[1U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[1U];
    __Vfunc_extract_d2h_rsp_intg__451__tl[2U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[2U];
    __Vfunc_extract_d2h_rsp_intg__451__tl[3U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[3U];
    __Vfunc_extract_d2h_rsp_intg__451__payload = ((0x38U 
                                                   & ((__Vfunc_extract_d2h_rsp_intg__451__tl[3U] 
                                                       << 4U) 
                                                      | (8U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__451__tl[2U] 
                                                            >> 0x1cU)))) 
                                                  | ((6U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__451__tl[2U] 
                                                         >> 0x19U)) 
                                                     | (1U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__451__tl[0U] 
                                                           >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__451__Vfuncout = __Vfunc_extract_d2h_rsp_intg__451__payload;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__451__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfdffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x39U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfbffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3aU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xf7ffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3bU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xefffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3cU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xdfffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3dU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xbfffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3eU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0x7fffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3fU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (0x5400000000000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_o_pre[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U] 
        = ((0xfffe0003U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U]) 
           | (0xfffffffcU & ((0x1fc00U & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                   >> 0x39U)) 
                                          << 0xaU)) 
                             | (0x3fcU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_valid 
        = ((~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[2U] 
               >> 0x19U)) & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[3U] 
                             >> 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dw_valid 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[2U] 
            >> 0x19U) & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[3U] 
                         >> 2U));
}

extern const VlWide<8>/*255:0*/ Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtb_otbn_axi___024root___act_comb__TOP__8(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___act_comb__TOP__8\n"); );
    // Init
    CData/*3:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0 = 0;
    CData/*0:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 = 0;
    CData/*0:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 = 0;
    CData/*0:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 = 0;
    CData/*3:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0 = 0;
    CData/*0:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 = 0;
    CData/*0:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 = 0;
    CData/*0:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 = 0;
    CData/*0:0*/ tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13 = 0;
    QData/*46:0*/ __Vfunc_extract_h2d_cmd_intg__45__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__45__Vfuncout = 0;
    VlWide<5>/*144:0*/ __Vfunc_extract_h2d_cmd_intg__45__tl;
    VL_ZERO_W(145, __Vfunc_extract_h2d_cmd_intg__45__tl);
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__54__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__54__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__54__val;
    __Vfunc_mubi4_bool_to_mubi__54__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__55__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__55__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__55__val;
    __Vfunc_mubi4_bool_to_mubi__55__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__71__Vfuncout;
    __Vfunc_mubi4_test_true_loose__71__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__71__val;
    __Vfunc_mubi4_test_true_loose__71__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__72__Vfuncout;
    __Vfunc_mubi4_and_hi__72__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__72__a;
    __Vfunc_mubi4_and_hi__72__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__72__b;
    __Vfunc_mubi4_and_hi__72__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__73__Vfuncout;
    __Vfunc_mubi4_and__73__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__73__a;
    __Vfunc_mubi4_and__73__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__73__b;
    __Vfunc_mubi4_and__73__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__73__a_in;
    __Vfunc_mubi4_and__73__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__73__b_in;
    __Vfunc_mubi4_and__73__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__84__Vfuncout;
    __Vfunc_mubi4_test_true_loose__84__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__84__val;
    __Vfunc_mubi4_test_true_loose__84__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__85__Vfuncout;
    __Vfunc_mubi4_test_true_loose__85__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__85__val;
    __Vfunc_mubi4_test_true_loose__85__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__87__Vfuncout;
    __Vfunc_mubi4_test_true_loose__87__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__87__val;
    __Vfunc_mubi4_test_true_loose__87__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__95__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__95__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__95__val;
    __Vfunc_mubi4_bool_to_mubi__95__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__248__Vfuncout;
    __Vfunc_mubi4_test_invalid__248__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__248__val;
    __Vfunc_mubi4_test_invalid__248__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__443__Vfuncout;
    __Vfunc_mubi4_test_invalid__443__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__443__val;
    __Vfunc_mubi4_test_invalid__443__val = 0;
    QData/*46:0*/ __Vfunc_extract_h2d_cmd_intg__450__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__450__Vfuncout = 0;
    VlWide<5>/*144:0*/ __Vfunc_extract_h2d_cmd_intg__450__tl;
    VL_ZERO_W(145, __Vfunc_extract_h2d_cmd_intg__450__tl);
    QData/*56:0*/ __Vfunc_get_cmd_intg__453__unused_cmd_payload;
    __Vfunc_get_cmd_intg__453__unused_cmd_payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__465__Vfuncout;
    __Vfunc_mubi4_test_invalid__465__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__465__val;
    __Vfunc_mubi4_test_invalid__465__val = 0;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_75;
    QData/*63:0*/ __Vtemp_124;
    QData/*63:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_205;
    VlWide<3>/*95:0*/ __Vtemp_212;
    VlWide<3>/*95:0*/ __Vtemp_219;
    VlWide<3>/*95:0*/ __Vtemp_226;
    VlWide<4>/*127:0*/ __Vtemp_237;
    // Body
    vlSelf->tb_otbn_axi__DOT__w_ready = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U] = 0xff09ffffU;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U] = 0xffffffffU;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U] = 0xffffffU;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[3U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[4U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U] 
        = ((0xfffffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U]) 
           | (((0x2000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[2U])
                ? (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dw_ready)
                : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_ready)) 
              | (((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q)) 
                  | (3U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) 
                 & ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q)) 
                    | (3U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))))));
    if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
                if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_grant) 
                     & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) {
                    vlSelf->tb_otbn_axi__DOT__w_ready = 1U;
                }
            }
        }
    }
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_grant) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[4U] 
            = (0x10000U | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[4U]);
        VL_ASSIGNSEL_WI(145,3,0x8dU, vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre, 
                        (([&]() {
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__is_full_strobe__40__size 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_size_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__is_full_strobe__40__strb 
                            = vlSelf->tb_otbn_axi__DOT__w_strb;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__is_full_strobe__40__expected 
                            = (0xffU & (VL_SHIFTL_III(8,32,32, (IData)(1U), 
                                                      ((IData)(1U) 
                                                       << (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__is_full_strobe__40__size))) 
                                        - (IData)(1U)));
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__is_full_strobe__40__Vfuncout 
                            = ((IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__is_full_strobe__40__strb) 
                               == (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__is_full_strobe__40__expected));
                    }(), (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__is_full_strobe__40__Vfuncout))
                          ? 0U : 1U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[4U] 
            = ((0x1e000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[4U]) 
               | (0x1ffffU & (0x80U | ((0x300U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_size_q) 
                                                  << 8U)) 
                                       | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_id_q)))));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U] 
            = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U]) 
               | ((IData)(vlSelf->tb_otbn_axi__DOT__w_data) 
                  << 0x18U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__w_data) 
                >> 8U) | ((IData)((vlSelf->tb_otbn_axi__DOT__w_data 
                                   >> 0x20U)) << 0x18U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U] 
            = (((IData)((vlSelf->tb_otbn_axi__DOT__w_data 
                         >> 0x20U)) >> 8U) | ((IData)(vlSelf->tb_otbn_axi__DOT__w_strb) 
                                              << 0x18U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[3U] 
            = (((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_q) 
                | ((IData)(vlSelf->tb_otbn_axi__DOT__w_strb) 
                   >> 8U)) | (0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_q));
    } else if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_grant) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[4U] 
            = (0x1ffffU & (0x18000U | ((0x300U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_size_q) 
                                                  << 8U)) 
                                       | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_id_q))));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[3U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_addr_q;
        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__size 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_size_q;
        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__addr 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_addr_q;
        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__mask 
            = ((4U & (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__size))
                ? 0xffU : (0xffU & ((2U & (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__size))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__size))
                                         ? 0xffU : 
                                        ((4U & vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__addr)
                                          ? 0xf0U : 0xfU))
                                     : ((1U & (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__size))
                                         ? ((IData)(3U) 
                                            << (6U 
                                                & vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__addr))
                                         : ((IData)(1U) 
                                            << (7U 
                                                & vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__addr))))));
        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__Vfuncout 
            = vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__mask;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U] 
            = (0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U]);
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U] = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U] 
            = ((IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__gen_read_mask__41__Vfuncout) 
               << 0x18U);
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_err_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_err_q;
    if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))) {
            if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q)))) {
                if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_valid) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_d 
                        = (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[2U])) 
                            << 0x2fU) | (((QData)((IData)(
                                                          vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[1U])) 
                                          << 0xfU) 
                                         | ((QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) 
                                            >> 0x11U)));
                    if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_err_d = 1U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))) {
            if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_grant) 
                 & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) {
                if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_valid) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_d 
                        = (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[2U])) 
                            << 0x2fU) | (((QData)((IData)(
                                                          vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[1U])) 
                                          << 0xfU) 
                                         | ((QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) 
                                            >> 0x11U)));
                    if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_err_d = 1U;
                    }
                }
            }
        } else if (vlSelf->tb_otbn_axi__DOT__ar_valid) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_err_d = 0U;
        }
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q;
    if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_d = 0U;
    } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))) {
        if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))) {
            if (vlSelf->tb_otbn_axi__DOT__r_ready) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_d 
                    = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_beat_q) 
                        == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_len_q))
                        ? 0U : 1U);
            }
        } else if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_valid) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))) {
        if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_grant) 
             & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_d 
                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_valid)
                    ? 3U : 2U);
        }
    } else if (vlSelf->tb_otbn_axi__DOT__ar_valid) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_d = 1U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_err_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_err_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q;
    if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_d = 0U;
    } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
        if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
            if (vlSelf->tb_otbn_axi__DOT__b_ready) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_d = 0U;
            }
        } else if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dw_valid) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_d 
                = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_q) 
                    == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_len_q))
                    ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
        if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_grant) 
             & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_d 
                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dw_valid)
                    ? (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_q) 
                        == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_len_q))
                        ? 3U : 1U) : 2U);
        }
    } else if (vlSelf->tb_otbn_axi__DOT__aw_valid) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_d = 1U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_q;
    if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
            if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q)))) {
                if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dw_valid) {
                    if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_err_d = 1U;
                    }
                    if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_q) 
                         != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_len_q))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_d 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_q)));
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__len 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_len_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__burst 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_burst_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__size 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_size_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__base 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_base_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__current 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__step 
                            = ((IData)(1U) << (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__size));
                        if ((0U == (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__burst))) {
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__nxt 
                                = vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__current;
                        } else if ((1U == (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__burst))) {
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__nxt 
                                = (vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__current 
                                   + vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__step);
                        } else if ((2U == (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__burst))) {
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__wrap_boundary 
                                = (((IData)(1U) + (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__len)) 
                                   << (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__size));
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__wrap_mask 
                                = (vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__wrap_boundary 
                                   - (IData)(1U));
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__nxt 
                                = ((vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__base 
                                    & (~ vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__wrap_mask)) 
                                   | ((vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__current 
                                       + vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__step) 
                                      & vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__wrap_mask));
                        } else {
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__nxt 
                                = (vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__current 
                                   + vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__step);
                        }
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__Vfuncout 
                            = vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__nxt;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_d 
                            = vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__42__Vfuncout;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
            if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_grant) 
                 & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) {
                if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dw_valid) {
                    if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_d2h[0U])) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_err_d = 1U;
                    }
                    if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_q) 
                         != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_len_q))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_d 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_q)));
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__len 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_len_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__burst 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_burst_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__size 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_size_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__base 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_base_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__current 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_q;
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__step 
                            = ((IData)(1U) << (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__size));
                        if ((0U == (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__burst))) {
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__nxt 
                                = vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__current;
                        } else if ((1U == (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__burst))) {
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__nxt 
                                = (vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__current 
                                   + vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__step);
                        } else if ((2U == (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__burst))) {
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__wrap_boundary 
                                = (((IData)(1U) + (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__len)) 
                                   << (IData)(vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__size));
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__wrap_mask 
                                = (vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__wrap_boundary 
                                   - (IData)(1U));
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__nxt 
                                = ((vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__base 
                                    & (~ vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__wrap_mask)) 
                                   | ((vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__current 
                                       + vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__step) 
                                      & vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__wrap_mask));
                        } else {
                            vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__nxt 
                                = (vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__current 
                                   + vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__step);
                        }
                        vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__Vfuncout 
                            = vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__nxt;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_d 
                            = vlSelf->__Vfunc_tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__calc_next_addr__43__Vfuncout;
                    }
                }
            }
        } else if (vlSelf->tb_otbn_axi__DOT__aw_valid) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_err_d = 0U;
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_d = 0U;
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_d 
                = vlSelf->tb_otbn_axi__DOT__aw_addr;
        }
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U] 
        = (IData)((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U])) 
                    << 0x28U) | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U])) 
                                  << 8U) | ((QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U])) 
                                            >> 0x18U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U])) 
                     << 0x28U) | (((QData)((IData)(
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U])) 
                                   << 8U) | ((QData)((IData)(
                                                             vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U])) 
                                             >> 0x18U))) 
                   >> 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
        = ((0xfeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U]) 
           | (1U & VL_REDXOR_32(((0x1fffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U]) 
                                 ^ (0xb9000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U])))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
        = ((0xfdU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0xffe0003fU 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U]) 
                                           ^ (0x5e00000fU 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U])))) 
                       << 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
        = ((0xfbU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x3e007c1U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U]) 
                                           ^ (0x67003ff0U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U])))) 
                       << 2U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
        = ((0xf7U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x3c207842U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U]) 
                                           ^ (0xcd0fc0f0U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U])))) 
                       << 3U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
        = ((0xefU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0xc4438884U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U]) 
                                           ^ (0xb671c711U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U])))) 
                       << 4U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
        = ((0xdfU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x488c9108U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U]) 
                                           ^ (0xb5b65926U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U])))) 
                       << 5U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
        = ((0xbfU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x91152210U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U]) 
                                           ^ (0xcbdaaa4aU 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U])))) 
                       << 6U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
        = ((0x7fU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x221a4420U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U]) 
                                           ^ (0x7aed348dU 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U])))) 
                       << 7U)));
    __Vtemp_28[1U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U];
    __Vtemp_28[2U] = (0xaaU ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[1U] 
        = __Vtemp_28[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
        = __Vtemp_28[2U];
    __Vfunc_extract_h2d_cmd_intg__45__tl[0U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U];
    __Vfunc_extract_h2d_cmd_intg__45__tl[1U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U];
    __Vfunc_extract_h2d_cmd_intg__45__tl[2U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U];
    __Vfunc_extract_h2d_cmd_intg__45__tl[3U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[3U];
    __Vfunc_extract_h2d_cmd_intg__45__tl[4U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[4U];
    vlSelf->__Vfunc_extract_h2d_cmd_intg__45__payload 
        = ((0x780000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__45__payload) 
           | (((QData)((IData)(__Vfunc_extract_h2d_cmd_intg__45__tl[3U])) 
               << 0xbU) | (QData)((IData)(((0x700U 
                                            & (__Vfunc_extract_h2d_cmd_intg__45__tl[4U] 
                                               >> 5U)) 
                                           | (__Vfunc_extract_h2d_cmd_intg__45__tl[2U] 
                                              >> 0x18U))))));
    vlSelf->__Vfunc_extract_h2d_cmd_intg__45__payload 
        = ((0x7ffffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__45__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__45__tl[0U] 
                                       >> 0x10U)))) 
              << 0x2bU));
    __Vfunc_extract_h2d_cmd_intg__45__Vfuncout = vlSelf->__Vfunc_extract_h2d_cmd_intg__45__payload;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__45__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT__cmd;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xfdffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x39U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xfbffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3aU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xf7ffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3bU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xefffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3cU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xdfffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3dU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xbfffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3eU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0x7fffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3fU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = (0x5400000000000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
        = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U]) 
           | ((IData)((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U])) 
                        << 0x28U) | (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U])) 
                                      << 8U) | ((QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U])) 
                                                >> 0x18U)))) 
              << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U] 
        = (((IData)((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U])) 
                      << 0x28U) | (((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U])) 
                                    << 8U) | ((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U])) 
                                              >> 0x18U)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U])) 
                                 << 0x28U) | (((QData)((IData)(
                                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U])) 
                                                 >> 0x18U))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U] 
        = ((0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U]) 
           | ((IData)(((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[2U])) 
                         << 0x28U) | (((QData)((IData)(
                                                       vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[1U])) 
                                       << 8U) | ((QData)((IData)(
                                                                 vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__tl_o_pre[0U])) 
                                                 >> 0x18U))) 
                       >> 0x20U)) >> 8U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
        = ((0xffff0001U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U]) 
           | (0xfffffffeU & ((0xfe00U & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
                                                  >> 0x39U)) 
                                         << 9U)) | 
                             (0x1feU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o[2U] 
                                        << 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__accept_t_rsp 
        = (IData)(((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_t_p[3U] 
                    >> 2U) & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0x11fffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0xe000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0x1e3ffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0x1c00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0x1fcffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0x300U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0x1ff00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][2U] 
        = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][2U]) | (0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][0U] 
        = ((0xfffffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][0U]) | (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0x11fffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0xe000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0x1e3ffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0x1c00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0x1fcffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0x300U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0x1ff00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][2U] 
        = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][2U]) | (0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][0U] 
        = ((0xfffffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][0U]) | (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0x11fffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0xe000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0x1e3ffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0x1c00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0x1fcffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0x300U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0x1ff00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][2U] 
        = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][2U]) | (0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][0U] 
        = ((0xfffffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][0U]) | (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][0U] 
        = ((0xfffffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][0U]) | (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0x11fffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0xe000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0x1e3ffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0x1c00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0x1fcffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0x300U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0x1ff00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][2U] 
        = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][2U]) | (0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][0U] 
        = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][0U]) | ((IData)((((QData)((IData)(
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                                   << 0x28U) | (((QData)((IData)(
                                                                 vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                   >> 0x18U)))) 
                         << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][1U] 
        = (((IData)((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                      << 0x28U) | (((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                    << 8U) | ((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                              >> 0x18U)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                                 << 0x28U) | (((QData)((IData)(
                                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                 >> 0x18U))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][2U] 
        = ((0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][2U]) | ((IData)(((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                                    << 0x28U) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                    >> 0x18U))) 
                                  >> 0x20U)) >> 8U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][0U] 
        = ((0xff000001U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][0U]) | (0xfffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__blanked_auser 
        = ((0x7f8000U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
                         >> 1U)) | ((([&]() {
                        vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[0U] 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U];
                        vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[1U] 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U];
                        vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[2U] 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U];
                        vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[3U] 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U];
                        vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[4U] 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U];
                        vlSelf->__Vfunc_get_cmd_intg__453__tl[0U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[0U];
                        vlSelf->__Vfunc_get_cmd_intg__453__tl[1U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[1U];
                        vlSelf->__Vfunc_get_cmd_intg__453__tl[2U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[2U];
                        vlSelf->__Vfunc_get_cmd_intg__453__tl[3U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[3U];
                        vlSelf->__Vfunc_get_cmd_intg__453__tl[4U] 
                            = vlSelf->__Vfunc_get_bad_cmd_intg__452__tl[4U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__454__tl[0U] 
                            = vlSelf->__Vfunc_get_cmd_intg__453__tl[0U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__454__tl[1U] 
                            = vlSelf->__Vfunc_get_cmd_intg__453__tl[1U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__454__tl[2U] 
                            = vlSelf->__Vfunc_get_cmd_intg__453__tl[2U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__454__tl[3U] 
                            = vlSelf->__Vfunc_get_cmd_intg__453__tl[3U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__454__tl[4U] 
                            = vlSelf->__Vfunc_get_cmd_intg__453__tl[4U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__454__payload 
                            = ((0x780000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__454__payload) 
                               | (((QData)((IData)(
                                                   vlSelf->__Vfunc_extract_h2d_cmd_intg__454__tl[3U])) 
                                   << 0xbU) | (QData)((IData)(
                                                              ((0x700U 
                                                                & (vlSelf->__Vfunc_extract_h2d_cmd_intg__454__tl[4U] 
                                                                   >> 5U)) 
                                                               | (vlSelf->__Vfunc_extract_h2d_cmd_intg__454__tl[2U] 
                                                                  >> 0x18U))))));
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__454__payload 
                            = ((0x7ffffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__454__payload) 
                               | ((QData)((IData)((0xfU 
                                                   & (vlSelf->__Vfunc_extract_h2d_cmd_intg__454__tl[0U] 
                                                      >> 0x10U)))) 
                                  << 0x2bU));
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__454__Vfuncout 
                            = vlSelf->__Vfunc_extract_h2d_cmd_intg__454__payload;
                        vlSelf->__Vfunc_get_cmd_intg__453__cmd 
                            = vlSelf->__Vfunc_extract_h2d_cmd_intg__454__Vfuncout;
                        vlSelf->__Vfunc_get_cmd_intg__453__cmd_intg 
                            = (0x7fU & (IData)((([&]() {
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_i 
                                                = vlSelf->__Vfunc_get_cmd_intg__453__cmd;
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o 
                                                = vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_i;
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x103fff800007fffULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o))))) 
                                                      << 0x39U));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x17c1ff801ff801fULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o))))) 
                                                      << 0x3aU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1bde1f87e0781e1ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o))))) 
                                                      << 0x3bU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1deee3b8e388e22ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o))))) 
                                                      << 0x3cU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1ef76cdb2c93244ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o))))) 
                                                      << 0x3dU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1f7bb56d5525488ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o))))) 
                                                      << 0x3eU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1fbdda769a46910ULL 
                                                                                & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o))))) 
                                                      << 0x3fU));
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o);
                                            vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__Vfuncout 
                                                = vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__data_o;
                                        }(), vlSelf->__Vfunc_prim_secded_inv_64_57_enc__455__Vfuncout) 
                                                >> 0x39U)));
                        __Vfunc_get_cmd_intg__453__unused_cmd_payload 
                            = (0x1ffffffffffffffULL 
                               & ([&]() {
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_i 
                                        = vlSelf->__Vfunc_get_cmd_intg__453__cmd;
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o 
                                        = vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_i;
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x103fff800007fffULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o))))) 
                                              << 0x39U));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x17c1ff801ff801fULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o))))) 
                                              << 0x3aU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1bde1f87e0781e1ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o))))) 
                                              << 0x3bU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1deee3b8e388e22ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o))))) 
                                              << 0x3cU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1ef76cdb2c93244ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o))))) 
                                              << 0x3dU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1f7bb56d5525488ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o))))) 
                                              << 0x3eU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1fbdda769a46910ULL 
                                                                               & vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o))))) 
                                              << 0x3fU));
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o);
                                    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__Vfuncout 
                                        = vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__data_o;
                                }(), vlSelf->__Vfunc_prim_secded_inv_64_57_enc__456__Vfuncout));
                        vlSelf->__Vfunc_get_cmd_intg__453__Vfuncout 
                            = vlSelf->__Vfunc_get_cmd_intg__453__cmd_intg;
                        vlSelf->__Vfunc_get_bad_cmd_intg__452__cmd_intg 
                            = vlSelf->__Vfunc_get_cmd_intg__453__Vfuncout;
                        vlSelf->__Vfunc_get_bad_cmd_intg__452__Vfuncout 
                            = (0x7fU & (~ (IData)(vlSelf->__Vfunc_get_bad_cmd_intg__452__cmd_intg)));
                    }(), (IData)(vlSelf->__Vfunc_get_bad_cmd_intg__452__Vfuncout)) 
                                     << 8U) | VL_EXTEND_II(8,7, 
                                                           ([&]() {
                        vlSelf->__Vfunc_get_bad_data_intg__457__data_intg 
                            = (0x7fU & ([&]() {
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U] = 0xffffffffU;
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U] = 0xffffffffU;
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] = 0U;
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] 
                                        = (0xfeU & 
                                           vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U]);
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] 
                                        = ((0xfdU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0xffe0003fU 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U]) 
                                                                  ^ 
                                                                  (0x5e00000fU 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U])))) 
                                                 << 1U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] 
                                        = ((0xfbU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x3e007c1U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U]) 
                                                                  ^ 
                                                                  (0x67003ff0U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U])))) 
                                                 << 2U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] 
                                        = ((0xf7U & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x3c207842U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U]) 
                                                                  ^ 
                                                                  (0xcd0fc0f0U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U])))) 
                                                 << 3U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] 
                                        = ((0xefU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0xc4438884U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U]) 
                                                                  ^ 
                                                                  (0xb671c711U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U])))) 
                                                 << 4U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] 
                                        = ((0xdfU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x488c9108U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U]) 
                                                                  ^ 
                                                                  (0xb5b65926U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U])))) 
                                                 << 5U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] 
                                        = ((0xbfU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x91152210U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U]) 
                                                                  ^ 
                                                                  (0xcbdaaa4aU 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U])))) 
                                                 << 6U)));
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] 
                                        = ((0x7fU & 
                                            vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U]) 
                                           | (0xffU 
                                              & ((1U 
                                                  & VL_REDXOR_32(
                                                                 ((0x221a4420U 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U]) 
                                                                  ^ 
                                                                  (0x7aed348dU 
                                                                   & vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U])))) 
                                                 << 7U)));
                                    __Vtemp_75[1U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U];
                                    __Vtemp_75[2U] 
                                        = (0xaaU ^ 
                                           vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U]);
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U] 
                                        = __Vtemp_75[1U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U] 
                                        = __Vtemp_75[2U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__Vfuncout[0U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[0U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__Vfuncout[1U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[1U];
                                    vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__Vfuncout[2U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__data_o[2U];
                                    vlSelf->__Vfunc_get_data_intg__458__enc_data[0U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__Vfuncout[0U];
                                    vlSelf->__Vfunc_get_data_intg__458__enc_data[1U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__Vfuncout[1U];
                                    vlSelf->__Vfunc_get_data_intg__458__enc_data[2U] 
                                        = vlSelf->__Vfunc_prim_secded_inv_72_64_enc__459__Vfuncout[2U];
                                    vlSelf->__Vfunc_get_data_intg__458__data_intg 
                                        = (0xffU & 
                                           vlSelf->__Vfunc_get_data_intg__458__enc_data[2U]);
                                    vlSelf->__Vfunc_get_data_intg__458__Vfuncout 
                                        = vlSelf->__Vfunc_get_data_intg__458__data_intg;
                                }(), (IData)(vlSelf->__Vfunc_get_data_intg__458__Vfuncout)));
                        vlSelf->__Vfunc_get_bad_data_intg__457__Vfuncout 
                            = (0x7fU & (~ (IData)(vlSelf->__Vfunc_get_bad_data_intg__457__data_intg)));
                    }(), (IData)(vlSelf->__Vfunc_get_bad_data_intg__457__Vfuncout)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                    << 0x28U) | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                  << 8U) | ((QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                            >> 0x18U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                     << 0x28U) | (((QData)((IData)(
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                   << 8U) | ((QData)((IData)(
                                                             vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                             >> 0x18U))) 
                   >> 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U] 
        = (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
                    >> 1U));
    __Vfunc_extract_h2d_cmd_intg__450__tl[0U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U];
    __Vfunc_extract_h2d_cmd_intg__450__tl[1U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U];
    __Vfunc_extract_h2d_cmd_intg__450__tl[2U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U];
    __Vfunc_extract_h2d_cmd_intg__450__tl[3U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U];
    __Vfunc_extract_h2d_cmd_intg__450__tl[4U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U];
    vlSelf->__Vfunc_extract_h2d_cmd_intg__450__payload 
        = ((0x780000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__450__payload) 
           | (((QData)((IData)(__Vfunc_extract_h2d_cmd_intg__450__tl[3U])) 
               << 0xbU) | (QData)((IData)(((0x700U 
                                            & (__Vfunc_extract_h2d_cmd_intg__450__tl[4U] 
                                               >> 5U)) 
                                           | (__Vfunc_extract_h2d_cmd_intg__450__tl[2U] 
                                              >> 0x18U))))));
    vlSelf->__Vfunc_extract_h2d_cmd_intg__450__payload 
        = ((0x7ffffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__450__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__450__tl[0U] 
                                       >> 0x10U)))) 
              << 0x2bU));
    __Vfunc_extract_h2d_cmd_intg__450__Vfuncout = vlSelf->__Vfunc_extract_h2d_cmd_intg__450__payload;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__450__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xfeU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_32((((0x1fffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                  ^ (0xb9000000U & 
                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                 ^ (1U & (0xaaU ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xfdU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0xffe0003fU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0x5e00000fU & 
                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (2U & (0xaaU ^ 
                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xfbU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x3e007c1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0x67003ff0U & 
                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (4U & (0xaaU ^ 
                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xf7U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x3c207842U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0xcd0fc0f0U & 
                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (8U & (0xaaU ^ 
                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 3U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xefU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0xc4438884U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0xb671c711U & 
                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (0x10U & (0xaaU 
                                              ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 4U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xdfU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x488c9108U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0xb5b65926U & 
                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (0x20U & (0xaaU 
                                              ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 5U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0xbfU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x91152210U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0xcbdaaa4aU & 
                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (0x40U & (0xaaU 
                                              ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 6U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | ((1U & VL_REDXOR_32((((0x221a4420U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]) 
                                   ^ (0x7aed348dU & 
                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U])) 
                                  ^ (0x80U & (0xaaU 
                                              ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[2U]))))) 
              << 7U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffffffcULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | (IData)((IData)(((2U & (((0xbU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                      << 1U) ^ (0xfffffffeU 
                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]))) 
                              | (1U & ((7U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U]))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffffff3ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x23U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 2U)))) 
                               | (1U & ((0x13U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 2U)))))) 
              << 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffffffcfULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x83U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 4U)))) 
                               | (1U & ((0x43U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 4U)))))) 
              << 4U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffffff3fULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x15U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3fffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 6U)))) 
                               | (1U & ((0xdU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 6U)))))) 
              << 6U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffffcffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x45U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 8U)))) 
                               | (1U & ((0x25U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 8U)))))) 
              << 8U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffff3ffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x19U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0xaU)))) 
                               | (1U & ((0x85U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0xaU)))))) 
              << 0xaU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffffcfffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x49U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0xcU)))) 
                               | (1U & ((0x29U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0xcU)))))) 
              << 0xcU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffff3fffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x31U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3fffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0xeU)))) 
                               | (1U & ((0x89U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0xeU)))))) 
              << 0xeU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffffcffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x91U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x10U)))) 
                               | (1U & ((0x51U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x10U)))))) 
              << 0x10U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffff3ffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xa1U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x12U)))) 
                               | (1U & ((0x61U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x12U)))))) 
              << 0x12U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffffcfffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xeU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x14U)))) 
                               | (1U & ((0xc1U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x14U)))))) 
              << 0x14U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffff3fffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x26U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3feU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x16U)))) 
                               | (1U & ((0x16U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x16U)))))) 
              << 0x16U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffffcffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x86U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x18U)))) 
                               | (1U & ((0x46U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x18U)))))) 
              << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffff3ffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x2aU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3eU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x1aU)))) 
                               | (1U & ((0x1aU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffffcfffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x8aU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                    >> 0x1cU)))) 
                               | (1U & ((0x4aU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                           >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffff3fffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)((((2U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                       >> 0x1eU)) ^ 
                                ((0x52U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                 << 1U)) | (1U & ((0x32U 
                                                   == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[0U] 
                                                   >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffcffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x62U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffffffeU 
                                                 & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U]))) 
                               | (1U & ((0x92U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U]))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffff3ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xc2U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 2U)))) 
                               | (1U & ((0xa2U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 2U)))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffcfffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x2cU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 4U)))) 
                               | (1U & ((0x1cU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 4U)))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffff3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x8cU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3fffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 6U)))) 
                               | (1U & ((0x4cU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 6U)))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffcffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x54U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 8U)))) 
                               | (1U & ((0x34U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 8U)))))) 
              << 0x28U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffff3ffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x64U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0xaU)))) 
                               | (1U & ((0x94U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0xaU)))))) 
              << 0x2aU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffcfffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xc4U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0xcU)))) 
                               | (1U & ((0xa4U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0xcU)))))) 
              << 0x2cU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffff3fffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x58U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3fffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0xeU)))) 
                               | (1U & ((0x38U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0xeU)))))) 
              << 0x2eU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffcffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x68U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x10U)))) 
                               | (1U & ((0x98U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x10U)))))) 
              << 0x30U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfff3ffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xc8U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3ffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x12U)))) 
                               | (1U & ((0xa8U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x12U)))))) 
              << 0x32U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffcfffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xb0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xffeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x14U)))) 
                               | (1U & ((0x70U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x14U)))))) 
              << 0x34U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xff3fffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xe0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3feU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x16U)))) 
                               | (1U & ((0xd0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x16U)))))) 
              << 0x36U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfcffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xd6U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xfeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x18U)))) 
                               | (1U & ((0x6dU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x18U)))))) 
              << 0x38U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xf3ffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xcbU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0x3eU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x1aU)))) 
                               | (1U & ((0x3eU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x1aU)))))) 
              << 0x3aU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xcfffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xb5U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                       << 1U) ^ (0xeU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                    >> 0x1cU)))) 
                               | (1U & ((0xb3U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                           >> 0x1cU)))))) 
              << 0x3cU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0x3fffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((QData)((IData)((((2U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                       >> 0x1eU)) ^ 
                                ((0x79U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                 << 1U)) | (1U & ((0xceU 
                                                   == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                  ^ 
                                                  (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i[1U] 
                                                   >> 0x1eU)))))) 
              << 0x3eU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (1U & VL_REDXOR_8(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
               & (0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
        = (((QData)((IData)((0x7fU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
                                      >> 9U)))) << 0x39U) 
           | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__cmd);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x303fff800007fffULL 
                                 & (0x5400000000000000ULL 
                                    ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x57c1ff801ff801fULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x9bde1f87e0781e1ULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 2U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x11deee3b8e388e22ULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 3U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x21ef76cdb2c93244ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 4U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x41f7bb56d5525488ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 5U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x81fbdda769a46910ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 6U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffffcULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | (IData)((IData)(((2U & (((0xbU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                 >> 1U))) 
                                     << 1U)) | (1U 
                                                & ((7U 
                                                    == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                   ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffff3ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x23U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 3U))) 
                                      << 1U)) | (1U 
                                                 & ((0x13U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 2U))))))) 
              << 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffffcfULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xdU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 5U))) 
                                      << 1U)) | (1U 
                                                 & ((0x43U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 4U))))))) 
              << 4U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffff3fULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x25U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 7U))) 
                                      << 1U)) | (1U 
                                                 & ((0x15U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 6U))))))) 
              << 6U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffcffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x19U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 9U))) 
                                      << 1U)) | (1U 
                                                 & ((0x45U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 8U))))))) 
              << 8U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffff3ffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x49U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xbU))) 
                                      << 1U)) | (1U 
                                                 & ((0x29U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xaU))))))) 
              << 0xaU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffcfffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x51U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xdU))) 
                                      << 1U)) | (1U 
                                                 & ((0x31U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xcU))))))) 
              << 0xcU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffff3fffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xeU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xfU))) 
                                      << 1U)) | (1U 
                                                 & ((0x61U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xeU))))))) 
              << 0xeU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffcffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x26U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x11U))) 
                                      << 1U)) | (1U 
                                                 & ((0x16U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x10U))))))) 
              << 0x10U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffff3ffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1aU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x13U))) 
                                      << 1U)) | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x12U))))))) 
              << 0x12U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffcfffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4aU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x15U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2aU 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x14U))))))) 
              << 0x14U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffff3fffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x52U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x17U))) 
                                      << 1U)) | (1U 
                                                 & ((0x32U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x16U))))))) 
              << 0x16U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffcffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1cU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x19U))) 
                                      << 1U)) | (1U 
                                                 & ((0x62U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x18U))))))) 
              << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffff3ffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4cU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x2cU 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1aU))))))) 
              << 0x1aU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffcfffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x54U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x34U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1cU))))))) 
              << 0x1cU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffff3fffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x38U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x64U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1eU))))))) 
              << 0x1eU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffcffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x68U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x21U))) 
                                      << 1U)) | (1U 
                                                 & ((0x58U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x20U))))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffff3ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1fU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x23U))) 
                                      << 1U)) | (1U 
                                                 & ((0x70U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x22U))))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffcfffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4fU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x25U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2fU 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x24U))))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffff3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x57U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x27U))) 
                                      << 1U)) | (1U 
                                                 & ((0x37U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x26U))))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffcffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3bU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x29U))) 
                                      << 1U)) | (1U 
                                                 & ((0x67U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x28U))))))) 
              << 0x28U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fff3ffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6bU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5bU 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2aU))))))) 
              << 0x2aU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffcfffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3dU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x73U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2cU))))))) 
              << 0x2cU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ff3fffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6dU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5dU 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2eU))))))) 
              << 0x2eU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fcffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x79U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x31U))) 
                                      << 1U)) | (1U 
                                                 & ((0x75U 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x30U))))))) 
              << 0x30U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1f3ffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x5eU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x33U))) 
                                      << 1U)) | (1U 
                                                 & ((0x3eU 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x32U))))))) 
              << 0x32U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1cfffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x76U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x35U))) 
                                      << 1U)) | (1U 
                                                 & ((0x6eU 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x34U))))))) 
              << 0x34U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x13fffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x7cU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x37U))) 
                                      << 1U)) | (1U 
                                                 & ((0x7aU 
                                                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x36U))))))) 
              << 0x36U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0xffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)((1U & ((0x7fU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                     ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (1U & VL_REDXOR_8(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__err)) 
               & (0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__intg_err 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U] 
            >> 0x10U) & (0U != ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__err) 
                                | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer 
        = (((0x4000U <= (0xffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U])) 
            & (0x5fffU >= (0xffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U])))
            ? 0U : (((0x8000U <= (0xffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U])) 
                     & (0x8bffU >= (0xffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[3U])))
                     ? 1U : 2U));
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__intg_err) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer = 2U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests 
        = ((0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding)) 
           & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer) 
              != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
        = (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
           [3U][0U]);
    if ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
            = (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
               [0U][0U]);
    }
    if ((1U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
            = (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
               [1U][0U]);
    }
    if ((2U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready 
            = (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i
               [2U][0U]);
    }
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready = 0U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[3U][4U] 
        = ((0xffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [3U][4U]) | (0x10000U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U] 
                                      & ((3U <= (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer)) 
                                         << 0x10U)) 
                                     & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
                                        << 0x10U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
           & (0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
           & (1U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests)) 
           & (2U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U] 
            >> 0x10U) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__hfifo_reqready));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][4U] 
        = ((0xffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][4U]) | (0x10000U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U] 
                                     & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select) 
                                        << 0x10U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][0U] 
        = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][0U]) | ((IData)(((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                   ? (((QData)((IData)(
                                                       vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                  >> 0x18U)))
                                   : 0xffffffffffffffffULL)) 
                         << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][1U] 
        = (((IData)(((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                      ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                  >> 0x18U)))
                      : 0xffffffffffffffffULL)) >> 8U) 
           | ((IData)((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                         ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                             << 0x28U) | (((QData)((IData)(
                                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                           >> 0x18U)))
                         : 0xffffffffffffffffULL) >> 0x20U)) 
              << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][2U] 
        = ((0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][2U]) | ((IData)((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                    ? (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                   >> 0x18U)))
                                    : 0xffffffffffffffffULL) 
                                  >> 0x20U)) >> 8U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[0U][0U] 
        = ((0xff000001U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [0U][0U]) | (0xfffffeU & (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                        ? ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
                                              >> 1U))
                                        : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                      << 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][4U] 
        = ((0xffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][4U]) | (0x10000U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U] 
                                     & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select) 
                                        << 0x10U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][0U] 
        = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][0U]) | ((IData)(((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                   ? (((QData)((IData)(
                                                       vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                  >> 0x18U)))
                                   : 0xffffffffffffffffULL)) 
                         << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][1U] 
        = (((IData)(((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                      ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                  >> 0x18U)))
                      : 0xffffffffffffffffULL)) >> 8U) 
           | ((IData)((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                         ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                             << 0x28U) | (((QData)((IData)(
                                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                           >> 0x18U)))
                         : 0xffffffffffffffffULL) >> 0x20U)) 
              << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][2U] 
        = ((0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][2U]) | ((IData)((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                    ? (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                   >> 0x18U)))
                                    : 0xffffffffffffffffULL) 
                                  >> 0x20U)) >> 8U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[1U][0U] 
        = ((0xff000001U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [1U][0U]) | (0xfffffeU & (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                        ? ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
                                              >> 1U))
                                        : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                      << 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][4U] 
        = ((0xffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][4U]) | (0x10000U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U] 
                                     & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select) 
                                        << 0x10U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][0U] 
        = ((0xffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][0U]) | ((IData)(((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                   ? (((QData)((IData)(
                                                       vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                  >> 0x18U)))
                                   : 0xffffffffffffffffULL)) 
                         << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][1U] 
        = (((IData)(((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                      ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                  >> 0x18U)))
                      : 0xffffffffffffffffULL)) >> 8U) 
           | ((IData)((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                         ? (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                             << 0x28U) | (((QData)((IData)(
                                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                           >> 0x18U)))
                         : 0xffffffffffffffffULL) >> 0x20U)) 
              << 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][2U] 
        = ((0xff000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][2U]) | ((IData)((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                    ? (((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[2U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[1U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U])) 
                                                   >> 0x18U)))
                                    : 0xffffffffffffffffULL) 
                                  >> 0x20U)) >> 8U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o[2U][0U] 
        = ((0xff000001U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
            [2U][0U]) | (0xfffffeU & (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                        ? ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[0U] 
                                              >> 1U))
                                        : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__blanked_auser) 
                                      << 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__accept_t_req 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__tl_h2d[4U] 
            >> 0x10U) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [0U][4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [1U][4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
        [2U][4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[0U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[0U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[0U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[0U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[0U][4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[1U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[1U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[1U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[1U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[1U][4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[2U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[2U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[2U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[2U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[2U][4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int = 0ULL;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_intg = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_intg = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[0U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [0U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[0U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [0U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[0U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [0U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[0U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [0U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[0U][4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [0U][4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[1U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [1U][0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[1U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [1U][1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[1U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [1U][2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[1U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [1U][3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__tl_win_h2d[1U][4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
        [1U][4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[7U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_rready 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
           & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
           [0U][0U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_rready 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
           & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
           [1U][0U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_index 
        = (0x7fU & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                     ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked) 
                        >> 5U) : ((0x10000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                   [1U][4U]) ? ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                 [1U][3U] 
                                                 << 0x1bU) 
                                                | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][3U] 
                                                   >> 5U))
                                   : 0U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x10000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
         [1U][4U])) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__unnamedblk1__DOT__i = 8U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg 
            = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg 
               | (0xffffffffULL & ((IData)(0xffU) << 
                                   (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                          (3U 
                                                           & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                              [1U][3U] 
                                                              >> 3U)), 3U)))));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg 
            = (((~ ((IData)(0xffU) << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                 [1U][3U] 
                                                                 >> 3U)), 3U)))) 
                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg) 
               | (0xffffffffULL & ((0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][0U] 
                                             >> 1U)) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                 [1U][3U] 
                                                                 >> 3U)), 3U)))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & VL_SHIFTL_III(8,32,32, 
                                                     (3U 
                                                      & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                         [1U][3U] 
                                                         >> 3U)), 6U)), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x18U))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(8U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x19U))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1aU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1bU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1cU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1dU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((1U & (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][2U] 
                                                   >> 0x1eU))))));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0xffU & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][2U] 
                                             >> 0x1fU)))));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][4U] >> 8U))) || (1U 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                           [1U][4U] 
                                                           >> 8U)))
                                                       ? 
                                                      (~ 
                                                       vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [1U][3U])
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][4U] 
                                                            >> 8U)))
                                                        ? 
                                                       (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                    [1U][3U]))))
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                             [1U][4U] 
                                                             >> 8U))) 
                                                        && (1U 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (7U 
                                                                           & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                           [1U][3U]))))))))));
        if ((0U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                          [1U][4U] >> 8U)))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xffU & 
                                           (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                              [1U][2U] 
                                              << 8U) 
                                             | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [1U][2U] 
                                                >> 0x18U)) 
                                            & (~ ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][3U])))))))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xffU & (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [1U][2U] << 8U) 
                                    | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [1U][2U] >> 0x18U)) 
                                   & ((IData)(1U) << 
                                      (7U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [1U][3U])))));
        } else if ((1U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][4U] >> 8U)))) {
            if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                 [1U][3U])) {
                if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                     [1U][3U])) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0x3fU 
                                                   & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                      [1U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                  [1U][2U] >> 0x1eU));
                } else {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0xcfU 
                                                   & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                      [1U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                        [1U][2U] >> 0x1cU)));
                }
            } else if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                        [1U][3U])) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf3U 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                    [1U][2U] >> 0x1aU)));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfcU 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                    [1U][2U] >> 0x18U)));
            }
        } else if ((2U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][4U] >> 8U)))) {
            if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                 [1U][3U])) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfU 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                [1U][2U] >> 0x1cU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf0U 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                        [1U][2U] >> 0x18U)));
            }
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk 
                = (1U & (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][4U] >> 8U))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk 
                = ((3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][4U] >> 8U))) 
                   && (0xffU == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][2U] >> 0x18U)));
        }
    }
    if ((0x10000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
         [0U][4U])) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffffffffff00ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | (IData)((IData)((0xffU & (- (IData)(
                                                     (1U 
                                                      & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                         [0U][2U] 
                                                         >> 0x18U))))))));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffffffff00ffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x19U))))))) 
                  << 8U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffffff00ffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1aU))))))) 
                  << 0x10U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffff00ffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1bU))))))) 
                  << 0x18U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffff00ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1cU))))))) 
                  << 0x20U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffff00ffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1dU))))))) 
                  << 0x28U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xff00ffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [0U][2U] 
                                                          >> 0x1eU))))))) 
                  << 0x30U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int 
            = ((0xffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_int) 
               | ((QData)((IData)((0xffU & (- (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [0U][2U] 
                                                       >> 0x1fU)))))) 
                  << 0x38U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__unnamedblk1__DOT__i = 8U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wmask_intg = 0xffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_intg 
            = (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                        [0U][0U] >> 1U));
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__442__val 
                    = (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__442__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__442__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__442__Vfuncout)) 
           & ((0U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                            [1U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [1U][4U] 
                                                       >> 0xdU)))));
    __Vfunc_mubi4_test_invalid__443__val = (0xfU & 
                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][0U] 
                                             >> 0x10U));
    __Vfunc_mubi4_test_invalid__443__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__443__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__443__val)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__443__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__instr_error 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__437__val 
                    = (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_invalid__437__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__437__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__437__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__437__Vfuncout)) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__438__val 
                    = (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__438__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__438__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__438__Vfuncout)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x10000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
         [0U][4U])) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_index_bus 
            = (0x7ffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                         [0U][3U] >> 3U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                             [0U][4U] >> 8U))) || (1U 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                           [0U][4U] 
                                                           >> 8U)))
                                                       ? 
                                                      (~ 
                                                       vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [0U][3U])
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [0U][4U] 
                                                            >> 8U)))
                                                        ? 
                                                       (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                    [0U][3U]))))
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                             [0U][4U] 
                                                             >> 8U))) 
                                                        && (1U 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (7U 
                                                                           & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                           [0U][3U]))))))))));
        if ((0U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                          [0U][4U] >> 8U)))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xffU & 
                                           (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                              [0U][2U] 
                                              << 8U) 
                                             | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][2U] 
                                                >> 0x18U)) 
                                            & (~ ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [0U][3U])))))))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xffU & (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] << 8U) 
                                    | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][2U] >> 0x18U)) 
                                   & ((IData)(1U) << 
                                      (7U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][3U])))));
        } else if ((1U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][4U] >> 8U)))) {
            if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                 [0U][3U])) {
                if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                     [0U][3U])) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0x3fU 
                                                   & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                      [0U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                  [0U][2U] >> 0x1eU));
                } else {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0xcfU 
                                                   & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                      [0U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                        [0U][2U] >> 0x1cU)));
                }
            } else if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                        [0U][3U])) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf3U 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][2U] >> 0x1aU)));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfcU 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][2U] >> 0x18U)));
            }
        } else if ((2U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][4U] >> 8U)))) {
            if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                 [0U][3U])) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfU 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                [0U][2U] >> 0x1cU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf0U 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                        [0U][2U] >> 0x18U)));
            }
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk 
                = (1U & (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                      [0U][4U] >> 8U))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk 
                = ((3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][4U] >> 8U))) 
                   && (0xffU == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [0U][2U] >> 0x18U)));
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_index_bus = 0U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__247__val 
                    = (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__247__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__247__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__247__Vfuncout)) 
           & ((0U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                            [0U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [0U][4U] 
                                                       >> 0xdU)))));
    __Vfunc_mubi4_test_invalid__248__val = (0xfU & 
                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][0U] 
                                             >> 0x10U));
    __Vfunc_mubi4_test_invalid__248__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__248__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__248__val)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__248__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__instr_error 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__242__val 
                    = (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_invalid__242__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__242__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__242__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__242__Vfuncout)) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__243__val 
                    = (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__243__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__243__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__243__Vfuncout)));
    vlSelf->__VdfgRegularize_hd87f99a1_3_4 = ((0U == 
                                               (7U 
                                                & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [1U][4U] 
                                                   >> 0xdU))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                     [1U][4U] 
                                                     >> 0xdU))));
    vlSelf->__VdfgRegularize_hd87f99a1_3_2 = ((0U == 
                                               (7U 
                                                & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [0U][4U] 
                                                   >> 0xdU))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                     [0U][4U] 
                                                     >> 0xdU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit 
        = ((0x7f8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit)) 
           | (((8U == (0xfffcU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                       [2U][3U])) << 2U) | (((4U == 
                                              (0xfffcU 
                                               & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                               [2U][3U])) 
                                             << 1U) 
                                            | (0U == 
                                               (0xfffcU 
                                                & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][3U])))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit 
        = ((0x7c7U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit)) 
           | (((0x14U == (0xfffcU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][3U])) << 5U) | (((0x10U 
                                                 == 
                                                 (0xfffcU 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][3U])) 
                                                << 4U) 
                                               | ((0xcU 
                                                   == 
                                                   (0xfffcU 
                                                    & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][3U])) 
                                                  << 3U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit 
        = ((0x63fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit)) 
           | (((0x20U == (0xfffcU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][3U])) << 8U) | (((0x1cU 
                                                 == 
                                                 (0xfffcU 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][3U])) 
                                                << 7U) 
                                               | ((0x18U 
                                                   == 
                                                   (0xfffcU 
                                                    & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][3U])) 
                                                  << 6U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit 
        = ((0x1ffU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit)) 
           | (((0x28U == (0xfffcU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][3U])) << 0xaU) | ((0x24U 
                                                  == 
                                                  (0xfffcU 
                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][3U])) 
                                                 << 9U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x10000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
         [2U][4U])) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                             [2U][4U] >> 8U))) || (1U 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                           [2U][4U] 
                                                           >> 8U)))
                                                       ? 
                                                      (~ 
                                                       vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][3U])
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [2U][4U] 
                                                            >> 8U)))
                                                        ? 
                                                       (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                    [2U][3U]))))
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                             [2U][4U] 
                                                             >> 8U))) 
                                                        && (1U 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (7U 
                                                                           & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                           [2U][3U]))))))))));
        if ((0U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                          [2U][4U] >> 8U)))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xffU & 
                                           (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                              [2U][2U] 
                                              << 8U) 
                                             | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][2U] 
                                                >> 0x18U)) 
                                            & (~ ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][3U])))))))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xffU & (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [2U][2U] << 8U) 
                                    | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [2U][2U] >> 0x18U)) 
                                   & ((IData)(1U) << 
                                      (7U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [2U][3U])))));
        } else if ((1U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][4U] >> 8U)))) {
            if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                 [2U][3U])) {
                if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                     [2U][3U])) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0x3fU 
                                                   & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                  [2U][2U] >> 0x1eU));
                } else {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                        = (1U & (~ (IData)((0U != (0xcfU 
                                                   & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][2U] 
                                                      >> 0x18U))))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                        = (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                        [2U][2U] >> 0x1cU)));
                }
            } else if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                        [2U][3U])) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf3U 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                    [2U][2U] >> 0x1aU)));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfcU 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                    [2U][2U] >> 0x18U)));
            }
        } else if ((2U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][4U] >> 8U)))) {
            if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                 [2U][3U])) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xfU 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                [2U][2U] >> 0x1cU));
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xf0U 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][2U] 
                                                  >> 0x18U))))));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (0xfU == (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                        [2U][2U] >> 0x18U)));
            }
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                      [2U][4U] >> 8U))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = ((3U == (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][4U] >> 8U))) 
                   && (0xffU == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [2U][2U] >> 0x18U)));
        }
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelf->__Vfunc_mubi4_test_true_strict__462__val 
                = (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [2U][0U] >> 0x10U));
            vlSelf->__Vfunc_mubi4_test_true_strict__462__Vfuncout 
                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__462__val));
        }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__462__Vfuncout));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__464__val 
                    = (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                               [2U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__464__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__464__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__464__Vfuncout)) 
           & ((0U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][4U] 
                                                       >> 0xdU)))));
    __Vfunc_mubi4_test_invalid__465__val = (0xfU & 
                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                             [2U][0U] 
                                             >> 0x10U));
    __Vfunc_mubi4_test_invalid__465__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__465__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__465__val)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__465__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                  [2U][4U] >> 0x10U) & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[0U] 
        = (IData)((((QData)((IData)((0x7fU & (- (IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U])))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[1U] 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U] 
            << 7U) | (IData)(((((QData)((IData)((0x7fU 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U])))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U]))) 
                              >> 0x20U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[2U] 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U] 
            << 0xeU) | ((0x3f80U & ((- (IData)((0U 
                                                != 
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U]))) 
                                    << 7U)) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U] 
                                               >> 0x19U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[3U] 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U] 
            << 0x15U) | ((0x1fc000U & ((- (IData)((0U 
                                                   != 
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U]))) 
                                       << 0xeU)) | 
                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U] 
                          >> 0x12U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[4U] 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U] 
            << 0x1cU) | ((0xfe00000U & ((- (IData)(
                                                   (0U 
                                                    != 
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U]))) 
                                        << 0x15U)) 
                         | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U] 
                            >> 0xbU)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[5U] 
        = (((- (IData)((0U != vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U]))) 
            << 0x1cU) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U] 
                         >> 4U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[6U] 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U] 
            << 3U) | (7U & ((- (IData)((0U != vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U]))) 
                            >> 4U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[7U] 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U] 
            << 0xaU) | ((0x3f8U & ((- (IData)((0U != 
                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U]))) 
                                   << 3U)) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U] 
                                              >> 0x1dU)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[8U] 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U] 
            << 0x11U) | ((0x1fc00U & ((- (IData)((0U 
                                                  != 
                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U]))) 
                                      << 0xaU)) | (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U] 
                                                   >> 0x16U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[9U] 
        = ((0xfe0000U & ((- (IData)((0U != vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U]))) 
                         << 0x11U)) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U] 
                                       >> 0xfU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                  ? (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h91740543__0) 
                        & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h917431f2__0)) 
                           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_rready))))
                  : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_rready)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                  ? (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h91740543__2) 
                        & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h917431f2__2)) 
                           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_rready))))
                  : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_rready)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = (0x7fU & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_index) 
                    ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x70U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h2097fbbd__0));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x3fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 6U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x5fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 5U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x6fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 4U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x77U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 3U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7bU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 2U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7dU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0) 
              << 1U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped 
        = ((0x7eU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped)) 
           | (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h59948889__0));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 
        = (1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7eU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x77U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0) 
              << 3U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7dU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0) 
              << 1U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x6fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0) 
              << 4U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x7bU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h85950cb8__0) 
              << 2U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = ((0x5fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h32643f11__0) 
              << 5U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__13__03a7__KET__ 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                     << 7U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_index))) 
                   ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)(((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                      << 7U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_index))) 
                    ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0) 
                   >> 0x20U));
    __Vtemp_124 = ((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                   ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))) 
                   ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U])))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_124 >> 0x20U));
    __Vtemp_125 = (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U])));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_125 >> 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
            [1U][4U] >> 0x10U) & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_4));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__error_det 
        = (1U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_4) 
                  & ((0xffU != (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                [1U][2U] >> 0x18U)) 
                     | (3U != (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [1U][4U] >> 8U))))) 
                 | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                          [1U][4U] 
                                          >> 0xdU))) 
                            | ((1U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][4U] 
                                             >> 0xdU))) 
                               | (4U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                               [1U][4U] 
                                               >> 0xdU))))) 
                           & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__addr_sz_chk) 
                              & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__mask_chk) 
                                 & ((4U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][4U] 
                                                  >> 0xdU))) 
                                    | ((1U == (7U & 
                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [1U][4U] 
                                                >> 0xdU))) 
                                       | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_type_err) 
                          | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
            [0U][4U] >> 0x10U) & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_2));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_det 
        = (1U & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_2) 
                  & ((0xffU != (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                [0U][2U] >> 0x18U)) 
                     | (3U != (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][4U] >> 8U))))) 
                 | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                          [0U][4U] 
                                          >> 0xdU))) 
                            | ((1U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][4U] 
                                             >> 0xdU))) 
                               | (4U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                               [0U][4U] 
                                               >> 0xdU))))) 
                           & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__addr_sz_chk) 
                              & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__mask_chk) 
                                 & ((4U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [0U][4U] 
                                                  >> 0xdU))) 
                                    | ((1U == (7U & 
                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][4U] 
                                                >> 0xdU))) 
                                       | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_type_err) 
                          | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))))) {
        if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_state__q));
        } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_enable__q));
        } else if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x10U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = (0xffffff00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x20U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__software_errs_fatal_q));
        } else if ((0x40U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_status__DOT__q));
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__err_bits_q)));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xff0000U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__err_bits_q) 
                                   << 8U)));
        }
    } else if ((0x100U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff0U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bus_intg_violation__DOT__q) 
                   << 3U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_reg_intg_violation__DOT__q) 
                              << 2U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_dmem_intg_violation__DOT__q) 
                                         << 1U) | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_imem_intg_violation__DOT__q)))));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff0fU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_fatal_software__DOT__q) 
                   << 7U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_lifecycle_escalation__DOT__q) 
                              << 6U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_illegal_bus_access__DOT__q) 
                                         << 5U) | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__q) 
                                                   << 4U)))));
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x200U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))
                ? vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q
                : ((0x400U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))
                    ? (~ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_q)
                    : 0xffffffffU));
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [2U][4U] >> 0xdU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][4U] 
                                                       >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = (0x7fU & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__13__03a7__KET__) 
                    ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0 
        = (0xfU & (IData)((0x21748fe3da09b65cULL >> 
                           (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)), 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x70U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h8321cc35__0));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x3fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 6U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x5fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 5U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x6fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 4U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 3U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x77U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 3U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 4U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7bU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 2U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 5U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7dU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0) 
              << 1U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                 >> 6U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = ((0x7eU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped)) 
           | (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h30b830fd__0));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped;
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 
        = (1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7eU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x77U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0) 
              << 3U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7dU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0) 
              << 1U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 3U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x6fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0) 
              << 4U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 4U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x7bU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_h1962820c__0) 
              << 2U));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped) 
                 >> 5U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = ((0x5fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox)) 
           | ((IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT____Vlvbound_hb43bc393__0) 
              << 5U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__20__03a14__KET__ 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[0U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[1U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[2U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[3U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[4U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[5U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[6U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[7U] 
        = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[7U];
    if ((0x10000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
         [1U][4U])) {
        VL_ASSIGNSEL_WI(256,8,(0xffU & VL_SHIFTL_III(8,32,32, 
                                                     (3U 
                                                      & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                         [1U][3U] 
                                                         >> 3U)), 6U)), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x18U) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus))
                          ? (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][0U] >> 0x18U) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(8U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x19U) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus))
                          ? (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][1U]) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1aU) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][1U] >> 8U))
                          : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1bU) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][1U] >> 0x10U))
                          : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x20U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1cU) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus))
                          ? (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][1U] >> 0x18U) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x28U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1dU) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus))
                          ? (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                             [1U][2U]) : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x30U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1eU) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][2U] >> 8U))
                          : 0U));
        VL_ASSIGNSEL_WI(256,8,(0xffU & ((IData)(0x38U) 
                                        + VL_SHIFTL_III(8,32,32, 
                                                        (3U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [1U][3U] 
                                                            >> 3U)), 6U))), vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [1U][2U] >> 0x1fU) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus))
                          ? (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                      [1U][2U] >> 0x10U))
                          : 0U));
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_req_bus 
        = (1U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                  [1U][4U] >> 0x10U) & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__error_det)) 
                                        & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int = 0ULL;
    if ((0x10000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
         [0U][4U])) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffffffffff00ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | (IData)((IData)((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                    [0U][2U] >> 0x18U) 
                                   & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus))
                                   ? (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                      [0U][0U] >> 0x18U)
                                   : 0U))));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffffffff00ffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x19U) 
                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus))
                                    ? (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][1U]) : 0U))) 
                  << 8U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffffff00ffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1aU) 
                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus))
                                    ? (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][1U] 
                                                >> 8U))
                                    : 0U))) << 0x10U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffff00ffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1bU) 
                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus))
                                    ? (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][1U] 
                                                >> 0x10U))
                                    : 0U))) << 0x18U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffff00ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1cU) 
                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus))
                                    ? (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][1U] >> 0x18U)
                                    : 0U))) << 0x20U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffff00ffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1dU) 
                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus))
                                    ? (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [0U][2U]) : 0U))) 
                  << 0x28U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xff00ffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1eU) 
                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus))
                                    ? (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][2U] 
                                                >> 8U))
                                    : 0U))) << 0x30U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
            = ((0xffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int) 
               | ((QData)((IData)((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [0U][2U] >> 0x1fU) 
                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus))
                                    ? (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [0U][2U] 
                                                >> 0x10U))
                                    : 0U))) << 0x38U));
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write 
        = ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_access_core))) 
           && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req_bus 
        = (1U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                  [0U][4U] >> 0x10U) & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_det)) 
                                        & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][3U]))) | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                                           | ((~ ((
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][4U] 
                                                        >> 0xdU))) 
                                                   | ((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                           [2U][4U] 
                                                           >> 0xdU))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                             [2U][4U] 
                                                             >> 0xdU))))) 
                                                  & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                     & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                        & ((4U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                [2U][4U] 
                                                                >> 0xdU))) 
                                                           | ((1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                   [2U][4U] 
                                                                   >> 0xdU))) 
                                                              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                              | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err) 
                                                 | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__addr_scr 
        = (0x7fU & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__20__03a14__KET__) 
                    ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[1U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[2U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[3U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[4U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[5U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[6U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[7U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x21U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x23U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x25U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
        = (0x2a00000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_dummy_response_d 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_req_bus));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_wvalid 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_write_bus)) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_req_bus));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_req_bus) 
            | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__missed_err_gnt_q)) 
           & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
              & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded 
        = ((0x7effffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded))))) 
              << 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded 
        = ((0x7dffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded))))) 
              << 0x21U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded 
        = ((0x7bffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded))))) 
              << 0x22U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded 
        = ((0x77ffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded))))) 
              << 0x23U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded 
        = ((0x6fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded))))) 
              << 0x24U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded 
        = ((0x5fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded))))) 
              << 0x25U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded 
        = ((0x3fffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded))))) 
              << 0x26U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded 
        = (0x2a00000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_dummy_response_d 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req_bus) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_access_core));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_wvalid 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write_bus)) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req_bus));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req_bus) 
            | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__missed_err_gnt_q)) 
           & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
              & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__mem_crc_data_in 
        = (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req_bus)) 
            << 0x2fU) | (((QData)((IData)(((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req_bus)
                                            ? (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_index_bus)
                                            : (0x3ffU 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [1U][3U] 
                                                  >> 2U))))) 
                          << 0x20U) | (QData)((IData)(
                                                      ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req_bus)
                                                        ? (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int)
                                                        : 
                                                       ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                         [1U][1U] 
                                                         << 8U) 
                                                        | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                           [1U][0U] 
                                                           >> 0x18U)))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_access_core)
            ? (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__prefetch_en)
            : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req_bus));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_rready))
                  : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_wvalid)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_wvalid 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
            [1U][4U] >> 0x10U) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_rready))
                  : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_wvalid)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_wvalid 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
            [0U][4U] >> 0x10U) & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_gnt 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_we) 
           & (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
               & (0U != (1U & (~ ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                   [2U][2U] << 8U) 
                                  | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                     [2U][2U] >> 0x18U)))))) 
              | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
                   >> 1U) & (0U != (1U & (~ ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                              [2U][2U] 
                                              << 8U) 
                                             | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][2U] 
                                                >> 0x18U)))))) 
                 | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
                      >> 2U) & (0U != (1U & (~ ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                 [2U][2U] 
                                                 << 8U) 
                                                | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][2U] 
                                                   >> 0x18U)))))) 
                    | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
                         >> 3U) & (0U != (1U & (~ (
                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][2U] 
                                                    << 8U) 
                                                   | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][2U] 
                                                      >> 0x18U)))))) 
                       | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
                            >> 4U) & (0U != (1U & (~ 
                                                   ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][2U] 
                                                     << 8U) 
                                                    | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][2U] 
                                                       >> 0x18U)))))) 
                          | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
                               >> 5U) & (0U != (1U 
                                                & (~ 
                                                   ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][2U] 
                                                     << 8U) 
                                                    | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][2U] 
                                                       >> 0x18U)))))) 
                             | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
                                  >> 6U) & (0U != (1U 
                                                   & (~ 
                                                      ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][2U] 
                                                        << 8U) 
                                                       | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][2U] 
                                                          >> 0x18U)))))) 
                                | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
                                     >> 7U) & (0U != 
                                               (7U 
                                                & (~ 
                                                   ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][2U] 
                                                     << 8U) 
                                                    | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][2U] 
                                                       >> 0x18U)))))) 
                                   | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (0U 
                                                  != 
                                                  (1U 
                                                   & (~ 
                                                      ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][2U] 
                                                        << 8U) 
                                                       | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][2U] 
                                                          >> 0x18U)))))) 
                                      | ((IData)((0U 
                                                  != 
                                                  (0x600U 
                                                   & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit)))) 
                                         & (0U != (0xfU 
                                                   & (~ 
                                                      ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][2U] 
                                                        << 8U) 
                                                       | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][2U] 
                                                          >> 0x18U))))))))))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addrmiss 
        = ((~ (IData)((0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit)))) 
           & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_re) 
              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_we)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_rready))
                  : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_wvalid)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_rready))
                  : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_wvalid)));
    __Vfunc_mubi4_bool_to_mubi__55__val = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_gnt) 
                                           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write));
    __Vfunc_mubi4_bool_to_mubi__55__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__55__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_d 
        = __Vfunc_mubi4_bool_to_mubi__55__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__54__val = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_gnt) 
                                           & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_write)));
    __Vfunc_mubi4_bool_to_mubi__54__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__54__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__read_en 
        = __Vfunc_mubi4_bool_to_mubi__54__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_error 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__intg_err)));
    __Vfunc_mubi4_test_true_loose__85__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_d;
    __Vfunc_mubi4_test_true_loose__85__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__85__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_b 
        = __Vfunc_mubi4_test_true_loose__85__Vfuncout;
    __Vfunc_mubi4_test_true_loose__84__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_test_true_loose__84__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__84__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__read_en_b 
        = __Vfunc_mubi4_test_true_loose__84__Vfuncout;
    __Vfunc_mubi4_and_hi__72__b = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_and_hi__72__a = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_q;
    __Vfunc_mubi4_and__73__b = __Vfunc_mubi4_and_hi__72__b;
    __Vfunc_mubi4_and__73__a = __Vfunc_mubi4_and_hi__72__a;
    __Vfunc_mubi4_and__73__a_in = __Vfunc_mubi4_and__73__a;
    __Vfunc_mubi4_and__73__b_in = __Vfunc_mubi4_and__73__b;
    vlSelf->__Vfunc_mubi4_and__73__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__73__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_and__73__a_in) 
                                               & (IData)(__Vfunc_mubi4_and__73__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_and__73__a_in) 
                                                   | (IData)(__Vfunc_mubi4_and__73__b_in)))));
    vlSelf->__Vfunc_mubi4_and__73__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__73__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_and__73__a_in) 
                                               | (IData)(__Vfunc_mubi4_and__73__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_and__73__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__73__b_in)))));
    __Vfunc_mubi4_and__73__Vfuncout = vlSelf->__Vfunc_mubi4_and__73__out;
    __Vfunc_mubi4_and_hi__72__Vfuncout = __Vfunc_mubi4_and__73__Vfuncout;
    __Vfunc_mubi4_test_true_loose__71__val = __Vfunc_mubi4_and_hi__72__Vfuncout;
    __Vfunc_mubi4_test_true_loose__71__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__71__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rw_collision 
        = __Vfunc_mubi4_test_true_loose__71__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__macro_write 
        = ((([&]() {
                    vlSelf->__Vfunc_mubi4_or_hi__68__b 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_pending_q;
                    vlSelf->__Vfunc_mubi4_or_hi__68__a 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_q;
                    vlSelf->__Vfunc_mubi4_or__69__b 
                        = vlSelf->__Vfunc_mubi4_or_hi__68__b;
                    vlSelf->__Vfunc_mubi4_or__69__a 
                        = vlSelf->__Vfunc_mubi4_or_hi__68__a;
                    vlSelf->__Vfunc_mubi4_or__69__a_in 
                        = vlSelf->__Vfunc_mubi4_or__69__a;
                    vlSelf->__Vfunc_mubi4_or__69__b_in 
                        = vlSelf->__Vfunc_mubi4_or__69__b;
                    vlSelf->__Vfunc_mubi4_or__69__out 
                        = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__69__out)) 
                           | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__69__a_in) 
                                     | (IData)(vlSelf->__Vfunc_mubi4_or__69__b_in))) 
                              | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__69__a_in) 
                                       & (IData)(vlSelf->__Vfunc_mubi4_or__69__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__69__out 
                        = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__69__out)) 
                           | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__69__a_in) 
                                     & (IData)(vlSelf->__Vfunc_mubi4_or__69__b_in))) 
                              | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__69__a_in) 
                                       | (IData)(vlSelf->__Vfunc_mubi4_or__69__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__69__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__69__out;
                    vlSelf->__Vfunc_mubi4_or_hi__68__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__69__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__67__val 
                        = vlSelf->__Vfunc_mubi4_or_hi__68__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__67__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__67__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__67__Vfuncout)) 
            & (~ ([&]() {
                        vlSelf->__Vfunc_mubi4_test_true_loose__70__val 
                            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__read_en;
                        vlSelf->__Vfunc_mubi4_test_true_loose__70__Vfuncout 
                            = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__70__val));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__70__Vfuncout)))) 
           & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_w_q)));
    tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_we));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_scr_pending_d 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__macro_write)
            ? 9U : ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rw_collision)
                     ? 6U : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_pending_q)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wpending 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__macro_write) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_loose__74__val 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_d;
                vlSelf->__Vfunc_mubi4_test_true_loose__74__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__74__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__74__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__95__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__95__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__95__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__95__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
            >> 1U) & (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__intr_state_we 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
           & (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__cmd_we 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
            >> 4U) & (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__load_checksum_we 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
            >> 0xaU) & (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__ctrl_we 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
            >> 5U) & (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
            >> 7U) & (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__insn_cnt_we 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
            >> 9U) & (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__intr_test_we 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
            >> 2U) & (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__alert_test_we 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__addr_hit) 
            >> 3U) & (IData)(tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_he008bdc1_4_13));
    __Vfunc_mubi4_test_true_loose__87__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__87__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__87__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__87__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__wr_data 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en) 
           & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
              [2U][0U] >> 0x18U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__software_errs_fatal_d 
        = (1U & (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__ctrl_we) 
                  & (0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__status_q)))
                  ? (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                     [2U][0U] >> 0x18U) : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__software_errs_fatal_q)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__err_bits_clear 
        = ((0xffffU == (0xffffU & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we))))) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__is_not_running_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__unused_reg2hw_err_bits 
        = (1U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                  [2U][0U] >> 0x18U) ^ VL_REDXOR_32(
                                                    (((2U 
                                                       & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][0U] 
                                                          >> 0x18U)) 
                                                      | (0xffffU 
                                                         == 
                                                         (0xffffU 
                                                          & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                     ^ 
                                                     (((2U 
                                                        & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                           [2U][0U] 
                                                           >> 0x19U)) 
                                                       | (0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                      ^ 
                                                      (((2U 
                                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                            [2U][0U] 
                                                            >> 0x1aU)) 
                                                        | (0xffffU 
                                                           == 
                                                           (0xffffU 
                                                            & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                       ^ 
                                                       (((2U 
                                                          & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                             [2U][0U] 
                                                             >> 0x1bU)) 
                                                         | (0xffffU 
                                                            == 
                                                            (0xffffU 
                                                             & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                        ^ 
                                                        (((2U 
                                                           & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                              [2U][0U] 
                                                              >> 0x1cU)) 
                                                          | (0xffffU 
                                                             == 
                                                             (0xffffU 
                                                              & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                         ^ 
                                                         (((2U 
                                                            & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                               [2U][0U] 
                                                               >> 0x1dU)) 
                                                           | (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                          ^ 
                                                          (((2U 
                                                             & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                [2U][0U] 
                                                                >> 0x1eU)) 
                                                            | (0xffffU 
                                                               == 
                                                               (0xffffU 
                                                                & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                           ^ 
                                                           (((2U 
                                                              & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                 [2U][1U] 
                                                                 >> 7U)) 
                                                             | (0xffffU 
                                                                == 
                                                                (0xffffU 
                                                                 & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                            ^ 
                                                            (((2U 
                                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                  [2U][1U] 
                                                                  >> 8U)) 
                                                              | (0xffffU 
                                                                 == 
                                                                 (0xffffU 
                                                                  & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                             ^ 
                                                             (((2U 
                                                                & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                   [2U][1U] 
                                                                   >> 9U)) 
                                                               | (0xffffU 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                              ^ 
                                                              (((2U 
                                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                    [2U][1U] 
                                                                    >> 0xaU)) 
                                                                | (0xffffU 
                                                                   == 
                                                                   (0xffffU 
                                                                    & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                               ^ 
                                                               (((2U 
                                                                  & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                     [2U][1U] 
                                                                     >> 0xbU)) 
                                                                 | (0xffffU 
                                                                    == 
                                                                    (0xffffU 
                                                                     & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                                ^ 
                                                                (((2U 
                                                                   & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                      [2U][1U] 
                                                                      >> 0xcU)) 
                                                                  | (0xffffU 
                                                                     == 
                                                                     (0xffffU 
                                                                      & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                                 ^ 
                                                                 (((2U 
                                                                    & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                       [2U][1U] 
                                                                       >> 0xdU)) 
                                                                   | (0xffffU 
                                                                      == 
                                                                      (0xffffU 
                                                                       & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                                  ^ 
                                                                  ((2U 
                                                                    & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                                       [2U][1U] 
                                                                       >> 0xeU)) 
                                                                   | (0xffffU 
                                                                      == 
                                                                      (0xffffU 
                                                                       & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))))))))))))))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_we_check 
        = ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__load_checksum_we) 
             << 0xaU) | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__insn_cnt_we) 
                         << 9U)) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we) 
                                      << 7U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__ctrl_we) 
                                                 << 5U) 
                                                | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__cmd_we) 
                                                   << 4U))) 
                                    | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__alert_test_we) 
                                        << 3U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__intr_test_we) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__intr_state_we))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellinp__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__alert_test_i 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
            [2U][0U] >> 0x19U) & (3U == (3U & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__alert_test_we))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellinp__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__alert_test_i 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
            [2U][0U] >> 0x18U) & (3U == (3U & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__alert_test_we))))));
    __Vtemp_205[2U] = (((IData)((0xffffU == (0xffffU 
                                             & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                        << 8U) | ((0x80U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                            [2U][0U] 
                                            >> 0x13U)) 
                                  | (((IData)((0xffffU 
                                               == (0xffffU 
                                                   & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                      << 6U) | ((0x20U 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][0U] 
                                                    >> 0x14U)) 
                                                | (((IData)(
                                                            (0xffffU 
                                                             == 
                                                             (0xffffU 
                                                              & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                    << 4U) 
                                                   | ((8U 
                                                       & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][0U] 
                                                          >> 0x15U)) 
                                                      | (((IData)(
                                                                  (0xffffU 
                                                                   == 
                                                                   (0xffffU 
                                                                    & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                          << 2U) 
                                                         | (3U 
                                                            & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                               [2U][1U] 
                                                               >> 0x16U)))))))));
    __Vtemp_212[2U] = ((0x8000U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                   [2U][0U] >> 0xfU)) 
                       | (((IData)((0xffffU == (0xffffU 
                                                & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                           << 0xeU) | ((0x2000U & (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][0U] 
                                                   >> 0x10U)) 
                                       | (((IData)(
                                                   (0xffffU 
                                                    == 
                                                    (0xffffU 
                                                     & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                           << 0xcU) 
                                          | ((0x800U 
                                              & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                 [2U][0U] 
                                                 >> 0x11U)) 
                                             | (((IData)(
                                                         (0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                 << 0xaU) 
                                                | ((0x200U 
                                                    & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][0U] 
                                                       >> 0x12U)) 
                                                   | __Vtemp_205[2U])))))));
    __Vtemp_219[2U] = (((IData)((0xffffU == (0xffffU 
                                             & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                        << 0x16U) | ((0x200000U & (
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                   [2U][1U] 
                                                   << 0xcU)) 
                                     | (((IData)((0xffffU 
                                                  == 
                                                  (0xffffU 
                                                   & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                         << 0x14U) 
                                        | ((0x80000U 
                                            & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                               [2U][1U] 
                                               << 0xbU)) 
                                           | (((IData)(
                                                       (0xffffU 
                                                        == 
                                                        (0xffffU 
                                                         & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                               << 0x12U) 
                                              | ((0x20000U 
                                                  & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                     [2U][0U] 
                                                     >> 0xeU)) 
                                                 | (((IData)(
                                                             (0xffffU 
                                                              == 
                                                              (0xffffU 
                                                               & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                     << 0x10U) 
                                                    | __Vtemp_212[2U])))))));
    __Vtemp_226[2U] = ((0x20000000U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                       [2U][1U] << 0x10U)) 
                       | (((IData)((0xffffU == (0xffffU 
                                                & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                           << 0x1cU) | ((0x8000000U 
                                         & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                            [2U][1U] 
                                            << 0xfU)) 
                                        | (((IData)(
                                                    (0xffffU 
                                                     == 
                                                     (0xffffU 
                                                      & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                            << 0x1aU) 
                                           | ((0x2000000U 
                                               & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                  [2U][1U] 
                                                  << 0xeU)) 
                                              | (((IData)(
                                                          (0xffffU 
                                                           == 
                                                           (0xffffU 
                                                            & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                  << 0x18U) 
                                                 | ((0x800000U 
                                                     & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        << 0xdU)) 
                                                    | __Vtemp_219[2U])))))));
    __Vtemp_237[3U] = (((IData)((3U == (3U & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__alert_test_we)))))) 
                        << 0xfU) | ((0x4000U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][0U] 
                                                >> 0xaU)) 
                                    | (((IData)((3U 
                                                 == 
                                                 (3U 
                                                  & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__alert_test_we)))))) 
                                        << 0xdU) | 
                                       ((0x1fe0U & 
                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                          [2U][0U] 
                                          >> 0x13U)) 
                                        | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__cmd_we) 
                                            << 4U) 
                                           | ((8U & 
                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                [2U][0U] 
                                                >> 0x15U)) 
                                              | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__ctrl_we) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        >> 0xeU)) 
                                                    | (0xffffU 
                                                       == 
                                                       (0xffffU 
                                                        & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__reg2hw[0U] 
        = (IData)((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__insn_cnt_we)) 
                    << 0x21U) | (((QData)((IData)((
                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][1U] 
                                                    << 8U) 
                                                   | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                      [2U][0U] 
                                                      >> 0x18U)))) 
                                  << 1U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__load_checksum_we)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__reg2hw[1U] 
        = ((0xfffffffcU & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][1U] << 0xaU) | (0x3fcU 
                                                 & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                    [2U][0U] 
                                                    >> 0x16U)))) 
           | (IData)(((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__insn_cnt_we)) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                        [2U][1U] 
                                                        << 8U) 
                                                       | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                          [2U][0U] 
                                                          >> 0x18U)))) 
                                      << 1U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__load_checksum_we)))) 
                      >> 0x20U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__reg2hw[2U] 
        = ((0x80000000U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [2U][1U] << 0x11U)) | (((IData)(
                                                           (0xffffU 
                                                            == 
                                                            (0xffffU 
                                                             & (- (IData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_bits_we)))))) 
                                                   << 0x1eU) 
                                                  | __Vtemp_226[2U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__reg2hw[3U] 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
            << 0x14U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_enable__q) 
                          << 0x13U) | ((0x40000U & 
                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                         [2U][0U] >> 6U)) 
                                       | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__intr_test_we) 
                                           << 0x11U) 
                                          | ((0x10000U 
                                              & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                                 [2U][0U] 
                                                 >> 9U)) 
                                             | __Vtemp_237[3U])))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellinp__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__alert_test_i) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellinp__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__alert_test_i) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__start_d = 0U;
    if ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__status_q))) {
        if ((0x10U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__reg2hw[3U])) {
            if ((0xd8U == (0xffU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__reg2hw[3U] 
                                    >> 5U)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__start_d = 1U;
            }
        }
    }
}
