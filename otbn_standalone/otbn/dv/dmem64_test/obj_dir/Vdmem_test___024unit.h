// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdmem_test.h for the primary calling header

#ifndef VERILATED_VDMEM_TEST___024UNIT_H_
#define VERILATED_VDMEM_TEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdmem_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdmem_test___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdmem_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdmem_test___024unit(Vdmem_test__Syms* symsp, const char* v__name);
    ~Vdmem_test___024unit();
    VL_UNCOPYABLE(Vdmem_test___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
