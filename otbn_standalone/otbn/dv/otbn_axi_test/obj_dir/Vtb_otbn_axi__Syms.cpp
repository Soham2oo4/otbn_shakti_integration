// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_otbn_axi__pch.h"
#include "Vtb_otbn_axi.h"
#include "Vtb_otbn_axi___024root.h"
#include "Vtb_otbn_axi_csrng_reg_pkg.h"
#include "Vtb_otbn_axi_edn_reg_pkg.h"
#include "Vtb_otbn_axi_prim_sha2_pkg.h"
#include "Vtb_otbn_axi_otbn_reg_pkg.h"
#include "Vtb_otbn_axi_prim_onehot_mux__W138_I20.h"

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_key_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_nonce_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);
void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, std::string file);
void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);
void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_key_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_nonce_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);
void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, std::string file);
void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);

// FUNCTIONS
Vtb_otbn_axi__Syms::~Vtb_otbn_axi__Syms()
{
}

Vtb_otbn_axi__Syms::Vtb_otbn_axi__Syms(VerilatedContext* contextp, const char* namep, Vtb_otbn_axi* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__csrng_reg_pkg{this, Verilated::catName(namep, "csrng_reg_pkg")}
    , TOP__edn_reg_pkg{this, Verilated::catName(namep, "edn_reg_pkg")}
    , TOP__otbn_reg_pkg{this, Verilated::catName(namep, "otbn_reg_pkg")}
    , TOP__prim_sha2_pkg{this, Verilated::catName(namep, "prim_sha2_pkg")}
    , TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a{this, Verilated::catName(namep, "tb_otbn_axi.u_dut.u_otbn.u_otbn_core.u_otbn_rf_bignum.gen_rf_bignum_ff.u_otbn_rf_bignum_inner.u_rd_mux_a")}
    , TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b{this, Verilated::catName(namep, "tb_otbn_axi.u_dut.u_otbn.u_otbn_core.u_otbn_rf_bignum.gen_rf_bignum_ff.u_otbn_rf_bignum_inner.u_rd_mux_b")}
{
        // Check resources
        Verilated::stackCheck(38845);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__csrng_reg_pkg = &TOP__csrng_reg_pkg;
    TOP.__PVT__edn_reg_pkg = &TOP__edn_reg_pkg;
    TOP.__PVT__otbn_reg_pkg = &TOP__otbn_reg_pkg;
    TOP.__PVT__prim_sha2_pkg = &TOP__prim_sha2_pkg;
    TOP.__PVT__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a = &TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a;
    TOP.__PVT__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b = &TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__csrng_reg_pkg.__Vconfigure(true);
    TOP__edn_reg_pkg.__Vconfigure(true);
    TOP__otbn_reg_pkg.__Vconfigure(true);
    TOP__prim_sha2_pkg.__Vconfigure(true);
    TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.__Vconfigure(true);
    TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__Vconfigure(false);
    // Setup scopes
    __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem.configure(this, name(), "tb_otbn_axi.u_dut.u_otbn.u_dmem", "u_dmem", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem.configure(this, name(), "tb_otbn_axi.u_dut.u_otbn.u_dmem.u_prim_ram_1p_adv.gen_ram_inst[0].u_mem", "u_mem", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem__unnamedblk2.configure(this, name(), "tb_otbn_axi.u_dut.u_otbn.u_dmem.u_prim_ram_1p_adv.gen_ram_inst[0].u_mem.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem.configure(this, name(), "tb_otbn_axi.u_dut.u_otbn.u_imem", "u_imem", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem.configure(this, name(), "tb_otbn_axi.u_dut.u_otbn.u_imem.u_prim_ram_1p_adv.gen_ram_inst[0].u_mem", "u_mem", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem__unnamedblk2.configure(this, name(), "tb_otbn_axi.u_dut.u_otbn.u_imem.u_prim_ram_1p_adv.gen_ram_inst[0].u_mem.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem.exportInsert(__Vfinal, "simutil_get_scramble_key", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_key_TOP));
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem.exportInsert(__Vfinal, "simutil_get_scramble_nonce", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_nonce_TOP));
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem.exportInsert(__Vfinal, "simutil_get_mem", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP));
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem.exportInsert(__Vfinal, "simutil_memload", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP));
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_dmem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem.exportInsert(__Vfinal, "simutil_set_mem", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP));
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem.exportInsert(__Vfinal, "simutil_get_scramble_key", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_key_TOP));
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem.exportInsert(__Vfinal, "simutil_get_scramble_nonce", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_nonce_TOP));
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem.exportInsert(__Vfinal, "simutil_get_mem", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP));
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem.exportInsert(__Vfinal, "simutil_memload", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP));
        __Vscope_tb_otbn_axi__u_dut__u_otbn__u_imem__u_prim_ram_1p_adv__gen_ram_inst__BRA__0__KET____u_mem.exportInsert(__Vfinal, "simutil_set_mem", (void*)(&Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP));
    }
}
