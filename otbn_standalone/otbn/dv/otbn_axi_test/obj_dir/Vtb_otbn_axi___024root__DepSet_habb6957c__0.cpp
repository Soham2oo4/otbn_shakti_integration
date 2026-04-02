// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_otbn_axi.h for the primary calling header

#include "Vtb_otbn_axi__pch.h"
#include "Vtb_otbn_axi__Syms.h"
#include "Vtb_otbn_axi___024root.h"

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_key_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_key_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_key__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_key__Vstatic__valid)) {
        val[0U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U];
        val[1U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U];
        val[2U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U];
        val[3U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U];
    }
    simutil_get_scramble_key__Vfuncrtn = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_key__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ Vtb_otbn_axi__ConstPool__CONST_hab76c978_0;

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_nonce_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_nonce_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_nonce__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_nonce__Vstatic__valid)) {
        nonce[0U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[0U];
        nonce[1U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[1U];
        nonce[2U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[2U];
        nonce[3U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[3U];
        nonce[4U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[4U];
        nonce[5U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[5U];
        nonce[6U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[6U];
        nonce[7U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[7U];
        nonce[8U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[8U];
        nonce[9U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[9U];
        nonce[0U] = (IData)(vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q);
        nonce[1U] = (IData)((vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                             >> 0x20U));
    }
    simutil_get_scramble_nonce__Vfuncrtn = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__simutil_get_scramble_nonce__Vstatic__valid;
}

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 39, 2048, 0, VL_CVT_PACK_STR_NN(file)
                 ,  &(vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem)
                 , 0, ~0ULL);
}

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x800U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7ffU 
                                                                                & index)] 
            = (0x7fffffffffULL & (((QData)((IData)(
                                                   val[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               val[0U]))));
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ Vtb_otbn_axi__ConstPool__CONST_hc1613866_0;

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x800U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[9U];
        val[0U] = (IData)(vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                          [(0x7ffU & index)]);
        val[1U] = ((0xffffff80U & val[1U]) | (IData)(
                                                     (vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
                                                      [
                                                      (0x7ffU 
                                                       & index)] 
                                                      >> 0x20U)));
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid;
}

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_key_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_key_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_key__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_key__Vstatic__valid)) {
        val[0U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U];
        val[1U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U];
        val[2U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U];
        val[3U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U];
    }
    simutil_get_scramble_key__Vfuncrtn = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_key__Vstatic__valid;
}

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_nonce_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_nonce_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_nonce__Vstatic__valid 
        = ((IData)(vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q)
            ? 1U : 0U);
    if ((1U == vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_nonce__Vstatic__valid)) {
        nonce[0U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[0U];
        nonce[1U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[1U];
        nonce[2U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[2U];
        nonce[3U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[3U];
        nonce[4U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[4U];
        nonce[5U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[5U];
        nonce[6U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[6U];
        nonce[7U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[7U];
        nonce[8U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[8U];
        nonce[9U] = Vtb_otbn_axi__ConstPool__CONST_hab76c978_0[9U];
        nonce[0U] = (IData)(vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q);
        nonce[1U] = (IData)((vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                             >> 0x20U));
    }
    simutil_get_scramble_nonce__Vfuncrtn = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__simutil_get_scramble_nonce__Vstatic__valid;
}

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_memload_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 312, 128, 0, VL_CVT_PACK_STR_NN(file)
                 ,  &(vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem)
                 , 0, ~0ULL);
}

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x80U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][0U] 
            = val[0U];
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][1U] 
            = val[1U];
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][2U] 
            = val[2U];
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][3U] 
            = val[3U];
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][4U] 
            = val[4U];
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][5U] 
            = val[5U];
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][6U] 
            = val[6U];
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][7U] 
            = val[7U];
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][8U] 
            = val[8U];
        vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem[(0x7fU 
                                                                                & index)][9U] 
            = val[9U];
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid;
}

void Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP(Vtb_otbn_axi__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root____Vdpiexp_tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x80U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][0U];
        val[1U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][1U];
        val[2U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][2U];
        val[3U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][3U];
        val[4U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][4U];
        val[5U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][5U];
        val[6U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][6U];
        val[7U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][7U];
        val[8U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][8U];
        val[9U] = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__mem
            [(0x7fU & index)][9U];
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP.tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_otbn_axi___024root___dump_triggers__act(Vtb_otbn_axi___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_otbn_axi___024root___eval_triggers__act(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                       != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round__1) 
                                      | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                         != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round__1)) 
                                     | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round__1)));
    vlSelf->__VactTriggered.set(2U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0__1));
    vlSelf->__VactTriggered.set(3U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0__1));
    vlSelf->__VactTriggered.set(4U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0__1));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2__1)));
    vlSelf->__VactTriggered.set(6U, (((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                       != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round__1) 
                                      | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                         != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round__1)) 
                                     | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round__1)));
    vlSelf->__VactTriggered.set(7U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0__1));
    vlSelf->__VactTriggered.set(8U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0__1));
    vlSelf->__VactTriggered.set(9U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0 
                                     != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0__1));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2__1)));
    vlSelf->__VactTriggered.set(0xbU, vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_stages.neq(vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_stages__1));
    vlSelf->__VactTriggered.set(0xcU, ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop__1)));
    vlSelf->__VactTriggered.set(0xdU, vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state.neq(vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state__1));
    vlSelf->__VactTriggered.set(0xeU, ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1) 
                                       | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                          != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1)));
    vlSelf->__VactTriggered.set(0xfU, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                       != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1));
    vlSelf->__VactTriggered.set(0x10U, ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o__1)));
    vlSelf->__VactTriggered.set(0x11U, ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree 
                                         != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree__1) 
                                        | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree 
                                           != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree__1)));
    vlSelf->__VactTriggered.set(0x12U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree__1));
    vlSelf->__VactTriggered.set(0x13U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree__1));
    vlSelf->__VactTriggered.set(0x14U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__1));
    vlSelf->__VactTriggered.set(0x15U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree__1));
    vlSelf->__VactTriggered.set(0x16U, ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree 
                                         != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree__1) 
                                        | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree 
                                           != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree__1)));
    vlSelf->__VactTriggered.set(0x17U, (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree__1));
    vlSelf->__VactTriggered.set(0x18U, (((IData)(vlSelf->clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                        | ((~ (IData)(vlSelf->rst_ni)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__VactTriggered.set(0x19U, ((IData)(vlSelf->clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__VactTriggered.set(0x1aU, ((IData)(vlSelf->rst_ni) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0)));
    vlSelf->__VactTriggered.set(0x1bU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_stages__1.assign(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_stages);
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__stop;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state__1.assign(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state);
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT____Vcellout__reqfifo__wready_o;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
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
        vlSelf->__VactTriggered.set(0x15U, 1U);
        vlSelf->__VactTriggered.set(0x16U, 1U);
        vlSelf->__VactTriggered.set(0x17U, 1U);
        vlSelf->__VactTriggered.set(0x1aU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_otbn_axi___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_otbn_axi___024root___act_comb__TOP__3(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[5U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[6U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[7U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[8U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
        = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[9U];
    if ((0x20U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
        if ((0x10U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
            if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__insn_dec_bignum[0U] 
                          >> 3U)))) {
                if ((1U & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)) 
                           | (0U != (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
                                     [0U] & (IData)(
                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0xaU))))))) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[0U];
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[1U];
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[2U];
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[3U];
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[4U];
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[5U];
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[6U];
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[7U];
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[8U];
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                        = vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[9U];
                } else {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[0U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[1U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[2U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[3U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[4U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[5U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[6U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[7U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[8U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                        = (vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[9U] 
                           & (- (IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                }
            }
        }
    } else if ((0x10U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
        if ((8U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__insn_dec_bignum[0U])) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[0U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[1U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[2U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[3U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[4U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[5U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[6U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[7U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[8U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__ispr_rdata_intg[9U];
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[0U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[1U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[2U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[3U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[4U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[5U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[6U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[7U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[8U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata[9U];
        }
    }
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U];
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
            = (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o);
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 7U) | (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_wr_data_intg_enc__data_o 
                                  >> 0x20U)));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0xeU) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o) 
                             >> 0x19U) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 7U)));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x15U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0x12U) | ((IData)(
                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_wr_data_intg_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xeU)));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x1cU) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0xbU) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o) 
                >> 4U) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 3U) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_wr_data_intg_enc__data_o 
                                   >> 0x20U)) >> 4U));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0xaU) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o) 
                             >> 0x1dU) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_wr_data_intg_enc__data_o 
                                                   >> 0x20U)) 
                                          << 3U)));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
                << 0x11U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o) 
                              >> 0x16U) | ((IData)(
                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_wr_data_intg_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xaU)));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o) 
                >> 0xfU) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_wr_data_intg_enc__data_o 
                                     >> 0x20U)) << 0x11U));
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 1U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 2U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 4U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 5U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 6U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 7U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 8U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 9U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xaU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xbU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xcU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xdU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xeU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0xfU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x10U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x11U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x13U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x14U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x15U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x16U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x17U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x18U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x19U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1aU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1bU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1cU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1dU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                               >> 0x1eU)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[0U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[0U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[1U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[1U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[2U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[2U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[3U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[3U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[4U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[4U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[5U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[5U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[6U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[6U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[7U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[7U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[8U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[8U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__wr_data_blanked[9U] 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_intg_mux_out[9U] 
           & (- (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                         >> 0x1fU))));
}

void Vtb_otbn_axi___024root___nba_sequent__TOP__0(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_sequent__TOP__1(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf);
void Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__1(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf);
void Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__2(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf);
void Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__3(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf);
void Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__4(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf);
void Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__5(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf);
void Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__6(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__0(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_sequent__TOP__7(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_sequent__TOP__8(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__3(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_sequent__TOP__2(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__4(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_comb__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b__0(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf);
void Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_comb__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0(Vtb_otbn_axi_prim_onehot_mux__W138_I20* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__5(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__6(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__7(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__8(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__9(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__10(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__4(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__5(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__6(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__7(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__8(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__9(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__10(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__11(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__12(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__13(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__21(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___nba_comb__TOP__22(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__16(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__17(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__18(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__19(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__20(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___act_comb__TOP__21(Vtb_otbn_axi___024root* vlSelf);

void Vtb_otbn_axi___024root___eval_nba(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___eval_nba\n"); );
    // Body
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__1((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__2((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__3((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__4((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__5((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__6((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__1((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__2((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__3((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__4((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__5((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_sequent__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__6((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
    }
    if ((0x7000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((0x1000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x1000040ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x1002000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((0x3000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___nba_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_comb__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b__0((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b));
        Vtb_otbn_axi_prim_onehot_mux__W138_I20___nba_comb__TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a__0((&vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a));
        Vtb_otbn_axi___024root___nba_comb__TOP__5(vlSelf);
        Vtb_otbn_axi___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x3002000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___nba_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        Vtb_otbn_axi___024root___nba_comb__TOP__8(vlSelf);
        Vtb_otbn_axi___024root___nba_comb__TOP__9(vlSelf);
        Vtb_otbn_axi___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x3000400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
    }
    if ((0x3000020ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
    }
    if ((0x3000420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
    }
    if ((0x3010420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
    }
    if ((0x7010420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
    }
    if ((0x7010460ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
    }
    if ((0x7010c20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
    }
    if ((0x7014420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0x27U] = 1U;
    }
    if ((0x7018420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x7110420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x7015420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___nba_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x28U] = 1U;
    }
    if ((0x7017420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___nba_comb__TOP__22(vlSelf);
        vlSelf->__Vm_traceActivity[0x29U] = 1U;
    }
    if ((0x7015422ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0x2aU] = 1U;
    }
    if ((0x7817420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x7217420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x7057420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x7097420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x70d7420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_otbn_axi___024root___act_comb__TOP__21(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0;
extern const VlUnpacked<CData/*3:0*/, 8> Vtb_otbn_axi__ConstPool__TABLE_h06520e16_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_otbn_axi__ConstPool__TABLE_hab9e1eae_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_otbn_axi__ConstPool__TABLE_h718ab09c_0;
extern const VlWide<10>/*319:0*/ Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0;
extern const VlWide<8>/*255:0*/ Vtb_otbn_axi__ConstPool__CONST_h954211c2_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_otbn_axi__ConstPool__TABLE_ha517081a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_otbn_axi__ConstPool__TABLE_hbc83e87b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_otbn_axi__ConstPool__TABLE_h33dc89c4_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_otbn_axi__ConstPool__TABLE_he8163ee1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_otbn_axi__ConstPool__TABLE_h3c180f46_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_otbn_axi__ConstPool__TABLE_h509e0b9b_0;
extern const VlWide<8>/*255:0*/ Vtb_otbn_axi__ConstPool__CONST_h6605bd80_0;

VL_INLINE_OPT void Vtb_otbn_axi___024root___nba_sequent__TOP__0(Vtb_otbn_axi___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_otbn_axi___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__39__Vfuncout;
    __Vfunc_mubi4_test_true_strict__39__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__39__val;
    __Vfunc_mubi4_test_true_strict__39__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__46__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__46__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__46__val;
    __Vfunc_mubi4_bool_to_mubi__46__val = 0;
    CData/*3:0*/ __Vfunc_lc_to_mubi4__47__Vfuncout;
    __Vfunc_lc_to_mubi4__47__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lc_to_mubi4__47__val;
    __Vfunc_lc_to_mubi4__47__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_to_lc__48__Vfuncout;
    __Vfunc_mubi4_to_lc__48__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_to_lc__48__val;
    __Vfunc_mubi4_to_lc__48__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__75__Vfuncout;
    __Vfunc_mubi4_test_true_loose__75__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__75__val;
    __Vfunc_mubi4_test_true_loose__75__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__96__Vfuncout;
    __Vfunc_mubi4_test_true_loose__96__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__96__val;
    __Vfunc_mubi4_test_true_loose__96__val = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__163__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__163__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__163__state_in;
    __Vfunc_prince_mult_prime_64bit__163__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__164__Vfuncout;
    __Vfunc_prince_nibble_red16__164__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__164__vect;
    __Vfunc_prince_nibble_red16__164__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__165__Vfuncout;
    __Vfunc_prince_nibble_red16__165__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__165__vect;
    __Vfunc_prince_nibble_red16__165__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__166__Vfuncout;
    __Vfunc_prince_nibble_red16__166__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__166__vect;
    __Vfunc_prince_nibble_red16__166__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__167__Vfuncout;
    __Vfunc_prince_nibble_red16__167__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__167__vect;
    __Vfunc_prince_nibble_red16__167__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__168__Vfuncout;
    __Vfunc_prince_nibble_red16__168__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__168__vect;
    __Vfunc_prince_nibble_red16__168__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__169__Vfuncout;
    __Vfunc_prince_nibble_red16__169__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__169__vect;
    __Vfunc_prince_nibble_red16__169__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__170__Vfuncout;
    __Vfunc_prince_nibble_red16__170__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__170__vect;
    __Vfunc_prince_nibble_red16__170__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__171__Vfuncout;
    __Vfunc_prince_nibble_red16__171__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__171__vect;
    __Vfunc_prince_nibble_red16__171__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__172__Vfuncout;
    __Vfunc_prince_nibble_red16__172__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__172__vect;
    __Vfunc_prince_nibble_red16__172__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__173__Vfuncout;
    __Vfunc_prince_nibble_red16__173__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__173__vect;
    __Vfunc_prince_nibble_red16__173__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__174__Vfuncout;
    __Vfunc_prince_nibble_red16__174__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__174__vect;
    __Vfunc_prince_nibble_red16__174__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__175__Vfuncout;
    __Vfunc_prince_nibble_red16__175__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__175__vect;
    __Vfunc_prince_nibble_red16__175__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__176__Vfuncout;
    __Vfunc_prince_nibble_red16__176__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__176__vect;
    __Vfunc_prince_nibble_red16__176__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__177__Vfuncout;
    __Vfunc_prince_nibble_red16__177__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__177__vect;
    __Vfunc_prince_nibble_red16__177__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__178__Vfuncout;
    __Vfunc_prince_nibble_red16__178__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__178__vect;
    __Vfunc_prince_nibble_red16__178__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__179__Vfuncout;
    __Vfunc_prince_nibble_red16__179__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__179__vect;
    __Vfunc_prince_nibble_red16__179__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__180__Vfuncout;
    __Vfunc_sbox4_64bit__180__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__180__state_in;
    __Vfunc_sbox4_64bit__180__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__181__Vfuncout;
    __Vfunc_sbox4_8bit__181__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__181__state_in;
    __Vfunc_sbox4_8bit__181__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__239__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__239__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__239__state_in;
    __Vfunc_prince_shiftrows_64bit__239__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__240__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__240__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__240__state_in;
    __Vfunc_prince_shiftrows_64bit__240__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__241__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__241__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__241__state_in;
    __Vfunc_prince_shiftrows_64bit__241__state_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__270__Vfuncout;
    __Vfunc_mubi4_test_true_loose__270__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__270__val;
    __Vfunc_mubi4_test_true_loose__270__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__291__Vfuncout;
    __Vfunc_mubi4_test_true_loose__291__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__291__val;
    __Vfunc_mubi4_test_true_loose__291__val = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__358__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__358__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__358__state_in;
    __Vfunc_prince_mult_prime_64bit__358__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__359__Vfuncout;
    __Vfunc_prince_nibble_red16__359__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__359__vect;
    __Vfunc_prince_nibble_red16__359__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__360__Vfuncout;
    __Vfunc_prince_nibble_red16__360__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__360__vect;
    __Vfunc_prince_nibble_red16__360__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__361__Vfuncout;
    __Vfunc_prince_nibble_red16__361__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__361__vect;
    __Vfunc_prince_nibble_red16__361__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__362__Vfuncout;
    __Vfunc_prince_nibble_red16__362__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__362__vect;
    __Vfunc_prince_nibble_red16__362__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__363__Vfuncout;
    __Vfunc_prince_nibble_red16__363__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__363__vect;
    __Vfunc_prince_nibble_red16__363__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__364__Vfuncout;
    __Vfunc_prince_nibble_red16__364__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__364__vect;
    __Vfunc_prince_nibble_red16__364__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__365__Vfuncout;
    __Vfunc_prince_nibble_red16__365__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__365__vect;
    __Vfunc_prince_nibble_red16__365__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__366__Vfuncout;
    __Vfunc_prince_nibble_red16__366__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__366__vect;
    __Vfunc_prince_nibble_red16__366__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__367__Vfuncout;
    __Vfunc_prince_nibble_red16__367__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__367__vect;
    __Vfunc_prince_nibble_red16__367__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__368__Vfuncout;
    __Vfunc_prince_nibble_red16__368__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__368__vect;
    __Vfunc_prince_nibble_red16__368__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__369__Vfuncout;
    __Vfunc_prince_nibble_red16__369__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__369__vect;
    __Vfunc_prince_nibble_red16__369__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__370__Vfuncout;
    __Vfunc_prince_nibble_red16__370__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__370__vect;
    __Vfunc_prince_nibble_red16__370__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__371__Vfuncout;
    __Vfunc_prince_nibble_red16__371__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__371__vect;
    __Vfunc_prince_nibble_red16__371__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__372__Vfuncout;
    __Vfunc_prince_nibble_red16__372__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__372__vect;
    __Vfunc_prince_nibble_red16__372__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__373__Vfuncout;
    __Vfunc_prince_nibble_red16__373__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__373__vect;
    __Vfunc_prince_nibble_red16__373__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__374__Vfuncout;
    __Vfunc_prince_nibble_red16__374__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__374__vect;
    __Vfunc_prince_nibble_red16__374__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__375__Vfuncout;
    __Vfunc_sbox4_64bit__375__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__375__state_in;
    __Vfunc_sbox4_64bit__375__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__376__Vfuncout;
    __Vfunc_sbox4_8bit__376__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__376__state_in;
    __Vfunc_sbox4_8bit__376__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__434__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__434__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__434__state_in;
    __Vfunc_prince_shiftrows_64bit__434__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__435__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__435__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__435__state_in;
    __Vfunc_prince_shiftrows_64bit__435__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__436__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__436__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__436__state_in;
    __Vfunc_prince_shiftrows_64bit__436__state_in = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__461__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__461__Vfuncout = 0;
    VlWide<4>/*98:0*/ __Vfunc_extract_d2h_rsp_intg__461__tl;
    VL_ZERO_W(99, __Vfunc_extract_d2h_rsp_intg__461__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__461__payload;
    __Vfunc_extract_d2h_rsp_intg__461__payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__475__Vfuncout;
    __Vfunc_mubi4_test_true_strict__475__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__475__val;
    __Vfunc_mubi4_test_true_strict__475__val = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*8:0*/ __Vdly__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding;
    __Vdly__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding = 0;
    CData/*3:0*/ __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v0;
    __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v0 = 0;
    CData/*3:0*/ __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v1;
    __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<8>/*255:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_98;
    VlWide<5>/*159:0*/ __Vtemp_100;
    VlWide<7>/*223:0*/ __Vtemp_101;
    VlWide<8>/*255:0*/ __Vtemp_102;
    VlWide<9>/*287:0*/ __Vtemp_103;
    // Body
    vlSelf->__Vdly__tb_otbn_axi__DOT__u_dut__DOT__otp_ack_q 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__otp_ack_q;
    __Vdly__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_urnd_ack_q 
        = ((IData)(vlSelf->rst_ni) && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o) 
                                       & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_urnd_ack_q))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_rnd_ack_q 
        = ((IData)(vlSelf->rst_ni) && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o) 
                                       & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_rnd_ack_q))));
    vlSelf->__Vdly__tb_otbn_axi__DOT__u_dut__DOT__otp_ack_q 
        = ((IData)(vlSelf->rst_ni) & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT____Vcellout__u_otp_key_req_sync__dst_req_o) 
                                      & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__otp_ack_q))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__fips_q 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__fips_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_err_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_err_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_err_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_err_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_data_ignore_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_data_ignore_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_queued_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_queued_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_urnd_req_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_urnd_req_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__init_sec_wipe_done_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__init_sec_wipe_done_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_set_q 
        = ((IData)(vlSelf->rst_ni) && ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q 
        = ((IData)(vlSelf->rst_ni) && ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q 
        = ((IData)(vlSelf->rst_ni) && ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q 
        = ((IData)(vlSelf->rst_ni) && ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q 
        = ((IData)(vlSelf->rst_ni) && ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__req_sec_wipe_urnd_keys_q 
        = ((IData)(vlSelf->rst_ni) && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_sec_wipe) 
                                       | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_sec_wipe)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__clr_q 
        = (1U & (~ (IData)(vlSelf->rst_ni)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__locking_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_buf));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_data_reg__DOT__valid_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_gnt));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_data_reg__DOT__valid_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_gnt));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelf->tb_otbn_axi__DOT__intr_done = ((IData)(vlSelf->rst_ni) 
                                           && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                               & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_kill_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_kill_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__spurious_secure_wipe_ack_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__spurious_secure_wipe_ack_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_spurious_we_err 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__we_err_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__sec_wipe_err_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__sec_wipe_err_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__software_errs_fatal_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__software_errs_fatal_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__cnt_err_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_call_stack_hw_err));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__cnt_err_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_cnt_err));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__urnd_reseed_err_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__urnd_reseed_err));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xffffffffULL 
                                       != (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                              + (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xffffffffULL 
                                       != (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                              + (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xffffffffULL 
                                       != (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                              + (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xffffffffULL 
                                       != (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                              + (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xffffffffULL 
                                       != (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                              + (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xffffffffULL 
                                       != (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                              + (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xffffffffULL 
                                       != (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                              + (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xffffffffULL 
                                       != (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                              + (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__is_not_running_q 
        = ((IData)(vlSelf->rst_ni) && (1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_d) 
                                                | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_dmem_scramble_key_req_busy) 
                                                   | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q) 
                                                      | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_imem_scramble_key_req_busy)))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__sec_wipe_wdr_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__sec_wipe_wdr_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xfU != (0x1fU 
                                                & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                   + (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_error_q 
        = ((IData)(vlSelf->rst_ni) && (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe)) 
                                        & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__secure_wipe_req)) 
                                       | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe) 
                                          & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__secure_wipe_req)) 
                                             & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_d)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q 
        = (1U & (~ (IData)(vlSelf->rst_ni)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__should_lock_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__should_lock_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_intg_err 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_intg_err_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_spurious_we_err 
        = ((IData)(vlSelf->rst_ni) && (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree) 
                                             | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                                 ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                                | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                                   ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__lsu_rdata_err 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__lsu_rdata_err_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__predec_error 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__predec_error_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__illegal_bus_access_q 
        = ((IData)(vlSelf->rst_ni) && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_dummy_response_d) 
                                       | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_dummy_response_d)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__missed_gnt_error_q 
        = ((IData)(vlSelf->rst_ni) && (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_gnt)) 
                                        & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_req)) 
                                       | ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_gnt)) 
                                          & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__insn_addr_err 
        = ((IData)(vlSelf->rst_ni) && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final) 
                                       & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) 
                                          & ((~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
                                                 | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__internal_fatal_err))) 
                                             & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____VdfgRegularize_h1abe2abd_0_0)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (0xfU != (0x1fU 
                                                & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                   + (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__missed_err_gnt_q 
        = ((IData)(vlSelf->rst_ni) && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__error_det) 
                                       & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h5248d0e1_1_2)) 
                                          & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                             [1U][4U] 
                                             >> 0x10U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__missed_err_gnt_q 
        = ((IData)(vlSelf->rst_ni) && ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_det) 
                                       & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8cc67f79_1_2)) 
                                          & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                             [0U][4U] 
                                             >> 0x10U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__non_controller_reg_intg_violation 
        = ((IData)(vlSelf->rst_ni) && ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__insn_valid) 
                                         & ((0xbU != 
                                             (0xfU 
                                              & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                                                 >> 0xeU))) 
                                            & ((~ (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x22U))) 
                                               & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used)))) 
                                        & ((0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
                                           | ((0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
                                              | ((0U 
                                                  != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
                                                    | ((0U 
                                                        != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
                                                       | ((0U 
                                                           != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
                                                          | ((0U 
                                                              != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
                                                             | (0U 
                                                                != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o)))))))))) 
                                       | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__expected_acc_rd_en) 
                                           & ((0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
                                              | ((0U 
                                                  != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
                                                    | ((0U 
                                                        != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
                                                       | ((0U 
                                                           != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
                                                          | ((0U 
                                                              != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
                                                             | ((0U 
                                                                 != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
                                                                | (0U 
                                                                   != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o)))))))))) 
                                          | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_intg_err_d))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_rdata_bus_en_q 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____VdfgRegularize_hab8adb3c_3_1) 
                                                  & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_dummy_response_d)) 
                                                     & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_buf)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rdata_bus_en_q 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____VdfgRegularize_hab8adb3c_3_1) 
                                                  & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_dummy_response_d)) 
                                                     & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_buf)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_dummy_response_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_dummy_response_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_dummy_response_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_dummy_response_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__inst_req_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__req_q_b));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_r_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_buf));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__inst_req_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__req_q_b));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_buf));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__recoverable_err_q 
        = ((IData)(vlSelf->rst_ni) && ((~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__done_core) 
                                           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__start_q))) 
                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____VdfgRegularize_hab8adb3c_3_11)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__urnd_all_zero 
        = ((IData)(vlSelf->rst_ni) && (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (((((((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U] 
                                                               | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U]) 
                                                              | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U]) 
                                                             | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U]) 
                                                            | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U]) 
                                                           | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U]) 
                                                          | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U]) 
                                                         | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U]))))));
    if (vlSelf->rst_ni) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__accept_t_req) {
            if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__accept_t_rsp)))) {
                __Vdly__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding)));
            }
        } else if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__accept_t_rsp) {
            __Vdly__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding 
                = (0x1ffU & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding) 
                             - (IData)(1U)));
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding 
            = __Vdly__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding;
        if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__start_q) 
             & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_buf)))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__err_bits_q = 0U;
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q = 0U;
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__err_bits_q 
                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__err_bits_q) 
                   | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__err_bits_d));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q 
                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q) 
                   | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_software_err) 
                       << 8U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_internal_state_err) 
                                  << 7U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__reg_intg_violation_err) 
                                             << 6U) 
                                            | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid_err) 
                                                << 5U) 
                                               | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_sw_err) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_err) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_insn_addr_err) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_data_addr_err))))))))));
        }
        __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v0 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_d
            [0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q[0U] 
            = __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v0;
        __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v1 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_d
            [1U];
    } else {
        __Vdly__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding 
            = __Vdly__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__err_bits_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q = 0U;
        __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v0 = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q[0U] 
            = __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v0;
        __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v1 = 0U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q[1U] 
        = __Vdlyvval__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q__v1;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_in[4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
        [0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_in[4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
        [1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[0U] 
        = ((0xeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
            [0U]) | (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                     [0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mac_update_flags[0U] 
        = ((0xeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mac_update_flags
            [0U]) | (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                     [0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags[1U] 
        = ((0xeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
            [1U]) | (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                     [1U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mac_update_flags[1U] 
        = ((0xeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mac_update_flags
            [1U]) | (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                     [1U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
        [0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i[1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
        [1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[3U][0U] 
        = ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
            [1U] << 4U) | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
           [0U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[3U][1U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[3U][2U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[3U][3U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[3U][4U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[3U][5U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[3U][6U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_no_intg_mux_in[3U][7U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_mubi4_sender__DOT__mubi_int 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellinp__u_prim_mubi4_sender__mubi_i)
            : 6U);
    __Vfunc_mubi4_test_true_strict__39__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_mubi4_sender__DOT__mubi_int;
    __Vfunc_mubi4_test_true_strict__39__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__39__val));
    vlSelf->tb_otbn_axi__DOT__idle = __Vfunc_mubi4_test_true_strict__39__Vfuncout;
    if (vlSelf->rst_ni) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[7U];
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__word_ack) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__gen_rep_chk__DOT__chk_rep = 1U;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_d;
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__rw_collision) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[0U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[0U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[1U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[1U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[2U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[2U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[3U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[3U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[4U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[4U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[5U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[5U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[6U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[6U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[7U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[7U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[8U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[8U];
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[9U] 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[9U];
        }
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rw_collision) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_scr_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_scr_d;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d;
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__wr_en) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__q = 1U;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_burst_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_burst_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_base_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_base_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_beat_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_beat_d;
        if ((0x1000U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__core_err_bits))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_fatal_software__DOT__q = 1U;
        }
        if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__non_core_err_bits_d))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_lifecycle_escalation__DOT__q = 1U;
        }
        if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__non_core_err_bits_d))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_illegal_bus_access__DOT__q = 1U;
        }
        if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__non_core_err_bits_d))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bus_intg_violation__DOT__q = 1U;
        }
        if ((0x400U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__core_err_bits))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_reg_intg_violation__DOT__q = 1U;
        }
        if ((0x200U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__core_err_bits))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_dmem_intg_violation__DOT__q = 1U;
        }
        if ((0x100U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__core_err_bits))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_imem_intg_violation__DOT__q = 1U;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_len_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_len_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_burst_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_burst_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_base_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_base_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_len_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_len_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_d;
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_q = 0ULL;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__gen_rep_chk__DOT__chk_rep = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[0U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[1U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[2U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[3U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[4U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[5U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[6U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[7U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[7U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[8U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[8U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_q[9U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[9U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_scr_q = 0ULL;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_burst_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_base_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_beat_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_fatal_software__DOT__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_lifecycle_escalation__DOT__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_illegal_bus_access__DOT__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bus_intg_violation__DOT__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_reg_intg_violation__DOT__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_dmem_intg_violation__DOT__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_imem_intg_violation__DOT__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_len_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_burst_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_base_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_beat_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_len_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q = 0U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__edn_rnd_ack 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__clr_q)) 
           & (8U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_ack = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    if (vlSelf->rst_ni) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d;
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__write_en_b) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__waddr_scr_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__addr_scr;
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_w_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_buf;
        }
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_b) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__waddr_scr_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_scr;
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_w_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_buf;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__non_core_err_bits_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__non_core_err_bits_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d;
        if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__err_bits_clear) 
             | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__done_core))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__err_bits_q 
                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__err_bits_clear)
                    ? 0U : ((0x8000U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__core_err_bits) 
                                        << 3U)) | (
                                                   (0x6000U 
                                                    & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__non_core_err_bits_d) 
                                                       << 0xbU)) 
                                                   | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__wr_en) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__non_core_err_bits_d) 
                                                             << 0xbU)) 
                                                         | (0x7ffU 
                                                            & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__core_err_bits)))))));
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_predec_d;
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__read_en_b) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__raddr_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_index;
        }
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__read_en_b) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__raddr_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_index;
        }
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_req_core) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rmask_core_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rmask_core_d;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__write_pending_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__write_scr_pending_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_pending_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_scr_pending_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__write_en_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__write_en_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_d;
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_en) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q = 0ULL;
        }
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_en) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q = 0ULL;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_status__DOT__q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__status_q;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_d;
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__waddr_scr_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__waddr_scr_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__non_core_err_bits_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__err_bits_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__raddr_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__raddr_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_rmask_core_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__write_pending_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_pending_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__write_en_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__intg_error_w_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_w_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q = 0xf79780bc735f3843ULL;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q = 0xf79780bc735f3843ULL;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_status__DOT__q = 4U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q = 0U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_d 
        = (((IData)((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q) 
                      >> 7U) | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__err_q))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q)) 
                                | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__err_q) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q)) 
                                                   | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__err_q) 
                                                      << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q)) 
                                                      | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__err_q) 
                                                         << 4U))) 
                                                  | ((8U 
                                                      & ((0xfffffff8U 
                                                          & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q)) 
                                                         | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__err_q) 
                                                            << 3U))) 
                                                     | ((4U 
                                                         & ((0xfffffffcU 
                                                             & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q)) 
                                                            | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__err_q) 
                                                               << 2U))) 
                                                        | ((2U 
                                                            & ((0xfffffffeU 
                                                                & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q)) 
                                                               | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__err_q) 
                                                                  << 1U))) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q) 
                                                                 | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__err_q))))))))));
    __Vfunc_mubi4_bool_to_mubi__46__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__is_not_running_q;
    __Vfunc_mubi4_bool_to_mubi__46__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__46__val)
                                                 ? 6U
                                                 : 9U);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellinp__u_prim_mubi4_sender__mubi_i 
        = __Vfunc_mubi4_bool_to_mubi__46__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_cnt_err 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__cnt_err_q) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__err_q));
    if (vlSelf->rst_ni) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__mac_bignum_predec_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_d;
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q = 0U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__urnd_reseed_ack 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q)) 
           & (8U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_prim_mubi4_sender_rma_ack__DOT__mubi_int 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_ack_d)
            : 9U);
    __Vfunc_mubi4_to_lc__48__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_prim_mubi4_sender_rma_ack__DOT__mubi_int;
    __Vfunc_mubi4_to_lc__48__Vfuncout = (3U ^ (IData)(__Vfunc_mubi4_to_lc__48__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__lc_rma_ack_o 
        = __Vfunc_mubi4_to_lc__48__Vfuncout;
    if (vlSelf->rst_ni) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__wipe_after_urnd_refresh_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_d;
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw = 0x53U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_d 
        = ((0xbU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 0U;
    if (vlSelf->rst_ni) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_lc_rma_req_sync__DOT__lc_en 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_lc_rma_req_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq;
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw = 0x13U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_lc_rma_req_sync__DOT__lc_en = 0xaU;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_lc_rma_req_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq = 0xaU;
    __Vfunc_lc_to_mubi4__47__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_lc_rma_req_sync__DOT__lc_en;
    __Vfunc_lc_to_mubi4__47__Vfuncout = (3U ^ (IData)(__Vfunc_lc_to_mubi4__47__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__mubi_rma_req 
        = __Vfunc_lc_to_mubi4__47__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_lc_escalate_en_sync__DOT__lc_en 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_lc_escalate_en_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq)
            : 0xaU);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_lc_escalate_en_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq = 0xaU;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_call_stack_hw_err 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__cnt_err_q) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__err_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_d)
            : 4U);
    if ((0x10U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
                } else if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
                }
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
            }
        } else if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
        } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
            }
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
        }
    } else if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
        } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
            }
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
        }
    } else if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
        } else if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error = 1U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__intg_err) 
             | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_we_err))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_q = 1U;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_d;
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__err_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q = 0ULL;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q))) 
                    << 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q))) 
                    << 2U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q))) 
                    << 3U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q))) 
                       << 4U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q))) 
                       << 5U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q))) 
                       << 6U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xfffffffcU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                 >> 1U))) << 1U)) | 
              (1U & ((0x19U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                     ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xfffffff3U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                 >> 3U))) << 3U)) | 
              (4U & (((0x61U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                 >> 2U))) << 2U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xffffffcfU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                         ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                    >> 5U))) << 5U)) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                      >> 4U))) << 4U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xffffff3fU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                         ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                    >> 7U))) << 7U)) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                      >> 6U))) << 6U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xfffffcffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                          ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                     >> 9U))) << 9U)) 
              | (0x100U & (((0x45U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                       >> 8U))) << 8U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                          ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                     >> 0xbU))) << 0xbU)) 
              | (0x400U & (((0x49U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                       >> 0xaU))) << 0xaU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xffffcfffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                      >> 0xdU))) << 0xdU)) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                        >> 0xcU))) 
                            << 0xcU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xffff3fffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                      >> 0xfU))) << 0xfU)) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                        >> 0xeU))) 
                            << 0xeU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xfffcffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                       >> 0x11U))) 
                           << 0x11U)) | (0x10000U & 
                                         (((0x1cU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                      >> 0x10U))) 
                                          << 0x10U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                       >> 0x13U))) 
                           << 0x13U)) | (0x40000U & 
                                         (((0x25U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                      >> 0x12U))) 
                                          << 0x12U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xffcfffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                        >> 0x15U))) 
                            << 0x15U)) | (0x100000U 
                                          & (((0x46U 
                                               == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                         >> 0x14U))) 
                                             << 0x14U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xff3fffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                        >> 0x17U))) 
                            << 0x17U)) | (0x400000U 
                                          & (((0x70U 
                                               == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                         >> 0x16U))) 
                                             << 0x16U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xfcffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                              ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                         >> 0x19U))) 
                             << 0x19U)) | (0x1000000U 
                                           & (((0x2cU 
                                                == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0x18U))) 
                                              << 0x18U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                              ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                         >> 0x1bU))) 
                             << 0x1bU)) | (0x4000000U 
                                           & (((0x23U 
                                                == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0x1aU))) 
                                              << 0x1aU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0xcfffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                               ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                          >> 0x1dU))) 
                              << 0x1dU)) | (0x10000000U 
                                            & (((0x4aU 
                                                 == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0x1cU))) 
                                               << 0x1cU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o 
        = ((0x3fffffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o) 
           | ((((0x52U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                           >> 0x1fU))) << 0x1fU) | 
              (0x40000000U & (((0x16U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)) 
                               ^ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                          >> 0x1eU))) 
                              << 0x1eU))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_intg_error_vec 
        = ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_intg_error_vec)) 
           | (1U & VL_REDXOR_8(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_intg_error_vec 
        = ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_intg_error_vec)) 
           | (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_intg_error_vec)) 
               & (0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o))) 
              << 1U));
    __Vtableidx1 = (7U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                  >> 0x14U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_bignum 
        = Vtb_otbn_axi__ConstPool__TABLE_h06520e16_0
        [__Vtableidx1];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_illegal_addr 
        = Vtb_otbn_axi__ConstPool__TABLE_hab9e1eae_0
        [__Vtableidx1];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid 
        = Vtb_otbn_axi__ConstPool__TABLE_h718ab09c_0
        [__Vtableidx1];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT____VdfgExtracted_h6c51d394__0 
        = (IData)((0x180ULL == (0x180ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_i_type_base 
        = (((- (IData)((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                      >> 0x1fU))))) 
            << 0xcU) | (0xfffU & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                          >> 0x14U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT____VdfgExtracted_h698f7617__0 
        = (IData)((0ULL != (0x60000000ULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q)));
    vlSelf->tb_otbn_axi__DOT__r_valid = 0U;
    vlSelf->tb_otbn_axi__DOT__ar_ready = 0U;
    vlSelf->tb_otbn_axi__DOT__r_resp = 0U;
    if (vlSelf->rst_ni) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_id_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_id_d;
        vlSelf->tb_otbn_axi__DOT__r_id = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_id_q;
        vlSelf->tb_otbn_axi__DOT__r_data = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_q;
        vlSelf->tb_otbn_axi__DOT__r_last = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_ready = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_id_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_id_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_size_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_size_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_addr_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_addr_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_size_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_size_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_d;
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_id_q = 0U;
        vlSelf->tb_otbn_axi__DOT__r_id = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_id_q;
        vlSelf->tb_otbn_axi__DOT__r_data = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_q;
        vlSelf->tb_otbn_axi__DOT__r_last = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_ready = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_id_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_size_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_addr_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_size_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_addr_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))) {
            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))) {
                vlSelf->tb_otbn_axi__DOT__r_valid = 1U;
                vlSelf->tb_otbn_axi__DOT__r_resp = 
                    ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_err_q)
                      ? 2U : 0U);
                vlSelf->tb_otbn_axi__DOT__r_id = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_id_q;
                vlSelf->tb_otbn_axi__DOT__r_data = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_data_q;
                vlSelf->tb_otbn_axi__DOT__r_last = 
                    ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_beat_q) 
                     == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_len_q));
            }
            if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_ready = 1U;
            }
        } else if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dr_ready = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__rd_state_q)))) {
                vlSelf->tb_otbn_axi__DOT__ar_ready = 1U;
            }
        }
    }
    vlSelf->tb_otbn_axi__DOT__b_valid = 0U;
    vlSelf->tb_otbn_axi__DOT__aw_ready = 0U;
    vlSelf->tb_otbn_axi__DOT__b_resp = 0U;
    vlSelf->tb_otbn_axi__DOT__b_id = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_id_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dw_ready = 0U;
    if (vlSelf->rst_ni) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__accept_t_req) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_steer;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_d;
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
                vlSelf->tb_otbn_axi__DOT__b_valid = 1U;
                vlSelf->tb_otbn_axi__DOT__b_resp = 
                    ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_err_q)
                      ? 2U : 0U);
                vlSelf->tb_otbn_axi__DOT__b_id = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_id_q;
            }
            if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q)))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dw_ready = 1U;
            }
        } else if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__dw_ready = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_axi_bridge__DOT__wr_state_q)))) {
                vlSelf->tb_otbn_axi__DOT__aw_ready = 1U;
            }
        }
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_error) 
                   | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                         [2U][4U] >> 8U));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                   [2U][4U]);
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_error) 
                     | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((IData)(((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[3U] 
                             >> 2U) & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                            [2U][0U]))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xfeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (1U & VL_REDXOR_32(((0x1fffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                 ^ (0xb9000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xfdU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0xffe0003fU 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0x5e00000fU 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xfbU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x3e007c1U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0x67003ff0U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 2U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xf7U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x3c207842U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0xcd0fc0f0U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 3U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xefU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0xc4438884U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0xb671c711U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 4U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xdfU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x488c9108U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0xb5b65926U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 5U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xbfU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x91152210U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0xcbdaaa4aU 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 6U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0x7fU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x221a4420U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0x7aed348dU 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 7U)));
    __Vtemp_44[1U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U];
    __Vtemp_44[2U] = (0xaaU ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U] 
        = __Vtemp_44[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = __Vtemp_44[2U];
    if ((0x10U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req = 1U;
                    }
                    if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
                    }
                } else {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
                }
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_q) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req = 1U;
                        } else if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_q) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
            } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
                }
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
            }
        }
    } else if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
        } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
        } else if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__otbn_scramble_state_error = 1U;
    }
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_ack 
                = (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack)));
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_ack 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack;
    }
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack 
                = (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack)));
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack;
    }
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
                = (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req)));
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req;
    }
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
                = (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req)));
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
             & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
             [3U][0U])) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        } else if ((1U & ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
                           [3U][4U] >> 0x10U) & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 1U;
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_source 
                = (0xffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
                   [3U][4U]);
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
                         [3U][4U] >> 0xdU));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_size 
                = (3U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
                         [3U][4U] >> 8U));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_instr_type 
                = (0xfU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_o
                           [3U][0U] >> 0x10U));
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__addr_collision_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__addr_collision_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__rvalid_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__read_en;
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_gnt) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_d;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_d;
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_gnt) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_d;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_d;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__read_en;
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__write_en_b) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_access_core)
                    ? 0ULL : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wdata_bus_secded);
        }
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_en) {
            if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_sel_otp) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U] = 0U;
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U] = 0U;
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U] = 0U;
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U] = 0U;
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U] 
                    = (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_1);
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U] 
                    = (IData)((vlSelf->__VdfgRegularize_hd87f99a1_4_1 
                               >> 0x20U));
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U] 
                    = (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_0);
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U] 
                    = (IData)((vlSelf->__VdfgRegularize_hd87f99a1_4_0 
                               >> 0x20U));
            }
        }
        if ((((~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q) 
                  | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_access_core))) 
              & (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_req_bus) 
                  & (0xffU == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                               [0U][2U] >> 0x18U))) 
                 | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_req_bus) 
                    & (0xffU == (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                 [1U][2U] >> 0x18U))))) 
             | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__load_checksum_we))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_q 
                = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__load_checksum_we)
                    ? (~ ((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                           [2U][1U] << 8U) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d
                                              [2U][0U] 
                                              >> 0x18U)))
                    : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_stages
                   [6U]);
        }
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__write_en_b) {
            if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[0U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[0U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[1U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[1U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[2U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[2U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[3U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[3U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[4U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[4U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[5U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[5U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[6U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[6U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[7U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[7U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[8U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[8U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[9U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_core[9U];
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[0U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[0U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[1U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[1U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[2U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[2U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[3U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[3U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[4U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[4U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[5U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[5U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[6U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[6U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[7U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[7U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[8U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[8U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[9U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wmask_bus_enc[9U];
            }
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[0U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[0U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[0U]
                           : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))
                       : (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o)));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[1U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[1U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[1U]
                           : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                               << 7U) | (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                 >> 0x20U))))
                       : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
                           << 7U) | (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__0__KET____DOT__u_dmem_bus_enc__data_o 
                                             >> 0x20U)))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[2U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[2U]
                           : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                               << 0xeU) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                            >> 0x19U) 
                                           | ((IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                       >> 0x20U)) 
                                              << 7U))))
                       : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
                           << 0xeU) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o) 
                                        >> 0x19U) | 
                                       ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__1__KET____DOT__u_dmem_bus_enc__data_o 
                                                 >> 0x20U)) 
                                        << 7U)))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[3U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[3U]
                           : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                               << 0x15U) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                              >> 0x12U) 
                                             | ((IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                         >> 0x20U)) 
                                                << 0xeU)) 
                                            | ((IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                        >> 0x20U)) 
                                               >> 0x19U))))
                       : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
                           << 0x15U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o) 
                                         >> 0x12U) 
                                        | ((IData)(
                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__2__KET____DOT__u_dmem_bus_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xeU)))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[4U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[4U]
                           : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                               << 0x1cU) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                              >> 0xbU) 
                                             | ((IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                         >> 0x20U)) 
                                                << 0x15U)) 
                                            | ((IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                        >> 0x20U)) 
                                               >> 0x12U))))
                       : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
                           << 0x1cU) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o) 
                                         >> 0xbU) | 
                                        ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__3__KET____DOT__u_dmem_bus_enc__data_o 
                                                  >> 0x20U)) 
                                         << 0x15U)))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[5U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[5U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[5U]
                           : ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                >> 4U) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                   >> 0x20U)) 
                                          << 0x1cU)) 
                              | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                          >> 0x20U)) 
                                 >> 0xbU))) : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o) 
                                                >> 4U) 
                                               | ((IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
                                                           >> 0x20U)) 
                                                  << 0x1cU))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[6U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[6U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[6U]
                           : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                               << 3U) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                  >> 0x20U)) 
                                         >> 4U))) : 
                      (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
                        << 3U) | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__4__KET____DOT__u_dmem_bus_enc__data_o 
                                           >> 0x20U)) 
                                  >> 4U))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[7U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[7U]
                           : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                               << 0xaU) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                            >> 0x1dU) 
                                           | ((IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                       >> 0x20U)) 
                                              << 3U))))
                       : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
                           << 0xaU) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o) 
                                        >> 0x1dU) | 
                                       ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__5__KET____DOT__u_dmem_bus_enc__data_o 
                                                 >> 0x20U)) 
                                        << 3U)))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[8U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[8U]
                           : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                               << 0x11U) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                              >> 0x16U) 
                                             | ((IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                         >> 0x20U)) 
                                                << 0xaU)) 
                                            | ((IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                        >> 0x20U)) 
                                               >> 0x1dU))))
                       : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
                           << 0x11U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o) 
                                         >> 0x16U) 
                                        | ((IData)(
                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__6__KET____DOT__u_dmem_bus_enc__data_o 
                                                    >> 0x20U)) 
                                           << 0xaU)))));
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[9U] 
                = (Vtb_otbn_axi__ConstPool__CONST_h3b9d891d_0[9U] 
                   & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q)
                       ? ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                           ? vlSymsp->TOP__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[9U]
                           : ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                >> 0xfU) | ((IData)(
                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                     >> 0x20U)) 
                                            << 0x11U)) 
                              | ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                          >> 0x20U)) 
                                 >> 0x16U))) : (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o) 
                                                 >> 0xfU) 
                                                | ((IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT____Vcellout__g_dmem_bus_ecc_enc__BRA__7__KET____DOT__u_dmem_bus_enc__data_o 
                                                            >> 0x20U)) 
                                                   << 0x11U))));
        }
        if ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q)) 
             | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__intg_error_q = 1U;
        }
        if ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q)) 
             | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__intg_error_q = 1U;
        }
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_en) {
            if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_sel_otp) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U] = 0U;
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U] = 0U;
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U] = 0U;
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U] = 0U;
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_sec_wipe_urnd_key[0U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_sec_wipe_urnd_key[1U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_sec_wipe_urnd_key[2U];
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U] 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_sec_wipe_urnd_key[3U];
            }
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__status_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__status_d;
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__wr_en) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_enable__q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__wr_data;
        }
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_intr_state__DOT__wr_en) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_state__q 
                = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__cnt_after_commit_o;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__cnt_after_commit_o;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__cnt_after_commit_o;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__cnt_after_commit_o;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__cnt_after_commit_o;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__cnt_after_commit_o;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__cnt_after_commit_o;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__cnt_after_commit_o;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_d;
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_source = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_opcode = 4U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_size = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_instr_type = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__addr_collision_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__rvalid_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q = 0ULL;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q = 0ULL;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q = 9U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q = 0ULL;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U] = 0xcc113298U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U] = 0x12286bb3U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U] = 0xe3040d5eU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U] = 0x14e8cecaU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_q = 0xffffffffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[0U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[1U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[2U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[3U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[4U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[5U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[6U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[7U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[7U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[8U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[8U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wmask_q[9U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[9U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[0U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[1U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[5U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[6U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[7U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[8U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[9U] 
            = Vtb_otbn_axi__ConstPool__CONST_hc1613866_0[9U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__intg_error_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__intg_error_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U] = 0xcc113298U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U] = 0x12286bb3U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U] = 0xe3040d5eU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U] = 0x14e8cecaU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__status_q = 4U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_enable__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_state__q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0xffffffffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0xffffffffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0xffffffffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0xffffffffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0xffffffffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0xffffffffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0xffffffffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0xffffffffU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0xfU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0xfU;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o = 0ULL;
    }
    VL_ASSIGNSEL_WQ(99,64,0x11U, vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, 
                    (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_strict__460__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_instr_type;
                    vlSelf->__Vfunc_mubi4_test_true_strict__460__Vfuncout 
                        = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__460__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__460__Vfuncout))
                      ? 0ULL : 0xffffffffffffffffULL));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
        = (2U | ((0xfffe0000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U]) 
                 | (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
        = ((0x1ffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U]) 
           | (0xfffe0000U & ((((4U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U) << 0x1fU) 
                             | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                 << 0x1aU) | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                              << 0x12U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[3U] 
        = (7U & ((0x1fffcU & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending) 
                              << 2U)) | (0x1ffffU & 
                                         ((((4U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_opcode))
                                             ? 1U : 0U) 
                                           >> 1U) | 
                                          (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_size) 
                                            >> 6U) 
                                           | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_source) 
                                              >> 0xeU))))));
    __Vfunc_mubi4_test_true_loose__270__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__addr_collision_q;
    __Vfunc_mubi4_test_true_loose__270__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__270__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__dmem_wr_collision 
        = __Vfunc_mubi4_test_true_loose__270__Vfuncout;
    __Vfunc_mubi4_test_true_loose__291__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_test_true_loose__291__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__291__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_o 
        = __Vfunc_mubi4_test_true_loose__291__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__358__state_in 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q;
    __Vfunc_prince_nibble_red16__359__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__358__state_in));
    __Vfunc_prince_nibble_red16__359__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__359__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__359__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__359__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__359__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__359__Vfuncout)));
    __Vfunc_prince_nibble_red16__360__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__358__state_in));
    __Vfunc_prince_nibble_red16__360__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__360__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__360__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__360__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__360__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__360__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__361__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__358__state_in));
    __Vfunc_prince_nibble_red16__361__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__361__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__361__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__361__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__361__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__361__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__362__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__358__state_in));
    __Vfunc_prince_nibble_red16__362__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__362__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__362__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__362__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__362__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__362__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__363__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__363__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__363__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__363__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__363__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__363__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__363__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__364__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__364__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__364__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__364__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__364__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__364__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__364__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__365__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__365__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__365__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__365__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__365__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__365__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__365__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__366__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__366__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__366__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__366__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__366__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__366__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__366__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__367__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__367__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__367__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__367__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__367__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__367__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__367__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__368__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__368__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__368__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__368__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__368__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__368__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__368__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__369__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__369__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__369__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__369__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__369__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__369__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__369__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__370__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__370__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__370__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__370__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__370__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__370__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__370__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__371__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__371__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__371__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__371__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__371__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__371__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__371__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__372__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__372__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__372__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__372__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__372__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__372__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__372__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__373__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__373__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__373__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__373__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__373__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__373__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__373__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__374__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__358__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__374__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__374__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__374__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__374__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__374__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__374__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__358__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__358__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_prince_mult_prime_64bit__358__Vfuncout;
    __Vfunc_sbox4_64bit__375__state_in = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle;
    __Vfunc_sbox4_8bit__376__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__375__state_in));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__376__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__376__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__376__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__376__state_out;
    vlSelf->__Vfunc_sbox4_64bit__375__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__375__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__376__Vfuncout)));
    __Vfunc_sbox4_8bit__376__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__375__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__376__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__376__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__376__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__376__state_out;
    vlSelf->__Vfunc_sbox4_64bit__375__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__375__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__376__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__376__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__375__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__376__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__376__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__376__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__376__state_out;
    vlSelf->__Vfunc_sbox4_64bit__375__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__375__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__376__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__376__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__375__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__376__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__376__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__376__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__376__state_out;
    vlSelf->__Vfunc_sbox4_64bit__375__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__375__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__376__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__376__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__375__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__376__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__376__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__376__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__376__state_out;
    vlSelf->__Vfunc_sbox4_64bit__375__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__375__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__376__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__376__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__375__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__376__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__376__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__376__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__376__state_out;
    vlSelf->__Vfunc_sbox4_64bit__375__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__375__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__376__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__376__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__375__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__376__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__376__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__376__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__376__state_out;
    vlSelf->__Vfunc_sbox4_64bit__375__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__375__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__376__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__376__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__375__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__376__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__376__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__376__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__376__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__376__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__376__state_out;
    vlSelf->__Vfunc_sbox4_64bit__375__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__375__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__376__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__375__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__375__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_sbox4_64bit__375__Vfuncout;
    __Vfunc_mubi4_test_true_loose__96__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
    __Vfunc_mubi4_test_true_loose__96__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__96__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_o 
        = __Vfunc_mubi4_test_true_loose__96__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__163__state_in 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q;
    __Vfunc_prince_nibble_red16__164__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__163__state_in));
    __Vfunc_prince_nibble_red16__164__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__164__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__164__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__164__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__164__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xfffffffffffffff0ULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__164__Vfuncout)));
    __Vfunc_prince_nibble_red16__165__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__163__state_in));
    __Vfunc_prince_nibble_red16__165__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__165__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__165__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__165__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__165__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xffffffffffffff0fULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__165__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__166__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__163__state_in));
    __Vfunc_prince_nibble_red16__166__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__166__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__166__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__166__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__166__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xfffffffffffff0ffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__166__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__167__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__163__state_in));
    __Vfunc_prince_nibble_red16__167__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__167__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__167__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__167__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__167__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xffffffffffff0fffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__167__Vfuncout)) 
              << 0xcU));
    __Vfunc_prince_nibble_red16__168__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__168__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__168__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__168__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__168__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__168__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xfffffffffff0ffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__168__Vfuncout)) 
              << 0x10U));
    __Vfunc_prince_nibble_red16__169__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__169__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__169__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__169__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__169__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__169__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xffffffffff0fffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__169__Vfuncout)) 
              << 0x14U));
    __Vfunc_prince_nibble_red16__170__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__170__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__170__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__170__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__170__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__170__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xfffffffff0ffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__170__Vfuncout)) 
              << 0x18U));
    __Vfunc_prince_nibble_red16__171__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__171__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__171__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__171__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__171__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__171__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xffffffff0fffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__171__Vfuncout)) 
              << 0x1cU));
    __Vfunc_prince_nibble_red16__172__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__172__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__172__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__172__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__172__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__172__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xfffffff0ffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__172__Vfuncout)) 
              << 0x20U));
    __Vfunc_prince_nibble_red16__173__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__173__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__173__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__173__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__173__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__173__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xffffff0fffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__173__Vfuncout)) 
              << 0x24U));
    __Vfunc_prince_nibble_red16__174__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__174__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__174__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__174__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__174__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__174__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xfffff0ffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__174__Vfuncout)) 
              << 0x28U));
    __Vfunc_prince_nibble_red16__175__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__175__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__175__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__175__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__175__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__175__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xffff0fffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__175__Vfuncout)) 
              << 0x2cU));
    __Vfunc_prince_nibble_red16__176__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__176__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__176__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__176__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__176__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__176__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xfff0ffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__176__Vfuncout)) 
              << 0x30U));
    __Vfunc_prince_nibble_red16__177__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__177__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__177__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__177__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__177__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__177__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xff0fffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__177__Vfuncout)) 
              << 0x34U));
    __Vfunc_prince_nibble_red16__178__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__178__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__178__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__178__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__178__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__178__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xf0ffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__178__Vfuncout)) 
              << 0x38U));
    __Vfunc_prince_nibble_red16__179__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__163__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__179__Vfuncout = (0xfU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__179__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__179__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__179__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__179__vect) 
                                                      >> 0xcU)));
    vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__179__Vfuncout)) 
              << 0x3cU));
    __Vfunc_prince_mult_prime_64bit__163__Vfuncout 
        = vlSelf->__Vfunc_prince_mult_prime_64bit__163__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_prince_mult_prime_64bit__163__Vfuncout;
    __Vfunc_sbox4_64bit__180__state_in = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle;
    __Vfunc_sbox4_8bit__181__state_in = (0xffU & (IData)(__Vfunc_sbox4_64bit__180__state_in));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__181__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__181__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__181__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__181__state_out;
    vlSelf->__Vfunc_sbox4_64bit__180__state_out = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__180__state_out) 
                                                   | (IData)((IData)(__Vfunc_sbox4_8bit__181__Vfuncout)));
    __Vfunc_sbox4_8bit__181__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__180__state_in 
                                                          >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__181__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__181__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__181__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__181__state_out;
    vlSelf->__Vfunc_sbox4_64bit__180__state_out = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__180__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__181__Vfuncout)) 
                                                      << 8U));
    __Vfunc_sbox4_8bit__181__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__180__state_in 
                                                          >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__181__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__181__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__181__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__181__state_out;
    vlSelf->__Vfunc_sbox4_64bit__180__state_out = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__180__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__181__Vfuncout)) 
                                                      << 0x10U));
    __Vfunc_sbox4_8bit__181__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__180__state_in 
                                                          >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__181__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__181__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__181__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__181__state_out;
    vlSelf->__Vfunc_sbox4_64bit__180__state_out = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__180__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__181__Vfuncout)) 
                                                      << 0x18U));
    __Vfunc_sbox4_8bit__181__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__180__state_in 
                                                          >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__181__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__181__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__181__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__181__state_out;
    vlSelf->__Vfunc_sbox4_64bit__180__state_out = (
                                                   (0xffffff00ffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__180__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__181__Vfuncout)) 
                                                      << 0x20U));
    __Vfunc_sbox4_8bit__181__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__180__state_in 
                                                          >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__181__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__181__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__181__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__181__state_out;
    vlSelf->__Vfunc_sbox4_64bit__180__state_out = (
                                                   (0xffff00ffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__180__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__181__Vfuncout)) 
                                                      << 0x28U));
    __Vfunc_sbox4_8bit__181__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__180__state_in 
                                                          >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__181__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__181__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__181__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__181__state_out;
    vlSelf->__Vfunc_sbox4_64bit__180__state_out = (
                                                   (0xff00ffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__180__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__181__Vfuncout)) 
                                                      << 0x30U));
    __Vfunc_sbox4_8bit__181__state_in = (0xffU & (IData)(
                                                         (__Vfunc_sbox4_64bit__180__state_in 
                                                          >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xf0U 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (0x1ce5046a98df237bULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & (IData)(__Vfunc_sbox4_8bit__181__state_in)), 2U))))));
    vlSelf->__Vfunc_sbox4_8bit__181__state_out = ((0xfU 
                                                   & (IData)(vlSelf->__Vfunc_sbox4_8bit__181__state_out)) 
                                                  | (0xf0U 
                                                     & ((IData)(
                                                                (0x1ce5046a98df237bULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, 
                                                                                (0xfU 
                                                                                & ((IData)(__Vfunc_sbox4_8bit__181__state_in) 
                                                                                >> 4U)), 2U)))) 
                                                        << 4U)));
    __Vfunc_sbox4_8bit__181__Vfuncout = vlSelf->__Vfunc_sbox4_8bit__181__state_out;
    vlSelf->__Vfunc_sbox4_64bit__180__state_out = (
                                                   (0xffffffffffffffULL 
                                                    & vlSelf->__Vfunc_sbox4_64bit__180__state_out) 
                                                   | ((QData)((IData)(__Vfunc_sbox4_8bit__181__Vfuncout)) 
                                                      << 0x38U));
    __Vfunc_sbox4_64bit__180__Vfuncout = vlSelf->__Vfunc_sbox4_64bit__180__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
        = __Vfunc_sbox4_64bit__180__Vfuncout;
    __Vfunc_mubi4_test_true_loose__75__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
    __Vfunc_mubi4_test_true_loose__75__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__75__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__imem_wr_collision 
        = __Vfunc_mubi4_test_true_loose__75__Vfuncout;
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    if (((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__intg_error_r_q)) 
         & ([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__rvalid_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__78__Vfuncout)))) {
        if (([&]() {
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__val 
                        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__addr_collision_q;
                    vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout 
                        = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__val));
                }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__79__Vfuncout))) {
        }
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__start_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__start_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
        = (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U])));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d 
        = (((QData)((IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))) 
            << 0x3fU) | ((0x7ffffffffffffffeULL & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
                                                   >> 1U)) 
                         | (QData)((IData)((1U & VL_REDXOR_64(
                                                              (0x8000000000000002ULL 
                                                               & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_stages[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__busy_execute_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                                ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                                ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                                ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                                ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                                ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q 
        = ((IData)(vlSelf->rst_ni) && (1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                                ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
        = (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U])));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d 
        = (((QData)((IData)((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))) 
            << 0x3fU) | ((0x7ffffffffffffffeULL & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
                                                   >> 1U)) 
                         | (QData)((IData)((1U & VL_REDXOR_64(
                                                              (0x8000000000000002ULL 
                                                               & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0)))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[0U] 
        = ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
            [0U]) | (1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i
                     [0U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[0U] 
        = ((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
            [0U]) | (2U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i
                           [1U] << 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[1U] 
        = ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
            [1U]) | (1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i
                           [0U] >> 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[1U] 
        = ((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
            [1U]) | (2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i
                     [1U]));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[2U] 
        = ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
            [2U]) | (1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i
                           [0U] >> 2U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[2U] 
        = ((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
            [2U]) | (2U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i
                           [1U] >> 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[3U] 
        = ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
            [3U]) | (1U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i
                           [0U] >> 3U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[3U] 
        = ((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
            [3U]) | (2U & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i
                           [1U] >> 2U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__word_req 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__edn_rnd_ack)) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_complete 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__edn_rnd_ack) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_urnd_ack_q) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_rnd_ack_q) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__load_data 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_ack) 
           & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q)) 
              & (8U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_en = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_q;
    if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_en = 1U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_d = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw;
    if ((0x10U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
                        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_en = 1U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_d = 1U;
                        }
                    }
                    if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
                    } else if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 0x13U;
                    }
                } else {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
                }
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
            }
        } else if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_q) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 0x1eU;
                } else if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_q) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 8U;
                }
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
            }
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        }
    } else if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 0x13U;
        }
    } else if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        } else if ((1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__state_d = 5U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_req 
        = ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__urnd_reseed_ack)) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_urnd_req_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__xoshiro_seed_en 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__urnd_reseed_ack) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_urnd_req_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__spurious_urnd_ack_error = 0U;
    if (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__urnd_reseed_ack) 
         & (~ ((0x53U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)) 
               | (6U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)))))) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__spurious_urnd_ack_error = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_d[7U];
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U] 
            = Vtb_otbn_axi__ConstPool__CONST_h954211c2_0[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U] 
            = Vtb_otbn_axi__ConstPool__CONST_h954211c2_0[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U] 
            = Vtb_otbn_axi__ConstPool__CONST_h954211c2_0[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U] 
            = Vtb_otbn_axi__ConstPool__CONST_h954211c2_0[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U] 
            = Vtb_otbn_axi__ConstPool__CONST_h954211c2_0[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U] 
            = Vtb_otbn_axi__ConstPool__CONST_h954211c2_0[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U] 
            = Vtb_otbn_axi__ConstPool__CONST_h954211c2_0[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U] 
            = Vtb_otbn_axi__ConstPool__CONST_h954211c2_0[7U];
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__controller_start 
        = (((6U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw)) 
            & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__urnd_reseed_ack)) 
           & ([&]() {
                vlSelf->__Vfunc_mubi4_test_false_strict__482__val 
                    = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int;
                vlSelf->__Vfunc_mubi4_test_false_strict__482__Vfuncout 
                    = (9U == (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__482__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_false_strict__482__Vfuncout)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req));
    __Vfunc_mubi4_test_true_strict__475__val = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__mubi_rma_req;
    __Vfunc_mubi4_test_true_strict__475__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__475__val));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request 
        = __Vfunc_mubi4_test_true_strict__475__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error_d 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__insn_fetch_err 
        = ((0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_intg_error_vec)) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__comparison_operator_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 1U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum = 0xbU;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_bignum = 1U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu 
        = (0x7fU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_flag_en_bignum = 0U;
    if ((0x40U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 5U;
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_bignum = 0U;
                                if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                   >> 0xeU)))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                       >> 0xdU)))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0xcU)))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 1U;
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum = 6U;
                                        } else {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 0U;
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum = 7U;
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum = 1U;
                                        }
                                    } else if ((1U 
                                                & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0xcU)))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 0U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum = 0xaU;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum = 1U;
                                    } else {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 0U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum = 8U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum = 1U;
                                    }
                                } else if ((1U & (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0xdU)))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                       >> 0xcU)))) {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 1U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum = 6U;
                                    } else {
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 0U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum = 9U;
                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 0U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 0U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 2U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 1U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 0U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 4U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 0U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 1U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 0U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 2U;
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 1U;
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 0U;
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 2U;
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__comparison_operator_base 
                        = (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                         >> 0xcU)));
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
        if ((0x10U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
            if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                            if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT____VdfgExtracted_h698f7617__0) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_flag_en_bignum = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 1U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 1U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 3U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 0U;
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 0U;
                    if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                          >> 0x1aU))))) {
                        if (((((((((0U == ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                            >> 0xcU))))) 
                                   | (0x100U == ((0x3f8U 
                                                  & ((IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                              >> 0x19U)) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                               >> 0xcU)))))) 
                                  | (4U == ((0x3f8U 
                                             & ((IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                         >> 0x19U)) 
                                                << 3U)) 
                                            | (7U & (IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                             >> 0xcU)))))) 
                                 | (6U == ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                            >> 0xcU)))))) 
                                | (7U == ((0x3f8U & 
                                           ((IData)(
                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                     >> 0x19U)) 
                                            << 3U)) 
                                          | (7U & (IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0xcU)))))) 
                               | (1U == ((0x3f8U & 
                                          ((IData)(
                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                    >> 0x19U)) 
                                           << 3U)) 
                                         | (7U & (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0xcU)))))) 
                              | (5U == ((0x3f8U & ((IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                        | (7U & (IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                         >> 0xcU)))))) 
                             | (0x105U == ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                            >> 0xcU))))))) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base 
                                = ((0U == ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                            >> 0xcU)))))
                                    ? 0U : ((0x100U 
                                             == ((0x3f8U 
                                                  & ((IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                              >> 0x19U)) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                               >> 0xcU)))))
                                             ? 1U : 
                                            ((4U == 
                                              ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                             >> 0xcU)))))
                                              ? 2U : 
                                             ((6U == 
                                               ((0x3f8U 
                                                 & ((IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                             >> 0x19U)) 
                                                    << 3U)) 
                                                | (7U 
                                                   & (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                              >> 0xcU)))))
                                               ? 3U
                                               : ((7U 
                                                   == 
                                                   ((0x3f8U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                 >> 0x19U)) 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (IData)(
                                                                 (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                  >> 0xcU)))))
                                                   ? 4U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & ((IData)(
                                                                 (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                  >> 0x19U)) 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (IData)(
                                                                  (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                   >> 0xcU)))))
                                                    ? 8U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     ((0x3f8U 
                                                       & ((IData)(
                                                                  (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                   >> 0x19U)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & (IData)(
                                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                    >> 0xcU)))))
                                                     ? 7U
                                                     : 6U)))))));
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum = 1U;
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                           >> 0xeU)))) {
                            if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                  >> 0xdU))))) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum 
                                    = ((1U & (IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                      >> 0xcU)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0x1eU)))
                                            ? 5U : 2U)
                                        : ((1U & (IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0x1eU)))
                                            ? 3U : 0U));
                            }
                        } else {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum 
                                = ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                      >> 0xcU)))
                                        ? 4U : 1U) : 
                                   ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                   >> 0xcU)))
                                     ? 3U : 0U));
                        }
                        if ((4U != (7U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                  >> 0xcU))))) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_bignum = 0U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 0U;
                        } else {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_bignum = 1U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 2U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu) 
                             >> 2U)))) {
            if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 0U;
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 1U;
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 0U;
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 1U;
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 0U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 1U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 0U;
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                           >> 0xeU)))) {
                            if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                               >> 0xdU)))) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base 
                                    = ((1U & (IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                      >> 0xcU)))
                                        ? 4U : 3U);
                            } else if ((1U & (IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                      >> 0xcU)))) {
                                if ((0U == (0x1fU & (IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                             >> 0x1bU))))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 7U;
                                } else if ((8U == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                              >> 0x1bU))))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 6U;
                                }
                            } else {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 2U;
                            }
                        } else if ((1U & (~ (IData)(
                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                     >> 0xdU))))) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base 
                                = ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                  >> 0xcU)))
                                    ? 8U : 0U);
                        }
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                    if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                              >> 0xdU))))) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 0U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 1U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 0U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 6U;
                        }
                    } else if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                              >> 0xdU)))) {
                        if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                           >> 0xcU)))) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum = 4U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_bignum = 0U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 0U;
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum = 1U;
                        }
                    } else if ((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                              >> 0xcU)))) {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum = 3U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_bignum = 0U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum = 0U;
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu))) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base = 0U;
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base = 1U;
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base = 0U;
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base = 0U;
            }
        }
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (IData)((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                    << 0x11U) | (QData)((IData)((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[1U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                     << 0x11U) | (QData)((IData)((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))) 
                   >> 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[2U] 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
            << 0x1fU) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q) 
                          << 0x1aU) | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q) 
                                       << 0x12U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[3U] 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 2U) | ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                      >> 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = ((0xfffe0003U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[0U]) 
           | (0x3fcU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
                        << 2U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U] 
        = (IData)((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                    << 0x2fU) | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                  << 0xfU) | ((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                              >> 0x11U))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])) 
                     << 0x2fU) | (((QData)((IData)(
                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U])) 
                                   << 0xfU) | ((QData)((IData)(
                                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])) 
                                               >> 0x11U))) 
                   >> 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xfeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (1U & VL_REDXOR_32(((0x1fffffU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                 ^ (0xb9000000U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xfdU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0xffe0003fU 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0x5e00000fU 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 1U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xfbU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x3e007c1U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0x67003ff0U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 2U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xf7U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x3c207842U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0xcd0fc0f0U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 3U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xefU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0xc4438884U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0xb671c711U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 4U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xdfU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x488c9108U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0xb5b65926U 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 5U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0xbfU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x91152210U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0xcbdaaa4aU 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 6U)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = ((0x7fU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]) 
           | (0xffU & ((1U & VL_REDXOR_32(((0x221a4420U 
                                            & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U]) 
                                           ^ (0x7aed348dU 
                                              & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U])))) 
                       << 7U)));
    __Vtemp_75[1U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U];
    __Vtemp_75[2U] = (0xaaU ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[1U] 
        = __Vtemp_75[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
        = __Vtemp_75[2U];
    __Vfunc_extract_d2h_rsp_intg__461__tl[0U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U];
    __Vfunc_extract_d2h_rsp_intg__461__tl[1U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U];
    __Vfunc_extract_d2h_rsp_intg__461__tl[2U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U];
    __Vfunc_extract_d2h_rsp_intg__461__tl[3U] = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[3U];
    __Vfunc_extract_d2h_rsp_intg__461__payload = ((0x38U 
                                                   & ((__Vfunc_extract_d2h_rsp_intg__461__tl[3U] 
                                                       << 4U) 
                                                      | (8U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__461__tl[2U] 
                                                            >> 0x1cU)))) 
                                                  | ((6U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__461__tl[2U] 
                                                         >> 0x19U)) 
                                                     | (1U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__461__tl[0U] 
                                                           >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__461__Vfuncout = __Vfunc_extract_d2h_rsp_intg__461__payload;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__461__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[0U] 
        = (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[1U] 
        = (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
                   >> 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[0U] 
        = (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[1U] 
        = (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle 
                   >> 0x20U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq = 1U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq = 0U;
    __Vtableidx6 = (((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                       ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq)) 
                      & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                         ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq))) 
                     << 6U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                                << 5U) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                                            ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
        = Vtb_otbn_axi__ConstPool__TABLE_ha517081a_0
        [__Vtableidx6];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
        = Vtb_otbn_axi__ConstPool__TABLE_hbc83e87b_0
        [__Vtableidx6];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d 
        = Vtb_otbn_axi__ConstPool__TABLE_h33dc89c4_0
        [__Vtableidx6];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o 
        = Vtb_otbn_axi__ConstPool__TABLE_he8163ee1_0
        [__Vtableidx6];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o 
        = Vtb_otbn_axi__ConstPool__TABLE_h3c180f46_0
        [__Vtableidx6];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint 
        = Vtb_otbn_axi__ConstPool__TABLE_h509e0b9b_0
        [__Vtableidx6];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq = 1U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq = 0U;
    __Vtableidx3 = (((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                       ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq)) 
                      & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                         ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq))) 
                     << 6U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                                << 5U) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                                            ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
        = Vtb_otbn_axi__ConstPool__TABLE_ha517081a_0
        [__Vtableidx3];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
        = Vtb_otbn_axi__ConstPool__TABLE_hbc83e87b_0
        [__Vtableidx3];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d 
        = Vtb_otbn_axi__ConstPool__TABLE_h33dc89c4_0
        [__Vtableidx3];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o 
        = Vtb_otbn_axi__ConstPool__TABLE_he8163ee1_0
        [__Vtableidx3];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o 
        = Vtb_otbn_axi__ConstPool__TABLE_h3c180f46_0
        [__Vtableidx3];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint 
        = Vtb_otbn_axi__ConstPool__TABLE_h509e0b9b_0
        [__Vtableidx3];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_d 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__urnd_reseed_ack) 
            | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q))
            ? 0U : (0xfU & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q) 
                            + (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__load_data))));
    VL_SHIFTL_WWI(256,256,32, __Vtemp_77, Vtb_otbn_axi__ConstPool__CONST_h6605bd80_0, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q), 5U));
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[0U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[1U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[2U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[3U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[4U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[5U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[6U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[7U] 
            = Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[7U];
    } else if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__load_data) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[0U] 
            = (__Vtemp_77[0U] | ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                  ? Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[0U]
                                  : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U]));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[1U] 
            = (__Vtemp_77[1U] | ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                  ? Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[1U]
                                  : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U]));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[2U] 
            = (__Vtemp_77[2U] | ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                  ? Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[2U]
                                  : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U]));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[3U] 
            = (__Vtemp_77[3U] | ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                  ? Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[3U]
                                  : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U]));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[4U] 
            = (__Vtemp_77[4U] | ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                  ? Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[4U]
                                  : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U]));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[5U] 
            = (__Vtemp_77[5U] | ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                  ? Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[5U]
                                  : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U]));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[6U] 
            = (__Vtemp_77[6U] | ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                  ? Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[6U]
                                  : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U]));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[7U] 
            = (__Vtemp_77[7U] | ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                  ? Vtb_otbn_axi__ConstPool__CONST_h9e67c271_0[7U]
                                  : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U]));
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[0U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[1U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[2U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[3U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[4U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[5U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[6U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U];
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_d[7U] 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U];
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (1U 
                                                  & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                                     >> 1U)));
    __Vtableidx7 = (((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                       ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq)) 
                      & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                         ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq))) 
                     << 6U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                                << 5U) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                                            ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
        = Vtb_otbn_axi__ConstPool__TABLE_ha517081a_0
        [__Vtableidx7];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
        = Vtb_otbn_axi__ConstPool__TABLE_hbc83e87b_0
        [__Vtableidx7];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d 
        = Vtb_otbn_axi__ConstPool__TABLE_h33dc89c4_0
        [__Vtableidx7];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o 
        = Vtb_otbn_axi__ConstPool__TABLE_he8163ee1_0
        [__Vtableidx7];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o 
        = Vtb_otbn_axi__ConstPool__TABLE_h3c180f46_0
        [__Vtableidx7];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint 
        = Vtb_otbn_axi__ConstPool__TABLE_h509e0b9b_0
        [__Vtableidx7];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (1U 
                                                  & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                                     >> 1U)));
    __Vtableidx4 = (((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                       ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq)) 
                      & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                         ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq))) 
                     << 6U) | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                                << 5U) | ((((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                                            ^ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
        = Vtb_otbn_axi__ConstPool__TABLE_ha517081a_0
        [__Vtableidx4];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
        = Vtb_otbn_axi__ConstPool__TABLE_hbc83e87b_0
        [__Vtableidx4];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d 
        = Vtb_otbn_axi__ConstPool__TABLE_h33dc89c4_0
        [__Vtableidx4];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o 
        = Vtb_otbn_axi__ConstPool__TABLE_he8163ee1_0
        [__Vtableidx4];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o 
        = Vtb_otbn_axi__ConstPool__TABLE_h3c180f46_0
        [__Vtableidx4];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint 
        = Vtb_otbn_axi__ConstPool__TABLE_h509e0b9b_0
        [__Vtableidx4];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq 
        = ((IData)(vlSelf->rst_ni) && (1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o)));
    if (vlSelf->rst_ni) {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_nd) 
                << 1U) | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_pd));
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o 
            = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd) 
                << 1U) | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd));
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o = 2U;
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o = 2U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[7U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[6U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[5U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__init_sec_wipe_done_d 
        = (1U & ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                 | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__init_sec_wipe_done_q)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_ack) 
           & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_req));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__fips_d 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__xoshiro_seed_en) 
           | ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_ack)) 
              & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__fips_q)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__urnd_reseed_err 
        = ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__spurious_urnd_ack_error) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__urnd_reseed_err_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_data_ignore_d 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__controller_start) 
            & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_q)) 
           | ((~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_complete)) 
              & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_data_ignore_q)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel 
        = ((0x10U & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                              >> 8U)) << 4U)) | ((8U 
                                                  & ((IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 6U)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                 >> 4U)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((IData)(
                                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                    >> 2U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel 
        = ((0x10U & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                              >> 9U)) << 4U)) | ((8U 
                                                  & ((IData)(
                                                             (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                              >> 7U)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((IData)(
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                 >> 5U)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((IData)(
                                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                    >> 3U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                     >> 1U)))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__out_mux_bits 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
           [0U] & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                           >> 0xeU)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__alu_base_operation[2U] 
        = (0xfU & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_shift_amt_bignum 
        = ((0U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum))
            ? (0xf8U & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                 >> 0x19U)) << 3U))
            : ((1U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum))
                ? ((0xfeU & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                      >> 0x19U)) << 1U)) 
                   | (1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                    >> 0xeU)))) : (
                                                   (2U 
                                                    == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum))
                                                    ? 0U
                                                    : 
                                                   (0xf8U 
                                                    & ((IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                >> 0x19U)) 
                                                       << 3U)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
        = ((4U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base))
            ? ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base))
                ? ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base))
                    ? vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_i_type_base
                    : (((- (IData)((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                  >> 0xbU))))) 
                        << 0xfU) | ((0x7000U & ((IData)(
                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                         >> 9U)) 
                                                << 0xcU)) 
                                    | (0xfe0U & ((IData)(
                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0x19U)) 
                                                 << 5U)))))
                : ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base))
                    ? ((0x3e0U & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                           >> 0xfU)) 
                                  << 5U)) | (0x1fU 
                                             & (IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                        >> 7U))))
                    : (((- (IData)((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                  >> 0x1fU))))) 
                        << 0x14U) | ((0xff000U & ((IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0xcU)) 
                                                  << 0xcU)) 
                                     | ((0x800U & ((IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                            >> 0x14U)) 
                                                   << 0xbU)) 
                                        | (0x7feU & 
                                           ((IData)(
                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                     >> 0x15U)) 
                                            << 1U)))))))
            : ((2U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base))
                ? ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base))
                    ? ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                >> 0xcU)) << 0xcU) : 
                   (((- (IData)((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                               >> 0x1fU))))) 
                     << 0xdU) | ((0x1000U & ((IData)(
                                                     (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                      >> 0x1fU)) 
                                             << 0xcU)) 
                                 | ((0x800U & ((IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                        >> 7U)) 
                                               << 0xbU)) 
                                    | ((0x7e0U & ((IData)(
                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                       | (0x1eU & ((IData)(
                                                           (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                            >> 8U)) 
                                                   << 1U)))))))
                : ((1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base))
                    ? (((- (IData)((1U & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                  >> 0x1fU))))) 
                        << 0xcU) | ((0xfe0U & ((IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                        >> 0x19U)) 
                                               << 5U)) 
                                    | (0x1fU & (IData)(
                                                       (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                        >> 7U)))))
                    : vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_i_type_base)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[2U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[2U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[2U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[2U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__tl_reg_d2h[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfdffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x39U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfbffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3aU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xf7ffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3bU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xefffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3cU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xdfffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3dU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xbfffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3eU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0x7fffffffffffffffULL & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3fU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (0x5400000000000000ULL ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o);
    __Vfunc_prince_shiftrows_64bit__434__state_in = 
        (0xc882d32f25323c54ULL ^ ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[0U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                  >> 0x18U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                >> 0x30U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)(__Vfunc_prince_shiftrows_64bit__434__state_in) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                   >> 0x10U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                 >> 0x28U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                   >> 0x38U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                                 >> 0x20U))))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__434__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__434__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__434__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0 
        = __Vfunc_prince_shiftrows_64bit__434__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__435__state_in = 
        (0x64a51195e0e3610dULL ^ ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[2U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                  >> 0x18U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                >> 0x30U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)(__Vfunc_prince_shiftrows_64bit__435__state_in) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                   >> 0x10U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                 >> 0x28U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                   >> 0x38U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                                 >> 0x20U))))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__435__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__435__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__435__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0 
        = __Vfunc_prince_shiftrows_64bit__435__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__436__state_in = 
        (0xd3b5a399ca0c2399ULL ^ ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[5U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[4U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                  >> 0x18U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                >> 0x30U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)(__Vfunc_prince_shiftrows_64bit__436__state_in) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                   >> 0x10U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                 >> 0x28U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                   >> 0x38U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                                 >> 0x20U))))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__436__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__436__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__436__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0 
        = __Vfunc_prince_shiftrows_64bit__436__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
        = (0xc0ac29b7c97c50ddULL ^ (((QData)((IData)(
                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[6U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
           ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
           ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d);
    __Vfunc_prince_shiftrows_64bit__239__state_in = 
        (0xc882d32f25323c54ULL ^ ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[0U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                  >> 0x18U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                >> 0x30U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)(__Vfunc_prince_shiftrows_64bit__239__state_in) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x10U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                 >> 0x28U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x38U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                                 >> 0x20U))))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__239__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__239__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__239__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h995d474b__0 
        = __Vfunc_prince_shiftrows_64bit__239__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__240__state_in = 
        (0x64a51195e0e3610dULL ^ ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[2U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                  >> 0x18U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                >> 0x30U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)(__Vfunc_prince_shiftrows_64bit__240__state_in) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x10U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                 >> 0x28U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x38U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                                 >> 0x20U))))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__240__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__240__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__240__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_hd490e120__0 
        = __Vfunc_prince_shiftrows_64bit__240__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__241__state_in = 
        (0xd3b5a399ca0c2399ULL ^ ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[5U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[4U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U])))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xfffffffffffff000ULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | (IData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                  >> 0x18U)) 
                                         << 8U)) | 
                              ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                  >> 0x24U)) 
                                         << 4U)) | 
                               (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                >> 0x30U))))))));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xffffffffff000fffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x34U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)(__Vfunc_prince_shiftrows_64bit__241__state_in) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                 >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xfffffff000ffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x10U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x1cU)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                 >> 0x28U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xffff000fffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x2cU)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x38U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                 >> 4U))))))) 
              << 0x24U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xf000ffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)(((0xf00U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 8U)) 
                                          << 8U)) | 
                               ((0xf0U & ((IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                   >> 0x14U)) 
                                          << 4U)) | 
                                (0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                                 >> 0x20U))))))) 
              << 0x30U));
    vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out 
        = ((0xfffffffffffffffULL & vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out) 
           | ((QData)((IData)((0xfU & (IData)((__Vfunc_prince_shiftrows_64bit__241__state_in 
                                               >> 0x3cU))))) 
              << 0x3cU));
    __Vfunc_prince_shiftrows_64bit__241__Vfuncout = vlSelf->__Vfunc_prince_shiftrows_64bit__241__state_out;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_he63167c0__0 
        = __Vfunc_prince_shiftrows_64bit__241__Vfuncout;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
        = (0xc0ac29b7c97c50ddULL ^ (((QData)((IData)(
                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_hi[6U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
           ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
        = (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream 
           ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (1U 
                                                  & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (1U 
                                                  & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (1U 
                                                  & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (1U 
                                                  & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (1U 
                                                  & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full 
        = ((1U & (~ (IData)(vlSelf->rst_ni))) || (1U 
                                                  & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[0U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[0U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[0U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[0U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[0U][4U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[0U][5U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[0U][6U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state[0U][7U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1 
        = ((((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U])) 
             << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U]))) 
           + (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U]))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o) 
            | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o)) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = (((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o) 
            | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o)) 
           | (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags 
        = (((IData)((0U != (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                            [3U] & (IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 0xeU))))) 
            << 3U) | (((IData)((0U != (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                                       [2U] & (IData)(
                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                       >> 0xeU))))) 
                       << 2U) | (((IData)((0U != (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                                                  [1U] 
                                                  & (IData)(
                                                            (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                             >> 0xeU))))) 
                                  << 1U) | (0U != (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__out_mux_bits)))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_base = 0U;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base = 0U;
    if ((0x800U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
        if ((0x400U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
            if ((0x200U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                if ((0x100U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                    if ((0x80U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                        if ((0x40U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                            if ((0x20U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                            } else if ((0x10U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                            } else if ((8U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                            } else if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                            } else if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                            }
                            if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                                     >> 1U)))) {
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_base 
                                                    = 
                                                    ((1U 
                                                      & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)
                                                      ? 4U
                                                      : 1U);
                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                        }
                    } else {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                    }
                } else {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                }
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
            }
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
        }
    } else if ((0x400U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
        if ((0x200U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
            if ((0x100U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                if ((0x80U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                    if ((0x40U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                        if ((0x20U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                        } else if ((0x10U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                            if ((8U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                                } else if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                                } else if ((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                                }
                            }
                        } else if ((8U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                            if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                            } else if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                            } else if ((1U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                            }
                        } else if ((4U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                        } else if ((2U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                        }
                        if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                      >> 5U)))) {
                            if ((0x10U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                              >> 3U)))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_base = 0U;
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base 
                                        = (7U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base);
                                }
                            } else if ((8U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)) {
                                if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))) {
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_base = 3U;
                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base = 0U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                                 >> 2U)))) {
                                if ((1U & (~ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base 
                                              >> 1U)))) {
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_base = 3U;
                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base = 0U;
                                }
                            }
                        }
                    } else {
                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                    }
                } else {
                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
                }
            } else {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
            }
        } else {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr = 1U;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[0U] 
        = ((0xfffe0003U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[0U]) 
           | (0xfffffffcU & ((0x1fc00U & ((IData)((vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                   >> 0x39U)) 
                                          << 0xaU)) 
                             | (0x3fcU & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o[2U] 
                                          << 2U)))));
    __Vtemp_98[1U] = (((IData)((0x7fffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[1U])) 
                                                          >> 7U))) 
                                                   ^ 
                                                   (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                           >> 0x20U))) 
                                                          >> 7U)))))) 
                       << 7U) | (IData)(((0x7fffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[0U]))) 
                                             ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                         >> 0x20U)));
    __Vtemp_98[2U] = (((IData)((0x7fffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[1U])) 
                                                          >> 7U))) 
                                                   ^ 
                                                   (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                           >> 0x20U))) 
                                                          >> 7U)))))) 
                       >> 0x19U) | ((IData)(((0x7fffffffffULL 
                                              & ((((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[1U])) 
                                                        >> 7U))) 
                                                 ^ 
                                                 (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                         >> 0x20U))) 
                                                        >> 7U))))) 
                                             >> 0x20U)) 
                                    << 7U));
    __Vtemp_100[3U] = (((IData)((0x7fffffffffULL & 
                                 ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                    << 0x2bU) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U])) 
                                                    >> 0x15U))) 
                                  ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                       >> 0x20U))) 
                                                      >> 0x15U)))))) 
                        << 0x15U) | (((IData)((0x7fffffffffULL 
                                               & ((((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U])) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U])) 
                                                       << 0x12U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U])) 
                                                         >> 0xeU))) 
                                                  ^ 
                                                  (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                   >> 0xeU)))) 
                                      >> 0x12U) | ((IData)(
                                                           ((0x7fffffffffULL 
                                                             & ((((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U])) 
                                                                       >> 0xeU))) 
                                                                ^ 
                                                                (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                 >> 0xeU))) 
                                                            >> 0x20U)) 
                                                   << 0xeU)));
    __Vtemp_100[4U] = (((IData)((0x7fffffffffULL & 
                                 ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                    << 0x2bU) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U])) 
                                                    >> 0x15U))) 
                                  ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                       >> 0x20U))) 
                                                      >> 0x15U)))))) 
                        >> 0xbU) | ((IData)(((0x7fffffffffULL 
                                              & ((((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                                      << 0xbU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U])) 
                                                        >> 0x15U))) 
                                                 ^ 
                                                 (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                      << 0xbU) 
                                                     | ((QData)((IData)(
                                                                        (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                         >> 0x20U))) 
                                                        >> 0x15U))))) 
                                             >> 0x20U)) 
                                    << 0x15U));
    __Vtemp_101[5U] = (((IData)((0x7fffffffffULL & 
                                 ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[6U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[5U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                                    >> 0x1cU))) 
                                  ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                     >> 0x20U))) 
                                                    << 4U) 
                                                   | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                      >> 0x1cU)))))) 
                        >> 4U) | ((IData)(((0x7fffffffffULL 
                                            & ((((QData)((IData)(
                                                                 vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[6U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                                      >> 0x1cU))) 
                                               ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                       >> 0x20U))) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                        >> 0x1cU))))) 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp_102[6U] = (((IData)((0x7fffffffffULL & 
                                 ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U])) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[6U])) 
                                                    >> 3U))) 
                                  ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                     >> 3U)))) << 3U) 
                       | ((IData)(((0x7fffffffffULL 
                                    & ((((QData)((IData)(
                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[6U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[5U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                              >> 0x1cU))) 
                                       ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                               >> 0x20U))) 
                                              << 4U) 
                                             | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                >> 0x1cU))))) 
                                   >> 0x20U)) >> 4U));
    __Vtemp_103[7U] = (((IData)((0x7fffffffffULL & 
                                 ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U])) 
                                    << 0x36U) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U])) 
                                                    >> 0xaU))) 
                                  ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                       >> 0x20U))) 
                                                      >> 0xaU)))))) 
                        << 0xaU) | (((IData)((0x7fffffffffULL 
                                              & ((((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U])) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U])) 
                                                      << 0x1dU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[6U])) 
                                                        >> 3U))) 
                                                 ^ 
                                                 (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                  >> 3U)))) 
                                     >> 0x1dU) | ((IData)(
                                                          ((0x7fffffffffULL 
                                                            & ((((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U])) 
                                                                 << 0x3dU) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U])) 
                                                                    << 0x1dU) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[6U])) 
                                                                      >> 3U))) 
                                                               ^ 
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                >> 3U))) 
                                                           >> 0x20U)) 
                                                  << 3U)));
    __Vtemp_103[8U] = (((IData)((0x7fffffffffULL & 
                                 ((((QData)((IData)(
                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U])) 
                                    << 0x36U) | (((QData)((IData)(
                                                                  vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U])) 
                                                    >> 0xaU))) 
                                  ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                       >> 0x20U))) 
                                                      >> 0xaU)))))) 
                        >> 0x16U) | ((IData)(((0x7fffffffffULL 
                                               & ((((QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U])) 
                                                    << 0x36U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U])) 
                                                       << 0x16U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[7U])) 
                                                         >> 0xaU))) 
                                                  ^ 
                                                  (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                    << 0x36U) 
                                                   | (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                       << 0x16U) 
                                                      | ((QData)((IData)(
                                                                         (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                          >> 0x20U))) 
                                                         >> 0xaU))))) 
                                              >> 0x20U)) 
                                     << 0xaU));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[0U] 
        = (IData)((0x7fffffffffULL & ((((QData)((IData)(
                                                        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[0U]))) 
                                      ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[1U] 
        = __Vtemp_98[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[2U] 
        = (((IData)((0x7fffffffffULL & ((((QData)((IData)(
                                                          vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U])) 
                                          << 0x32U) 
                                         | (((QData)((IData)(
                                                             vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[3U])) 
                                             << 0x12U) 
                                            | ((QData)((IData)(
                                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[2U])) 
                                               >> 0xeU))) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                           >> 0xeU)))) 
            << 0xeU) | __Vtemp_98[2U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[3U] 
        = __Vtemp_100[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[4U] 
        = (((IData)((0x7fffffffffULL & ((((QData)((IData)(
                                                          vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[6U])) 
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[5U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[4U])) 
                                               >> 0x1cU))) 
                                        ^ (((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                                                >> 0x20U))) 
                                               << 4U) 
                                              | ((QData)((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream)) 
                                                 >> 0x1cU)))))) 
            << 0x1cU) | __Vtemp_100[4U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[5U] 
        = __Vtemp_101[5U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[6U] 
        = __Vtemp_102[6U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[7U] 
        = __Vtemp_103[7U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[8U] 
        = (((IData)((0x7fffffffffULL & ((((QData)((IData)(
                                                          vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[9U])) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[9U])) 
                                             << 0xfU) 
                                            | ((QData)((IData)(
                                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U])) 
                                               >> 0x11U))) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                           >> 0x11U)))) 
            << 0x11U) | __Vtemp_103[8U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_scr_d[9U] 
        = (((IData)((0x7fffffffffULL & ((((QData)((IData)(
                                                          vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[9U])) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[9U])) 
                                             << 0xfU) 
                                            | ((QData)((IData)(
                                                               vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U])) 
                                               >> 0x11U))) 
                                        ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                           >> 0x11U)))) 
            >> 0xfU) | ((IData)(((0x7fffffffffULL & 
                                  ((((QData)((IData)(
                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[9U])) 
                                     << 0x2fU) | (((QData)((IData)(
                                                                   vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[9U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__wdata_q[8U])) 
                                                     >> 0x11U))) 
                                   ^ (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_dmem__DOT__keystream 
                                      >> 0x11U))) >> 0x20U)) 
                        << 0x11U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_scr_d 
        = (0x7fffffffffULL & (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__wdata_q 
                              ^ vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_imem__DOT__keystream));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__mid[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT____VdfgRegularize_h0876dcf7_0_1;
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q;
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
            if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
            }
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
                = (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_req)));
        }
    } else {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__word_req;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q;
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
                = (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__word_req)));
        }
    } else {
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__word_req;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q;
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
            if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
            }
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
                = (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req)));
        }
    } else {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q;
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
            }
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
                = (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_urnd_ack_q)));
        }
    } else {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_urnd_ack_q;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q;
    if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
                vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
            }
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
                = (1U & (~ (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_rnd_ack_q)));
        }
    } else {
        if (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
        vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
            = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__edn_rnd_ack_q;
    }
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[0U] 
        = (1U & (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[1U] 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags) 
                 >> 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[2U] 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags) 
                 >> 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[3U] 
        = (1U & ((IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags) 
                 >> 3U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_sel_base 
        = (((7U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
            << 7U) | (((6U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                       << 6U) | (((5U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                  << 5U) | (((4U == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                             << 4U) 
                                            | (((3U 
                                                 == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                                << 3U) 
                                               | (((2U 
                                                    == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == (IData)(vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base)))))))));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[3U][0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[3U][1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[3U][2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT__tl_u_i[3U][3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o[3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[0U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in
        [0U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[1U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in
        [1U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[2U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in
        [2U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[3U] 
        = vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in
        [3U];
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux[0U] 
        = ((0xeU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
            [0U]) | vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i
           [0U]);
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux[0U] 
        = ((0xdU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
            [0U]) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i
                     [1U] << 1U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux[0U] 
        = ((0xbU & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
            [0U]) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i
                     [2U] << 2U));
    vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux[0U] 
        = ((7U & vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
            [0U]) | (vlSelf->tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i
                     [3U] << 3U));
}
