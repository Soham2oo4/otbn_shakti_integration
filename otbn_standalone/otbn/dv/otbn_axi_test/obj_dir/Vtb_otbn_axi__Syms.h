// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_OTBN_AXI__SYMS_H_
#define VERILATED_VTB_OTBN_AXI__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_otbn_axi.h"

// INCLUDE MODULE CLASSES
#include "Vtb_otbn_axi___024root.h"
#include "Vtb_otbn_axi_csrng_reg_pkg.h"
#include "Vtb_otbn_axi_edn_reg_pkg.h"
#include "Vtb_otbn_axi_prim_sha2_pkg.h"
#include "Vtb_otbn_axi_otbn_reg_pkg.h"
#include "Vtb_otbn_axi_prim_onehot_mux__W138_I20.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtb_otbn_axi__Vcb_simutil_get_mem_t = void (*) (Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
using Vtb_otbn_axi__Vcb_simutil_get_scramble_key_t = void (*) (Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
using Vtb_otbn_axi__Vcb_simutil_get_scramble_nonce_t = void (*) (Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);
using Vtb_otbn_axi__Vcb_simutil_memload_t = void (*) (Vtb_otbn_axi__Syms* __restrict vlSymsp, std::string file);
using Vtb_otbn_axi__Vcb_simutil_set_mem_t = void (*) (Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_otbn_axi__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_otbn_axi* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_otbn_axi___024root         TOP;
    Vtb_otbn_axi_csrng_reg_pkg     TOP__csrng_reg_pkg;
    Vtb_otbn_axi_edn_reg_pkg       TOP__edn_reg_pkg;
    Vtb_otbn_axi_otbn_reg_pkg      TOP__otbn_reg_pkg;
    Vtb_otbn_axi_prim_sha2_pkg     TOP__prim_sha2_pkg;
    Vtb_otbn_axi_prim_onehot_mux__W138_I20 TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a;
    Vtb_otbn_axi_prim_onehot_mux__W138_I20 TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem;
    VerilatedScope __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem;
    VerilatedScope __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem__unnamedblk2;
    VerilatedScope __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem;
    VerilatedScope __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem;
    VerilatedScope __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem__unnamedblk2;

    // CONSTRUCTORS
    Vtb_otbn_axi__Syms(VerilatedContext* contextp, const char* namep, Vtb_otbn_axi* modelp);
    ~Vtb_otbn_axi__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
