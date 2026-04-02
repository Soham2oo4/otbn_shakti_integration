// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vadd_64_test__Syms.h"


void Vadd_64_test___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_64_test___024root__trace_cleanup\n"); );
    // Init
    Vadd_64_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd_64_test___024root*>(voidSelf);
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x27U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
