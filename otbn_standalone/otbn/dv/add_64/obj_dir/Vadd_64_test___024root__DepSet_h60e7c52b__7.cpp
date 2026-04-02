// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_64_test.h for the primary calling header

#include "Vadd_64_test__pch.h"
#include "Vadd_64_test___024root.h"

VL_INLINE_OPT void Vadd_64_test___024root___act_comb__TOP__14(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_comb__TOP__14\n"); );
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
    QData/*63:0*/ __Vtemp_1;
    QData/*63:0*/ __Vtemp_2;
    // Body
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
    vlSelf->add_64_test__DOT__dut__DOT__imem_index 
        = (0x7ffU & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_access_core)
                      ? ((IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_addr_core) 
                         >> 2U) : (IData)(vlSelf->add_64_test__DOT__dut__DOT__imem_index_bus)));
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
    __Vtemp_1 = ((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
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
        = (IData)((__Vtemp_1 >> 0x20U));
    __Vtemp_2 = (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U])));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U] 
        = (IData)((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U] 
        = (IData)((__Vtemp_2 >> 0x20U));
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
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__addr_scr 
        = (0x7ffU & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_state__BRA__32__03a22__KET__) 
                     ^ (IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                                >> 0x35U))));
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
}

VL_INLINE_OPT void Vadd_64_test___024root___act_comb__TOP__15(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_comb__TOP__15\n"); );
    // Body
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out 
        = ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel)
            ? vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg
            : vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_calc);
}

VL_INLINE_OPT void Vadd_64_test___024root___act_comb__TOP__16(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_comb__TOP__16\n"); );
    // Body
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
}

