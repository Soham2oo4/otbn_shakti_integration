// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadd_64_test.h for the primary calling header

#ifndef VERILATED_VADD_64_TEST_CSRNG_REG_PKG_H_
#define VERILATED_VADD_64_TEST_CSRNG_REG_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vadd_64_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vadd_64_test_csrng_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vadd_64_test__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 24> __PVT__CSRNG_PERMIT = {{
        0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x03U, 0x0fU, 0x0fU,
        0x0fU, 0x0fU, 0x0fU, 0x01U, 0x01U, 0x0fU, 0x01U, 0x01U,
        0x01U, 0x0fU, 0x01U, 0x03U, 0x03U, 0x0fU, 0x01U, 0x01U
    }};

    // CONSTRUCTORS
    Vadd_64_test_csrng_reg_pkg(Vadd_64_test__Syms* symsp, const char* v__name);
    ~Vadd_64_test_csrng_reg_pkg();
    VL_UNCOPYABLE(Vadd_64_test_csrng_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
