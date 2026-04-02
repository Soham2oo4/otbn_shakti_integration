// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimem_test.h for the primary calling header

#ifndef VERILATED_VIMEM_TEST_PRIM_SHA2_PKG_H_
#define VERILATED_VIMEM_TEST_PRIM_SHA2_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimem_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimem_test_prim_sha2_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vimem_test__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 8> __PVT__InitHash_256 = {{
        0x6a09e667U, 0xbb67ae85U, 0x3c6ef372U, 0xa54ff53aU,
        0x510e527fU, 0x9b05688cU, 0x1f83d9abU, 0x5be0cd19U
    }};
    static constexpr VlUnpacked<QData/*63:0*/, 8> __PVT__InitHash_384 = {{
        0xcbbb9d5dc1059ed8ULL, 0x629a292a367cd507ULL,
        0x9159015a3070dd17ULL, 0x152fecd8f70e5939ULL,
        0x67332667ffc00b31ULL, 0x8eb44a8768581511ULL,
        0xdb0c2e0d64f98fa7ULL, 0x47b5481dbefa4fa4ULL
    }};
    static constexpr VlUnpacked<QData/*63:0*/, 8> __PVT__InitHash_512 = {{
        0x6a09e667f3bcc908ULL, 0xbb67ae8584caa73bULL,
        0x3c6ef372fe94f82bULL, 0xa54ff53a5f1d36f1ULL,
        0x510e527fade682d1ULL, 0x9b05688c2b3e6c1fULL,
        0x1f83d9abfb41bd6bULL, 0x5be0cd19137e2179ULL
    }};

    // CONSTRUCTORS
    Vimem_test_prim_sha2_pkg(Vimem_test__Syms* symsp, const char* v__name);
    ~Vimem_test_prim_sha2_pkg();
    VL_UNCOPYABLE(Vimem_test_prim_sha2_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
