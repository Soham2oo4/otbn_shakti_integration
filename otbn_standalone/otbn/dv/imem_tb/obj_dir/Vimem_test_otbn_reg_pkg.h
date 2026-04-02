// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimem_test.h for the primary calling header

#ifndef VERILATED_VIMEM_TEST_OTBN_REG_PKG_H_
#define VERILATED_VIMEM_TEST_OTBN_REG_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimem_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimem_test_otbn_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vimem_test__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 11> __PVT__OTBN_PERMIT = {{
        0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x07U,
        0x01U, 0x0fU, 0x0fU
    }};

    // CONSTRUCTORS
    Vimem_test_otbn_reg_pkg(Vimem_test__Syms* symsp, const char* v__name);
    ~Vimem_test_otbn_reg_pkg();
    VL_UNCOPYABLE(Vimem_test_otbn_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