VL_INLINE_OPT void Vadd_64_test___024root___act_comb__TOP__17(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_comb__TOP__17\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                   >> 0x1fU))) << 0x3eU) 
                 | (((QData)((IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                            >> 0x1eU)))) 
                     << 0x3dU) | (((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                       >> 0x1dU)))) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                     >> 0x1cU)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                        >> 0x1bU)))) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                           >> 0x1aU)))) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                              >> 0x19U)))) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x18U)))) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x17U)))) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x16U)))) 
                                                                   << 0x35U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x15U)))) 
                                                                      << 0x34U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x14U)))) 
                                                                         << 0x33U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x13U)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x12U)))) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x11U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xfU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xeU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xdU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xcU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xbU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 9U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 8U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 7U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 6U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vadd_64_test___024root___act_comb__TOP__18(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_comb__TOP__18\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                   >> 0x1fU))) << 0x3eU) 
                 | (((QData)((IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                            >> 0x1eU)))) 
                     << 0x3dU) | (((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                       >> 0x1dU)))) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                     >> 0x1cU)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                        >> 0x1bU)))) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                           >> 0x1aU)))) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                              >> 0x19U)))) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x18U)))) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x17U)))) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x16U)))) 
                                                                   << 0x35U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x15U)))) 
                                                                      << 0x34U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x14U)))) 
                                                                         << 0x33U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x13U)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x12U)))) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x11U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xfU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xeU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xdU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xcU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xbU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 9U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 8U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 7U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 6U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3dU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3eU)))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3bU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3cU)))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x39U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3aU)))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x37U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x38U)))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x35U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x36U)))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x33U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x34U)))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x31U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x32U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2fU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x30U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2dU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2eU)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2bU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2cU)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x29U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2aU)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x27U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x28U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x25U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x26U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x23U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x24U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x21U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x22U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1fU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x20U)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1dU))) 
                                                                                << 0xeU) 
                                                                                | (0xffffc000U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 0xdU) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1eU)) 
                                                                                << 0xeU))))) 
                                                                                | ((0x2000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1bU))) 
                                                                                << 0xdU) 
                                                                                | (0xffffe000U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 0xcU) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1cU)) 
                                                                                << 0xdU))))) 
                                                                                | ((0x1000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x19U))) 
                                                                                << 0xcU) 
                                                                                | (0xfffff000U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 0xbU) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU))))) 
                                                                                | ((0x800U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x17U))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 0xaU) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x18U)) 
                                                                                << 0xbU))))) 
                                                                                | ((0x400U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x15U))) 
                                                                                << 0xaU) 
                                                                                | (0xfffffc00U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 9U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x16U)) 
                                                                                << 0xaU))))) 
                                                                                | ((0x200U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x13U))) 
                                                                                << 9U) 
                                                                                | (0xfffffe00U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 8U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x14U)) 
                                                                                << 9U))))) 
                                                                                | ((0x100U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x11U))) 
                                                                                << 8U) 
                                                                                | (0xffffff00U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 7U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x12U)) 
                                                                                << 8U))))) 
                                                                                | ((0x80U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (0xffffff80U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 6U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x10U)) 
                                                                                << 7U))))) 
                                                                                | ((0x40U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xdU))) 
                                                                                << 6U) 
                                                                                | (0xffffffc0U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 4U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xeU)) 
                                                                                << 6U))))) 
                                                                                | ((0x20U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xbU))) 
                                                                                << 5U) 
                                                                                | (0xffffffe0U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 3U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xcU)) 
                                                                                << 5U))))) 
                                                                                | ((0x10U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 9U))) 
                                                                                << 4U) 
                                                                                | (0xfffffff0U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xaU)) 
                                                                                << 4U))))) 
                                                                                | ((8U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                << 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 8U)) 
                                                                                << 3U))))) 
                                                                                | ((4U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 3U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 5U))) 
                                                                                << 2U) 
                                                                                | (0x7ffffffcU 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 6U)) 
                                                                                << 2U))))) 
                                                                                | ((2U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 3U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 3U))) 
                                                                                << 1U) 
                                                                                | (0x3ffffffeU 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 4U)) 
                                                                                << 1U))))) 
                                                                                | (1U 
                                                                                & (((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 4U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 1U))) 
                                                                                | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr) 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vadd_64_test___024root___act_comb__TOP__19(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_comb__TOP__19\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                   >> 0x1fU))) << 0x3eU) 
                 | (((QData)((IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                            >> 0x1eU)))) 
                     << 0x3dU) | (((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                       >> 0x1dU)))) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                     >> 0x1cU)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                        >> 0x1bU)))) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                           >> 0x1aU)))) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                              >> 0x19U)))) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x18U)))) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x17U)))) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x16U)))) 
                                                                   << 0x35U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x15U)))) 
                                                                      << 0x34U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x14U)))) 
                                                                         << 0x33U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x13U)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x12U)))) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x11U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xfU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xeU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xdU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xcU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xbU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 9U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 8U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 7U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 6U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vadd_64_test___024root___act_comb__TOP__20(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_comb__TOP__20\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                   >> 0x1fU))) << 0x3eU) 
                 | (((QData)((IData)((1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                            >> 0x1eU)))) 
                     << 0x3dU) | (((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                       >> 0x1dU)))) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                     >> 0x1cU)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                        >> 0x1bU)))) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                           >> 0x1aU)))) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                              >> 0x19U)))) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x18U)))) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x17U)))) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x16U)))) 
                                                                   << 0x35U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x15U)))) 
                                                                      << 0x34U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x14U)))) 
                                                                         << 0x33U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x13U)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x12U)))) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x11U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xfU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xeU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xdU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xcU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xbU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 9U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 8U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 7U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 6U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT____Vcellinp__u_prim_onehot_check__oh_i 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3dU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3eU)))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3bU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3cU)))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x39U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3aU)))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x37U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x38U)))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x35U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x36U)))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x33U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x34U)))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x31U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x32U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2fU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x30U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2dU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2eU)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2bU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2cU)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x29U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2aU)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x27U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x28U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x25U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x26U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x23U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x24U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x21U))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x22U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1fU))) 
                                                                                | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x20U)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1dU))) 
                                                                                << 0xeU) 
                                                                                | (0xffffc000U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 0xdU) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1eU)) 
                                                                                << 0xeU))))) 
                                                                                | ((0x2000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1bU))) 
                                                                                << 0xdU) 
                                                                                | (0xffffe000U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 0xcU) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1cU)) 
                                                                                << 0xdU))))) 
                                                                                | ((0x1000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x19U))) 
                                                                                << 0xcU) 
                                                                                | (0xfffff000U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 0xbU) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU))))) 
                                                                                | ((0x800U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x17U))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 0xaU) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x18U)) 
                                                                                << 0xbU))))) 
                                                                                | ((0x400U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x15U))) 
                                                                                << 0xaU) 
                                                                                | (0xfffffc00U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 9U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x16U)) 
                                                                                << 0xaU))))) 
                                                                                | ((0x200U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x13U))) 
                                                                                << 9U) 
                                                                                | (0xfffffe00U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 8U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x14U)) 
                                                                                << 9U))))) 
                                                                                | ((0x100U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x11U))) 
                                                                                << 8U) 
                                                                                | (0xffffff00U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 7U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x12U)) 
                                                                                << 8U))))) 
                                                                                | ((0x80U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (0xffffff80U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 6U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x10U)) 
                                                                                << 7U))))) 
                                                                                | ((0x40U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xdU))) 
                                                                                << 6U) 
                                                                                | (0xffffffc0U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 4U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xeU)) 
                                                                                << 6U))))) 
                                                                                | ((0x20U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xbU))) 
                                                                                << 5U) 
                                                                                | (0xffffffe0U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 3U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xcU)) 
                                                                                << 5U))))) 
                                                                                | ((0x10U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 9U))) 
                                                                                << 4U) 
                                                                                | (0xfffffff0U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xaU)) 
                                                                                << 4U))))) 
                                                                                | ((8U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                << 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 8U)) 
                                                                                << 3U))))) 
                                                                                | ((4U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 3U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 5U))) 
                                                                                << 2U) 
                                                                                | (0x7ffffffcU 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 6U)) 
                                                                                << 2U))))) 
                                                                                | ((2U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 3U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 3U))) 
                                                                                << 1U) 
                                                                                | (0x3ffffffeU 
                                                                                & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 4U)) 
                                                                                << 1U))))) 
                                                                                | (1U 
                                                                                & (((~ 
                                                                                ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 4U)) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 1U))) 
                                                                                | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr) 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vadd_64_test___024root___act_comb__TOP__21(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_comb__TOP__21\n"); );
    // Init
    QData/*63:0*/ __Vfunc_sbox4_64bit__118__Vfuncout;
    __Vfunc_sbox4_64bit__118__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__118__state_in;
    __Vfunc_sbox4_64bit__118__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__119__Vfuncout;
    __Vfunc_sbox4_8bit__119__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__119__state_in;
    __Vfunc_sbox4_8bit__119__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__120__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__120__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__120__state_in;
    __Vfunc_prince_mult_prime_64bit__120__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__121__Vfuncout;
    __Vfunc_prince_nibble_red16__121__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__121__vect;
    __Vfunc_prince_nibble_red16__121__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__122__Vfuncout;
    __Vfunc_prince_nibble_red16__122__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__122__vect;
    __Vfunc_prince_nibble_red16__122__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__123__Vfuncout;
    __Vfunc_prince_nibble_red16__123__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__123__vect;
    __Vfunc_prince_nibble_red16__123__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__124__Vfuncout;
    __Vfunc_prince_nibble_red16__124__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__124__vect;
    __Vfunc_prince_nibble_red16__124__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__125__Vfuncout;
    __Vfunc_prince_nibble_red16__125__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__125__vect;
    __Vfunc_prince_nibble_red16__125__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__126__Vfuncout;
    __Vfunc_prince_nibble_red16__126__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__126__vect;
    __Vfunc_prince_nibble_red16__126__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__127__Vfuncout;
    __Vfunc_prince_nibble_red16__127__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__127__vect;
    __Vfunc_prince_nibble_red16__127__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__128__Vfuncout;
    __Vfunc_prince_nibble_red16__128__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__128__vect;
    __Vfunc_prince_nibble_red16__128__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__129__Vfuncout;
    __Vfunc_prince_nibble_red16__129__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__129__vect;
    __Vfunc_prince_nibble_red16__129__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__130__Vfuncout;
    __Vfunc_prince_nibble_red16__130__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__130__vect;
    __Vfunc_prince_nibble_red16__130__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__131__Vfuncout;
    __Vfunc_prince_nibble_red16__131__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__131__vect;
    __Vfunc_prince_nibble_red16__131__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__132__Vfuncout;
    __Vfunc_prince_nibble_red16__132__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__132__vect;
    __Vfunc_prince_nibble_red16__132__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__133__Vfuncout;
    __Vfunc_prince_nibble_red16__133__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__133__vect;
    __Vfunc_prince_nibble_red16__133__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__134__Vfuncout;
    __Vfunc_prince_nibble_red16__134__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__134__vect;
    __Vfunc_prince_nibble_red16__134__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__135__Vfuncout;
    __Vfunc_prince_nibble_red16__135__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__135__vect;
    __Vfunc_prince_nibble_red16__135__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__136__Vfuncout;
    __Vfunc_prince_nibble_red16__136__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__136__vect;
    __Vfunc_prince_nibble_red16__136__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__137__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__137__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__137__state_in;
    __Vfunc_prince_shiftrows_64bit__137__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__138__Vfuncout;
    __Vfunc_sbox4_64bit__138__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__138__state_in;
    __Vfunc_sbox4_64bit__138__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__139__Vfuncout;
    __Vfunc_sbox4_8bit__139__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__139__state_in;
    __Vfunc_sbox4_8bit__139__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__140__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__140__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__140__state_in;
    __Vfunc_prince_mult_prime_64bit__140__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__141__Vfuncout;
    __Vfunc_prince_nibble_red16__141__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__141__vect;
    __Vfunc_prince_nibble_red16__141__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__142__Vfuncout;
    __Vfunc_prince_nibble_red16__142__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__142__vect;
    __Vfunc_prince_nibble_red16__142__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__143__Vfuncout;
    __Vfunc_prince_nibble_red16__143__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__143__vect;
    __Vfunc_prince_nibble_red16__143__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__144__Vfuncout;
    __Vfunc_prince_nibble_red16__144__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__144__vect;
    __Vfunc_prince_nibble_red16__144__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__145__Vfuncout;
    __Vfunc_prince_nibble_red16__145__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__145__vect;
    __Vfunc_prince_nibble_red16__145__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__146__Vfuncout;
    __Vfunc_prince_nibble_red16__146__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__146__vect;
    __Vfunc_prince_nibble_red16__146__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__147__Vfuncout;
    __Vfunc_prince_nibble_red16__147__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__147__vect;
    __Vfunc_prince_nibble_red16__147__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__148__Vfuncout;
    __Vfunc_prince_nibble_red16__148__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__148__vect;
    __Vfunc_prince_nibble_red16__148__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__149__Vfuncout;
    __Vfunc_prince_nibble_red16__149__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__149__vect;
    __Vfunc_prince_nibble_red16__149__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__150__Vfuncout;
    __Vfunc_prince_nibble_red16__150__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__150__vect;
    __Vfunc_prince_nibble_red16__150__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__151__Vfuncout;
    __Vfunc_prince_nibble_red16__151__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__151__vect;
    __Vfunc_prince_nibble_red16__151__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__152__Vfuncout;
    __Vfunc_prince_nibble_red16__152__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__152__vect;
    __Vfunc_prince_nibble_red16__152__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__153__Vfuncout;
    __Vfunc_prince_nibble_red16__153__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__153__vect;
    __Vfunc_prince_nibble_red16__153__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__154__Vfuncout;
    __Vfunc_prince_nibble_red16__154__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__154__vect;
    __Vfunc_prince_nibble_red16__154__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__155__Vfuncout;
    __Vfunc_prince_nibble_red16__155__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__155__vect;
    __Vfunc_prince_nibble_red16__155__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__156__Vfuncout;
    __Vfunc_prince_nibble_red16__156__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__156__vect;
    __Vfunc_prince_nibble_red16__156__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__157__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__157__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__157__state_in;
    __Vfunc_prince_shiftrows_64bit__157__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__158__Vfuncout;
    __Vfunc_sbox4_64bit__158__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__158__state_in;
    __Vfunc_sbox4_64bit__158__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__159__Vfuncout;
    __Vfunc_sbox4_8bit__159__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__159__state_in;
    __Vfunc_sbox4_8bit__159__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__160__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__160__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__160__state_in;
    __Vfunc_prince_mult_prime_64bit__160__state_in = 0;
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
    CData/*3:0*/ __Vfunc_prince_nibble_red16__174__Vfuncout;
    __Vfunc_prince_nibble_red16__174__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__174__vect;
    __Vfunc_prince_nibble_red16__174__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__175__Vfuncout;
    __Vfunc_prince_nibble_red16__175__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__175__vect;
    __Vfunc_prince_nibble_red16__175__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__176__Vfuncout;
    __Vfunc_prince_nibble_red16__176__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__176__vect;
    __Vfunc_prince_nibble_red16__176__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__177__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__177__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__177__state_in;
    __Vfunc_prince_shiftrows_64bit__177__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__178__Vfuncout;
    __Vfunc_sbox4_64bit__178__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__178__state_in;
    __Vfunc_sbox4_64bit__178__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__179__Vfuncout;
    __Vfunc_sbox4_8bit__179__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__179__state_in;
    __Vfunc_sbox4_8bit__179__state_in = 0;
    // Body
    __Vfunc_sbox4_64bit__178__state_in = (((QData)((IData)(
                                                           vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[7U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[6U])));
    __Vfunc_sbox4_8bit__179__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__178__state_in));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__179__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__179__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__179__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__179__state_out;
    vlSelf->__Vfunc_sbox4_64bit__178__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__178__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__179__Vfuncout)));
    __Vfunc_sbox4_8bit__179__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__178__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__179__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__179__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__179__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__179__state_out;
    vlSelf->__Vfunc_sbox4_64bit__178__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__178__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__179__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__179__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__178__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__179__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__179__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__179__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__179__state_out;
    vlSelf->__Vfunc_sbox4_64bit__178__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__178__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__179__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__179__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__178__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__179__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__179__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__179__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__179__state_out;
    vlSelf->__Vfunc_sbox4_64bit__178__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__178__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__179__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__179__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__178__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__179__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__179__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__179__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__179__state_out;
    vlSelf->__Vfunc_sbox4_64bit__178__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__178__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__179__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__179__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__178__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__179__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__179__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__179__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__179__state_out;
    vlSelf->__Vfunc_sbox4_64bit__178__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__178__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__179__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__179__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__178__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__179__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__179__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__179__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__179__state_out;
    vlSelf->__Vfunc_sbox4_64bit__178__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__178__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__179__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__179__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__178__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__179__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__179__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__179__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__179__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__179__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__179__state_out;
    vlSelf->__Vfunc_sbox4_64bit__178__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__178__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__179__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__178__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__178__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_d 
        = __Vfunc_sbox4_64bit__178__Vfuncout;
    __Vfunc_sbox4_64bit__118__state_in = (((QData)((IData)(
                                                           vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[0U])));
    __Vfunc_sbox4_8bit__119__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__118__state_in));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__119__state_out;
    vlSelf->__Vfunc_sbox4_64bit__118__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__118__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)));
    __Vfunc_sbox4_8bit__119__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__118__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__119__state_out;
    vlSelf->__Vfunc_sbox4_64bit__118__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__118__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__119__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__118__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__119__state_out;
    vlSelf->__Vfunc_sbox4_64bit__118__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__118__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__119__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__118__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__119__state_out;
    vlSelf->__Vfunc_sbox4_64bit__118__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__118__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__119__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__118__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__119__state_out;
    vlSelf->__Vfunc_sbox4_64bit__118__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__118__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__119__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__118__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__119__state_out;
    vlSelf->__Vfunc_sbox4_64bit__118__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__118__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__119__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__118__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__119__state_out;
    vlSelf->__Vfunc_sbox4_64bit__118__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__118__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__119__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__118__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__119__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__119__state_out;
    vlSelf->__Vfunc_sbox4_64bit__118__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__118__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__118__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__118__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__118__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__120__state_in 
        = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    __Vfunc_prince_nibble_red16__121__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__120__state_in));
    __Vfunc_prince_nibble_red16__121__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__121__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__121__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__121__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__121__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__121__Vfuncout)));
    __Vfunc_prince_nibble_red16__122__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__120__state_in));
    __Vfunc_prince_nibble_red16__122__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__122__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__122__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__122__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__122__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__122__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__123__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__120__state_in));
    __Vfunc_prince_nibble_red16__123__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__123__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__123__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__123__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__123__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__123__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__124__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__120__state_in));
    __Vfunc_prince_nibble_red16__124__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__124__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__124__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__124__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__124__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__124__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__125__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__125__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__125__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__125__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__125__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__125__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__125__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__126__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__126__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__126__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__126__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__126__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__126__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__126__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__127__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__127__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__127__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__127__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__127__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__127__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__127__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__128__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__128__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__128__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__128__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__128__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__128__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__128__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__129__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__129__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__129__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__129__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__129__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__129__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__129__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__130__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__130__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__130__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__130__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__130__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__130__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__130__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__131__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__131__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__131__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__131__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__131__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__131__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__131__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__132__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__132__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__132__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__132__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__132__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__132__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__132__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__133__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__133__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__133__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__133__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__133__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__133__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__133__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__134__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__134__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__134__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__134__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__134__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__134__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__134__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__135__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__135__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__135__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__135__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__135__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__135__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__135__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__136__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__120__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__136__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__136__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__136__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__136__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__136__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__136__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__120__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__120__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__120__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__137__state_in = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                  >> 0x38U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                >> 0x10U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                   >> 0x20U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                   >> 0x30U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                 >> 8U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                   >> 0x18U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                   >> 0x28U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)(__Vfunc_prince_shiftrows_64bit__137__state_in)))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__137__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__137__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__137__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__137__Vfuncout;
    __Vfunc_sbox4_64bit__138__state_in = (((QData)((IData)(
                                                           vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[2U])));
    __Vfunc_sbox4_8bit__139__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__138__state_in));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__139__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__139__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__139__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__139__state_out;
    vlSelf->__Vfunc_sbox4_64bit__138__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__138__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__139__Vfuncout)));
    __Vfunc_sbox4_8bit__139__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__138__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__139__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__139__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__139__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__139__state_out;
    vlSelf->__Vfunc_sbox4_64bit__138__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__138__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__139__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__139__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__138__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__139__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__139__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__139__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__139__state_out;
    vlSelf->__Vfunc_sbox4_64bit__138__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__138__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__139__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__139__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__138__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__139__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__139__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__139__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__139__state_out;
    vlSelf->__Vfunc_sbox4_64bit__138__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__138__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__139__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__139__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__138__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__139__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__139__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__139__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__139__state_out;
    vlSelf->__Vfunc_sbox4_64bit__138__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__138__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__139__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__139__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__138__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__139__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__139__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__139__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__139__state_out;
    vlSelf->__Vfunc_sbox4_64bit__138__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__138__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__139__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__139__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__138__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__139__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__139__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__139__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__139__state_out;
    vlSelf->__Vfunc_sbox4_64bit__138__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__138__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__139__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__139__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__138__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__139__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__139__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__139__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__139__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__139__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__139__state_out;
    vlSelf->__Vfunc_sbox4_64bit__138__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__138__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__139__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__138__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__138__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__138__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__140__state_in 
        = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    __Vfunc_prince_nibble_red16__141__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__140__state_in));
    __Vfunc_prince_nibble_red16__141__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__141__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__141__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__141__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__141__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__141__Vfuncout)));
    __Vfunc_prince_nibble_red16__142__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__140__state_in));
    __Vfunc_prince_nibble_red16__142__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__142__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__142__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__142__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__142__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__142__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__143__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__140__state_in));
    __Vfunc_prince_nibble_red16__143__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__143__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__143__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__143__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__143__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__143__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__144__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__140__state_in));
    __Vfunc_prince_nibble_red16__144__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__144__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__144__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__144__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__144__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__144__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__145__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__145__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__145__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__145__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__145__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__145__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__145__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__146__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__146__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__146__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__146__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__146__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__146__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__146__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__147__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__147__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__147__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__147__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__147__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__147__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__147__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__148__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__148__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__148__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__148__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__148__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__148__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__148__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__149__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__149__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__149__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__149__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__149__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__149__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__149__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__150__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__150__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__150__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__150__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__150__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__150__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__150__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__151__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__151__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__151__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__151__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__151__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__151__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__151__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__152__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__152__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__152__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__152__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__152__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__152__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__152__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__153__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__153__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__153__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__153__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__153__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__153__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__153__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__154__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__154__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__154__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__154__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__154__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__154__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__154__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__155__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__155__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__155__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__155__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__155__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__155__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__155__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__156__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__140__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__156__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__156__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__156__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__156__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__156__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__156__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__140__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__140__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__140__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__157__state_in = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                  >> 0x38U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                >> 0x10U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                   >> 0x20U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                   >> 0x30U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                 >> 8U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                   >> 0x18U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                   >> 0x28U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)(__Vfunc_prince_shiftrows_64bit__157__state_in)))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__157__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__157__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__157__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__157__Vfuncout;
    __Vfunc_sbox4_64bit__158__state_in = (((QData)((IData)(
                                                           vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo[4U])));
    __Vfunc_sbox4_8bit__159__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__158__state_in));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__159__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__159__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__159__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__159__state_out;
    vlSelf->__Vfunc_sbox4_64bit__158__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__158__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__159__Vfuncout)));
    __Vfunc_sbox4_8bit__159__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__158__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__159__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__159__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__159__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__159__state_out;
    vlSelf->__Vfunc_sbox4_64bit__158__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__158__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__159__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__159__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__158__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__159__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__159__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__159__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__159__state_out;
    vlSelf->__Vfunc_sbox4_64bit__158__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__158__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__159__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__159__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__158__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__159__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__159__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__159__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__159__state_out;
    vlSelf->__Vfunc_sbox4_64bit__158__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__158__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__159__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__159__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__158__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__159__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__159__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__159__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__159__state_out;
    vlSelf->__Vfunc_sbox4_64bit__158__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__158__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__159__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__159__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__158__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__159__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__159__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__159__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__159__state_out;
    vlSelf->__Vfunc_sbox4_64bit__158__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__158__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__159__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__159__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__158__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__159__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__159__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__159__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__159__state_out;
    vlSelf->__Vfunc_sbox4_64bit__158__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__158__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__159__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__159__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__158__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x4d5e087619ca23fbULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__159__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__159__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__159__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x4d5e087619ca23fbULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__159__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__159__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__159__state_out;
    vlSelf->__Vfunc_sbox4_64bit__158__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__158__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__159__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__158__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__158__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__158__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__160__state_in 
        = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    __Vfunc_prince_nibble_red16__161__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__160__state_in));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__161__Vfuncout)));
    __Vfunc_prince_nibble_red16__162__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__160__state_in));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__162__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__163__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__160__state_in));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__163__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__164__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__160__state_in));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__164__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__165__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__165__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__166__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
                                                         >> 0x10U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__166__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__167__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
                                                         >> 0x10U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__167__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__168__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
                                                         >> 0x10U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__168__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__169__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__169__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__170__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
                                                         >> 0x20U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__170__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__171__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
                                                         >> 0x20U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__171__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__172__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
                                                         >> 0x20U)));
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__172__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__173__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
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
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__173__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__174__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__174__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__174__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__174__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__174__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__174__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__174__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__175__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__175__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__175__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__175__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__175__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__175__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__175__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__176__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__160__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__176__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__176__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__176__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__176__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__176__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__176__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__160__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__160__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__160__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__177__state_in = vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                  >> 0x38U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                >> 0x10U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                   >> 0x20U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                   >> 0x30U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                 >> 8U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                   >> 0x18U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                   >> 0x28U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)(__Vfunc_prince_shiftrows_64bit__177__state_in)))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__177__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__177__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__177__state_out;
    vlSelf->add_64_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__177__Vfuncout;
}

