// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_64_test.h for the primary calling header

#include "Vadd_64_test__pch.h"
#include "Vadd_64_test___024root.h"

VL_INLINE_OPT VlCoroutine Vadd_64_test___024root___eval_initial__TOP__Vtiming__1(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "add_64_test.sv", 
                                           27);
        vlSelf->add_64_test__DOT__clk_edn_i = (1U & 
                                               (~ (IData)(vlSelf->add_64_test__DOT__clk_edn_i)));
    }
}

VL_INLINE_OPT VlCoroutine Vadd_64_test___024root___eval_initial__TOP__Vtiming__2(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "add_64_test.sv", 
                                           25);
        vlSelf->add_64_test__DOT__clk_otp_i = (1U & 
                                               (~ (IData)(vlSelf->add_64_test__DOT__clk_otp_i)));
    }
}

VL_INLINE_OPT VlCoroutine Vadd_64_test___024root___eval_initial__TOP__Vtiming__3(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "add_64_test.sv", 
                                           23);
        vlSelf->add_64_test__DOT__clk_i = (1U & (~ (IData)(vlSelf->add_64_test__DOT__clk_i)));
    }
}

void Vadd_64_test___024root___act_sequent__TOP__0(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__1(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__2(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__3(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__4(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__5(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__6(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__7(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__8(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__9(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__10(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__11(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__12(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__13(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_sequent__TOP__14(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__0(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__1(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__2(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__3(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__4(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__5(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__6(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__7(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__8(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__9(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__10(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__11(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__12(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__13(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__14(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__15(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__16(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__17(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__18(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__19(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__20(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__21(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___act_comb__TOP__22(Vadd_64_test___024root* vlSelf);

void Vadd_64_test___024root___eval_act(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___eval_act\n"); );
    // Body
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vadd_64_test___024root___act_sequent__TOP__4(vlSelf);
        Vadd_64_test___024root___act_sequent__TOP__5(vlSelf);
        Vadd_64_test___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x3000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x1c0ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x1cULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x3000020ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x3000200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x3001000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x3002000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x3020000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x9c0ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x30001c0ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x300001cULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x3001400ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((0x30001dcULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((0x3001c00ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((0x300141cULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((0x3001dc0ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x3001c1cULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x3101c00ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x3041c00ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x3009c00ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x3011c00ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x300141eULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((0x301dc00ULL & vlSelf->__VactTriggered.word(0U))) {
        Vadd_64_test___024root___act_comb__TOP__22(vlSelf);
    }
}

VL_INLINE_OPT void Vadd_64_test___024root___act_sequent__TOP__0(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x4000U & ((IData)(((0U != (0x60000000U 
                                              & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                      | (0x60000000U 
                                         == (0x60000000U 
                                             & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0x18000000U 
                                                         & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                       | (0x18000000U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0x6000000U 
                                                            & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                          | (0x6000000U 
                                                             == 
                                                             (0x6000000U 
                                                              & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0x1800000U 
                                                               & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                             | (0x1800000U 
                                                                == 
                                                                (0x1800000U 
                                                                 & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x600000U 
                                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                | (0x600000U 
                                                                   == 
                                                                   (0x600000U 
                                                                    & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x180000U 
                                                                     & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                   | (0x180000U 
                                                                      == 
                                                                      (0x180000U 
                                                                       & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0x60000U 
                                                                        & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                      | (0x60000U 
                                                                         == 
                                                                         (0x60000U 
                                                                          & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        ((0U 
                                                                          != 
                                                                          (0x18000U 
                                                                           & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                         | (0x18000U 
                                                                            == 
                                                                            (0x18000U 
                                                                             & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           ((0U 
                                                                             != 
                                                                             (0x6000U 
                                                                              & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                            | (0x6000U 
                                                                               == 
                                                                               (0x6000U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                               | (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vadd_64_test___024root___act_sequent__TOP__1(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (QData)((IData)(((0x40000000U & ((IData)(
                                                         ((0ULL 
                                                           != 
                                                           (0x6000000000000000ULL 
                                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                          | (0x6000000000000000ULL 
                                                             == 
                                                             (0x6000000000000000ULL 
                                                              & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((IData)(((0ULL 
                                                != 
                                                (0x1800000000000000ULL 
                                                 & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                               | (0x1800000000000000ULL 
                                                  == 
                                                  (0x1800000000000000ULL 
                                                   & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                      << 0x1dU)) | 
                                    ((0x10000000U & 
                                      ((IData)(((0ULL 
                                                 != 
                                                 (0x600000000000000ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                | (0x600000000000000ULL 
                                                   == 
                                                   (0x600000000000000ULL 
                                                    & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       ((IData)(((0ULL 
                                                  != 
                                                  (0x180000000000000ULL 
                                                   & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                 | (0x180000000000000ULL 
                                                    == 
                                                    (0x180000000000000ULL 
                                                     & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & ((IData)(
                                                     ((0ULL 
                                                       != 
                                                       (0x60000000000000ULL 
                                                        & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                      | (0x60000000000000ULL 
                                                         == 
                                                         (0x60000000000000ULL 
                                                          & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0ULL 
                                                          != 
                                                          (0x18000000000000ULL 
                                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                         | (0x18000000000000ULL 
                                                            == 
                                                            (0x18000000000000ULL 
                                                             & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                << 0x19U)) 
                                            | ((0x1000000U 
                                                & ((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x6000000000000ULL 
                                                              & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                            | (0x6000000000000ULL 
                                                               == 
                                                               (0x6000000000000ULL 
                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                   << 0x18U)) 
                                               | ((0x800000U 
                                                   & ((IData)(
                                                              ((0ULL 
                                                                != 
                                                                (0x1800000000000ULL 
                                                                 & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                               | (0x1800000000000ULL 
                                                                  == 
                                                                  (0x1800000000000ULL 
                                                                   & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((IData)(
                                                                 ((0ULL 
                                                                   != 
                                                                   (0x600000000000ULL 
                                                                    & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                  | (0x600000000000ULL 
                                                                     == 
                                                                     (0x600000000000ULL 
                                                                      & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                         << 0x16U)) 
                                                     | ((0x200000U 
                                                         & ((IData)(
                                                                    ((0ULL 
                                                                      != 
                                                                      (0x180000000000ULL 
                                                                       & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                     | (0x180000000000ULL 
                                                                        == 
                                                                        (0x180000000000ULL 
                                                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                            << 0x15U)) 
                                                        | ((0x100000U 
                                                            & ((IData)(
                                                                       ((0ULL 
                                                                         != 
                                                                         (0x60000000000ULL 
                                                                          & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                        | (0x60000000000ULL 
                                                                           == 
                                                                           (0x60000000000ULL 
                                                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                               << 0x14U)) 
                                                           | ((0x80000U 
                                                               & ((IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x18000000000ULL 
                                                                             & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                           | (0x18000000000ULL 
                                                                              == 
                                                                              (0x18000000000ULL 
                                                                               & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                  << 0x13U)) 
                                                              | ((0x40000U 
                                                                  & ((IData)(
                                                                             ((0ULL 
                                                                               != 
                                                                               (0x6000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                              | (0x6000000000ULL 
                                                                                == 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                     << 0x12U)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x1800000000ULL 
                                                                                == 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                        << 0x11U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600000000ULL 
                                                                                == 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                           << 0x10U)) 
                                                                       | ((0x8000U 
                                                                           & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180000000ULL 
                                                                                == 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                              << 0xfU)) 
                                                                          | ((0x4000U 
                                                                              & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60000000ULL 
                                                                                == 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xeU)) 
                                                                             | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18000000ULL 
                                                                                == 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x6000000ULL 
                                                                                == 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x1800000ULL 
                                                                                == 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600000ULL 
                                                                                == 
                                                                                (0x600000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180000ULL 
                                                                                == 
                                                                                (0x180000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60000ULL 
                                                                                == 
                                                                                (0x60000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18000ULL 
                                                                                == 
                                                                                (0x18000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x6000ULL 
                                                                                == 
                                                                                (0x6000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x1800ULL 
                                                                                == 
                                                                                (0x1800ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600ULL 
                                                                                == 
                                                                                (0x600ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180ULL 
                                                                                == 
                                                                                (0x180ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60ULL 
                                                                                == 
                                                                                (0x60ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18ULL 
                                                                                == 
                                                                                (0x18ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (6ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree)))))))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vadd_64_test___024root___act_sequent__TOP__2(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_sequent__TOP__2\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (QData)((IData)(((0x40000000U & ((IData)(
                                                         ((0ULL 
                                                           != 
                                                           (0x6000000000000000ULL 
                                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                          | (0x6000000000000000ULL 
                                                             == 
                                                             (0x6000000000000000ULL 
                                                              & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((IData)(((0ULL 
                                                != 
                                                (0x1800000000000000ULL 
                                                 & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                               | (0x1800000000000000ULL 
                                                  == 
                                                  (0x1800000000000000ULL 
                                                   & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                      << 0x1dU)) | 
                                    ((0x10000000U & 
                                      ((IData)(((0ULL 
                                                 != 
                                                 (0x600000000000000ULL 
                                                  & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                | (0x600000000000000ULL 
                                                   == 
                                                   (0x600000000000000ULL 
                                                    & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       ((IData)(((0ULL 
                                                  != 
                                                  (0x180000000000000ULL 
                                                   & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                 | (0x180000000000000ULL 
                                                    == 
                                                    (0x180000000000000ULL 
                                                     & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & ((IData)(
                                                     ((0ULL 
                                                       != 
                                                       (0x60000000000000ULL 
                                                        & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                      | (0x60000000000000ULL 
                                                         == 
                                                         (0x60000000000000ULL 
                                                          & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0ULL 
                                                          != 
                                                          (0x18000000000000ULL 
                                                           & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                         | (0x18000000000000ULL 
                                                            == 
                                                            (0x18000000000000ULL 
                                                             & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                << 0x19U)) 
                                            | ((0x1000000U 
                                                & ((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x6000000000000ULL 
                                                              & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                            | (0x6000000000000ULL 
                                                               == 
                                                               (0x6000000000000ULL 
                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                   << 0x18U)) 
                                               | ((0x800000U 
                                                   & ((IData)(
                                                              ((0ULL 
                                                                != 
                                                                (0x1800000000000ULL 
                                                                 & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                               | (0x1800000000000ULL 
                                                                  == 
                                                                  (0x1800000000000ULL 
                                                                   & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((IData)(
                                                                 ((0ULL 
                                                                   != 
                                                                   (0x600000000000ULL 
                                                                    & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                  | (0x600000000000ULL 
                                                                     == 
                                                                     (0x600000000000ULL 
                                                                      & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                         << 0x16U)) 
                                                     | ((0x200000U 
                                                         & ((IData)(
                                                                    ((0ULL 
                                                                      != 
                                                                      (0x180000000000ULL 
                                                                       & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                     | (0x180000000000ULL 
                                                                        == 
                                                                        (0x180000000000ULL 
                                                                         & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                            << 0x15U)) 
                                                        | ((0x100000U 
                                                            & ((IData)(
                                                                       ((0ULL 
                                                                         != 
                                                                         (0x60000000000ULL 
                                                                          & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                        | (0x60000000000ULL 
                                                                           == 
                                                                           (0x60000000000ULL 
                                                                            & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                               << 0x14U)) 
                                                           | ((0x80000U 
                                                               & ((IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x18000000000ULL 
                                                                             & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                           | (0x18000000000ULL 
                                                                              == 
                                                                              (0x18000000000ULL 
                                                                               & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                  << 0x13U)) 
                                                              | ((0x40000U 
                                                                  & ((IData)(
                                                                             ((0ULL 
                                                                               != 
                                                                               (0x6000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                              | (0x6000000000ULL 
                                                                                == 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                     << 0x12U)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x1800000000ULL 
                                                                                == 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                        << 0x11U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600000000ULL 
                                                                                == 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                           << 0x10U)) 
                                                                       | ((0x8000U 
                                                                           & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180000000ULL 
                                                                                == 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                              << 0xfU)) 
                                                                          | ((0x4000U 
                                                                              & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60000000ULL 
                                                                                == 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xeU)) 
                                                                             | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18000000ULL 
                                                                                == 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x6000000ULL 
                                                                                == 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x1800000ULL 
                                                                                == 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600000ULL 
                                                                                == 
                                                                                (0x600000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180000ULL 
                                                                                == 
                                                                                (0x180000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60000ULL 
                                                                                == 
                                                                                (0x60000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18000ULL 
                                                                                == 
                                                                                (0x18000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x6000ULL 
                                                                                == 
                                                                                (0x6000ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x1800ULL 
                                                                                == 
                                                                                (0x1800ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600ULL 
                                                                                == 
                                                                                (0x600ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180ULL 
                                                                                == 
                                                                                (0x180ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60ULL 
                                                                                == 
                                                                                (0x60ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18ULL 
                                                                                == 
                                                                                (0x18ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (6ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree)))))))))))))))))))))))))))))))))))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree 
        = __Vtemp_1;
}

extern const VlWide<8>/*255:0*/ Vadd_64_test__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vadd_64_test___024root___act_sequent__TOP__3(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___act_sequent__TOP__3\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout;
    VL_ZERO_W(256, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in;
    VL_ZERO_W(256, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in);
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_out = 0;
    VlWide<8>/*255:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout;
    VL_ZERO_W(256, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in;
    VL_ZERO_W(256, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in);
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_out = 0;
    VlWide<8>/*255:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout;
    VL_ZERO_W(256, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in;
    VL_ZERO_W(256, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in);
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_out = 0;
    VlWide<8>/*255:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout;
    VL_ZERO_W(256, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in;
    VL_ZERO_W(256, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in);
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_in;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_in = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_out = 0;
    QData/*63:0*/ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_out;
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_out = 0;
    // Body
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][0U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[1U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][1U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[2U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][2U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[3U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][3U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[4U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][4U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[5U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][5U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[6U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][6U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[7U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [0U][7U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[7U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[6U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[5U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[4U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[3U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[2U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[1U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__data_in[0U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_in 
            ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_in) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_in 
            ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_in) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_in 
            ^ VL_SHIFTL_QQI(64,64,32, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_in, 0x11U)) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_out 
        = ((((QData)((IData)((0x7ffffU & (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_in)))) 
             << 0x2dU) | (__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_in 
                          >> 0x13U)) ^ (((QData)((IData)(
                                                         (0x7ffffU 
                                                          & (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_in)))) 
                                         << 0x2dU) 
                                        | (__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_in 
                                           >> 0x13U)));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[0U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[1U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__d_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[2U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[3U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__c_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[4U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[5U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__b_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[6U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[7U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__a_out 
                   >> 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][0U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][1U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][2U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[2U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][3U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[3U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][4U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[4U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][5U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[5U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][6U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[6U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[1U][7U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__509__Vfuncout[7U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][0U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[1U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][1U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[2U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][2U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[3U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][3U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[4U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][4U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[5U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][5U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[6U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][6U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[7U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [1U][7U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[7U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[6U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[5U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[4U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[3U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[2U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[1U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__data_in[0U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_in 
            ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_in) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_in 
            ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_in) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_in 
            ^ VL_SHIFTL_QQI(64,64,32, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_in, 0x11U)) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_out 
        = ((((QData)((IData)((0x7ffffU & (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_in)))) 
             << 0x2dU) | (__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_in 
                          >> 0x13U)) ^ (((QData)((IData)(
                                                         (0x7ffffU 
                                                          & (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_in)))) 
                                         << 0x2dU) 
                                        | (__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_in 
                                           >> 0x13U)));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[0U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[1U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__d_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[2U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[3U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__c_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[4U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[5U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__b_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[6U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[7U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__a_out 
                   >> 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][0U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][1U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][2U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[2U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][3U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[3U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][4U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[4U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][5U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[5U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][6U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[6U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[2U][7U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__510__Vfuncout[7U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][0U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[1U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][1U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[2U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][2U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[3U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][3U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[4U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][4U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[5U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][5U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[6U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][6U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[7U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [2U][7U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[7U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[6U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[5U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[4U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[3U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[2U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[1U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__data_in[0U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_in 
            ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_in) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_in 
            ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_in) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_in 
            ^ VL_SHIFTL_QQI(64,64,32, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_in, 0x11U)) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_out 
        = ((((QData)((IData)((0x7ffffU & (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_in)))) 
             << 0x2dU) | (__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_in 
                          >> 0x13U)) ^ (((QData)((IData)(
                                                         (0x7ffffU 
                                                          & (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_in)))) 
                                         << 0x2dU) 
                                        | (__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_in 
                                           >> 0x13U)));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[0U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[1U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__d_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[2U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[3U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__c_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[4U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[5U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__b_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[6U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[7U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__a_out 
                   >> 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][0U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][1U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][2U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[2U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][3U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[3U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][4U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[4U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][5U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[5U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][6U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[6U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[3U][7U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__511__Vfuncout[7U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][0U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[1U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][1U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[2U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][2U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[3U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][3U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[4U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][4U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[5U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][5U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[6U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][6U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[7U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
        [3U][7U];
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[7U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[6U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[5U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[4U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[3U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[2U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_in 
        = (((QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[1U])) 
            << 0x20U) | (QData)((IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__data_in[0U])));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_in 
            ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_in) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_in 
            ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_in) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_out 
        = ((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_in 
            ^ VL_SHIFTL_QQI(64,64,32, __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_in, 0x11U)) 
           ^ __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_in);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_out 
        = ((((QData)((IData)((0x7ffffU & (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_in)))) 
             << 0x2dU) | (__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_in 
                          >> 0x13U)) ^ (((QData)((IData)(
                                                         (0x7ffffU 
                                                          & (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_in)))) 
                                         << 0x2dU) 
                                        | (__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_in 
                                           >> 0x13U)));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[0U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[1U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__d_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[2U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[3U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__c_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[4U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[5U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__b_out 
                   >> 0x20U));
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[6U] 
        = (IData)(__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_out);
    __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[7U] 
        = (IData)((__Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__a_out 
                   >> 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][0U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][1U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][2U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[2U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][3U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[3U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][4U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[4U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][5U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[5U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][6U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[6U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[4U][7U] 
        = __Vfunc_add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__state_update__512__Vfuncout[7U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_7 
        = ((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                             [3U][7U])) << 0x20U) | (QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                    [3U][6U]))) 
           + (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                               [3U][1U])) << 0x20U) 
              | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                [3U][0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_5 
        = ((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                             [2U][7U])) << 0x20U) | (QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                    [2U][6U]))) 
           + (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                               [2U][1U])) << 0x20U) 
              | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                [2U][0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
        = ((((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                             [1U][7U])) << 0x20U) | (QData)((IData)(
                                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                    [1U][6U]))) 
           + (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                               [1U][1U])) << 0x20U) 
              | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                [1U][0U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__mid[3U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_7;
    vlSelf->__VdfgRegularize_hd87f99a1_3_0 = (((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_7 
                                                << 0x17U) 
                                               | (QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_7 
                                                                             >> 0x29U)))))) 
                                              + (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                  [3U][7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                   [3U][6U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__mid[2U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_5;
    vlSelf->__VdfgRegularize_hd87f99a1_3_1 = (((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_5 
                                                << 0x17U) 
                                               | (QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_5 
                                                                             >> 0x29U)))))) 
                                              + (((QData)((IData)(
                                                                  vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                  [2U][7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                                   [2U][6U]))));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__mid[1U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3;
    vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[0U] 
        = (IData)((((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1 
                     << 0x17U) | (QData)((IData)((0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1 
                                                             >> 0x29U)))))) 
                   + (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U])))));
    vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[1U] 
        = (IData)(((((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1 
                      << 0x17U) | (QData)((IData)((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1 
                                                              >> 0x29U)))))) 
                    + (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U])))) 
                   >> 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[2U] 
        = (IData)((((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
                     << 0x17U) | (QData)((IData)((0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
                                                             >> 0x29U)))))) 
                   + (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                       [1U][7U])) << 0x20U) 
                      | (QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                        [1U][6U])))));
    vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[3U] 
        = (IData)(((((vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
                      << 0x17U) | (QData)((IData)((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_3 
                                                              >> 0x29U)))))) 
                    + (((QData)((IData)(vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                        [1U][7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
                                                    [1U][6U])))) 
                   >> 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U] 
        = vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U] 
        = vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[2U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U] 
        = vlSelf->add_64_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[3U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U] 
        = (IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_1);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U] 
        = (IData)((vlSelf->__VdfgRegularize_hd87f99a1_3_1 
                   >> 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U] 
        = (IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_0);
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U] 
        = (IData)((vlSelf->__VdfgRegularize_hd87f99a1_3_0 
                   >> 0x20U));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][0U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][1U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][2U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][3U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][4U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][5U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][6U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U];
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[4U][7U] 
        = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U];
    if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q) {
        if (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_q) {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[0U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[0U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[1U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[1U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[2U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[2U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[3U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[3U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[4U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[4U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[5U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[5U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[6U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[6U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[7U] 
                = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_data[7U];
        } else {
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[0U] 
                = Vadd_64_test__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[1U] 
                = Vadd_64_test__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[2U] 
                = Vadd_64_test__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[3U] 
                = Vadd_64_test__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[4U] 
                = Vadd_64_test__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[5U] 
                = Vadd_64_test__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[6U] 
                = Vadd_64_test__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[7U] 
                = Vadd_64_test__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[0U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[0U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[1U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[1U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[2U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[2U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[3U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[3U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[4U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[4U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[5U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[5U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[6U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[6U];
        vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg[7U] 
            = vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl[7U];
    }
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [0U][0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (2U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [1U][0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[1U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [1U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (4U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [2U][0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[2U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [2U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [3U][0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[3U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [3U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x10U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [4U][0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[4U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [4U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x20U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [5U][0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[5U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [5U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x40U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [6U][0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[6U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [6U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [7U][0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[7U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [7U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[8U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [8U]) | (0x100U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                     [8U][0U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [0U][0U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [1U][0U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [2U][0U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                           [3U][0U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [4U][0U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [5U][0U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [6U][0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [7U][0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[9U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [9U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                               [8U][0U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xaU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xaU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xbU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xbU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xcU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xcU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xdU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xdU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xeU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xeU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [0U][0U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [1U][0U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [2U][0U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                             [3U][0U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [4U][0U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [5U][0U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [6U][0U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                [7U][0U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xfU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xfU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [8U][0U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x10U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x10U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x11U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x11U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x12U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x12U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x13U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x13U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x14U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x14U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x15U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x15U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x16U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x16U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x17U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x17U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x18U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x18U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x19U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x19U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1aU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1aU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1bU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1bU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1cU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1cU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1dU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1dU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][0U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1eU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1eU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][0U] >> 0x1fU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][0U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][0U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][0U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][0U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][0U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][0U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][0U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x1fU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x1fU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][0U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x20U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x20U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (2U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x21U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x21U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (4U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x22U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x22U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x23U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x23U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x10U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x24U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x24U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x20U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x25U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x25U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x40U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x26U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x26U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x27U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x27U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x28U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x28U]) | (0x100U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][1U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x29U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x29U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2aU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2aU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2bU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2bU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2cU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2cU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2dU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2dU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2eU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2eU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x2fU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x2fU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x30U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x30U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x31U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x31U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x32U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x32U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x33U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x33U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x34U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x34U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x35U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x35U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x36U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x36U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x37U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x37U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x38U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x38U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x39U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x39U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3aU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3aU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3bU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3bU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3cU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3cU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3dU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3dU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][1U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3eU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3eU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][1U] >> 0x1fU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][1U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][1U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][1U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][1U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][1U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][1U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][1U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x3fU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x3fU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][1U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x40U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x40U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (2U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x41U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x41U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (4U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x42U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x42U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x43U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x43U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x10U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x44U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x44U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x20U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x45U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x45U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x40U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x46U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x46U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x47U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x47U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x48U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x48U]) | (0x100U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][2U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x49U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x49U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4aU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4aU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4bU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4bU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4cU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4cU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4dU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4dU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4eU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4eU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x4fU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x4fU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x50U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x50U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x51U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x51U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x52U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x52U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x53U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x53U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x54U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x54U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x55U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x55U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x56U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x56U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x57U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x57U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x58U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x58U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x59U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x59U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5aU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5aU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5bU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5bU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5cU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5cU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5dU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5dU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][2U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5eU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5eU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][2U] >> 0x1fU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][2U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][2U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][2U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][2U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][2U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][2U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][2U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x5fU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x5fU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][2U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x60U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x60U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (2U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x61U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x61U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (4U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x62U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x62U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x63U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x63U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x10U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x64U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x64U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x20U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x65U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x65U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x40U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x66U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x66U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x67U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x67U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x68U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x68U]) | (0x100U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][3U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x69U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x69U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6aU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6aU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6bU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6bU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6cU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6cU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6dU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6dU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6eU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6eU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x6fU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x6fU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x70U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x70U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x71U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x71U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x72U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x72U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x73U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x73U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x74U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x74U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x75U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x75U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x76U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x76U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x77U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x77U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x78U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x78U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x79U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x79U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7aU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7aU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7bU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7bU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7cU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7cU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7dU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7dU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][3U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7eU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7eU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][3U] >> 0x1fU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][3U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][3U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][3U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][3U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][3U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][3U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][3U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x7fU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x7fU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][3U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x80U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x80U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (2U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x81U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x81U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (4U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x82U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x82U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x83U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x83U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x10U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x84U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x84U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x20U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x85U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x85U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x40U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x86U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x86U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x80U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [7U][4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x87U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x87U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x88U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x88U]) | (0x100U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [8U][4U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x89U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x89U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8aU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8aU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8bU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8bU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8cU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8cU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8dU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8dU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8eU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8eU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x8fU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x8fU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x90U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x90U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x91U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x91U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 9U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x92U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x92U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xaU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x93U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x93U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xbU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x94U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x94U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xcU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x95U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x95U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xdU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x96U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x96U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xeU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x97U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x97U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0xfU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x98U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x98U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x10U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x99U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x99U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x11U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9aU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9aU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x12U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9bU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9bU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x13U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9cU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9cU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x14U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9dU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9dU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x15U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][4U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9eU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9eU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x16U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][4U] >> 0x1fU));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][4U] >> 0x1eU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][4U] >> 0x1dU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][4U] >> 0x1cU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][4U] >> 0x1bU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][4U] >> 0x1aU)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][4U] >> 0x19U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][4U] >> 0x18U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0x9fU] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0x9fU]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][4U] >> 0x17U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (1U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [0U][5U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa0U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa0U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 8U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (2U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [1U][5U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa1U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa1U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 7U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (4U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [2U][5U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa2U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa2U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (8U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [3U][5U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa3U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa3U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x10U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [4U][5U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa4U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa4U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x20U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [5U][5U]));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x40U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [6U][5U] << 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0x17fU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x80U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [7U][5U] << 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa5U] 
        = ((0xffU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa5U]) | (0x100U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                  [8U][5U] << 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1feU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (1U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [0U][5U] >> 6U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1fdU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (2U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [1U][5U] >> 5U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1fbU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (4U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [2U][5U] >> 4U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1f7U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (8U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                              [3U][5U] >> 3U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1efU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (0x10U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [4U][5U] >> 2U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1dfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (0x20U & (vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                                 [5U][5U] >> 1U)));
    vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux[0xa6U] 
        = ((0x1bfU & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__in_mux
            [0xa6U]) | (0x40U & vlSelf->add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in
                        [6U][5U]));
}
