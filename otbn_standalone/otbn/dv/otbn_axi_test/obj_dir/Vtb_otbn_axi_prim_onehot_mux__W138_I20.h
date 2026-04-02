// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_otbn_axi.h for the primary calling header

#ifndef VERILATED_VTB_OTBN_AXI_PRIM_ONEHOT_MUX__W138_I20_H_
#define VERILATED_VTB_OTBN_AXI_PRIM_ONEHOT_MUX__W138_I20_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_otbn_axi__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_otbn_axi_prim_onehot_mux__W138_I20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN(sel_i,31,0);
    VL_OUTW(out_o,311,0,10);
    VL_INW(in_i[32],311,0,10);
    VlUnpacked<IData/*31:0*/, 312> __PVT__in_mux;

    // INTERNAL VARIABLES
    Vtb_otbn_axi__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_otbn_axi_prim_onehot_mux__W138_I20(Vtb_otbn_axi__Syms* symsp, const char* v__name);
    ~Vtb_otbn_axi_prim_onehot_mux__W138_I20();
    VL_UNCOPYABLE(Vtb_otbn_axi_prim_onehot_mux__W138_I20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
