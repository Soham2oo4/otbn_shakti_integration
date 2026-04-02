// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimem_test.h for the primary calling header

#ifndef VERILATED_VIMEM_TEST_PRIM_ONEHOT_MUX__W138_I20_H_
#define VERILATED_VIMEM_TEST_PRIM_ONEHOT_MUX__W138_I20_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimem_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimem_test_prim_onehot_mux__W138_I20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN(sel_i,31,0);
    VL_OUTW(out_o,311,0,10);
    VL_INW(in_i[32],311,0,10);
    VlUnpacked<IData/*31:0*/, 312> __PVT__in_mux;

    // INTERNAL VARIABLES
    Vimem_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimem_test_prim_onehot_mux__W138_I20(Vimem_test__Syms* symsp, const char* v__name);
    ~Vimem_test_prim_onehot_mux__W138_I20();
    VL_UNCOPYABLE(Vimem_test_prim_onehot_mux__W138_I20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