VL_INLINE_OPT void Vadd_64_test___024root___act_comb__TOP__22(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_comb__TOP__22\n"); );
    // Body
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_err_d 
        = (1U & (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree) 
                  | (((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                      ^ (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal))) 
                     | ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                        ^ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree)))) 
                 | (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_spurious_we_err)));
}

VL_INLINE_OPT void Vadd_64_test___024root___nba_sequent__TOP__0(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__add_64_test__DOT__edn_rnd_i = vlSelf->add_64_test__DOT__edn_rnd_i;
    if (vlSelf->rst_ni) {
        vlSelf->add_64_test__DOT__edn_urnd_i = (0x100000000ULL 
                                                | (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o)) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(0x12345678U) 
                                                                      + (IData)(vlSelf->add_64_test__DOT__edn_urnd_i))))));
        vlSelf->__Vdly__add_64_test__DOT__edn_rnd_i 
            = (0x100000000ULL | (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o)) 
                                  << 0x21U) | (QData)((IData)(
                                                              ((IData)(0x87654321U) 
                                                               + (IData)(vlSelf->add_64_test__DOT__edn_rnd_i))))));
    } else {
        vlSelf->add_64_test__DOT__edn_urnd_i = 0x1a5a5a5a5ULL;
        vlSelf->__Vdly__add_64_test__DOT__edn_rnd_i = 0x15a5a5a5aULL;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq));
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq));
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o = 0U;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
                = (1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req)));
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
                = (1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req)));
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
            = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)((vlSelf->add_64_test__DOT__edn_urnd_i 
                    >> 0x21U)) & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
                vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
            }
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

