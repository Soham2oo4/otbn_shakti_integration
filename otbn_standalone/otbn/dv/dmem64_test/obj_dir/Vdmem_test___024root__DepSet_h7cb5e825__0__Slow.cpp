// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdmem_test.h for the primary calling header

#include "Vdmem_test__pch.h"
#include "Vdmem_test___024root.h"

VL_ATTR_COLD void Vdmem_test___024root___eval_static__TOP(Vdmem_test___024root* vlSelf);

VL_ATTR_COLD void Vdmem_test___024root___eval_static(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___eval_static\n"); );
    // Body
    Vdmem_test___024root___eval_static__TOP(vlSelf);
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x27U)) {
        vlSelf->__Vm_traceActivity[__Vilp1] = 1U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vdmem_test___024root___eval_static__TOP(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->dmem_test__DOT__tl_i[0U] = 0U;
    vlSelf->dmem_test__DOT__tl_i[1U] = 0U;
    vlSelf->dmem_test__DOT__tl_i[2U] = 0U;
    vlSelf->dmem_test__DOT__tl_i[3U] = 0U;
    vlSelf->dmem_test__DOT__tl_i[4U] = 0U;
}

VL_ATTR_COLD void Vdmem_test___024root___eval_final(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdmem_test___024root___dump_triggers__stl(Vdmem_test___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdmem_test___024root___eval_phase__stl(Vdmem_test___024root* vlSelf);

VL_ATTR_COLD void Vdmem_test___024root___eval_settle(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vdmem_test___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dmem_test.sv", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdmem_test___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdmem_test___024root___dump_triggers__stl(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] dmem_test.dut.u_imem.gen_par_scr[0].u_prim_prince.gen_fwd_pass[1].data_state_round or [hybrid] dmem_test.dut.u_imem.gen_par_scr[0].u_prim_prince.gen_fwd_pass[2].data_state_round or [hybrid] dmem_test.dut.u_imem.gen_par_scr[0].u_prim_prince.gen_fwd_pass[3].data_state_round)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] dmem_test.dut.u_imem.gen_par_scr[0].u_prim_prince.__VdfgExtracted_h995d474b__0)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] dmem_test.dut.u_imem.gen_par_scr[0].u_prim_prince.__VdfgExtracted_hd490e120__0)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] dmem_test.dut.u_imem.gen_par_scr[0].u_prim_prince.__VdfgExtracted_he63167c0__0)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] dmem_test.dut.u_dmem.gen_par_scr[0].u_prim_prince.gen_fwd_pass[1].data_state_round or [hybrid] dmem_test.dut.u_dmem.gen_par_scr[0].u_prim_prince.gen_fwd_pass[2].data_state_round or [hybrid] dmem_test.dut.u_dmem.gen_par_scr[0].u_prim_prince.gen_fwd_pass[3].data_state_round)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] dmem_test.dut.u_dmem.gen_par_scr[0].u_prim_prince.__VdfgExtracted_h995d474b__0)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] dmem_test.dut.u_dmem.gen_par_scr[0].u_prim_prince.__VdfgExtracted_hd490e120__0)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] dmem_test.dut.u_dmem.gen_par_scr[0].u_prim_prince.__VdfgExtracted_he63167c0__0)\n");
    }
    if ((0x200ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] dmem_test.dut.u_mem_load_crc32.crc_stages)\n");
    }
    if ((0x400ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] dmem_test.dut.u_otbn_core.u_otbn_start_stop_control.stop)\n");
    }
    if ((0x800ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] dmem_test.dut.u_otbn_core.u_otbn_rnd.u_xoshiro256pp.unrolled_state)\n");
    }
    if ((0x1000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] dmem_test.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.err_tree or [hybrid] dmem_test.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
    if ((0x2000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] dmem_test.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
    if ((0x4000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] dmem_test.dut.u_otbn_core.u_otbn_rf_bignum.gen_rf_bignum_ff.u_otbn_rf_bignum_inner.u_prim_onehot_check.err_tree or [hybrid] dmem_test.dut.u_otbn_core.u_otbn_rf_bignum.gen_rf_bignum_ff.u_otbn_rf_bignum_inner.u_prim_onehot_check.or_tree)\n");
    }
    if ((0x8000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] dmem_test.dut.u_otbn_core.u_otbn_rf_bignum.gen_rf_bignum_ff.u_otbn_rf_bignum_inner.u_prim_onehot_check.or_tree)\n");
    }
    if ((0x10000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] dmem_test.dut.u_otbn_core.u_otbn_rf_bignum.gen_rf_bignum_ff.u_otbn_rf_bignum_inner.u_prim_onehot_check.and_tree)\n");
    }
    if ((0x20000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] dmem_test.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.and_tree)\n");
    }
    if ((0x40000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] dmem_test.dut.u_otbn_core.u_otbn_rf_base.gen_rf_base_ff.u_otbn_rf_base_inner.u_prim_onehot_check.and_tree)\n");
    }
    if ((0x80000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] dmem_test.dut.u_otbn_core.u_otbn_rf_base.gen_rf_base_ff.u_otbn_rf_base_inner.u_prim_onehot_check.or_tree or [hybrid] dmem_test.dut.u_otbn_core.u_otbn_rf_base.gen_rf_base_ff.u_otbn_rf_base_inner.u_prim_onehot_check.err_tree)\n");
    }
    if ((0x100000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] dmem_test.dut.u_otbn_core.u_otbn_rf_base.gen_rf_base_ff.u_otbn_rf_base_inner.u_prim_onehot_check.or_tree)\n");
    }
}
#endif  // VL_DEBUG

extern const VlWide<8>/*255:0*/ Vdmem_test__ConstPool__CONST_h9e67c271_0;
extern const VlWide<10>/*319:0*/ Vdmem_test__ConstPool__CONST_h333821ef_0;
extern const VlWide<10>/*319:0*/ Vdmem_test__ConstPool__CONST_hc1613866_0;

