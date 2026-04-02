// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_64_test.h for the primary calling header

#include "Vadd_64_test__pch.h"
#include "Vadd_64_test___024root.h"

void Vadd_64_test___024root___timing_resume(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___timing_resume\n"); );
    // Body
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h51c7f17b__0.resume("@([changed] rst_ni)");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcea3c4cb__0.resume("@(posedge add_64_test.clk_i)");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vadd_64_test___024root___timing_commit(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___timing_commit\n"); );
    // Body
    if ((! (0x2000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h51c7f17b__0.commit("@([changed] rst_ni)");
    }
    if ((! (0x1000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcea3c4cb__0.commit("@(posedge add_64_test.clk_i)");
    }
}

void Vadd_64_test___024root___eval_triggers__act(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___eval_act(Vadd_64_test___024root* vlSelf);

bool Vadd_64_test___024root___eval_phase__act(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<27> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vadd_64_test___024root___eval_triggers__act(vlSelf);
    Vadd_64_test___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vadd_64_test___024root___timing_resume(vlSelf);
        Vadd_64_test___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vadd_64_test___024root___eval_nba(Vadd_64_test___024root* vlSelf);

bool Vadd_64_test___024root___eval_phase__nba(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vadd_64_test___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_64_test___024root___dump_triggers__nba(Vadd_64_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_64_test___024root___dump_triggers__act(Vadd_64_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vadd_64_test___024root___eval(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vadd_64_test___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("add_64_test.sv", 11, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vadd_64_test___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("add_64_test.sv", 11, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vadd_64_test___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vadd_64_test___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vadd_64_test___024root___eval_debug_assertions(Vadd_64_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->rst_otp_ni & 0xfeU))) {
        Verilated::overWidthError("rst_otp_ni");}
}
#endif  // VL_DEBUG
