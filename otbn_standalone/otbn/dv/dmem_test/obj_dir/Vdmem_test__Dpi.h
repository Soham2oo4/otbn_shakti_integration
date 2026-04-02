// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VDMEM_TEST__DPI_H_
#define VERILATED_VDMEM_TEST__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at ../../../prim/rtl/prim_util_memload.svh:46:16
    extern int simutil_get_mem(int index, svBitVecVal* val);
    // DPI export at ../../../prim/rtl/prim_util_get_scramble_params.svh:8:16
    extern int simutil_get_scramble_key(svBitVecVal* val);
    // DPI export at ../../../prim/rtl/prim_util_get_scramble_params.svh:17:16
    extern int simutil_get_scramble_nonce(svBitVecVal* nonce);
    // DPI export at ../../../prim/rtl/prim_util_memload.svh:27:8
    extern void simutil_memload(const char* file);
    // DPI export at ../../../prim/rtl/prim_util_memload.svh:36:16
    extern int simutil_set_mem(int index, const svBitVecVal* val);

#ifdef __cplusplus
}
#endif

#endif  // guard
