// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimem_test.h for the primary calling header

#ifndef VERILATED_VIMEM_TEST___024UNIT_H_
#define VERILATED_VIMEM_TEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimem_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimem_test___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vimem_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimem_test___024unit(Vimem_test__Syms* symsp, const char* v__name);
    ~Vimem_test___024unit();
    VL_UNCOPYABLE(Vimem_test___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