VL_INLINE_OPT void Vadd_64_test___024root___nba_sequent__TOP__3(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->rst_otp_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req 
        = ((IData)(vlSelf->rst_otp_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq));
    if (vlSelf->rst_otp_ni) {
        vlSelf->add_64_test__DOT__otbn_otp_key_i[6U] 
            = ((1U & vlSelf->add_64_test__DOT__otbn_otp_key_i[6U]) 
               | (3U & ((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT____Vcellout__u_otp_key_req_sync__dst_req_o) 
                        << 1U)));
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT____Vcellout__u_otp_key_req_sync__dst_req_o) {
            vlSelf->add_64_test__DOT__otbn_otp_key_i[0U] = 0x579b579bU;
            vlSelf->add_64_test__DOT__otbn_otp_key_i[1U] = 0x579b579bU;
            vlSelf->add_64_test__DOT__otbn_otp_key_i[2U] = 0x95fd757dU;
            vlSelf->add_64_test__DOT__otbn_otp_key_i[3U] = 0xbd5b7ddfU;
            vlSelf->add_64_test__DOT__otbn_otp_key_i[4U] = 0x95fd757dU;
            vlSelf->add_64_test__DOT__otbn_otp_key_i[5U] = 0xbd5b7ddfU;
            vlSelf->add_64_test__DOT__otbn_otp_key_i[6U] 
                = (1U | (2U & vlSelf->add_64_test__DOT__otbn_otp_key_i[6U]));
        }
    } else {
        vlSelf->add_64_test__DOT__otbn_otp_key_i[0U] = 0U;
        vlSelf->add_64_test__DOT__otbn_otp_key_i[1U] = 0U;
        vlSelf->add_64_test__DOT__otbn_otp_key_i[2U] = 0U;
        vlSelf->add_64_test__DOT__otbn_otp_key_i[3U] = 0U;
        vlSelf->add_64_test__DOT__otbn_otp_key_i[4U] = 0U;
        vlSelf->add_64_test__DOT__otbn_otp_key_i[5U] = 0U;
        vlSelf->add_64_test__DOT__otbn_otp_key_i[6U] = 0U;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->rst_otp_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT____Vcellout__u_otp_key_req_sync__dst_req_o = 0U;
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq 
        = ((IData)(vlSelf->rst_otp_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT____Vcellout__u_otp_key_req_sync__dst_req_o 
                = (1U & (~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req)));
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT____Vcellout__u_otp_key_req_sync__dst_req_o 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req;
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((vlSelf->add_64_test__DOT__otbn_otp_key_i[6U] 
            >> 1U) & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT____Vcellout__u_otp_key_req_sync__dst_req_o));
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
                = (1U & (~ (vlSelf->add_64_test__DOT__otbn_otp_key_i[6U] 
                            >> 1U)));
            if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
                vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
            }
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
            = (1U & (vlSelf->add_64_test__DOT__otbn_otp_key_i[6U] 
                     >> 1U));
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
}

