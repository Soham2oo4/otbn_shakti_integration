// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdmem_test.h for the primary calling header

#ifndef VERILATED_VDMEM_TEST_OTBN_REG_PKG_H_
#define VERILATED_VDMEM_TEST_OTBN_REG_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdmem_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdmem_test_otbn_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdmem_test__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 11> __PVT__OTBN_PERMIT = {{
        0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x07U,
        0x01U, 0x0fU, 0x0fU
    }};

    // CONSTRUCTORS
    Vdmem_test_otbn_reg_pkg(Vdmem_test__Syms* symsp, const char* v__name);
    ~Vdmem_test_otbn_reg_pkg();
    VL_UNCOPYABLE(Vdmem_test_otbn_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
