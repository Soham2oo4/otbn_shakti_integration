// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimem_test.h for the primary calling header

#include "Vimem_test__pch.h"
#include "Vimem_test__Syms.h"
#include "Vimem_test___024root.h"

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_key_TOP(Vimem_test__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_key_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_key__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_key__Vstatic__valid)) {
        val[0U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U];
        val[1U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U];
        val[2U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U];
        val[3U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U];
    }
    simutil_get_scramble_key__Vfuncrtn = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_key__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ Vimem_test__ConstPool__CONST_hab76c978_0;

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_nonce_TOP(Vimem_test__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_nonce_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_nonce__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_nonce__Vstatic__valid)) {
        nonce[0U] = Vimem_test__ConstPool__CONST_hab76c978_0[0U];
        nonce[1U] = Vimem_test__ConstPool__CONST_hab76c978_0[1U];
        nonce[2U] = Vimem_test__ConstPool__CONST_hab76c978_0[2U];
        nonce[3U] = Vimem_test__ConstPool__CONST_hab76c978_0[3U];
        nonce[4U] = Vimem_test__ConstPool__CONST_hab76c978_0[4U];
        nonce[5U] = Vimem_test__ConstPool__CONST_hab76c978_0[5U];
        nonce[6U] = Vimem_test__ConstPool__CONST_hab76c978_0[6U];
        nonce[7U] = Vimem_test__ConstPool__CONST_hab76c978_0[7U];
        nonce[8U] = Vimem_test__ConstPool__CONST_hab76c978_0[8U];
        nonce[9U] = Vimem_test__ConstPool__CONST_hab76c978_0[9U];
        nonce[0U] = (IData)(vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q);
        nonce[1U] = (IData)((vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                             >> 0x20U));
    }
    simutil_get_scramble_nonce__Vfuncrtn = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_nonce__Vstatic__valid;
}

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP(Vimem_test__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 39, 2048, 0, VL_CVT_PACK_STR_NN(file)
                 ,  &(vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem)
                 , 0, ~0ULL);
}

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP(Vimem_test__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x800U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7ffU 
                                                                                & index)] 
            = (0x7fffffffffULL & (((QData)((IData)(
                                                   val[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               val[0U]))));
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ Vimem_test__ConstPool__CONST_hc1613866_0;

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP(Vimem_test__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x800U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vimem_test__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vimem_test__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vimem_test__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vimem_test__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vimem_test__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vimem_test__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vimem_test__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vimem_test__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vimem_test__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vimem_test__ConstPool__CONST_hc1613866_0[9U];
        val[0U] = (IData)(vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                          [(0x7ffU & index)]);
        val[1U] = ((0xffffff80U & val[1U]) | (IData)(
                                                     (vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                                                      [
                                                      (0x7ffU 
                                                       & index)] 
                                                      >> 0x20U)));
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid;
}

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_key_TOP(Vimem_test__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_key_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_key__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_key__Vstatic__valid)) {
        val[0U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U];
        val[1U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U];
        val[2U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U];
        val[3U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U];
    }
    simutil_get_scramble_key__Vfuncrtn = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_key__Vstatic__valid;
}

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_nonce_TOP(Vimem_test__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_nonce_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_nonce__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_nonce__Vstatic__valid)) {
        nonce[0U] = Vimem_test__ConstPool__CONST_hab76c978_0[0U];
        nonce[1U] = Vimem_test__ConstPool__CONST_hab76c978_0[1U];
        nonce[2U] = Vimem_test__ConstPool__CONST_hab76c978_0[2U];
        nonce[3U] = Vimem_test__ConstPool__CONST_hab76c978_0[3U];
        nonce[4U] = Vimem_test__ConstPool__CONST_hab76c978_0[4U];
        nonce[5U] = Vimem_test__ConstPool__CONST_hab76c978_0[5U];
        nonce[6U] = Vimem_test__ConstPool__CONST_hab76c978_0[6U];
        nonce[7U] = Vimem_test__ConstPool__CONST_hab76c978_0[7U];
        nonce[8U] = Vimem_test__ConstPool__CONST_hab76c978_0[8U];
        nonce[9U] = Vimem_test__ConstPool__CONST_hab76c978_0[9U];
        nonce[0U] = (IData)(vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q);
        nonce[1U] = (IData)((vlSymsp->TOP.imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                             >> 0x20U));
    }
    simutil_get_scramble_nonce__Vfuncrtn = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_nonce__Vstatic__valid;
}

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP(Vimem_test__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 312, 128, 0, VL_CVT_PACK_STR_NN(file)
                 ,  &(vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem)
                 , 0, ~0ULL);
}

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP(Vimem_test__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x80U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][0U] 
            = val[0U];
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][1U] 
            = val[1U];
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][2U] 
            = val[2U];
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][3U] 
            = val[3U];
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][4U] 
            = val[4U];
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][5U] 
            = val[5U];
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][6U] 
            = val[6U];
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][7U] 
            = val[7U];
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][8U] 
            = val[8U];
        vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][9U] 
            = val[9U];
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid;
}

void Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP(Vimem_test__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root____Vdpiexp_imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x80U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][0U];
        val[1U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][1U];
        val[2U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][2U];
        val[3U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][3U];
        val[4U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][4U];
        val[5U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][5U];
        val[6U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][6U];
        val[7U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][7U];
        val[8U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][8U];
        val[9U] = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][9U];
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP.imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimem_test___024root___dump_triggers__act(Vimem_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vimem_test___024root___eval_triggers__act(Vimem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, (((vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                       != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round__1) 
                                      | (vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                         != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round__1)) 
                                     | (vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                        != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round__1)));
    vlSelf->__VactTriggered.set(2U, (vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0__1));
    vlSelf->__VactTriggered.set(3U, (vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0__1));
    vlSelf->__VactTriggered.set(4U, (vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0__1));
    vlSelf->__VactTriggered.set(5U, (((vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                       != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round__1) 
                                      | (vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                         != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round__1)) 
                                     | (vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                        != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round__1)));
    vlSelf->__VactTriggered.set(6U, (vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0__1));
    vlSelf->__VactTriggered.set(7U, (vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0__1));
    vlSelf->__VactTriggered.set(8U, (vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0__1));
    vlSelf->__VactTriggered.set(9U, vlSelf->imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_stages.neq(vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_stages__1));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop__1)));
    vlSelf->__VactTriggered.set(0xbU, vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state.neq(vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state__1));
    vlSelf->__VactTriggered.set(0xcU, ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1) 
                                       | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                          != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1)));
    vlSelf->__VactTriggered.set(0xdU, (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                       != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1));
    vlSelf->__VactTriggered.set(0xeU, ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree__1) 
                                       | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree 
                                          != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree__1)));
    vlSelf->__VactTriggered.set(0xfU, (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree 
                                       != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree__1));
    vlSelf->__VactTriggered.set(0x10U, (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree__1));
    vlSelf->__VactTriggered.set(0x11U, (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__1));
    vlSelf->__VactTriggered.set(0x12U, (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree__1));
    vlSelf->__VactTriggered.set(0x13U, ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree 
                                         != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree__1) 
                                        | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree 
                                           != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree__1)));
    vlSelf->__VactTriggered.set(0x14U, (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree__1));
    vlSelf->__VactTriggered.set(0x15U, (((IData)(vlSelf->imem_test__DOT__clk_edn_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__clk_edn_i__0))) 
                                        | ((~ (IData)(vlSelf->rst_ni)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__VactTriggered.set(0x16U, (((IData)(vlSelf->imem_test__DOT__clk_otp_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__clk_otp_i__0))) 
                                        | ((~ (IData)(vlSelf->rst_otp_ni)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_otp_ni__0))));
    vlSelf->__VactTriggered.set(0x17U, (((IData)(vlSelf->imem_test__DOT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__clk_i__0))) 
                                        | ((~ (IData)(vlSelf->rst_ni)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__VactTriggered.set(0x18U, ((IData)(vlSelf->imem_test__DOT__clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__clk_i__0))));
    vlSelf->__VactTriggered.set(0x19U, ((IData)(vlSelf->rst_ni) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0)));
    vlSelf->__VactTriggered.set(0x1aU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_stages__1.assign(vlSelf->imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_stages);
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state__1.assign(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state);
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__clk_edn_i__0 
        = vlSelf->imem_test__DOT__clk_edn_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__clk_otp_i__0 
        = vlSelf->imem_test__DOT__clk_otp_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_otp_ni__0 = vlSelf->rst_otp_ni;
    vlSelf->__Vtrigprevexpr___TOP__imem_test__DOT__clk_i__0 
        = vlSelf->imem_test__DOT__clk_i;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
        vlSelf->__VactTriggered.set(9U, 1U);
        vlSelf->__VactTriggered.set(0xaU, 1U);
        vlSelf->__VactTriggered.set(0xbU, 1U);
        vlSelf->__VactTriggered.set(0xcU, 1U);
        vlSelf->__VactTriggered.set(0xdU, 1U);
        vlSelf->__VactTriggered.set(0xeU, 1U);
        vlSelf->__VactTriggered.set(0xfU, 1U);
        vlSelf->__VactTriggered.set(0x10U, 1U);
        vlSelf->__VactTriggered.set(0x11U, 1U);
        vlSelf->__VactTriggered.set(0x12U, 1U);
        vlSelf->__VactTriggered.set(0x13U, 1U);
        vlSelf->__VactTriggered.set(0x14U, 1U);
        vlSelf->__VactTriggered.set(0x19U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimem_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vimem_test___024root___act_comb__TOP__8(Vimem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root___act_comb__TOP__8\n"); );
    // Body
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[3U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[4U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[5U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[6U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[7U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[8U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
        = Vimem_test__ConstPool__CONST_hc1613866_0[9U];
    if ((0x20U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
        if ((0x10U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
            if ((1U & (~ (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
                          >> 3U)))) {
                if ((1U & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)) 
                           | (0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
                                     [0U] & (IData)(
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0xaU))))))) {
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[0U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[1U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[2U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[3U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[4U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[5U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[6U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[7U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[8U];
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                        = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[9U];
                } else {
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[0U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[1U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[2U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[3U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[4U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[5U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[6U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[7U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[8U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                        = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[9U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                }
            }
        }
    } else if ((0x10U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
        if ((8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[0U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[1U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[2U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[3U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[4U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[5U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[6U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[7U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[8U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rdata_intg[9U];
        } else {
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[0U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[1U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[2U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[3U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[4U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[5U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[6U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[7U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[8U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                = vlSelf->imem_test__DOT__dut__DOT__dmem_rdata[9U];
        }
    }
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U];
    } else {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
            = (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o);
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
            = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 7U) | (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
                                  >> 0x20U)));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
            = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0xeU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
                             >> 0x19U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 7U)));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
            = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x15U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0x12U) | ((IData)(
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xeU)));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
            = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x1cU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0xbU) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
            = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
                >> 4U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
            = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 3U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
                                   >> 0x20U)) >> 4U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
            = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0xaU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
                             >> 0x1dU) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 3U)));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
            = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x11U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0x16U) | ((IData)(
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xaU)));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
            = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
                >> 0xfU) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
                                     >> 0x20U)) << 0x11U));
    }
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
}

void Vimem_test___024root___nba_sequent__TOP__0(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_sequent__TOP__1(Vimem_test___024root* vlSelf);
void Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0(Vimem_test_prim_onehot_mux__W138_I20* vlSelf);
void Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__1(Vimem_test_prim_onehot_mux__W138_I20* vlSelf);
void Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__2(Vimem_test_prim_onehot_mux__W138_I20* vlSelf);
void Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__3(Vimem_test_prim_onehot_mux__W138_I20* vlSelf);
void Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__4(Vimem_test_prim_onehot_mux__W138_I20* vlSelf);
void Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__5(Vimem_test_prim_onehot_mux__W138_I20* vlSelf);
void Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__6(Vimem_test_prim_onehot_mux__W138_I20* vlSelf);
void Vimem_test___024root___nba_sequent__TOP__2(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_sequent__TOP__3(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_sequent__TOP__4(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_sequent__TOP__5(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__0(Vimem_test___024root* vlSelf);
void Vimem_test_prim_onehot_mux__W138_I20___nba_comb__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b__0(Vimem_test_prim_onehot_mux__W138_I20* vlSelf);
void Vimem_test_prim_onehot_mux__W138_I20___nba_comb__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0(Vimem_test_prim_onehot_mux__W138_I20* vlSelf);
void Vimem_test___024root___nba_comb__TOP__1(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__2(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_sequent__TOP__7(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_sequent__TOP__8(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__5(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__6(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__7(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__8(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_sequent__TOP__6(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__9(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__3(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__4(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__5(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__6(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__7(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__15(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__16(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__17(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__18(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__19(Vimem_test___024root* vlSelf);
void Vimem_test___024root___nba_comb__TOP__20(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__21(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__17(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__18(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__19(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__20(Vimem_test___024root* vlSelf);
void Vimem_test___024root___act_comb__TOP__22(Vimem_test___024root* vlSelf);

void Vimem_test___024root___eval_nba(Vimem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root___eval_nba\n"); );
    // Body
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__1((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__2((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__3((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__4((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__5((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__6((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__1((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__2((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__3((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__4((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__5((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vimem_test_prim_onehot_mux__W138_I20___nba_sequent__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__6((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((0x1800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        Vimem_test_prim_onehot_mux__W138_I20___nba_comb__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b__0((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vimem_test_prim_onehot_mux__W138_I20___nba_comb__TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0((&vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vimem_test___024root___nba_comb__TOP__1(vlSelf);
        Vimem_test___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x800002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x800020ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x3800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((0xa00000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x800800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
    }
    if ((0xc00000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x1a00000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x3800020ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
    }
    if ((0x3800200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
    }
    if ((0x3801000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
    }
    if ((0x3802000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x3820000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x1800800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_comb__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
        Vimem_test___024root___nba_comb__TOP__16(vlSelf);
        Vimem_test___024root___nba_comb__TOP__17(vlSelf);
        Vimem_test___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0x3801400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_comb__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
    }
    if ((0x3801c00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___nba_comb__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
    }
    if ((0x3801402ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x27U] = 1U;
    }
    if ((0x3901c00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x3841c00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x3809c00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x3811c00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x3819c00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vimem_test___024root___act_comb__TOP__22(vlSelf);
    }
}

extern const VlWide<10>/*319:0*/ Vimem_test__ConstPool__CONST_h14adc512_0;

VL_INLINE_OPT void Vimem_test___024root___nba_sequent__TOP__1(Vimem_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2 = 0;
    CData/*6:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3 = 0;
    CData/*6:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4 = 0;
    CData/*6:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5 = 0;
    CData/*6:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6 = 0;
    CData/*6:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7 = 0;
    CData/*2:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0 = 0;
    QData/*33:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0;
    __Vdlyvdim0__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0 = 0;
    QData/*38:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0;
    __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0 = 0;
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62 = 0;
    SData/*8:0*/ __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63;
    __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63 = 0;
    VlWide<5>/*155:0*/ __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63;
    VL_ZERO_W(156, __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63);
    CData/*0:0*/ __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63 = 0;
    // Body
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62 = 0U;
    __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63 = 0U;
    if (vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_q_b) {
        if (vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_q_b) {
            vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__unnamedblk1__DOT__i = 1U;
            if ((0x7fffffffffULL == vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__wmask_q)) {
                vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_h588cdb37__0 
                    = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__wdata_scr;
                __Vdlyvval__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 
                    = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_h588cdb37__0;
                __Vdlyvset__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 1U;
                __Vdlyvdim0__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 
                    = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__addr_mux;
            }
        }
        if ((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_q_b)))) {
            vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o 
                = vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__addr_mux];
        }
    }
    if (vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_q_b) {
        if (vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_q_b) {
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__unnamedblk1__DOT__i = 8U;
            if ((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__wmask))) {
                vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0 
                    = (0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[0U]))));
                __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0;
                __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 1U;
                __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 = 0U;
                __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux;
            }
            if ((2U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__wmask))) {
                vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0 
                    = (0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[2U])) 
                                           << 0x19U) 
                                          | ((QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[1U])) 
                                             >> 7U)));
                __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0;
                __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1 = 1U;
                __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1 = 0x27U;
                __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux;
            }
            if ((4U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__wmask))) {
                vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0 
                    = (0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[3U])) 
                                           << 0x12U) 
                                          | ((QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[2U])) 
                                             >> 0xeU)));
                __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0;
                __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2 = 1U;
                __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2 = 0x4eU;
                __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux;
            }
            if ((8U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__wmask))) {
                vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0 
                    = (0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[4U])) 
                                           << 0xbU) 
                                          | ((QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[3U])) 
                                             >> 0x15U)));
                __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0;
                __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3 = 1U;
                __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3 = 0x75U;
                __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux;
            }
            if ((0x10U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__wmask))) {
                vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0 
                    = (0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[6U])) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[5U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[4U])) 
                                                >> 0x1cU))));
                __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0;
                __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4 = 1U;
                __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4 = 0x9cU;
                __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux;
            }
            if ((0x20U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__wmask))) {
                vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0 
                    = (0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[7U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[6U])) 
                                             >> 3U)));
                __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0;
                __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5 = 1U;
                __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5 = 0xc3U;
                __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux;
            }
            if ((0x40U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__wmask))) {
                vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0 
                    = (0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[8U])) 
                                           << 0x16U) 
                                          | ((QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[7U])) 
                                             >> 0xaU)));
                __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0;
                __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6 = 1U;
                __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6 = 0xeaU;
                __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux;
            }
            if ((0x80U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__wmask))) {
                vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0 
                    = (0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[9U])) 
                                           << 0xfU) 
                                          | ((QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr[8U])) 
                                             >> 0x11U)));
                __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT____Vlvbound_hd355eba8__0;
                __Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7 = 1U;
                __Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7 = 0x111U;
                __Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7 
                    = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux;
            }
        }
        if ((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__write_q_b)))) {
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[0U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][0U];
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[1U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][1U];
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[2U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][2U];
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[3U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][3U];
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[4U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][4U];
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[5U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][5U];
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[6U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][6U];
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[7U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][7U];
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[8U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][8U];
            vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o[9U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                [vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_mux][9U];
        }
    }
    if (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
         & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_commit))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT____Vcellinp__loop_info_stack__push_data_i;
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0 = 1U;
        __Vdlyvdim0__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx;
    }
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0 = 1U;
        __Vdlyvdim0__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0 
            = (7U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                     - (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack)));
    }
    if ((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
               & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0 = 0U;
    }
    if ((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
               & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                  [0U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 1U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [1U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 1U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                          [1U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 2U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [2U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 2U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                          [2U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 3U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [3U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 3U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                          [3U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 4U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [4U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 4U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                          [4U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 5U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [5U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 5U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                          [5U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 6U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [6U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 6U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                          [6U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 7U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [7U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 7U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                          [7U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 8U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [8U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 8U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                          [8U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 9U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [9U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 9U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                          [9U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xaU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0xaU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xaU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                            [0xaU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xbU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0xbU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xbU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                            [0xbU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xcU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0xcU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xcU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                            [0xcU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xdU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0xdU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xdU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                            [0xdU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xeU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0xeU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xeU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                            [0xeU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xfU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0xfU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0xfU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                            [0xfU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x10U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x10U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x10U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x10U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x11U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x11U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x11U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x11U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x12U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x12U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x12U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x12U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x13U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x13U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x13U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x13U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x14U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x14U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x14U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x14U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x15U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x15U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x15U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x15U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x16U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x16U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x16U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x16U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x17U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x17U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x17U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x17U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x18U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x18U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x18U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x18U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x19U) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x19U]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x19U) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x19U] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1aU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x1aU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1aU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x1aU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1bU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x1bU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1bU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x1bU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1cU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x1cU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1cU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x1cU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1dU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x1dU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1dU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x1dU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59 = 0x9cU;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1eU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
               [0x1eU]))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60 = 0U;
    }
    if ((1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                >> 0x1eU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                             [0x1eU] >> 1U)))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61 = 0x9cU;
    }
    if (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
          >> 0x1fU) & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
         [0x1fU])) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[0U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[1U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[2U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[3U];
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62[4U] 
            = (0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[4U]);
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62 = 0U;
    }
    if (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
          >> 0x1fU) & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_onehot
                       [0x1fU] >> 1U))) {
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63[0U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[5U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[4U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63[1U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[6U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[5U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63[2U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[7U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[6U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63[3U] 
            = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[8U] 
                << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[7U] 
                          >> 0x1cU));
        __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63[4U] 
            = (0xfffffffU & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[9U] 
                              << 4U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[8U] 
                                        >> 0x1cU)));
        __Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63 = 1U;
        __Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63 = 0x9cU;
    }
    if (vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__word_ack) {
        vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__gen_rep_chk__DOT__word_data_q 
            = (IData)(vlSelf->imem_test__DOT__edn_rnd_i);
    }
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_en) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_fips_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__fips_q;
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_err_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__gen_rep_chk__DOT__err_q;
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[0U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[1U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[2U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[3U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[4U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[5U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[6U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U];
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[7U] 
            = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U];
    }
    if (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_rready) 
         & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage 
            = vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_wdata;
    }
    if (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_rready) 
         & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage 
            = vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_wdata;
    }
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_addr_last 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr;
    }
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_saved_q 
        = (0xfffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result);
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_urnd_d;
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_addr_q 
            = (0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q));
    }
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr;
    }
    if ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot 
         >> 0x1fU)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x40000000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x20000000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x10000000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x8000000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x4000000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x2000000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x1000000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x800000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x400000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x200000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x100000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x80000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x40000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x20000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x10000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x8000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x4000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x2000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x1000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x800U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x400U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x200U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x100U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x80U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x40U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x20U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((0x10U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if ((4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__we_onehot)) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q 
            = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out;
    }
    if (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__sramreqfifo_wvalid) 
         & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = ((0x78U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                         [1U][1U] >> 0x15U)) | (7U 
                                                & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                    [1U][2U] 
                                                    << 2U) 
                                                   | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                                      [1U][1U] 
                                                      >> 0x1eU))));
    }
    if (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__sramreqfifo_wvalid) 
         & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = (0x1eU & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                        [0U][1U] >> 0x17U));
    }
    if (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_wvalid) 
         & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = (((4U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                              [1U][3U] >> 9U))) << 0xfU) 
               | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_det) 
                   << 0xeU) | ((0x3c00U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                           [1U][0U] 
                                           >> 5U)) 
                               | (0x3ffU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][3U] 
                                             << 4U) 
                                            | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [1U][2U] 
                                               >> 0x1cU))))));
    }
    if (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_wvalid) 
         & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
        vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage 
            = (((4U == (7U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                              [0U][3U] >> 9U))) << 0xfU) 
               | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_det) 
                   << 0xeU) | ((0x3c00U & (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                           [0U][0U] 
                                           >> 5U)) 
                               | (0x3ffU & ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][3U] 
                                             << 4U) 
                                            | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                               [0U][2U] 
                                               >> 0x1cU))))));
    }
    if ((0x200U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_bignum_rd_addr_b_q 
            = (0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg));
    }
    if ((0x100U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_bignum_wr_addr_q 
            = (0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg));
    }
    if ((0x400U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_bignum_rd_addr_a_q 
            = (0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg));
    }
    if (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
         & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_load_req))) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_lsu__DOT__lsu_word_select 
            = (7U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked) 
                     >> 2U));
    }
    if ((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en))) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U] 
            = (IData)((0x7fffffffffULL & (((QData)((IData)(
                                                           vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[0U])))));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
            = ((0xffffff80U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U]) 
               | (IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[0U])))) 
                          >> 0x20U)));
    }
    if ((2U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en))) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U] 
            = ((0x7fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U])) 
                                                 >> 7U)))) 
                  << 7U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
            = ((0xffffc000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U])) 
                                                  >> 7U)))) 
                   >> 0x19U) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[1U])) 
                                                >> 7U))) 
                                         >> 0x20U)) 
                                << 7U)));
    }
    if ((4U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en))) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U] 
            = ((0x3fffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U])) 
                                                 >> 0xeU)))) 
                  << 0xeU));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
            = ((0xffe00000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U])) 
                                                << 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U])) 
                                                  >> 0xeU)))) 
                   >> 0x12U) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U])) 
                                              << 0x12U) 
                                             | ((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[2U])) 
                                                >> 0xeU))) 
                                         >> 0x20U)) 
                                << 0xeU)));
    }
    if ((8U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en))) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U] 
            = ((0x1fffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U])) 
                                                 >> 0x15U)))) 
                  << 0x15U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
            = ((0xf0000000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U])) 
                                                  >> 0x15U)))) 
                   >> 0xbU) | ((IData)(((0x7fffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U])) 
                                             << 0xbU) 
                                            | ((QData)((IData)(
                                                               vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[3U])) 
                                               >> 0x15U))) 
                                        >> 0x20U)) 
                               << 0x15U)));
    }
    if ((0x10U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en))) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U] 
            = ((0xfffffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U])) 
                                                    >> 0x1cU))))) 
                  << 0x1cU));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U] 
            = (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U])) 
                                                  >> 0x1cU))))) 
                >> 4U) | ((IData)(((0x7fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U])) 
                                                   >> 0x1cU)))) 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
            = ((0xfffffff8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U]) 
               | ((IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[5U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[4U])) 
                                                     >> 0x1cU)))) 
                           >> 0x20U)) >> 4U));
    }
    if ((0x20U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en))) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U] 
            = ((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U])) 
                                                 >> 3U)))) 
                  << 3U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
            = ((0xfffffc00U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U])) 
                                                  >> 3U)))) 
                   >> 0x1dU) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[6U])) 
                                                >> 3U))) 
                                         >> 0x20U)) 
                                << 3U)));
    }
    if ((0x40U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en))) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U] 
            = ((0x3ffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U])) 
                                                 >> 0xaU)))) 
                  << 0xaU));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
            = ((0xfffe0000U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U]) 
               | (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U])) 
                                                  >> 0xaU)))) 
                   >> 0x16U) | ((IData)(((0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U])) 
                                              << 0x16U) 
                                             | ((QData)((IData)(
                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[7U])) 
                                                >> 0xaU))) 
                                         >> 0x20U)) 
                                << 0xaU)));
    }
    if ((0x80U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_wr_en))) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
            = ((0x1ffffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U]) 
               | ((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[9U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U])) 
                                                 >> 0x11U)))) 
                  << 0x11U));
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
            = (0xffffffU & (((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[9U])) 
                                          << 0xfU) 
                                         | ((QData)((IData)(
                                                            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U])) 
                                            >> 0x11U)))) 
                             >> 0xfU) | ((IData)(((0x7fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[9U])) 
                                                       << 0xfU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_d[8U])) 
                                                         >> 0x11U))) 
                                                  >> 0x20U)) 
                                         << 0x11U)));
    }
    if ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
          & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_en)) 
         | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_acc_wr_en) 
            | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd)))) {
        if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd) {
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[0U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[1U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[2U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[3U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[4U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[5U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[6U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[7U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[8U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[9U];
        } else if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_acc_wr_en) {
            if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[0U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[1U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[2U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[3U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[4U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[5U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[6U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[7U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[8U];
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                    = Vimem_test__ConstPool__CONST_h14adc512_0[9U];
            } else {
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[0U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[1U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[2U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[3U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[4U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[5U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[6U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[7U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[8U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                    = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[9U] 
                       & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                           >> 2U)))));
            }
        } else {
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[0U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[1U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[2U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[3U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[4U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[5U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[6U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[7U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[8U];
            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[9U];
        }
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage[__Vdlyvdim0__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0] 
            = __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_storage__v0;
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage[__Vdlyvdim0__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0] 
            = __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage__v0;
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v0);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v1);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [1U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v2);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [1U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v3);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [2U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v4);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [2U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v5);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [3U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v6);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [3U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v7);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [4U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v8);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [4U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v9);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [5U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v10);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [5U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v11);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [6U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v12);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [6U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v13);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [7U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v14);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [7U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v15);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [8U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v16);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [8U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v17);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [9U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v18);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [9U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v19);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xaU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v20);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xaU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v21);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xbU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v22);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xbU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v23);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xcU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v24);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xcU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v25);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xdU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v26);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xdU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v27);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xeU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v28);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xeU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v29);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xfU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v30);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0xfU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v31);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x10U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v32);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x10U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v33);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x11U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v34);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x11U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v35);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x12U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v36);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x12U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v37);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x13U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v38);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x13U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v39);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x14U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v40);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x14U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v41);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x15U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v42);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x15U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v43);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x16U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v44);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x16U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v45);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x17U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v46);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x17U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v47);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x18U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v48);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x18U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v49);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x19U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v50);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x19U], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v51);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1aU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v52);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1aU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v53);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1bU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v54);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1bU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v55);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1cU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v56);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1cU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v57);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1dU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v58);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1dU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v59);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1eU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v60);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1eU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v61);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1fU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v62);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63) {
        VL_ASSIGNSEL_WW(312,156,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63), 
                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
                        [0x1fU], __Vdlyvval__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf__v63);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0) {
        VL_ASSIGNSEL_WQ(312,39,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0), 
                        vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                        [__Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0], __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1) {
        VL_ASSIGNSEL_WQ(312,39,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1), 
                        vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                        [__Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1], __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v1);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2) {
        VL_ASSIGNSEL_WQ(312,39,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2), 
                        vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                        [__Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2], __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v2);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3) {
        VL_ASSIGNSEL_WQ(312,39,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3), 
                        vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                        [__Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3], __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v3);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4) {
        VL_ASSIGNSEL_WQ(312,39,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4), 
                        vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                        [__Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4], __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v4);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5) {
        VL_ASSIGNSEL_WQ(312,39,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5), 
                        vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                        [__Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5], __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v5);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6) {
        VL_ASSIGNSEL_WQ(312,39,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6), 
                        vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                        [__Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6], __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v6);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7) {
        VL_ASSIGNSEL_WQ(312,39,(IData)(__Vdlyvlsb__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7), 
                        vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                        [__Vdlyvdim0__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7], __Vdlyvval__imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v7);
    }
    if (__Vdlyvset__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0) {
        vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[__Vdlyvdim0__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0] 
            = __Vdlyvval__imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem__v0;
    }
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[1U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[2U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[3U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[4U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[5U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[6U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[7U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[8U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[9U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xaU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xbU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xcU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xdU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xeU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0xfU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x10U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x11U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x12U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x13U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x14U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x15U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x16U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x17U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x18U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x19U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1aU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1bU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1cU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1dU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1eU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.in_i[0x1fU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[1U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [1U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[2U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [2U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[3U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [3U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[4U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [4U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[5U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [5U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[6U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [6U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[7U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [7U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[8U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [8U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[9U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [9U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xaU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xaU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xbU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xbU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xcU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xcU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xdU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xdU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xeU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xeU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0xfU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0xfU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x10U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x10U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x11U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x11U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x12U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x12U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x13U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x13U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x14U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x14U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x15U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x15U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x16U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x16U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x17U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x17U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x18U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x18U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x19U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x19U][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1aU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1aU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1bU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1bU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1cU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1cU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1dU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1dU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1eU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1eU][9U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][0U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][1U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][2U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][3U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][4U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][5U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][6U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][7U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][8U];
    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.in_i[0x1fU][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__rf
        [0x1fU][9U];
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch) {
        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr 
            = vlSelf->imem_test__DOT__dut__DOT__imem_addr_core;
    }
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x1fU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x1eU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x1dU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x1cU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x1bU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x1aU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x19U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x18U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x17U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x16U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x15U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x14U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x13U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x12U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x11U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0x10U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0xfU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0xeU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0xdU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0xcU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0xbU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[0xaU] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg[2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[3U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[4U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[5U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[6U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[7U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[0U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[3U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[4U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[5U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[6U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[7U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][8U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_in[1U][9U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[1U][0U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[0U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[1U][1U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[1U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[1U][2U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[2U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[1U][3U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[3U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[1U][4U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[4U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[1U][5U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[5U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[1U][6U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[6U];
    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[1U][7U] 
        = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_q[7U];
}