VL_INLINE_OPT void Vadd_64_test___024root___nba_sequent__TOP__4(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->add_64_test__DOT__edn_rnd_i = vlSelf->__Vdly__add_64_test__DOT__edn_rnd_i;
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)((vlSelf->add_64_test__DOT__edn_rnd_i 
                    >> 0x21U)) & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o));
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns 
        = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs;
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
                = (1U & (~ (IData)((vlSelf->add_64_test__DOT__edn_urnd_i 
                                    >> 0x21U))));
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
            = (1U & (IData)((vlSelf->add_64_test__DOT__edn_urnd_i 
                             >> 0x21U)));
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
        = vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q;
    if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
                vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
            }
            vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
                = (1U & (~ (IData)((vlSelf->add_64_test__DOT__edn_rnd_i 
                                    >> 0x21U))));
        }
    } else {
        if (vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
        vlSelf->add_64_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
            = (1U & (IData)((vlSelf->add_64_test__DOT__edn_rnd_i 
                             >> 0x21U)));
    }
}

VL_INLINE_OPT void Vadd_64_test___024root___nba_sequent__TOP__5(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                                          >> 0x11U))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                        >> 0x11U)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                        >> 0x11U)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                        >> 0x11U)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                                 >> 0x11U)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                                 >> 0x11U)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                                 >> 0x11U)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x7ffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                           >> 0x11U)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                          >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x7ff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                           >> 0x11U)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x7ffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                             >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x7fe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                              >> 0x11U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x7ff0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x7f80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                              >> 0x11U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x7fc0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x7e00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                               >> 0x11U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x7f00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                 >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x7800U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                 >> 0x11U)))) 
              | (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0xaU) ^ (0x7c00U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                   >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x6000U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                  >> 0x11U)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0x7000U & 
                                         (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                          >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U]) 
                          << 0xfU)) | ((0x4000U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                   >> 0x11U)) 
                                       ^ ((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                          << 0xeU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                            << 0xfU)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                              << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                            << 0xfU)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                              << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                             << 0xfU)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                               << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                             << 0xfU)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                               << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                              << 0xfU)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                              << 0xfU)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                               << 0xfU)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                 << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                               << 0xfU)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                 << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                                        << 0x16U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                                          >> 0xaU))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                        >> 0xaU)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                        >> 0xaU)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                        >> 0xaU)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                                 >> 0xaU)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                                 >> 0xaU)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                                 >> 0xaU)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x3ffffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                             >> 0xaU)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                          >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x3ffff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                             >> 0xaU)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x3ffffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                               >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x3fffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                >> 0xaU)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x3ffff0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                  >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x3fff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                >> 0xaU)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x3fffc0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                  >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x3ffe00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                 >> 0xaU)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x3fff00U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                   >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x3ff800U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                   >> 0xaU)))) 
              | (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0xaU) ^ (0x3ffc00U & 
                                        (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                         >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x3fe000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                        >> 0xaU)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0x3ff000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                            >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0x3f8000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                        >> 0xaU)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0x3fc000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                            >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0x3e0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                            >> 0xaU)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0x3f0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                              >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0x380000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                            >> 0xaU)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0x3c0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                              >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | (((0x200000U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                             >> 0xaU)) ^ ((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                          << 0x15U)) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0x300000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                               >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                             << 0x16U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U]) 
                              << 0x16U))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                              << 0x16U)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                << 0x16U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                              << 0x16U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                << 0x16U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                               << 0x16U)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                 << 0x16U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                               << 0x16U)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                 << 0x16U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                                        << 0x1dU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                                          >> 3U))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                        >> 3U)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                        >> 3U)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                        >> 3U)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                                 >> 3U)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                                 >> 3U)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                                 >> 3U)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x1ffffffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                               >> 3U)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                          >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x1ffffff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                               >> 3U)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x1ffffffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                                 >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x1fffffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                                  >> 3U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x1ffffff0U & 
                                     (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                      >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x1fffff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                                  >> 3U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x1fffffc0U & 
                                     (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                      >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x1ffffe00U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                                   >> 3U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x1fffff00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                       >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x1ffff800U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                       >> 3U)))) | 
              (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xaU) ^ (0x1ffffc00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                       >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x1fffe000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                          >> 3U)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0x1ffff000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                            >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0x1fff8000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                          >> 3U)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0x1fffc000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                            >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0x1ffe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                            >> 3U)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0x1fff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                              >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0x1ff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                            >> 3U)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0x1ffc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                              >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0x1fe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                             >> 3U)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0x1ff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                               >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0x1f800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                             >> 3U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0x1fc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                               >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0x1e000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                              >> 3U)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0x1f000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                                >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0x18000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                              >> 3U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0x1c000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                                >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U]) 
                              << 0x1dU)) | ((0x10000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
                                                >> 3U)) 
                                            ^ ((0x4aU 
                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                               << 0x1cU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                               << 0x1dU)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
                                                 << 0x1dU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                                          >> 0x1cU))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                                  >> 0x1cU)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                                  >> 0x1cU)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                                  >> 0x1cU)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                                 >> 0x1cU)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                                 >> 0x1cU)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                                 >> 0x1cU)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0xeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                        >> 0x1cU)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                          >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | (((8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                      >> 0x1cU)) ^ ((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                    << 3U)) | (4U & 
                                               (((0x61U 
                                                  == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                 << 2U) 
                                                ^ (0xcU 
                                                   & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                                      >> 0x1cU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0xffffffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                                  << 4U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U]) 
                          << 4U))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0xffffff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                                  << 4U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0xffffffc0U & 
                                     (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                      << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0xfffffe00U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                                   << 4U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0xffffff00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                       << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0xfffff800U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                       << 4U)))) | 
              (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xaU) ^ (0xfffffc00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                       << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0xffffe000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                          << 4U)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0xfffff000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                            << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0xffff8000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                          << 4U)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0xffffc000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                            << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                            << 4U)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                              << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                            << 4U)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                              << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                             << 4U)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                               << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                             << 4U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                               << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                              << 4U)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                                << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                              << 4U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                                << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                               << 4U)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                                 << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                               << 4U)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
                                                 << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                                        << 0xbU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                                          >> 0x15U))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                        << 0xbU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                        >> 0x15U)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                        << 0xbU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                        >> 0x15U)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                        << 0xbU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                        >> 0x15U)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                                 >> 0x15U)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                                 >> 0x15U)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                                 >> 0x15U)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x7feU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                          >> 0x15U)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                          >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x7f8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                          >> 0x15U)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x7fcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                            >> 0x15U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x7e0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                             >> 0x15U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x7f0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                               >> 0x15U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x780U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                             >> 0x15U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x7c0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                               >> 0x15U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x600U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                              >> 0x15U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x700U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                                >> 0x15U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U]) 
                         << 0xbU)) | ((0x400U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                                 >> 0x15U)) 
                                      ^ ((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                         << 0xaU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0xffffe000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                          << 0xbU)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0xfffff000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                            << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0xffff8000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                          << 0xbU)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0xffffc000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                            << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                            << 0xbU)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                              << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                            << 0xbU)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                              << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                             << 0xbU)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                               << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                             << 0xbU)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                               << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                              << 0xbU)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                                << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                              << 0xbU)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                                << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                               << 0xbU)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                                 << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                               << 0xbU)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
                                                 << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                                        << 0x12U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                                          >> 0xeU))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                       << 0x32U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                        >> 0xeU)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                       << 0x32U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                        >> 0xeU)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                       << 0x32U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                        >> 0xeU)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                                 >> 0xeU)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                                 >> 0xeU)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                                 >> 0xeU)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x3fffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                            >> 0xeU)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                          >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x3fff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                            >> 0xeU)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x3fffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                              >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x3ffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                               >> 0xeU)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x3fff0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                 >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x3ff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                               >> 0xeU)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x3ffc0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                 >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x3fe00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                >> 0xeU)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x3ff00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                  >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x3f800U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                  >> 0xeU)))) 
              | (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0xaU) ^ (0x3fc00U & 
                                        (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                         >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x3e000U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                   >> 0xeU)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0x3f000U & 
                                         (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                          >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0x38000U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                   >> 0xeU)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0x3c000U & 
                                         (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                          >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | (((0x20000U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                            >> 0xeU)) ^ ((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                         << 0x11U)) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0x30000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                              >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                            << 0x12U)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U]) 
                             << 0x12U))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                             << 0x12U)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                               << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                             << 0x12U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                               << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                              << 0x12U)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                                << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                              << 0x12U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                                << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                               << 0x12U)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                                 << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                               << 0x12U)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
                                                 << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                                          >> 7U))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                        >> 7U)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                        >> 7U)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                        >> 7U)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                                 >> 7U)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                                 >> 7U)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                                 >> 7U)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x1fffffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                              >> 7U)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                          >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x1fffff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                              >> 7U)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x1fffffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                                >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x1ffffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                                 >> 7U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x1fffff0U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                                   >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x1ffff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                                 >> 7U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x1ffffc0U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                                   >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x1fffe00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                                  >> 7U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x1ffff00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                       >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x1fff800U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                       >> 7U)))) | 
              (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xaU) ^ (0x1fffc00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                       >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x1ffe000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                        >> 7U)))) | 
              (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xcU) ^ (0x1fff000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                        >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0x1ff8000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                        >> 7U)))) | 
              (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xeU) ^ (0x1ffc000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                        >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0x1fe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                            >> 7U)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0x1ff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                              >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0x1f80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                            >> 7U)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0x1fc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                              >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0x1e00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                             >> 7U)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0x1f00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                               >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0x1800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                             >> 7U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0x1c00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                               >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U]) 
                             << 0x19U)) | ((0x1000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
                                               >> 7U)) 
                                           ^ ((0x2cU 
                                               == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                              << 0x18U))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                              << 0x19U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                << 0x19U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                               << 0x19U)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                 << 0x19U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                               << 0x19U)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
                                                 << 0x19U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0xfffffffeU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0xfffffff8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0xffffffe0U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0xfffffff0U & 
                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0xffffff80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0xffffffc0U & 
                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0xfffffe00U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0xffffff00U & 
                                      vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0xfffff800U & 
                                      vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0xaU) ^ (0xfffffc00U 
                                        & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0xffffe000U 
                                       & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0xfffff000U 
                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0xffff8000U 
                                       & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0xffffc000U 
                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | (((0x80000000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U]) 
               ^ ((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                  << 0x1fU)) | (0x40000000U & (((0x16U 
                                                 == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                << 0x1eU) 
                                               ^ (0xc0000000U 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                                          >> 0x11U))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                        >> 0x11U)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                        >> 0x11U)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                        >> 0x11U)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                                 >> 0x11U)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                                 >> 0x11U)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                                 >> 0x11U)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x7ffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                           >> 0x11U)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                          >> 0x11U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x7ff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                           >> 0x11U)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x7ffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                             >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x7fe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                              >> 0x11U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x7ff0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x7f80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                              >> 0x11U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x7fc0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x7e00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                               >> 0x11U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x7f00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                 >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x7800U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                 >> 0x11U)))) 
              | (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0xaU) ^ (0x7c00U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                   >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x6000U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                  >> 0x11U)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0x7000U & 
                                         (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                          >> 0x11U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U]) 
                          << 0xfU)) | ((0x4000U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                   >> 0x11U)) 
                                       ^ ((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                          << 0xeU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                            << 0xfU)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                              << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                            << 0xfU)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                              << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                             << 0xfU)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                               << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                             << 0xfU)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                               << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                              << 0xfU)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                              << 0xfU)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                               << 0xfU)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                 << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                               << 0xfU)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                 << 0xfU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                                        << 0x16U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                                          >> 0xaU))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                        >> 0xaU)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                        >> 0xaU)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                        >> 0xaU)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                                 >> 0xaU)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                                 >> 0xaU)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                                 >> 0xaU)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x3ffffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                             >> 0xaU)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                          >> 0xaU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x3ffff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                             >> 0xaU)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x3ffffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                               >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x3fffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                                >> 0xaU)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x3ffff0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                                  >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x3fff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                                >> 0xaU)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x3fffc0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                                  >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x3ffe00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                                 >> 0xaU)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x3fff00U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                                   >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x3ff800U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                                   >> 0xaU)))) 
              | (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0xaU) ^ (0x3ffc00U & 
                                        (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                         >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x3fe000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                        >> 0xaU)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0x3ff000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                            >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0x3f8000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                        >> 0xaU)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0x3fc000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                            >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0x3e0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                            >> 0xaU)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0x3f0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                              >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0x380000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                            >> 0xaU)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0x3c0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                              >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | (((0x200000U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                             >> 0xaU)) ^ ((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                          << 0x15U)) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0x300000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                               >> 0xaU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                             << 0x16U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U]) 
                              << 0x16U))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                              << 0x16U)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                << 0x16U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                              << 0x16U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                << 0x16U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                               << 0x16U)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                 << 0x16U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                               << 0x16U)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                 << 0x16U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                                        << 0x1dU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                                          >> 3U))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                        >> 3U)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                        >> 3U)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                        >> 3U)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                                 >> 3U)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                                 >> 3U)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                                 >> 3U)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x1ffffffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                               >> 3U)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                          >> 3U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x1ffffff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                               >> 3U)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x1ffffffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                                 >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x1fffffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                                  >> 3U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x1ffffff0U & 
                                     (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                      >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x1fffff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                                  >> 3U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x1fffffc0U & 
                                     (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                      >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x1ffffe00U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                                   >> 3U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x1fffff00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                       >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x1ffff800U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                       >> 3U)))) | 
              (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xaU) ^ (0x1ffffc00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                       >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x1fffe000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                          >> 3U)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0x1ffff000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                            >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0x1fff8000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                          >> 3U)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0x1fffc000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                            >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0x1ffe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                            >> 3U)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0x1fff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                              >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0x1ff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                            >> 3U)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0x1ffc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                              >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0x1fe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                             >> 3U)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0x1ff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                               >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0x1f800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                             >> 3U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0x1fc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                               >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0x1e000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                              >> 3U)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0x1f000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                                >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0x18000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                              >> 3U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0x1c000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                                >> 3U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U]) 
                              << 0x1dU)) | ((0x10000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                                                >> 3U)) 
                                            ^ ((0x4aU 
                                                == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                               << 0x1cU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                               << 0x1dU)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                                                 << 0x1dU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                                          >> 0x1cU))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                                  >> 0x1cU)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                                  >> 0x1cU)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                                  >> 0x1cU)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                                 >> 0x1cU)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                                 >> 0x1cU)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                                 >> 0x1cU)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0xeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                        >> 0x1cU)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                          >> 0x1cU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | (((8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                      >> 0x1cU)) ^ ((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                    << 3U)) | (4U & 
                                               (((0x61U 
                                                  == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                 << 2U) 
                                                ^ (0xcU 
                                                   & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                                      >> 0x1cU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0xffffffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                                  << 4U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U]) 
                          << 4U))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0xffffff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                                  << 4U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0xffffffc0U & 
                                     (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                      << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0xfffffe00U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                                   << 4U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0xffffff00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                       << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0xfffff800U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                       << 4U)))) | 
              (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xaU) ^ (0xfffffc00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                       << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0xffffe000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                          << 4U)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0xfffff000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                            << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0xffff8000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                          << 4U)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0xffffc000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                            << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                            << 4U)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                              << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                            << 4U)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                              << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                             << 4U)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                               << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                             << 4U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                               << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                              << 4U)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                                << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                              << 4U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                                << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                               << 4U)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                                 << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                               << 4U)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                                                 << 4U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                                        << 0xbU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                                          >> 0x15U))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                        << 0xbU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                        >> 0x15U)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                        << 0xbU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                        >> 0x15U)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                        << 0xbU) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                        >> 0x15U)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                                 >> 0x15U)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                                 >> 0x15U)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                                 >> 0x15U)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x7feU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                          >> 0x15U)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                          >> 0x15U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x7f8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                          >> 0x15U)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x7fcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                            >> 0x15U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x7e0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                             >> 0x15U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x7f0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                               >> 0x15U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x780U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                             >> 0x15U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x7c0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                               >> 0x15U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x600U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                              >> 0x15U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x700U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                                >> 0x15U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U]) 
                         << 0xbU)) | ((0x400U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                                 >> 0x15U)) 
                                      ^ ((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                         << 0xaU))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0xffffe000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                          << 0xbU)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0xfffff000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                            << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0xffff8000U 
                                       & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                          << 0xbU)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0xffffc000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                            << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                            << 0xbU)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                              << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                            << 0xbU)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                              << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                             << 0xbU)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                               << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                             << 0xbU)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                               << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                              << 0xbU)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                                << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                              << 0xbU)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                                << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                               << 0xbU)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                                 << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                               << 0xbU)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                                                 << 0xbU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                                        << 0x12U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                                          >> 0xeU))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                       << 0x32U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                        >> 0xeU)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                       << 0x32U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                        >> 0xeU)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                       << 0x32U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                        >> 0xeU)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                                 >> 0xeU)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                                 >> 0xeU)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                                 >> 0xeU)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x3fffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                            >> 0xeU)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                          >> 0xeU)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x3fff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                            >> 0xeU)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x3fffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                              >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x3ffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                               >> 0xeU)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x3fff0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                 >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x3ff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                               >> 0xeU)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x3ffc0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                 >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x3fe00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                >> 0xeU)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x3ff00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                  >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x3f800U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                  >> 0xeU)))) 
              | (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0xaU) ^ (0x3fc00U & 
                                        (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                         >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x3e000U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                   >> 0xeU)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0x3f000U & 
                                         (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                          >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0x38000U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                   >> 0xeU)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0x3c000U & 
                                         (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                          >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | (((0x20000U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                            >> 0xeU)) ^ ((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                         << 0x11U)) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0x30000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                              >> 0xeU))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                            << 0x12U)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U]) 
                             << 0x12U))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                             << 0x12U)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                               << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                             << 0x12U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                               << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                              << 0x12U)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                                << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                              << 0x12U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                                << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                               << 0x12U)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                                 << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                               << 0x12U)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                                                 << 0x12U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                                          >> 7U))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                        >> 7U)))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                        >> 7U)))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                        >> 7U)))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                                 >> 7U)))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                                 >> 7U)))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                                 >> 7U)))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0x1fffffeU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                              >> 7U)))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                          >> 7U)))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0x1fffff8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                              >> 7U)))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0x1fffffcU & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                                >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0x1ffffe0U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                                 >> 7U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0x1fffff0U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                                   >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0x1ffff80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                                 >> 7U)))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0x1ffffc0U & (
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                                   >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0x1fffe00U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                                  >> 7U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0x1ffff00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                       >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0x1fff800U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                       >> 7U)))) | 
              (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xaU) ^ (0x1fffc00U & 
                                      (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                       >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0x1ffe000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                        >> 7U)))) | 
              (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xcU) ^ (0x1fff000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                        >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0x1ff8000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                        >> 7U)))) | 
              (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xeU) ^ (0x1ffc000U & 
                                       (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                        >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0x1fe0000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                            >> 7U)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0x1ff0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                              >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0x1f80000U 
                                         & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                            >> 7U)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0x1fc0000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                              >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0x1e00000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                             >> 7U)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0x1f00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                               >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0x1800000U 
                                          & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                             >> 7U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0x1c00000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                               >> 7U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U]) 
                             << 0x19U)) | ((0x1000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                                               >> 7U)) 
                                           ^ ((0x2cU 
                                               == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                              << 0x18U))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                              << 0x19U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                << 0x19U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                               << 0x19U)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                 << 0x19U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                               << 0x19U)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                                                 << 0x19U))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))))) 
                    << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))))) 
                    << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))))) 
                    << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))))) 
                       << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))))) 
                       << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))))) 
                       << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 1U) ^ (0xfffffffeU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (1U & ((0x19U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                       ^ vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffff3U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                      << 3U) ^ (0xfffffff8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (4U & (((0x61U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                        << 2U) ^ (0xfffffffcU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffffcfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 5U) ^ (0xffffffe0U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 4U) ^ (0xfffffff0U & 
                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffff3fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                         << 7U) ^ (0xffffff80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 6U) ^ (0xffffffc0U & 
                                     vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffffcffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 9U) ^ (0xfffffe00U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 8U) ^ (0xffffff00U & 
                                      vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                          << 0xbU) ^ (0xfffff800U & 
                                      vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x400U & (((0x49U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0xaU) ^ (0xfffffc00U 
                                        & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffffcfffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xdU) ^ (0xffffe000U 
                                       & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xcU) ^ (0xfffff000U 
                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffff3fffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                           << 0xfU) ^ (0xffff8000U 
                                       & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0xeU) ^ (0xffffc000U 
                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfffcffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xffcfffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xff3fffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xfcffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0xcfffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o 
        = ((0x3fffffffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o) 
           | (((0x80000000U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U]) 
               ^ ((0x52U == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                  << 0x1fU)) | (0x40000000U & (((0x16U 
                                                 == (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                << 0x1eU) 
                                               ^ (0xc0000000U 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U])))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o 
        = ((2U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o)) 
           | (1U & VL_REDXOR_8(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o 
        = ((1U & (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o)) 
           | (((~ (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o)) 
               & (0U != (IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
              << 1U));
}
