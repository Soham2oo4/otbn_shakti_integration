// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadd_64_test.h for the primary calling header

#ifndef VERILATED_VADD_64_TEST___024UNIT_H_
#define VERILATED_VADD_64_TEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vadd_64_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vadd_64_test___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vadd_64_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vadd_64_test___024unit(Vadd_64_test__Syms* symsp, const char* v__name);
    ~Vadd_64_test___024unit();
    VL_UNCOPYABLE(Vadd_64_test___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