VL_ATTR_COLD void Vdmem_test___024root___stl_sequent__TOP__3(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___stl_sequent__TOP__3\n"); );
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
    CData/*0:0*/ dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_26;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_26 = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__57__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__57__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__57__val;
    __Vfunc_mubi4_bool_to_mubi__57__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__58__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__58__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__58__val;
    __Vfunc_mubi4_bool_to_mubi__58__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__74__Vfuncout;
    __Vfunc_mubi4_test_true_loose__74__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__74__val;
    __Vfunc_mubi4_test_true_loose__74__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__75__Vfuncout;
    __Vfunc_mubi4_and_hi__75__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__75__a;
    __Vfunc_mubi4_and_hi__75__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__75__b;
    __Vfunc_mubi4_and_hi__75__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__76__Vfuncout;
    __Vfunc_mubi4_and__76__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__76__a;
    __Vfunc_mubi4_and__76__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__76__b;
    __Vfunc_mubi4_and__76__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__76__a_in;
    __Vfunc_mubi4_and__76__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__76__b_in;
    __Vfunc_mubi4_and__76__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__87__Vfuncout;
    __Vfunc_mubi4_test_true_loose__87__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__87__val;
    __Vfunc_mubi4_test_true_loose__87__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__88__Vfuncout;
    __Vfunc_mubi4_test_true_loose__88__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__88__val;
    __Vfunc_mubi4_test_true_loose__88__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__90__Vfuncout;
    __Vfunc_mubi4_test_true_loose__90__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__90__val;
    __Vfunc_mubi4_test_true_loose__90__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__98__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__98__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__98__val;
    __Vfunc_mubi4_bool_to_mubi__98__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__251__Vfuncout;
    __Vfunc_mubi4_test_invalid__251__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__251__val;
    __Vfunc_mubi4_test_invalid__251__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__446__Vfuncout;
    __Vfunc_mubi4_test_invalid__446__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__446__val;
    __Vfunc_mubi4_test_invalid__446__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__468__Vfuncout;
    __Vfunc_mubi4_test_invalid__468__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__468__val;
    __Vfunc_mubi4_test_invalid__468__val = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<10>/*319:0*/ __Vtemp_3;
    QData/*63:0*/ __Vtemp_85;
    QData/*63:0*/ __Vtemp_86;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_108;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<4>/*127:0*/ __Vtemp_126;
    // Body
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__illegal_insn) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_base = 0U;
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_bignum = 0U;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[3U][0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[3U][1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[3U][2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[3U][3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[0U] 
        = (1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[1U] 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags) 
                 >> 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[2U] 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags) 
                 >> 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[3U] 
        = (1U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags) 
                 >> 3U));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer 
        = (((0x4000U <= (0xffffU & vlSelf->dmem_test__DOT__tl_i[3U])) 
            & (0x5fffU >= (0xffffU & vlSelf->dmem_test__DOT__tl_i[3U])))
            ? 0U : (((0x8000U <= (0xffffU & vlSelf->dmem_test__DOT__tl_i[3U])) 
                     & (0x8bffU >= (0xffffU & vlSelf->dmem_test__DOT__tl_i[3U])))
                     ? 1U : 2U));
    if (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intg_err) {
        vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer = 2U;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_sel_base 
        = (((7U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
            << 7U) | (((6U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                       << 6U) | (((5U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                  << 5U) | (((4U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                             << 4U) 
                                            | (((3U 
                                                 == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                                << 3U) 
                                               | (((2U 
                                                    == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rs_insn) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_wr_insn));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rd_insn) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rs_insn));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_28 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_base) 
           & (0x8000ULL == (0xf8000ULL & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q)));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0x14U))))) 
                              << 0x3bU) | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) 
                                            << 0x1bU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__comparison_operator_base) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base) 
                                                                        << 0x13U) 
                                                                       | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_base) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_base) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_base) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_base) 
                                                                                << 0xdU) 
                                                                                | ((0x1ffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x14U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0xcU)))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0x1fU 
                                                & (IData)(
                                                          (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0x14U))))) 
                               << 0x3bU) | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base) 
                                                                << 0x17U) 
                                                               | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__comparison_operator_base) 
                                                                   << 0x16U) 
                                                                  | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base) 
                                                                         << 0x13U) 
                                                                        | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_base) 
                                                                            << 0x12U) 
                                                                           | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_base) 
                                                                               << 0x11U) 
                                                                              | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_base) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_base) 
                                                                                << 0xdU) 
                                                                                | ((0x1ffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x14U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0xcU)))))))))))))))) 
                             >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
        = __Vtemp_1[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
        = __Vtemp_1[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U] 
        = ((0x3e0U & ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                               >> 7U)) << 5U)) | (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                             >> 0xfU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_24 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
           & (0x7d8U == (0xfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
            << 0xbU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ecall_insn) 
                         << 0xaU) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn) 
                                      << 9U) | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__loop_insn) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rd_insn) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_wr_insn) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rs_insn) 
                                                                   << 2U) 
                                                                  | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_flags_wr)))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf 
        = (0x1fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum)
                     ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_bignum_rd_addr_a_q)
                     : (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                >> 0xfU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf 
        = (0x1fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum)
                     ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_bignum_rd_addr_b_q)
                     : (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                >> 0x14U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_3 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr 
        = (0x1fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q)
                     ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_addr_q)
                     : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum)
                         ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_bignum_wr_addr_q)
                         : (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                    >> 7U)))));
    __Vtemp_3[0U] = (IData)((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum)) 
                              << 0x2aU) | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum)) 
                                            << 0x29U) 
                                           | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum)) 
                                               << 0x28U) 
                                              | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__d_inc_bignum)) 
                                                  << 0x27U) 
                                                 | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__a_inc_bignum)) 
                                                     << 0x26U) 
                                                    | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__a_wlen_word_inc_bignum)) 
                                                        << 0x25U) 
                                                       | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__b_inc_bignum)) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_shift_amt_bignum)) 
                                                              << 0x1cU) 
                                                             | (QData)((IData)(
                                                                               ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1eU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1fU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x19U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_flag_en_bignum) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_bignum) 
                                                                                << 0x11U) 
                                                                                | ((0x18000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x19U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1dU)) 
                                                                                << 0xcU)) 
                                                                                | ((0xe00U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0xcU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1eU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_en_bignum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_bignum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_bignum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_bignum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_bignum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__sel_insn_bignum)))))))))))))))))))))))))))));
    __Vtemp_3[1U] = ((0x1ff800U & ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                            >> 0x14U)) 
                                   << 0xbU)) | (IData)(
                                                       ((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum)) 
                                                          << 0x2aU) 
                                                         | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum)) 
                                                             << 0x29U) 
                                                            | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum)) 
                                                                << 0x28U) 
                                                               | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__d_inc_bignum)) 
                                                                   << 0x27U) 
                                                                  | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__a_inc_bignum)) 
                                                                      << 0x26U) 
                                                                     | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__a_wlen_word_inc_bignum)) 
                                                                         << 0x25U) 
                                                                        | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__b_inc_bignum)) 
                                                                            << 0x24U) 
                                                                           | (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_shift_amt_bignum)) 
                                                                               << 0x1cU) 
                                                                              | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1eU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1fU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x19U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_flag_en_bignum) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_bignum) 
                                                                                << 0x11U) 
                                                                                | ((0x18000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x19U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1dU)) 
                                                                                << 0xcU)) 
                                                                                | ((0xe00U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0xcU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                                >> 0x1eU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_en_bignum) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_bignum) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_bignum) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_bignum) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_bignum) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__sel_insn_bignum)))))))))))))))))))))))))))) 
                                                        >> 0x20U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
        = __Vtemp_3[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U] 
        = __Vtemp_3[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[2U] = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[3U] = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[4U] = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[5U] = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[6U] = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[7U] = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[8U] = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[9U] 
        = ((0x3e00000U & ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                   >> 7U)) << 0x15U)) 
           | ((0x1f0000U & ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                     >> 0xfU)) << 0x10U)) 
              | (0xf800U & ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                     >> 0x14U)) << 0xbU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__illegal_insn)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_q));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in
        [0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in
        [1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in
        [2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in
        [3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests 
        = ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding)) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_steer) 
              != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel_ctrl = 0U;
    if ((1U & (~ (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                  >> 0xfU)))) {
        if ((0x4000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])) {
            if ((1U & (~ (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                          >> 0xdU)))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel_ctrl = 1U;
            }
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
        = ((1U == (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                   >> 0x1bU)) ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__stack_data_intg
            : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg
           [(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
             >> 0x1bU)]);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
        = ((1U == (0x1fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U]))
            ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__stack_data_intg
            : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg
           [(0x1fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U])]);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel_ctrl = 0U;
    if ((0x20U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
        if ((0x10U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
            if ((1U & (~ (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
                          >> 3U)))) {
                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel_ctrl = 1U;
            }
        }
    } else if ((0x10U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel_ctrl = 1U;
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl 
        = (0x1fU & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U] 
                    >> 5U));
    if ((0x800U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared))) {
        if (((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U] 
                    >> 6U)) || (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U] 
                                      >> 5U)))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl 
                = (0x1fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U]);
        } else if (((1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U] 
                           >> 4U)) || (1U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U] 
                                             >> 7U)))) {
            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl 
                = (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                   >> 0x1bU);
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn) 
           & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_24)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_en 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_en_bignum));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn) 
            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en 
        = ((- (IData)((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn) 
                        & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                           & (0x7d8U != (0xfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)))) 
                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid)))) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_sel_base));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid_err 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn) 
            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__done_complete 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ecall_insn));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__loop_insn));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_14 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn 
        = ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           & (((0x3fffU & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage
                                   [(7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                           - (IData)(1U)))] 
                                   >> 7U))) == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q)) 
              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_static 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__illegal_insn) 
            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_q)) 
           | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_illegal_addr)
                : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr)) 
              & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                 & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rd_insn) 
                    | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
            ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_bignum)
            : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_base));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rnd_req_raw 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
           & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn) 
              & (1U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_11 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
           & ((0x13U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)) 
              & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                 & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_3) 
                    | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
        = ((0xffffc000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U]) 
           | ((0x2000U & ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                   >> 0x1eU)) << 0xdU)) 
              | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_shift_amt_bignum) 
                  << 5U) | ((0x10U & ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                               >> 0x1fU)) 
                                      << 4U)) | ((0xcU 
                                                  & ((IData)(
                                                             (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                              >> 0x19U)) 
                                                     << 2U)) 
                                                 | ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid)) 
                                                     << 1U) 
                                                    | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_flag_en_bignum) 
                                                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux[0U] 
        = ((0xeU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
            [0U]) | vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i
           [0U]);
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux[0U] 
        = ((0xdU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
            [0U]) | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i
                     [1U] << 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux[0U] 
        = ((0xbU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
            [0U]) | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i
                     [2U] << 2U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux[0U] 
        = ((7U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
            [0U]) | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i
                     [3U] << 3U));
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
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                    << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                    << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                    << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                       << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                       << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                       << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                 >> 1U))) << 1U)) | 
              (1U & ((0x19U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                     ^ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                 >> 3U))) << 3U)) | 
              (4U & (((0x61U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                 >> 2U))) << 2U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                         ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                    >> 5U))) << 5U)) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                      >> 4U))) << 4U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                         ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                    >> 7U))) << 7U)) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                      >> 6U))) << 6U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                          ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                     >> 9U))) << 9U)) 
              | (0x100U & (((0x45U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                       >> 8U))) << 8U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                          ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                     >> 0xbU))) << 0xbU)) 
              | (0x400U & (((0x49U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                       >> 0xaU))) << 0xaU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                      >> 0xdU))) << 0xdU)) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                        >> 0xcU))) 
                            << 0xcU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                      >> 0xfU))) << 0xfU)) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                        >> 0xeU))) 
                            << 0xeU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                       >> 0x11U))) 
                           << 0x11U)) | (0x10000U & 
                                         (((0x1cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                      >> 0x10U))) 
                                          << 0x10U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                       >> 0x13U))) 
                           << 0x13U)) | (0x40000U & 
                                         (((0x25U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                      >> 0x12U))) 
                                          << 0x12U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                        >> 0x15U))) 
                            << 0x15U)) | (0x100000U 
                                          & (((0x46U 
                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                         >> 0x14U))) 
                                             << 0x14U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                        >> 0x17U))) 
                            << 0x17U)) | (0x400000U 
                                          & (((0x70U 
                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                         >> 0x16U))) 
                                             << 0x16U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                              ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                         >> 0x19U))) 
                             << 0x19U)) | (0x1000000U 
                                           & (((0x2cU 
                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                          >> 0x18U))) 
                                              << 0x18U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                              ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                         >> 0x1bU))) 
                             << 0x1bU)) | (0x4000000U 
                                           & (((0x23U 
                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                          >> 0x1aU))) 
                                              << 0x1aU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                               ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                          >> 0x1dU))) 
                              << 0x1dU)) | (0x10000000U 
                                            & (((0x4aU 
                                                 == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                                                ^ (IData)(
                                                          (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                           >> 0x1cU))) 
                                               << 0x1cU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o) 
           | ((((0x52U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                           >> 0x1fU))) << 0x1fU) | 
              (0x40000000U & (((0x16U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)) 
                               ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                          >> 0x1eU))) 
                              << 0x1eU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_b_err 
        = ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_b_err)) 
           | (1U & VL_REDXOR_8(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_b_err 
        = ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_b_err)) 
           | (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_b_err)) 
               & (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U] 
        = ((0x80000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])
            ? ((0x80000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U])
                ? ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                    << 5U) | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                              >> 0x1bU)) : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))
            : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                    << 1U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                    << 2U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                    << 3U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                       << 4U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                       << 5U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))) 
                       << 6U)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                 >> 1U))) << 1U)) | 
              (1U & ((0x19U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                     ^ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                 >> 3U))) << 3U)) | 
              (4U & (((0x61U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                 >> 2U))) << 2U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                         ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                    >> 5U))) << 5U)) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                      >> 4U))) << 4U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                         ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                    >> 7U))) << 7U)) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                      >> 6U))) << 6U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                          ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                     >> 9U))) << 9U)) 
              | (0x100U & (((0x45U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                       >> 8U))) << 8U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                          ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                     >> 0xbU))) << 0xbU)) 
              | (0x400U & (((0x49U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                       >> 0xaU))) << 0xaU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                      >> 0xdU))) << 0xdU)) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                        >> 0xcU))) 
                            << 0xcU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                      >> 0xfU))) << 0xfU)) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                        >> 0xeU))) 
                            << 0xeU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                       >> 0x11U))) 
                           << 0x11U)) | (0x10000U & 
                                         (((0x1cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                      >> 0x10U))) 
                                          << 0x10U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                       >> 0x13U))) 
                           << 0x13U)) | (0x40000U & 
                                         (((0x25U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                      >> 0x12U))) 
                                          << 0x12U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                        >> 0x15U))) 
                            << 0x15U)) | (0x100000U 
                                          & (((0x46U 
                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                         >> 0x14U))) 
                                             << 0x14U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                        >> 0x17U))) 
                            << 0x17U)) | (0x400000U 
                                          & (((0x70U 
                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                         >> 0x16U))) 
                                             << 0x16U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                              ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                         >> 0x19U))) 
                             << 0x19U)) | (0x1000000U 
                                           & (((0x2cU 
                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                          >> 0x18U))) 
                                              << 0x18U))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                              ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                         >> 0x1bU))) 
                             << 0x1bU)) | (0x4000000U 
                                           & (((0x23U 
                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                          >> 0x1aU))) 
                                              << 0x1aU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                               ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                          >> 0x1dU))) 
                              << 0x1dU)) | (0x10000000U 
                                            & (((0x4aU 
                                                 == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                                                ^ (IData)(
                                                          (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                           >> 0x1cU))) 
                                               << 0x1cU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o) 
           | ((((0x52U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                           >> 0x1fU))) << 0x1fU) | 
              (0x40000000U & (((0x16U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)) 
                               ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                          >> 0x1eU))) 
                              << 0x1eU))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_a_err 
        = ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_a_err)) 
           | (1U & VL_REDXOR_8(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_a_err 
        = ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_a_err)) 
           | (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_a_err)) 
               & (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations 
        = ((1U & (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                          >> 0xcU))) ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base
            : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__is_equal 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg) 
           == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
        = ((0U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                         >> 0x14U))) ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg)
            : ((1U == (3U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                             >> 0x14U))) ? 0U : ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                                      >> 0x14U)))
                                                  ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q)
                                                  : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel 
        = ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q))) 
           && (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel_ctrl));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__expected_acc_rd_en 
        = ((~ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                       >> 0xcU))) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_en));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en) 
           | (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en = 0U;
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_11) 
           & (0xaU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf = 0U;
    if ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
          & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
             >> 6U)) & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall)))) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf 
            = ((IData)((0x180U == (0x180U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])))
                ? ((0x1000U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])
                    ? 2U : 1U) : 3U);
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_store_req_raw 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_14));
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
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_sw_err 
        = (((0U == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations) 
            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req)) 
           | (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn) 
               & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                  & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                     | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn)))) 
              | (((8U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                  | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn)) 
                 & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__branch_taken 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
           & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
               & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__comparison_operator_base)
                   ? (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__is_equal))
                   : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__is_equal))) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__operand_a_reverse 
        = ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
            << 0x1fU) | ((0x40000000U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw) 
           | (((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q)) 
               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rnd_req_raw)) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q) 
           | (0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf)));
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
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                               >> 0x1fU) 
                                                              & (6U 
                                                                 == 
                                                                 vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U])))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((8U 
                                                                == 
                                                                (0xfU 
                                                                 & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U]))
                                                                ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__operand_a_reverse
                                                                : 
                                                               vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U])))), 
                                           (0x1fU & 
                                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw = 0U;
    dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_26 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn) 
           & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
              & (1U == vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                 [(7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                         - (IData)(1U)))])));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_wr_en_raw = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_wr_en_raw 
            = (1U & ((0x100U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared))
                      ? ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared) 
                           >> 0xbU) & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                       >> 0x10U)) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall))
                      : ((0x200U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared))
                          ? ((0x800U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared))
                              ? (((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                   >> 0x10U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw)) 
                                 & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall))
                              : ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                  >> 0x10U) & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall))))
                          : ((6U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
                                           >> 3U)))
                              ? ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                  >> 0x10U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall))
                              : ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                  >> 0x10U) & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)))))));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en_ctrl 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_wr_en_raw) 
           & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_static)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_rd_en_a_raw = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_rd_en_a_raw 
            = (1U & ((0x100U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared))
                      ? ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                          >> 0x12U) & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall) 
                                       | (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared) 
                                             >> 0xbU))))
                      : ((0x200U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared))
                          ? ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                              >> 0x12U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw))
                          : ((6U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
                                           >> 3U)))
                              ? ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                  >> 0x12U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall))
                              : ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                  >> 0x12U) & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)))))));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_a 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_rd_en_a_raw) 
           & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_static)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_rd_en_b_raw = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_rd_en_b_raw 
            = (1U & ((0x100U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared))
                      ? ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                          >> 0x11U) & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall) 
                                       | (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared) 
                                             >> 0xbU))))
                      : ((0x200U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared))
                          ? ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                              >> 0x11U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw))
                          : ((6U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
                                           >> 3U)))
                              ? ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                  >> 0x11U) & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall))
                              : ((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[0U] 
                                  >> 0x11U) & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)))))));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_b 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_rd_en_b_raw) 
           & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_static)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_wr_en_onehot 
        = ((((0x1fU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
            << 0x1fU) | ((((0x1eU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                          << 0x1eU) | ((((0x1dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i)))))))))))))))))))))))))))))))));
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
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out_reverse 
        = (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out) 
            << 0x1fU) | ((0x40000000U & ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                  >> 1U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((IData)(
                                                    (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                     >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((IData)(
                                                       (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                        >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((IData)(
                                                         (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                          >> 4U)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                >> 5U)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                 >> 6U)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((IData)(
                                                     (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                      >> 7U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((IData)(
                                                        (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                         >> 8U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((IData)(
                                                           (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                            >> 9U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((IData)(
                                                              (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                               >> 0xaU)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(
                                                                 (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                  >> 0xbU)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(
                                                                    (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                     >> 0xcU)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((IData)(
                                                                       (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                        >> 0xdU)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(
                                                                          (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                           >> 0xeU)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(
                                                                             (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                              >> 0xfU)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x10U)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x11U)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x12U)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_bignum) 
           & (IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_26));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_bignum) 
           & (IData)(dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_26));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx 
        = (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                 - (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read 
        = ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req) 
           & ((8U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_jump 
        = ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_a 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_a) 
           & (1U == (0x1fU & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U])));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_b 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_b) 
           & (1U == (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                     >> 0x1bU)));
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
    if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en = 1U;
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw = 0U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                             >> 2U)))) {
            if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw 
                        = (1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)));
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw = 1U;
                    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) {
                        if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__done_complete) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en = 0U;
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw = 0U;
                        } else if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw = 0U;
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)))) {
                if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_start) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en = 1U;
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw = 1U;
                }
            }
        }
    }
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
                vlSelf->__Vfunc_mubi4_test_true_strict__445__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__445__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__445__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__445__Vfuncout)) 
           & ((0U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [1U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [1U][4U] 
                                                       >> 0xdU)))));
    __Vfunc_mubi4_test_invalid__446__val = (0xfU & 
                                            (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][0U] 
                                             >> 0x10U));
    __Vfunc_mubi4_test_invalid__446__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__446__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__446__val)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__446__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__instr_error 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__440__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_invalid__440__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__440__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__440__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__440__Vfuncout)) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__441__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [1U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__441__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__441__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__441__Vfuncout)));
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
                vlSelf->__Vfunc_mubi4_test_true_strict__250__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__250__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__250__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__250__Vfuncout)) 
           & ((0U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [0U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [0U][4U] 
                                                       >> 0xdU)))));
    __Vfunc_mubi4_test_invalid__251__val = (0xfU & 
                                            (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][0U] 
                                             >> 0x10U));
    __Vfunc_mubi4_test_invalid__251__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__251__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__251__val)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__251__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__instr_error 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_invalid__245__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_invalid__245__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__245__val)) 
                                | (9U == (IData)(vlSelf->__Vfunc_mubi4_test_invalid__245__val)))));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_invalid__245__Vfuncout)) 
           | ([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__246__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__246__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__246__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__246__Vfuncout)));
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
            vlSelf->__Vfunc_mubi4_test_true_strict__465__val 
                = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                           [2U][0U] >> 0x10U));
            vlSelf->__Vfunc_mubi4_test_true_strict__465__Vfuncout 
                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__465__val));
        }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__465__Vfuncout));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__467__val 
                    = (0xfU & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                               [2U][0U] >> 0x10U));
                vlSelf->__Vfunc_mubi4_test_true_strict__467__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__467__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__467__Vfuncout)) 
           & ((0U == (7U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][4U] >> 0xdU))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                       [2U][4U] 
                                                       >> 0xdU)))));
    __Vfunc_mubi4_test_invalid__468__val = (0xfU & 
                                            (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [2U][0U] 
                                             >> 0x10U));
    __Vfunc_mubi4_test_invalid__468__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__468__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__468__val)))));
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__468__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                  [2U][4U] >> 0x10U) & vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U]));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
        = (IData)((0xffffffffULL & (((1ULL | ((QData)((IData)(
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U])) 
                                              << 1U)) 
                                     + ((1U == (0xfU 
                                                & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U]))
                                         ? (1ULL | 
                                            ((QData)((IData)(
                                                             (~ 
                                                              vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U]))) 
                                             << 1U))
                                         : ((QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])) 
                                            << 1U))) 
                                    >> 1U)));
    if ((8U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U])) {
        if ((1U & (~ (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U] 
                      >> 2U)))) {
            if ((1U & (~ (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U] 
                          >> 1U)))) {
                if ((1U & (~ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U]))) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out_reverse;
                }
            }
        }
    } else if ((4U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U])) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
            = ((2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U])
                ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out)
                : ((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U])
                    ? (~ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U])
                    : (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                       & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])));
    } else if ((2U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U])) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
            = ((1U & vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U])
                ? (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                   | vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])
                : (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                   ^ vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U]));
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_a_onehot 
        = ((((0x1fU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
            << 0x1fU) | ((((0x1eU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                          << 0x1eU) | ((((0x1dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_b_onehot 
        = ((((0x1fU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
            << 0x1fU) | ((((0x1eU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                          << 0x1eU) | ((((0x1dU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                          & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                             & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                   & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                      & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                         & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                            & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                  & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                     & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                        & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                              & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)) 
                                                                                & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)))))))))))))))))))))))))))))))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x1fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write)
                     ? ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                        - (IData)(1U)) : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x1fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read)
                     ? ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                        - (IData)(1U)) : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                          + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
           ^ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_a_err 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_a));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_b_err 
        = ((0U == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_b));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_reqd 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_a) 
           | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_b));
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
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr = 0U;
    if ((0x10U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)))) {
                            vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr 
                                = (0x1fffU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_jump)
                                               ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_jump_addr)
                                               : ((IData)(4U) 
                                                  + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q))));
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
                            if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)))) {
                                vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr 
                                    = (0x1fffU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__branch_taken)
                                                   ? vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result
                                                   : 
                                                  ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_jump)
                                                    ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_jump_addr)
                                                    : 
                                                   ((IData)(4U) 
                                                    + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q)))));
                            }
                        }
                    } else {
                        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr 
                            = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_addr_last;
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)))) {
                if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_start) {
                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr = 0U;
                }
            }
        }
    }
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked 
        = (0xfffU & ((((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                       & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
                          & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                             | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn))))
                       ? (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_saved_q)
                       : vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result) 
                     & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q)))));
    vlSelf->__VdfgRegularize_hd87f99a1_2_22 = (0xfU 
                                               & (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2) 
                                                   & (((~ (IData)(
                                                                  (0xfU 
                                                                   == (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))) 
                                                       & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write)) 
                                                      | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
                                                         & (0U 
                                                            != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                                   ? 
                                                  (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
                                                    & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                                       >> 4U))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                                                     & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                                        >> 4U))
                                                     ? 0xfU
                                                     : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)))
                                                   : (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_intg_err_d 
        = (((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_a_err)) 
            & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_a_err)) 
               & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_a))) 
           | ((0U != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_b_err)) 
              & ((~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_b_err)) 
                 & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_b))));
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
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____VdfgRegularize_h1abe2abd_0_0 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr) 
           != (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__imem_addr_err = 0U;
    if (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) {
        vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__imem_addr_err 
            = ((0U != (3U & (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr))) 
               || ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__branch_taken)
                    ? (0U != (vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
                              >> 0xdU)) : ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                           & (((IData)(4U) 
                                               + (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q)) 
                                              >> 0xdU))));
    }
    VL_COND_WIWW(312, vlSelf->dmem_test__DOT__dut__DOT__dmem_wmask_core, (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset), Vdmem_test__ConstPool__CONST_h333821ef_0, 
                 ([&]() {
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__addr 
                    = (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked) 
                             >> 2U));
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[0U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[0U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[1U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[1U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[2U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[2U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[3U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[3U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[4U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[4U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[5U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[5U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[6U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[6U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[7U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[7U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[8U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[8U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[9U] 
                    = Vdmem_test__ConstPool__CONST_hc1613866_0[9U];
                if ((0U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[0U] = 0xffffffffU;
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[1U] 
                        = (0x7fU | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[1U]);
                }
                if ((1U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[1U] 
                        = (0xffffff80U | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[1U]);
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[2U] 
                        = (0x3fffU | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[2U]);
                }
                if ((2U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[2U] 
                        = (0xffffc000U | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[2U]);
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[3U] 
                        = (0x1fffffU | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[3U]);
                }
                if ((3U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[3U] 
                        = (0xffe00000U | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[3U]);
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[4U] 
                        = (0xfffffffU | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[4U]);
                }
                if ((4U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[4U] 
                        = (0xf0000000U | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[4U]);
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[5U] = 0xffffffffU;
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[6U] 
                        = (7U | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[6U]);
                }
                if ((5U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[6U] 
                        = (0xfffffff8U | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[6U]);
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[7U] 
                        = (0x3ffU | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[7U]);
                }
                if ((6U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[7U] 
                        = (0xfffffc00U | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[7U]);
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[8U] 
                        = (0x1ffffU | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[8U]);
                }
                if ((7U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[8U] 
                        = (0xfffe0000U | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[8U]);
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[9U] 
                        = (0xffffffU | vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[9U]);
                }
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[0U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[0U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[1U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[1U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[2U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[2U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[3U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[3U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[4U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[4U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[5U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[5U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[6U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[6U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[7U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[7U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[8U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[8U];
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout[9U] 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__mask[9U];
            }(), vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__wmask_from_word_addr__493__Vfuncout));
    vlSelf->dmem_test__DOT__dut__DOT__dmem_rmask_core_d 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
            ? 0xffU : ([&]() {
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__addr 
                    = (7U & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked) 
                             >> 2U));
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask = 0U;
                if ((0U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask 
                        = (1U | (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask));
                }
                if ((1U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask 
                        = (2U | (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask));
                }
                if ((2U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask 
                        = (4U | (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask));
                }
                if ((3U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask 
                        = (8U | (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask));
                }
                if ((4U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask 
                        = (0x10U | (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask));
                }
                if ((5U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask 
                        = (0x20U | (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask));
                }
                if ((6U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask 
                        = (0x40U | (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask));
                }
                if ((7U == (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__addr))) {
                    vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask 
                        = (0x80U | (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask));
                }
                vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__Vfuncout 
                    = vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__mask;
            }(), (IData)(vlSelf->__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__rmask_from_word_addr__494__Vfuncout)));
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
    __Vtemp_85 = ((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
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
        = (IData)((__Vtemp_85 >> 0x20U));
    __Vtemp_86 = (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U])));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_86 >> 0x20U));
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
    __Vfunc_mubi4_bool_to_mubi__58__val = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_gnt) 
                                           & (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write));
    __Vfunc_mubi4_bool_to_mubi__58__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__58__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_d 
        = __Vfunc_mubi4_bool_to_mubi__58__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__57__val = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_gnt) 
                                           & (~ (IData)(vlSelf->dmem_test__DOT__dut__DOT__imem_write)));
    __Vfunc_mubi4_bool_to_mubi__57__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__57__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en 
        = __Vfunc_mubi4_bool_to_mubi__57__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__reg_error 
        = ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__intg_err)));
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__addr_scr 
        = (0x7fU & ((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__20__03a14__KET__) 
                    ^ (IData)((vlSelf->dmem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                               >> 0x39U))));
    __Vfunc_mubi4_test_true_loose__88__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_d;
    __Vfunc_mubi4_test_true_loose__88__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__88__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_b 
        = __Vfunc_mubi4_test_true_loose__88__Vfuncout;
    __Vfunc_mubi4_test_true_loose__87__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_test_true_loose__87__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__87__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en_b 
        = __Vfunc_mubi4_test_true_loose__87__Vfuncout;
    __Vfunc_mubi4_and_hi__75__b = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_and_hi__75__a = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
    __Vfunc_mubi4_and__76__b = __Vfunc_mubi4_and_hi__75__b;
    __Vfunc_mubi4_and__76__a = __Vfunc_mubi4_and_hi__75__a;
    __Vfunc_mubi4_and__76__a_in = __Vfunc_mubi4_and__76__a;
    __Vfunc_mubi4_and__76__b_in = __Vfunc_mubi4_and__76__b;
    vlSelf->__Vfunc_mubi4_and__76__out = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_and__76__out)) 
                                          | ((2U & 
                                              ((IData)(__Vfunc_mubi4_and__76__a_in) 
                                               & (IData)(__Vfunc_mubi4_and__76__b_in))) 
                                             | (1U 
                                                & ((IData)(__Vfunc_mubi4_and__76__a_in) 
                                                   | (IData)(__Vfunc_mubi4_and__76__b_in)))));
    vlSelf->__Vfunc_mubi4_and__76__out = ((3U & (IData)(vlSelf->__Vfunc_mubi4_and__76__out)) 
                                          | ((8U & 
                                              ((IData)(__Vfunc_mubi4_and__76__a_in) 
                                               | (IData)(__Vfunc_mubi4_and__76__b_in))) 
                                             | (4U 
                                                & ((IData)(__Vfunc_mubi4_and__76__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__76__b_in)))));
    __Vfunc_mubi4_and__76__Vfuncout = vlSelf->__Vfunc_mubi4_and__76__out;
    __Vfunc_mubi4_and_hi__75__Vfuncout = __Vfunc_mubi4_and__76__Vfuncout;
    __Vfunc_mubi4_test_true_loose__74__val = __Vfunc_mubi4_and_hi__75__Vfuncout;
    __Vfunc_mubi4_test_true_loose__74__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__74__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__rw_collision 
        = __Vfunc_mubi4_test_true_loose__74__Vfuncout;
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__macro_write 
        = ((([&]() {
                    vlSelf->__Vfunc_mubi4_or_hi__71__b 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_pending_q;
                    vlSelf->__Vfunc_mubi4_or_hi__71__a 
                        = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_q;
                    vlSelf->__Vfunc_mubi4_or__72__b 
                        = vlSelf->__Vfunc_mubi4_or_hi__71__b;
                    vlSelf->__Vfunc_mubi4_or__72__a 
                        = vlSelf->__Vfunc_mubi4_or_hi__71__a;
                    vlSelf->__Vfunc_mubi4_or__72__a_in 
                        = vlSelf->__Vfunc_mubi4_or__72__a;
                    vlSelf->__Vfunc_mubi4_or__72__b_in 
                        = vlSelf->__Vfunc_mubi4_or__72__b;
                    vlSelf->__Vfunc_mubi4_or__72__out 
                        = ((0xcU & (IData)(vlSelf->__Vfunc_mubi4_or__72__out)) 
                           | ((2U & ((IData)(vlSelf->__Vfunc_mubi4_or__72__a_in) 
                                     | (IData)(vlSelf->__Vfunc_mubi4_or__72__b_in))) 
                              | (1U & ((IData)(vlSelf->__Vfunc_mubi4_or__72__a_in) 
                                       & (IData)(vlSelf->__Vfunc_mubi4_or__72__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__72__out 
                        = ((3U & (IData)(vlSelf->__Vfunc_mubi4_or__72__out)) 
                           | ((8U & ((IData)(vlSelf->__Vfunc_mubi4_or__72__a_in) 
                                     & (IData)(vlSelf->__Vfunc_mubi4_or__72__b_in))) 
                              | (4U & ((IData)(vlSelf->__Vfunc_mubi4_or__72__a_in) 
                                       | (IData)(vlSelf->__Vfunc_mubi4_or__72__b_in)))));
                    vlSelf->__Vfunc_mubi4_or__72__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__72__out;
                    vlSelf->__Vfunc_mubi4_or_hi__71__Vfuncout 
                        = vlSelf->__Vfunc_mubi4_or__72__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__70__val 
                        = vlSelf->__Vfunc_mubi4_or_hi__71__Vfuncout;
                    vlSelf->__Vfunc_mubi4_test_true_loose__70__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__70__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__70__Vfuncout)) 
            & (~ ([&]() {
                        vlSelf->__Vfunc_mubi4_test_true_loose__73__val 
                            = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__read_en;
                        vlSelf->__Vfunc_mubi4_test_true_loose__73__Vfuncout 
                            = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__73__val));
                    }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__73__Vfuncout)))) 
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
                vlSelf->__Vfunc_mubi4_test_true_loose__77__val 
                    = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__write_en_d;
                vlSelf->__Vfunc_mubi4_test_true_loose__77__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__77__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__77__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__98__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__98__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__98__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__98__Vfuncout;
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
    __Vfunc_mubi4_test_true_loose__90__val = vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__90__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__90__val));
    vlSelf->dmem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__90__Vfuncout;
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
    __Vtemp_94[2U] = (((IData)((0xffffU == (0xffffU 
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
    __Vtemp_101[2U] = ((0x8000U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
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
                                                   | __Vtemp_94[2U])))))));
    __Vtemp_108[2U] = (((IData)((0xffffU == (0xffffU 
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
                                                    | __Vtemp_101[2U])))))));
    __Vtemp_115[2U] = ((0x20000000U & (vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
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
                                                    | __Vtemp_108[2U])))))));
    __Vtemp_126[3U] = (((IData)((3U == (3U & (- (IData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_reg__DOT__alert_test_we)))))) 
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
                                                | __Vtemp_115[2U]));
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
                                           | __Vtemp_126[3U])))));
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

VL_ATTR_COLD void Vdmem_test___024root___stl_sequent__TOP__7(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___stl_sequent__TOP__7\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout;
    VL_ZERO_W(256, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in;
    VL_ZERO_W(256, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in);
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_out = 0;
    VlWide<8>/*255:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout;
    VL_ZERO_W(256, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in;
    VL_ZERO_W(256, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in);
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_out = 0;
    VlWide<8>/*255:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout;
    VL_ZERO_W(256, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in;
    VL_ZERO_W(256, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in);
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_out = 0;
    VlWide<8>/*255:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout;
    VL_ZERO_W(256, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in;
    VL_ZERO_W(256, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in);
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_in;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_in = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_out = 0;
    QData/*63:0*/ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_out;
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_out = 0;
    // Body
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][0U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][1U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][2U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][3U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][4U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[5U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][5U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[6U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][6U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[7U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][7U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[7U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[6U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[5U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[4U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[3U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[2U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[1U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__data_in[0U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_in 
            ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_in) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_in 
            ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_in) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_in 
            ^ VL_SHIFTL_QQI(64,64,32, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_in, 0x11U)) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_out 
        = ((((QData)((IData)((0x7ffffU & (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_in)))) 
             << 0x2dU) | (__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_in 
                          >> 0x13U)) ^ (((QData)((IData)(
                                                         (0x7ffffU 
                                                          & (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_in)))) 
                                         << 0x2dU) 
                                        | (__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_in 
                                           >> 0x13U)));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[0U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[1U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__d_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[2U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[3U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__c_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[4U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[5U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__b_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[6U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[7U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__a_out 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][0U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][1U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][2U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][3U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][4U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][5U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[5U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][6U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[6U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][7U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__495__Vfuncout[7U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][0U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][1U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][2U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][3U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][4U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[5U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][5U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[6U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][6U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[7U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][7U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[7U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[6U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[5U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[4U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[3U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[2U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[1U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__data_in[0U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_in 
            ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_in) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_in 
            ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_in) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_in 
            ^ VL_SHIFTL_QQI(64,64,32, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_in, 0x11U)) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_out 
        = ((((QData)((IData)((0x7ffffU & (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_in)))) 
             << 0x2dU) | (__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_in 
                          >> 0x13U)) ^ (((QData)((IData)(
                                                         (0x7ffffU 
                                                          & (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_in)))) 
                                         << 0x2dU) 
                                        | (__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_in 
                                           >> 0x13U)));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[0U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[1U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__d_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[2U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[3U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__c_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[4U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[5U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__b_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[6U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[7U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__a_out 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][0U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][1U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][2U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][3U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][4U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][5U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[5U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][6U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[6U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][7U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__496__Vfuncout[7U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][0U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][1U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][2U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][3U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][4U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[5U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][5U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[6U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][6U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[7U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][7U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[7U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[6U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[5U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[4U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[3U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[2U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[1U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__data_in[0U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_in 
            ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_in) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_in 
            ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_in) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_in 
            ^ VL_SHIFTL_QQI(64,64,32, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_in, 0x11U)) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_out 
        = ((((QData)((IData)((0x7ffffU & (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_in)))) 
             << 0x2dU) | (__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_in 
                          >> 0x13U)) ^ (((QData)((IData)(
                                                         (0x7ffffU 
                                                          & (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_in)))) 
                                         << 0x2dU) 
                                        | (__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_in 
                                           >> 0x13U)));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[0U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[1U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__d_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[2U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[3U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__c_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[4U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[5U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__b_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[6U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[7U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__a_out 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][0U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][1U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][2U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][3U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][4U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][5U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[5U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][6U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[6U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][7U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__497__Vfuncout[7U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[0U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][0U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[1U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][1U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[2U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][2U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[3U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][3U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[4U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][4U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[5U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][5U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[6U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][6U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[7U] 
        = vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][7U];
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[7U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[6U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[5U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[4U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[3U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[2U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_in 
        = (((QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[1U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__data_in[0U])));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_in 
            ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_in) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_in 
            ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_in) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_out 
        = ((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_in 
            ^ VL_SHIFTL_QQI(64,64,32, __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_in, 0x11U)) 
           ^ __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_in);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_out 
        = ((((QData)((IData)((0x7ffffU & (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_in)))) 
             << 0x2dU) | (__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_in 
                          >> 0x13U)) ^ (((QData)((IData)(
                                                         (0x7ffffU 
                                                          & (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_in)))) 
                                         << 0x2dU) 
                                        | (__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_in 
                                           >> 0x13U)));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[0U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[1U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__d_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[2U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[3U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__c_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[4U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[5U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__b_out 
                   >> 0x20U));
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[6U] 
        = (IData)(__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_out);
    __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[7U] 
        = (IData)((__Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__a_out 
                   >> 0x20U));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][0U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[0U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][1U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[1U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][2U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[2U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][3U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[3U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][4U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[4U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][5U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[5U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][6U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[6U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][7U] 
        = __Vfunc_dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__498__Vfuncout[7U];
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_7 
        = ((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                             [3U][7U])) << 0x20U) | (QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                    [3U][6U]))) 
           + (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                               [3U][1U])) << 0x20U) 
              | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                [3U][0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_5 
        = ((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                             [2U][7U])) << 0x20U) | (QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                    [2U][6U]))) 
           + (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                               [2U][1U])) << 0x20U) 
              | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                [2U][0U]))));
    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
        = ((((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                             [1U][7U])) << 0x20U) | (QData)((IData)(
                                                                    vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                    [1U][6U]))) 
           + (((QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                               [1U][1U])) << 0x20U) 
              | (QData)((IData)(vlSelf->dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                [1U][0U]))));
}

VL_ATTR_COLD void Vdmem_test___024root___stl_comb__TOP__1(Vdmem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdmem_test___024root___stl_comb__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vfunc_sbox4_64bit__299__Vfuncout;
    __Vfunc_sbox4_64bit__299__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__299__state_in;
    __Vfunc_sbox4_64bit__299__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__300__Vfuncout;
    __Vfunc_sbox4_8bit__300__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__300__state_in;
    __Vfunc_sbox4_8bit__300__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__301__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__301__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__301__state_in;
    __Vfunc_prince_mult_prime_64bit__301__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__302__Vfuncout;
    __Vfunc_prince_nibble_red16__302__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__302__vect;
    __Vfunc_prince_nibble_red16__302__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__303__Vfuncout;
    __Vfunc_prince_nibble_red16__303__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__303__vect;
    __Vfunc_prince_nibble_red16__303__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__304__Vfuncout;
    __Vfunc_prince_nibble_red16__304__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__304__vect;
    __Vfunc_prince_nibble_red16__304__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__305__Vfuncout;
    __Vfunc_prince_nibble_red16__305__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__305__vect;
    __Vfunc_prince_nibble_red16__305__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__306__Vfuncout;
    __Vfunc_prince_nibble_red16__306__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__306__vect;
    __Vfunc_prince_nibble_red16__306__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__307__Vfuncout;
    __Vfunc_prince_nibble_red16__307__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__307__vect;
    __Vfunc_prince_nibble_red16__307__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__308__Vfuncout;
    __Vfunc_prince_nibble_red16__308__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__308__vect;
    __Vfunc_prince_nibble_red16__308__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__309__Vfuncout;
    __Vfunc_prince_nibble_red16__309__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__309__vect;
    __Vfunc_prince_nibble_red16__309__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__310__Vfuncout;
    __Vfunc_prince_nibble_red16__310__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__310__vect;
    __Vfunc_prince_nibble_red16__310__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__311__Vfuncout;
    __Vfunc_prince_nibble_red16__311__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__311__vect;
    __Vfunc_prince_nibble_red16__311__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__312__Vfuncout;
    __Vfunc_prince_nibble_red16__312__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__312__vect;
    __Vfunc_prince_nibble_red16__312__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__313__Vfuncout;
    __Vfunc_prince_nibble_red16__313__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__313__vect;
    __Vfunc_prince_nibble_red16__313__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__314__Vfuncout;
    __Vfunc_prince_nibble_red16__314__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__314__vect;
    __Vfunc_prince_nibble_red16__314__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__315__Vfuncout;
    __Vfunc_prince_nibble_red16__315__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__315__vect;
    __Vfunc_prince_nibble_red16__315__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__316__Vfuncout;
    __Vfunc_prince_nibble_red16__316__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__316__vect;
    __Vfunc_prince_nibble_red16__316__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__317__Vfuncout;
    __Vfunc_prince_nibble_red16__317__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__317__vect;
    __Vfunc_prince_nibble_red16__317__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__318__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__318__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__318__state_in;
    __Vfunc_prince_shiftrows_64bit__318__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__319__Vfuncout;
    __Vfunc_sbox4_64bit__319__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__319__state_in;
    __Vfunc_sbox4_64bit__319__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__320__Vfuncout;
    __Vfunc_sbox4_8bit__320__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__320__state_in;
    __Vfunc_sbox4_8bit__320__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__321__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__321__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__321__state_in;
    __Vfunc_prince_mult_prime_64bit__321__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__322__Vfuncout;
    __Vfunc_prince_nibble_red16__322__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__322__vect;
    __Vfunc_prince_nibble_red16__322__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__323__Vfuncout;
    __Vfunc_prince_nibble_red16__323__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__323__vect;
    __Vfunc_prince_nibble_red16__323__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__324__Vfuncout;
    __Vfunc_prince_nibble_red16__324__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__324__vect;
    __Vfunc_prince_nibble_red16__324__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__325__Vfuncout;
    __Vfunc_prince_nibble_red16__325__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__325__vect;
    __Vfunc_prince_nibble_red16__325__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__326__Vfuncout;
    __Vfunc_prince_nibble_red16__326__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__326__vect;
    __Vfunc_prince_nibble_red16__326__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__327__Vfuncout;
    __Vfunc_prince_nibble_red16__327__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__327__vect;
    __Vfunc_prince_nibble_red16__327__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__328__Vfuncout;
    __Vfunc_prince_nibble_red16__328__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__328__vect;
    __Vfunc_prince_nibble_red16__328__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__329__Vfuncout;
    __Vfunc_prince_nibble_red16__329__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__329__vect;
    __Vfunc_prince_nibble_red16__329__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__330__Vfuncout;
    __Vfunc_prince_nibble_red16__330__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__330__vect;
    __Vfunc_prince_nibble_red16__330__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__331__Vfuncout;
    __Vfunc_prince_nibble_red16__331__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__331__vect;
    __Vfunc_prince_nibble_red16__331__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__332__Vfuncout;
    __Vfunc_prince_nibble_red16__332__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__332__vect;
    __Vfunc_prince_nibble_red16__332__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__333__Vfuncout;
    __Vfunc_prince_nibble_red16__333__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__333__vect;
    __Vfunc_prince_nibble_red16__333__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__334__Vfuncout;
    __Vfunc_prince_nibble_red16__334__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__334__vect;
    __Vfunc_prince_nibble_red16__334__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__335__Vfuncout;
    __Vfunc_prince_nibble_red16__335__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__335__vect;
    __Vfunc_prince_nibble_red16__335__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__336__Vfuncout;
    __Vfunc_prince_nibble_red16__336__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__336__vect;
    __Vfunc_prince_nibble_red16__336__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__337__Vfuncout;
    __Vfunc_prince_nibble_red16__337__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__337__vect;
    __Vfunc_prince_nibble_red16__337__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__338__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__338__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__338__state_in;
    __Vfunc_prince_shiftrows_64bit__338__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__339__Vfuncout;
    __Vfunc_sbox4_64bit__339__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__339__state_in;
    __Vfunc_sbox4_64bit__339__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__340__Vfuncout;
    __Vfunc_sbox4_8bit__340__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__340__state_in;
    __Vfunc_sbox4_8bit__340__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__341__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__341__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__341__state_in;
    __Vfunc_prince_mult_prime_64bit__341__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__342__Vfuncout;
    __Vfunc_prince_nibble_red16__342__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__342__vect;
    __Vfunc_prince_nibble_red16__342__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__343__Vfuncout;
    __Vfunc_prince_nibble_red16__343__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__343__vect;
    __Vfunc_prince_nibble_red16__343__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__344__Vfuncout;
    __Vfunc_prince_nibble_red16__344__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__344__vect;
    __Vfunc_prince_nibble_red16__344__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__345__Vfuncout;
    __Vfunc_prince_nibble_red16__345__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__345__vect;
    __Vfunc_prince_nibble_red16__345__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__346__Vfuncout;
    __Vfunc_prince_nibble_red16__346__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__346__vect;
    __Vfunc_prince_nibble_red16__346__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__347__Vfuncout;
    __Vfunc_prince_nibble_red16__347__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__347__vect;
    __Vfunc_prince_nibble_red16__347__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__348__Vfuncout;
    __Vfunc_prince_nibble_red16__348__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__348__vect;
    __Vfunc_prince_nibble_red16__348__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__349__Vfuncout;
    __Vfunc_prince_nibble_red16__349__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__349__vect;
    __Vfunc_prince_nibble_red16__349__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__350__Vfuncout;
    __Vfunc_prince_nibble_red16__350__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__350__vect;
    __Vfunc_prince_nibble_red16__350__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__351__Vfuncout;
    __Vfunc_prince_nibble_red16__351__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__351__vect;
    __Vfunc_prince_nibble_red16__351__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__352__Vfuncout;
    __Vfunc_prince_nibble_red16__352__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__352__vect;
    __Vfunc_prince_nibble_red16__352__vect = 0;
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
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__358__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__358__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__358__state_in;
    __Vfunc_prince_shiftrows_64bit__358__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__359__Vfuncout;
    __Vfunc_sbox4_64bit__359__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__359__state_in;
    __Vfunc_sbox4_64bit__359__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__360__Vfuncout;
    __Vfunc_sbox4_8bit__360__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__360__state_in;
    __Vfunc_sbox4_8bit__360__state_in = 0;
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
    __Vfunc_sbox4_64bit__359__state_in = (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[7U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[6U])));
    __Vfunc_sbox4_8bit__360__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__359__state_in));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__360__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__360__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__360__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__360__state_out;
    vlSelf->__Vfunc_sbox4_64bit__359__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__359__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__360__Vfuncout)));
    __Vfunc_sbox4_8bit__360__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__359__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__360__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__360__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__360__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__360__state_out;
    vlSelf->__Vfunc_sbox4_64bit__359__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__359__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__360__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__360__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__359__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__360__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__360__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__360__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__360__state_out;
    vlSelf->__Vfunc_sbox4_64bit__359__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__359__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__360__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__360__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__359__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__360__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__360__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__360__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__360__state_out;
    vlSelf->__Vfunc_sbox4_64bit__359__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__359__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__360__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__360__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__359__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__360__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__360__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__360__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__360__state_out;
    vlSelf->__Vfunc_sbox4_64bit__359__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__359__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__360__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__360__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__359__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__360__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__360__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__360__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__360__state_out;
    vlSelf->__Vfunc_sbox4_64bit__359__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__359__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__360__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__360__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__359__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__360__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__360__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__360__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__360__state_out;
    vlSelf->__Vfunc_sbox4_64bit__359__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__359__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__360__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__360__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__359__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__360__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__360__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__360__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__360__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__360__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__360__state_out;
    vlSelf->__Vfunc_sbox4_64bit__359__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__359__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__360__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__359__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__359__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_d 
        = __Vfunc_sbox4_64bit__359__Vfuncout;
    __Vfunc_sbox4_64bit__299__state_in = (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U])));
    __Vfunc_sbox4_8bit__300__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__299__state_in));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__300__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__300__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__300__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__300__state_out;
    vlSelf->__Vfunc_sbox4_64bit__299__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__299__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__300__Vfuncout)));
    __Vfunc_sbox4_8bit__300__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__299__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__300__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__300__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__300__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__300__state_out;
    vlSelf->__Vfunc_sbox4_64bit__299__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__299__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__300__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__300__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__299__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__300__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__300__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__300__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__300__state_out;
    vlSelf->__Vfunc_sbox4_64bit__299__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__299__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__300__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__300__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__299__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__300__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__300__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__300__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__300__state_out;
    vlSelf->__Vfunc_sbox4_64bit__299__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__299__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__300__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__300__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__299__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__300__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__300__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__300__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__300__state_out;
    vlSelf->__Vfunc_sbox4_64bit__299__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__299__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__300__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__300__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__299__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__300__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__300__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__300__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__300__state_out;
    vlSelf->__Vfunc_sbox4_64bit__299__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__299__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__300__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__300__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__299__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__300__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__300__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__300__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__300__state_out;
    vlSelf->__Vfunc_sbox4_64bit__299__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__299__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__300__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__300__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__299__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__300__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__300__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__300__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__300__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__300__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__300__state_out;
    vlSelf->__Vfunc_sbox4_64bit__299__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__299__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__300__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__299__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__299__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__299__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__301__state_in 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    __Vfunc_prince_nibble_red16__302__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__301__state_in));
    __Vfunc_prince_nibble_red16__302__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__302__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__302__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__302__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__302__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__302__Vfuncout)));
    __Vfunc_prince_nibble_red16__303__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__301__state_in));
    __Vfunc_prince_nibble_red16__303__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__303__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__303__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__303__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__303__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__303__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__304__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__301__state_in));
    __Vfunc_prince_nibble_red16__304__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__304__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__304__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__304__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__304__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__304__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__305__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__301__state_in));
    __Vfunc_prince_nibble_red16__305__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__305__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__305__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__305__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__305__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__305__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__306__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__306__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__306__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__306__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__306__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__306__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__306__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__307__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__307__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__307__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__307__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__307__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__307__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__307__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__308__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__308__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__308__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__308__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__308__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__308__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__308__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__309__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__309__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__309__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__309__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__309__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__309__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__309__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__310__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__310__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__310__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__310__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__310__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__310__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__310__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__311__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__311__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__311__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__311__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__311__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__311__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__311__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__312__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__312__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__312__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__312__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__312__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__312__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__312__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__313__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__313__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__313__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__313__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__313__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__313__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__313__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__314__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__314__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__314__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__314__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__314__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__314__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__314__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__315__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__315__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__315__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__315__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__315__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__315__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__315__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__316__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__316__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__316__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__316__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__316__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__316__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__316__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__317__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__301__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__317__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__317__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__317__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__317__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__317__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__317__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__301__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__301__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__301__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__318__state_in = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                  >> 0x38U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                >> 0x10U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                   >> 0x20U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                   >> 0x30U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                 >> 8U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                   >> 0x18U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                   >> 0x28U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)(__Vfunc_prince_shiftrows_64bit__318__state_in)))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__318__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__318__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__318__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__318__Vfuncout;
    __Vfunc_sbox4_64bit__319__state_in = (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[2U])));
    __Vfunc_sbox4_8bit__320__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__319__state_in));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__320__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__320__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__320__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__320__state_out;
    vlSelf->__Vfunc_sbox4_64bit__319__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__319__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__320__Vfuncout)));
    __Vfunc_sbox4_8bit__320__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__319__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__320__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__320__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__320__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__320__state_out;
    vlSelf->__Vfunc_sbox4_64bit__319__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__319__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__320__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__320__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__319__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__320__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__320__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__320__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__320__state_out;
    vlSelf->__Vfunc_sbox4_64bit__319__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__319__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__320__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__320__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__319__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__320__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__320__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__320__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__320__state_out;
    vlSelf->__Vfunc_sbox4_64bit__319__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__319__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__320__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__320__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__319__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__320__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__320__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__320__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__320__state_out;
    vlSelf->__Vfunc_sbox4_64bit__319__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__319__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__320__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__320__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__319__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__320__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__320__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__320__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__320__state_out;
    vlSelf->__Vfunc_sbox4_64bit__319__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__319__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__320__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__320__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__319__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__320__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__320__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__320__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__320__state_out;
    vlSelf->__Vfunc_sbox4_64bit__319__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__319__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__320__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__320__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__319__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__320__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__320__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__320__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__320__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__320__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__320__state_out;
    vlSelf->__Vfunc_sbox4_64bit__319__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__319__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__320__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__319__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__319__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__319__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__321__state_in 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    __Vfunc_prince_nibble_red16__322__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__321__state_in));
    __Vfunc_prince_nibble_red16__322__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__322__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__322__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__322__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__322__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__322__Vfuncout)));
    __Vfunc_prince_nibble_red16__323__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__321__state_in));
    __Vfunc_prince_nibble_red16__323__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__323__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__323__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__323__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__323__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__323__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__324__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__321__state_in));
    __Vfunc_prince_nibble_red16__324__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__324__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__324__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__324__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__324__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__324__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__325__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__321__state_in));
    __Vfunc_prince_nibble_red16__325__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__325__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__325__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__325__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__325__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__325__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__326__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__326__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__326__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__326__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__326__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__326__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__326__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__327__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__327__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__327__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__327__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__327__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__327__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__327__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__328__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__328__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__328__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__328__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__328__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__328__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__328__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__329__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__329__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__329__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__329__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__329__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__329__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__329__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__330__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__330__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__330__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__330__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__330__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__330__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__330__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__331__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__331__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__331__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__331__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__331__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__331__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__331__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__332__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__332__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__332__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__332__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__332__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__332__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__332__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__333__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__333__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__333__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__333__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__333__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__333__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__333__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__334__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__334__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__334__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__334__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__334__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__334__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__334__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__335__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__335__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__335__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__335__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__335__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__335__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__335__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__336__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__336__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__336__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__336__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__336__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__336__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__336__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__337__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__321__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__337__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__337__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__337__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__337__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__337__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__337__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__321__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__321__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__321__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__338__state_in = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                  >> 0x38U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                >> 0x10U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                   >> 0x20U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                   >> 0x30U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                 >> 8U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                   >> 0x18U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                   >> 0x28U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)(__Vfunc_prince_shiftrows_64bit__338__state_in)))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__338__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__338__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__338__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__338__Vfuncout;
    __Vfunc_sbox4_64bit__339__state_in = (((QData)((IData)(
                                                           vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[4U])));
    __Vfunc_sbox4_8bit__340__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__339__state_in));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__340__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__340__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__340__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__340__state_out;
    vlSelf->__Vfunc_sbox4_64bit__339__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__339__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__340__Vfuncout)));
    __Vfunc_sbox4_8bit__340__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__339__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__340__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__340__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__340__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__340__state_out;
    vlSelf->__Vfunc_sbox4_64bit__339__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__339__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__340__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__340__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__339__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__340__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__340__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__340__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__340__state_out;
    vlSelf->__Vfunc_sbox4_64bit__339__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__339__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__340__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__340__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__339__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__340__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__340__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__340__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__340__state_out;
    vlSelf->__Vfunc_sbox4_64bit__339__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__339__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__340__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__340__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__339__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__340__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__340__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__340__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__340__state_out;
    vlSelf->__Vfunc_sbox4_64bit__339__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__339__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__340__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__340__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__339__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__340__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__340__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__340__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__340__state_out;
    vlSelf->__Vfunc_sbox4_64bit__339__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__339__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__340__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__340__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__339__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__340__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__340__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__340__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__340__state_out;
    vlSelf->__Vfunc_sbox4_64bit__339__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__339__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__340__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__340__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__339__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__340__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__340__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__340__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__340__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__340__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__340__state_out;
    vlSelf->__Vfunc_sbox4_64bit__339__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__339__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__340__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__339__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__339__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__339__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__341__state_in 
        = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    __Vfunc_prince_nibble_red16__342__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__341__state_in));
    __Vfunc_prince_nibble_red16__342__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__342__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__342__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__342__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__342__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__342__Vfuncout)));
    __Vfunc_prince_nibble_red16__343__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__341__state_in));
    __Vfunc_prince_nibble_red16__343__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__343__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__343__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__343__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__343__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__343__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__344__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__341__state_in));
    __Vfunc_prince_nibble_red16__344__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__344__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__344__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__344__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__344__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__344__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__345__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__341__state_in));
    __Vfunc_prince_nibble_red16__345__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__345__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__345__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__345__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__345__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__345__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__346__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__346__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__346__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__346__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__346__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__346__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__346__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__347__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__347__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__347__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__347__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__347__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__347__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__347__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__348__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__348__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__348__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__348__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__348__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__348__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__348__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__349__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__349__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__349__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__349__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__349__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__349__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__349__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__350__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__350__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__350__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__350__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__350__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__350__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__350__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__351__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__351__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__351__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__351__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__351__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__351__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__351__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__352__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__352__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__352__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__352__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__352__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__352__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__352__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__353__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x20U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__353__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__354__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x30U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__354__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__355__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x30U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__355__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__356__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x30U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__356__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__357__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__341__state_in 
                                                         >> 0x30U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__357__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__341__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__341__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__341__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__358__state_in = vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                  >> 0x38U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                >> 0x10U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                   >> 0x20U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                   >> 0x30U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                 >> 8U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                   >> 0x18U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                   >> 0x28U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)(__Vfunc_prince_shiftrows_64bit__358__state_in)))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__358__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__358__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__358__state_out;
    vlSelf->dmem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__358__Vfuncout;
}
