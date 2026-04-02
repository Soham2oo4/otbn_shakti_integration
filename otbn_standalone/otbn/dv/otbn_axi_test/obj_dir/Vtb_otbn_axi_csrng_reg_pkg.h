// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_otbn_axi.h for the primary calling header

#ifndef VERILATED_VTB_OTBN_AXI_CSRNG_REG_PKG_H_
#define VERILATED_VTB_OTBN_AXI_CSRNG_REG_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_otbn_axi__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_otbn_axi_csrng_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_otbn_axi__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 24> __PVT__CSRNG_PERMIT = {{
        0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x03U, 0x0fU, 0x0fU,
        0x0fU, 0x0fU, 0x0fU, 0x01U, 0x01U, 0x0fU, 0x01U, 0x01U,
        0x01U, 0x0fU, 0x01U, 0x03U, 0x03U, 0x0fU, 0x01U, 0x01U
    }};

    // CONSTRUCTORS
    Vtb_otbn_axi_csrng_reg_pkg(Vtb_otbn_axi__Syms* symsp, const char* v__name);
    ~Vtb_otbn_axi_csrng_reg_pkg();
    VL_UNCOPYABLE(Vtb_otbn_axi_csrng_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
