// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vimem_test__Syms.h"


extern const VlWide<10>/*319:0*/ Vimem_test__ConstPool__CONST_h3b9d891d_0;
extern const VlWide<9>/*287:0*/ Vimem_test__ConstPool__CONST_h52851b65_0;
extern const VlWide<8>/*255:0*/ Vimem_test__ConstPool__CONST_h9e67c271_0;
extern const VlWide<10>/*319:0*/ Vimem_test__ConstPool__CONST_h14adc512_0;
extern const VlWide<8>/*255:0*/ Vimem_test__ConstPool__CONST_h954211c2_0;

VL_ATTR_COLD void Vimem_test___024root__trace_full_0_sub_1(Vimem_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimem_test___024root__trace_full_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<10>/*319:0*/ __Vtemp_2;
    VlWide<9>/*287:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<10>/*319:0*/ __Vtemp_8;
    VlWide<10>/*319:0*/ __Vtemp_10;
    VlWide<8>/*255:0*/ __Vtemp_11;
    VlWide<8>/*255:0*/ __Vtemp_12;
    VlWide<8>/*255:0*/ __Vtemp_13;
    VlWide<8>/*255:0*/ __Vtemp_14;
    VlWide<10>/*319:0*/ __Vtemp_16;
    VlWide<8>/*255:0*/ __Vtemp_17;
    VlWide<8>/*255:0*/ __Vtemp_18;
    VlWide<8>/*255:0*/ __Vtemp_19;
    VlWide<10>/*319:0*/ __Vtemp_21;
    VlWide<10>/*319:0*/ __Vtemp_23;
    VlWide<10>/*319:0*/ __Vtemp_25;
    VlWide<10>/*319:0*/ __Vtemp_27;
    VlWide<10>/*319:0*/ __Vtemp_29;
    VlWide<10>/*319:0*/ __Vtemp_31;
    VlWide<10>/*319:0*/ __Vtemp_33;
    VlWide<10>/*319:0*/ __Vtemp_35;
    VlWide<10>/*319:0*/ __Vtemp_37;
    VlWide<10>/*319:0*/ __Vtemp_39;
    VlWide<10>/*319:0*/ __Vtemp_41;
    VlWide<10>/*319:0*/ __Vtemp_43;
    VlWide<10>/*319:0*/ __Vtemp_45;
    VlWide<10>/*319:0*/ __Vtemp_47;
    VlWide<10>/*319:0*/ __Vtemp_49;
    VlWide<10>/*319:0*/ __Vtemp_51;
    VlWide<10>/*319:0*/ __Vtemp_53;
    VlWide<10>/*319:0*/ __Vtemp_55;
    VlWide<10>/*319:0*/ __Vtemp_57;
    VlWide<10>/*319:0*/ __Vtemp_59;
    VlWide<10>/*319:0*/ __Vtemp_61;
    VlWide<10>/*319:0*/ __Vtemp_63;
    VlWide<10>/*319:0*/ __Vtemp_65;
    VlWide<10>/*319:0*/ __Vtemp_67;
    VlWide<10>/*319:0*/ __Vtemp_69;
    VlWide<10>/*319:0*/ __Vtemp_71;
    VlWide<10>/*319:0*/ __Vtemp_73;
    VlWide<10>/*319:0*/ __Vtemp_75;
    VlWide<10>/*319:0*/ __Vtemp_77;
    VlWide<10>/*319:0*/ __Vtemp_79;
    VlWide<10>/*319:0*/ __Vtemp_81;
    VlWide<10>/*319:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_85;
    VlWide<8>/*255:0*/ __Vtemp_86;
    VlWide<8>/*255:0*/ __Vtemp_87;
    VlWide<8>/*255:0*/ __Vtemp_92;
    VlWide<8>/*255:0*/ __Vtemp_93;
    VlWide<8>/*255:0*/ __Vtemp_94;
    VlWide<10>/*319:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_98;
    VlWide<8>/*255:0*/ __Vtemp_101;
    VlWide<16>/*511:0*/ __Vtemp_107;
    VlWide<9>/*287:0*/ __Vtemp_111;
    VlWide<9>/*287:0*/ __Vtemp_116;
    VlWide<9>/*287:0*/ __Vtemp_123;
    VlWide<9>/*287:0*/ __Vtemp_130;
    VlWide<8>/*255:0*/ __Vtemp_133;
    VlWide<8>/*255:0*/ __Vtemp_135;
    VlWide<8>/*255:0*/ __Vtemp_141;
    VlWide<9>/*287:0*/ __Vtemp_143;
    VlWide<8>/*255:0*/ __Vtemp_144;
    VlWide<8>/*255:0*/ __Vtemp_145;
    VlWide<10>/*319:0*/ __Vtemp_147;
    VlWide<10>/*319:0*/ __Vtemp_151;
    VlWide<8>/*255:0*/ __Vtemp_157;
    VlWide<4>/*127:0*/ __Vtemp_158;
    VlWide<7>/*223:0*/ __Vtemp_161;
    VlWide<8>/*255:0*/ __Vtemp_162;
    VlWide<9>/*287:0*/ __Vtemp_165;
    VlWide<8>/*255:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<4>/*127:0*/ __Vtemp_204;
    VlWide<10>/*319:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_208;
    VlWide<3>/*95:0*/ __Vtemp_217;
    VlWide<10>/*319:0*/ __Vtemp_222;
    VlWide<8>/*255:0*/ __Vtemp_226;
    VlWide<4>/*127:0*/ __Vtemp_228;
    VlWide<4>/*127:0*/ __Vtemp_231;
    VlWide<4>/*127:0*/ __Vtemp_235;
    VlWide<3>/*95:0*/ __Vtemp_236;
    VlWide<3>/*95:0*/ __Vtemp_237;
    VlWide<3>/*95:0*/ __Vtemp_238;
    VlWide<3>/*95:0*/ __Vtemp_239;
    // Body
    bufp->fullIData(oldp+5672,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xbfU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5673,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc0U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5674,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc1U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5675,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc2U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5676,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc3U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5677,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc4U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5678,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc5U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5679,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc6U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5680,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc7U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5681,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x13U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5682,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [1U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5683,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc8U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5684,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xc9U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5685,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xcaU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5686,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xcbU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5687,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xccU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5688,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xcdU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5689,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xceU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5690,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xcfU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5691,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd0U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5692,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd1U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5693,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x14U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5694,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd2U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5695,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd3U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5696,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd4U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5697,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd5U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5698,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd6U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5699,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd7U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5700,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd8U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5701,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xd9U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5702,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xdaU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5703,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xdbU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5704,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x15U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5705,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xdcU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5706,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xddU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5707,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xdeU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5708,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xdfU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5709,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe0U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5710,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe1U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5711,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe2U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5712,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe3U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5713,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe4U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5714,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe5U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5715,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x16U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5716,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe6U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5717,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe7U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5718,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe8U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5719,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xe9U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5720,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xeaU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5721,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xebU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5722,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xecU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5723,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xedU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5724,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xeeU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5725,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xefU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5726,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x17U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5727,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf0U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5728,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf1U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5729,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf2U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5730,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf3U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5731,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf4U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5732,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf5U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5733,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf6U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5734,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf7U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5735,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf8U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5736,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xf9U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5737,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x18U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5738,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xfaU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5739,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xfbU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5740,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xfcU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5741,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xfdU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5742,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xfeU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5743,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0xffU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5744,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x100U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5745,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x101U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5746,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x102U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5747,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x103U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5748,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x19U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5749,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x104U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5750,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x105U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5751,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x106U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5752,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x107U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5753,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x108U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5754,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x109U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5755,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x10aU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5756,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x10bU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5757,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x10cU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5758,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x10dU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5759,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x1aU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5760,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x10eU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5761,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x10fU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5762,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x110U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5763,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x111U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5764,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x112U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5765,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x113U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5766,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x114U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5767,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x115U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5768,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x116U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5769,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x117U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5770,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x1bU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5771,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x118U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5772,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x119U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5773,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x11aU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5774,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x11bU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5775,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x11cU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5776,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x11dU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5777,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x11eU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5778,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x11fU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5779,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x120U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5780,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x121U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5781,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x1cU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5782,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x122U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5783,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x123U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5784,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x124U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5785,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x125U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5786,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x126U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5787,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x127U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5788,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x128U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5789,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x129U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5790,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x12aU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5791,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x12bU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5792,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x1dU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5793,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [2U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5794,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x12cU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5795,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x12dU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5796,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x12eU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5797,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x12fU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5798,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x130U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5799,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x131U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5800,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x132U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5801,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x133U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5802,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x134U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5803,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x135U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5804,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x1eU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5805,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x136U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5806,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x137U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5807,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x1fU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5808,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x20U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5809,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x21U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5810,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x22U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5811,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x23U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5812,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x24U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5813,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x25U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5814,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x26U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5815,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x27U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5816,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [3U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5817,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x28U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5818,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x29U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5819,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x2aU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5820,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x2bU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5821,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x2cU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5822,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x2dU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5823,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x2eU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5824,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x2fU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5825,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x30U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5826,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x31U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5827,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [4U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5828,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x32U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5829,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x33U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5830,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x34U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5831,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x35U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5832,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x36U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5833,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x37U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5834,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x38U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5835,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x39U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5836,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x3aU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5837,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x3bU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5838,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [5U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5839,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x3cU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5840,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x3dU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5841,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x3eU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5842,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x3fU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5843,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x40U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5844,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x41U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5845,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x42U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5846,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x43U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5847,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x44U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5848,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x45U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5849,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [6U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5850,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x46U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5851,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x47U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5852,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x48U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5853,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x49U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5854,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x4aU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5855,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x4bU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5856,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x4cU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5857,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x4dU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5858,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x4eU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5859,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x4fU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5860,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [7U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5861,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x50U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5862,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x51U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5863,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x52U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5864,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x53U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5865,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x54U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5866,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x55U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5867,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x56U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5868,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x57U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5869,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x58U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5870,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x59U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5871,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [8U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5872,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x5aU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5873,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x5bU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5874,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x5cU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5875,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x5dU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5876,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x5eU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5877,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x5fU] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5878,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x60U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5879,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x61U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5880,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x62U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5881,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [0x63U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullIData(oldp+5882,((vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.__PVT__in_mux
                                [9U] & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])),32);
    bufp->fullCData(oldp+5883,(vlSelf->imem_test__DOT__dut__DOT__u_prim_mubi4_sender__DOT__mubi_int),4);
    bufp->fullBit(oldp+5884,(vlSelf->imem_test__DOT__intr_done_o));
    bufp->fullCData(oldp+5885,((((8U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                        << 3U)) | (4U 
                                                   & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                                      << 1U))) 
                                | ((2U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                          << 1U)) | 
                                   (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                          >> 1U))))),4);
    bufp->fullCData(oldp+5886,(vlSelf->imem_test__DOT__lc_rma_ack_o),4);
    bufp->fullBit(oldp+5887,(vlSelf->imem_test__DOT__dut__DOT__start_q));
    bufp->fullBit(oldp+5888,(vlSelf->imem_test__DOT__dut__DOT__busy_execute_q));
    bufp->fullBit(oldp+5889,(vlSelf->imem_test__DOT__dut__DOT__locking_q));
    bufp->fullBit(oldp+5890,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q));
    bufp->fullBit(oldp+5891,((1U & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                                    | (IData)(vlSelf->imem_test__DOT__dut__DOT__init_sec_wipe_done_q)))));
    bufp->fullBit(oldp+5892,(vlSelf->imem_test__DOT__dut__DOT__init_sec_wipe_done_q));
    bufp->fullBit(oldp+5893,(vlSelf->imem_test__DOT__dut__DOT__illegal_bus_access_q));
    bufp->fullBit(oldp+5894,(vlSelf->imem_test__DOT__dut__DOT__missed_gnt_error_q));
    bufp->fullBit(oldp+5895,(vlSelf->imem_test__DOT__dut__DOT__recoverable_err_q));
    bufp->fullCData(oldp+5896,(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_q),4);
    bufp->fullSData(oldp+5897,(vlSelf->imem_test__DOT__dut__DOT__err_bits_q),16);
    bufp->fullBit(oldp+5898,(vlSelf->imem_test__DOT__dut__DOT__software_errs_fatal_q));
    bufp->fullCData(oldp+5899,(vlSelf->imem_test__DOT__dut__DOT__status_q),8);
    bufp->fullBit(oldp+5900,(vlSelf->imem_test__DOT__dut__DOT__is_not_running_q));
    bufp->fullCData(oldp+5901,((0xffU & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en) 
                                          << 4U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en)))),8);
    bufp->fullCData(oldp+5902,(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__lc_en),4);
    bufp->fullCData(oldp+5903,(vlSelf->imem_test__DOT__dut__DOT__mubi_rma_req),4);
    bufp->fullCData(oldp+5904,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_prim_mubi4_sender_rma_ack__DOT__mubi_int),4);
    bufp->fullBit(oldp+5905,(vlSelf->imem_test__DOT__dut__DOT__imem_access_core));
    bufp->fullBit(oldp+5906,(vlSelf->imem_test__DOT__dut__DOT__imem_wr_collision));
    bufp->fullBit(oldp+5907,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__prefetch_en));
    bufp->fullBit(oldp+5908,(vlSelf->imem_test__DOT__dut__DOT__imem_dummy_response_q));
    bufp->fullBit(oldp+5909,(vlSelf->imem_test__DOT__dut__DOT__imem_rdata_bus_en_q));
    bufp->fullBit(oldp+5910,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                              | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                 | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__intg_error_q) 
                                    | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q))))));
    bufp->fullIData(oldp+5911,((~ vlSelf->imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_q)),32);
    bufp->fullWData(oldp+5912,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q),128);
    bufp->fullQData(oldp+5916,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q),64);
    bufp->fullBit(oldp+5918,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q));
    bufp->fullBit(oldp+5919,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_q));
    bufp->fullWData(oldp+5920,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q),128);
    bufp->fullQData(oldp+5924,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q),64);
    bufp->fullBit(oldp+5926,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_valid_q));
    bufp->fullBit(oldp+5927,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_q));
    bufp->fullBit(oldp+5928,(vlSelf->imem_test__DOT__dut__DOT__otbn_scramble_state_error));
    bufp->fullCData(oldp+5929,(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q),8);
    bufp->fullBit(oldp+5930,(vlSelf->imem_test__DOT__dut__DOT__dmem_dummy_response_q));
    bufp->fullBit(oldp+5931,(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q));
    bufp->fullBit(oldp+5932,(vlSelf->imem_test__DOT__dut__DOT__dmem_wr_collision));
    bufp->fullBit(oldp+5933,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                              | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                 | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__intg_error_q) 
                                    | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q))))));
    bufp->fullIData(oldp+5934,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q),32);
    bufp->fullBit(oldp+5935,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_q));
    bufp->fullBit(oldp+5936,(vlSelf->imem_test__DOT__dut__DOT__edn_rnd_ack));
    bufp->fullWData(oldp+5937,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q),256);
    bufp->fullBit(oldp+5945,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__fips_q));
    bufp->fullBit(oldp+5946,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__gen_rep_chk__DOT__err_q));
    bufp->fullBit(oldp+5947,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_urnd_req_q));
    bufp->fullBit(oldp+5948,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack));
    bufp->fullWData(oldp+5949,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q),256);
    bufp->fullBit(oldp+5957,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    bufp->fullCData(oldp+5958,(((2U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                                     >> 1U)))),2);
    bufp->fullBit(oldp+5959,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint));
    bufp->fullBit(oldp+5960,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o))));
    bufp->fullBit(oldp+5961,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint));
    bufp->fullBit(oldp+5962,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d));
    bufp->fullCData(oldp+5963,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q),3);
    bufp->fullBit(oldp+5964,((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
    bufp->fullBit(oldp+5965,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                    >> 1U))));
    bufp->fullBit(oldp+5966,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint))));
    bufp->fullBit(oldp+5967,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    bufp->fullBit(oldp+5968,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    bufp->fullBit(oldp+5969,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
    bufp->fullBit(oldp+5970,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o));
    bufp->fullBit(oldp+5971,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o));
    bufp->fullBit(oldp+5972,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o))));
    bufp->fullBit(oldp+5973,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q));
    bufp->fullCData(oldp+5974,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d),2);
    bufp->fullCData(oldp+5975,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q),2);
    bufp->fullBit(oldp+5976,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq))));
    bufp->fullBit(oldp+5977,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq))));
    bufp->fullBit(oldp+5978,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd))));
    bufp->fullBit(oldp+5979,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
    bufp->fullBit(oldp+5980,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq));
    bufp->fullBit(oldp+5981,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq));
    bufp->fullBit(oldp+5982,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    bufp->fullBit(oldp+5983,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d));
    bufp->fullBit(oldp+5984,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q));
    bufp->fullBit(oldp+5985,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    bufp->fullBit(oldp+5986,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    bufp->fullBit(oldp+5987,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d));
    bufp->fullBit(oldp+5988,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o));
    bufp->fullBit(oldp+5989,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o));
    bufp->fullBit(oldp+5990,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q));
    bufp->fullCData(oldp+5991,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d),2);
    bufp->fullCData(oldp+5992,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q),2);
    bufp->fullBit(oldp+5993,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq))));
    bufp->fullBit(oldp+5994,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq))));
    bufp->fullBit(oldp+5995,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd))));
    bufp->fullBit(oldp+5996,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
    bufp->fullBit(oldp+5997,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq));
    bufp->fullBit(oldp+5998,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq));
    bufp->fullBit(oldp+5999,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    bufp->fullBit(oldp+6000,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d));
    bufp->fullBit(oldp+6001,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q));
    bufp->fullBit(oldp+6002,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    bufp->fullBit(oldp+6003,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    bufp->fullCData(oldp+6004,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o),2);
    bufp->fullBit(oldp+6005,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    bufp->fullCData(oldp+6006,(((2U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                                     >> 1U)))),2);
    bufp->fullBit(oldp+6007,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint));
    bufp->fullBit(oldp+6008,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o))));
    bufp->fullBit(oldp+6009,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint));
    bufp->fullBit(oldp+6010,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d));
    bufp->fullCData(oldp+6011,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q),3);
    bufp->fullBit(oldp+6012,((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
    bufp->fullBit(oldp+6013,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                    >> 1U))));
    bufp->fullBit(oldp+6014,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint))));
    bufp->fullBit(oldp+6015,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    bufp->fullBit(oldp+6016,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    bufp->fullBit(oldp+6017,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
    bufp->fullBit(oldp+6018,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o));
    bufp->fullBit(oldp+6019,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o));
    bufp->fullBit(oldp+6020,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o))));
    bufp->fullBit(oldp+6021,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q));
    bufp->fullCData(oldp+6022,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d),2);
    bufp->fullCData(oldp+6023,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q),2);
    bufp->fullBit(oldp+6024,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq))));
    bufp->fullBit(oldp+6025,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq))));
    bufp->fullBit(oldp+6026,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd))));
    bufp->fullBit(oldp+6027,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
    bufp->fullBit(oldp+6028,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq));
    bufp->fullBit(oldp+6029,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq));
    bufp->fullBit(oldp+6030,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    bufp->fullBit(oldp+6031,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d));
    bufp->fullBit(oldp+6032,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q));
    bufp->fullBit(oldp+6033,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    bufp->fullBit(oldp+6034,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    bufp->fullBit(oldp+6035,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d));
    bufp->fullBit(oldp+6036,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o));
    bufp->fullBit(oldp+6037,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o));
    bufp->fullBit(oldp+6038,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q));
    bufp->fullCData(oldp+6039,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d),2);
    bufp->fullCData(oldp+6040,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q),2);
    bufp->fullBit(oldp+6041,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq))));
    bufp->fullBit(oldp+6042,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq))));
    bufp->fullBit(oldp+6043,(((IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                              ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd))));
    bufp->fullBit(oldp+6044,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
    bufp->fullBit(oldp+6045,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq));
    bufp->fullBit(oldp+6046,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq));
    bufp->fullBit(oldp+6047,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    bufp->fullBit(oldp+6048,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d));
    bufp->fullBit(oldp+6049,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q));
    bufp->fullBit(oldp+6050,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    bufp->fullBit(oldp+6051,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    bufp->fullCData(oldp+6052,(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o),2);
    bufp->fullCData(oldp+6053,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__raddr_q),7);
    bufp->fullCData(oldp+6054,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__write_en_q),4);
    bufp->fullCData(oldp+6055,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__write_pending_q),4);
    bufp->fullCData(oldp+6056,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__addr_collision_q),4);
    bufp->fullCData(oldp+6057,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__waddr_scr_q),7);
    bufp->fullBit(oldp+6058,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_w_q));
    bufp->fullQData(oldp+6059,((0x1ffffffffffffffULL 
                                & vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q)),57);
    bufp->fullWData(oldp+6061,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_scr_q),312);
    bufp->fullWData(oldp+6071,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wdata_q),312);
    bufp->fullCData(oldp+6081,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__rvalid_q),4);
    bufp->fullBit(oldp+6082,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_r_q));
    bufp->fullWData(oldp+6083,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__wmask_q),312);
    bufp->fullCData(oldp+6093,((0x7fU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                                                 >> 0x39U)))),7);
    bufp->fullBit(oldp+6094,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_data_reg__DOT__valid_q));
    bufp->fullQData(oldp+6095,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0),64);
    bufp->fullQData(oldp+6097,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d),64);
    bufp->fullQData(oldp+6099,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U])))),64);
    bufp->fullQData(oldp+6101,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U])))),64);
    bufp->fullQData(oldp+6103,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q),64);
    bufp->fullQData(oldp+6105,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle),64);
    bufp->fullBit(oldp+6107,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_o));
    bufp->fullCData(oldp+6108,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q),4);
    bufp->fullBit(oldp+6109,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__inst_req_q));
    bufp->fullCData(oldp+6110,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__wmask),8);
    __Vtemp_2[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    __Vtemp_2[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    __Vtemp_2[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    __Vtemp_2[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    __Vtemp_2[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    __Vtemp_2[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    __Vtemp_2[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    __Vtemp_2[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    __Vtemp_2[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    __Vtemp_2[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                     & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rdata_bus_en_q))));
    bufp->fullWData(oldp+6111,(__Vtemp_2),312);
    bufp->fullSData(oldp+6121,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__raddr_q),11);
    bufp->fullCData(oldp+6122,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_en_q),4);
    bufp->fullCData(oldp+6123,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__write_pending_q),4);
    bufp->fullCData(oldp+6124,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__addr_collision_q),4);
    bufp->fullSData(oldp+6125,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__waddr_scr_q),11);
    bufp->fullBit(oldp+6126,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__intg_error_w_q));
    bufp->fullQData(oldp+6127,((0x1fffffffffffffULL 
                                & vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q)),53);
    bufp->fullQData(oldp+6129,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__wdata_scr_q),39);
    bufp->fullQData(oldp+6131,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__wdata_q),39);
    bufp->fullCData(oldp+6133,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__rvalid_q),4);
    bufp->fullBit(oldp+6134,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__intg_error_r_q));
    bufp->fullQData(oldp+6135,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__wmask_q),39);
    bufp->fullSData(oldp+6137,((0x7ffU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                                                  >> 0x35U)))),11);
    bufp->fullBit(oldp+6138,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_data_reg__DOT__valid_q));
    bufp->fullQData(oldp+6139,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0),64);
    bufp->fullQData(oldp+6141,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0_prime_d),64);
    bufp->fullQData(oldp+6143,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[0U])))),64);
    bufp->fullQData(oldp+6145,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_q[2U])))),64);
    bufp->fullQData(oldp+6147,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle_q),64);
    bufp->fullQData(oldp+6149,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_middle),64);
    bufp->fullBit(oldp+6151,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_o));
    bufp->fullCData(oldp+6152,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q),4);
    bufp->fullBit(oldp+6153,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__inst_req_q));
    bufp->fullBit(oldp+6154,((0x7fffffffffULL == vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__wmask_q)));
    bufp->fullQData(oldp+6155,((0x7fffffffffULL & (- (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_rdata_bus_en_q))))),39);
    bufp->fullBit(oldp+6157,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable__q));
    bufp->fullBit(oldp+6158,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state__q));
    bufp->fullCData(oldp+6159,(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en),4);
    bufp->fullBit(oldp+6160,((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en))));
    bufp->fullBit(oldp+6161,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en)))));
    bufp->fullBit(oldp+6162,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en) 
                                    >> 1U))));
    bufp->fullBit(oldp+6163,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en) 
                                       >> 1U)))));
    bufp->fullBit(oldp+6164,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en) 
                                    >> 2U))));
    bufp->fullBit(oldp+6165,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en) 
                                       >> 2U)))));
    bufp->fullBit(oldp+6166,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en) 
                                    >> 3U))));
    bufp->fullBit(oldp+6167,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__lc_en) 
                                       >> 3U)))));
    bufp->fullCData(oldp+6168,(vlSelf->imem_test__DOT__dut__DOT__u_lc_escalate_en_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq),4);
    bufp->fullBit(oldp+6169,((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__lc_en))));
    bufp->fullBit(oldp+6170,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__lc_en)))));
    bufp->fullBit(oldp+6171,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__lc_en) 
                                    >> 1U))));
    bufp->fullBit(oldp+6172,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__lc_en) 
                                       >> 1U)))));
    bufp->fullBit(oldp+6173,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__lc_en) 
                                    >> 2U))));
    bufp->fullBit(oldp+6174,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__lc_en) 
                                       >> 2U)))));
    bufp->fullBit(oldp+6175,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__lc_en) 
                                    >> 3U))));
    bufp->fullBit(oldp+6176,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__lc_en) 
                                       >> 3U)))));
    bufp->fullCData(oldp+6177,(vlSelf->imem_test__DOT__dut__DOT__u_lc_rma_req_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq),4);
    bufp->fullIData(oldp+6178,(vlSelf->imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_q),32);
    bufp->fullBit(oldp+6179,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw));
    bufp->fullBit(oldp+6180,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_q));
    bufp->fullIData(oldp+6181,((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q)),32);
    bufp->fullBit(oldp+6182,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_err));
    bufp->fullBit(oldp+6183,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_addr_err));
    bufp->fullWData(oldp+6184,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o),96);
    bufp->fullQData(oldp+6187,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o),38);
    bufp->fullCData(oldp+6189,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o),6);
    bufp->fullSData(oldp+6190,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q),13);
    bufp->fullIData(oldp+6191,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o),18);
    bufp->fullCData(oldp+6192,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o),2);
    bufp->fullBit(oldp+6193,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q));
    bufp->fullBit(oldp+6194,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid));
    bufp->fullBit(oldp+6195,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__illegal_insn) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_q))));
    bufp->fullWData(oldp+6196,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base),74);
    bufp->fullWData(oldp+6199,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum),314);
    bufp->fullSData(oldp+6209,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_shared),12);
    bufp->fullCData(oldp+6210,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl),5);
    bufp->fullBit(oldp+6211,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_en_ctrl));
    bufp->fullBit(oldp+6212,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_data_intg_sel_ctrl));
    bufp->fullCData(oldp+6213,((0x1fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U])),5);
    bufp->fullBit(oldp+6214,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_a));
    bufp->fullCData(oldp+6215,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                                >> 0x1bU)),5);
    bufp->fullBit(oldp+6216,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_b));
    bufp->fullBit(oldp+6217,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_hw_err));
    bufp->fullBit(oldp+6218,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_intg_err));
    bufp->fullBit(oldp+6219,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_spurious_we_err));
    bufp->fullBit(oldp+6220,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset));
    bufp->fullBit(oldp+6221,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__lsu_rdata_err));
    bufp->fullCData(oldp+6222,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q)
                                 ? 3U : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf))),2);
    bufp->fullCData(oldp+6223,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf),2);
    bufp->fullBit(oldp+6224,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel));
    bufp->fullBit(oldp+6225,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel_ctrl));
    bufp->fullBit(oldp+6226,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_running_q)) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q))));
    bufp->fullBit(oldp+6227,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf));
    bufp->fullBit(oldp+6228,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf));
    bufp->fullBit(oldp+6229,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_spurious_we_err));
    bufp->fullBit(oldp+6230,((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
                                     [0U] & (IData)(
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0xaU))))));
    bufp->fullBit(oldp+6231,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_en));
    bufp->fullCData(oldp+6232,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr),4);
    bufp->fullCData(oldp+6233,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_base_wr_en),8);
    bufp->fullBit(oldp+6234,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wr_en));
    bufp->fullCData(oldp+6235,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_flags_wr),2);
    bufp->fullBit(oldp+6236,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en));
    bufp->fullBit(oldp+6237,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q));
    bufp->fullBit(oldp+6238,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_err));
    bufp->fullBit(oldp+6239,((1U & (~ (IData)((0U != 
                                               (((((((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U] 
                                                      | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U]) 
                                                     | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U]) 
                                                    | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U]) 
                                                   | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U]) 
                                                  | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U]) 
                                                 | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U]) 
                                                | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U])))))));
    bufp->fullBit(oldp+6240,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_all_zero));
    bufp->fullBit(oldp+6241,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_start));
    bufp->fullBit(oldp+6242,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_q));
    bufp->fullCData(oldp+6243,((0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q))),5);
    bufp->fullSData(oldp+6244,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q),9);
    bufp->fullSData(oldp+6245,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__err_bits_q),13);
    bufp->fullBit(oldp+6246,(((((((8U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                 << 8U) | ((((7U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                            << 7U) 
                                           | ((((6U 
                                                 == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                               << 6U) 
                                              | ((((5U 
                                                    == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                  << 5U) 
                                                 | ((((4U 
                                                       == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                      & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                     << 4U) 
                                                    | ((((3U 
                                                          == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                         & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                        << 3U) 
                                                       | ((((2U 
                                                             == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                            & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                           << 2U) 
                                                          | ((((1U 
                                                                == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                              << 1U) 
                                                             | ((0U 
                                                                 == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)))))))))) 
                               != (0x1ffU & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                             >> 9U))) 
                              | (((((8U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                   << 8U) | ((((7U 
                                                == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                              << 7U) 
                                             | ((((6U 
                                                   == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                 << 6U) 
                                                | ((((5U 
                                                      == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                    << 5U) 
                                                   | ((((4U 
                                                         == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                       << 4U) 
                                                      | ((((3U 
                                                            == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                           & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                          << 3U) 
                                                         | ((((2U 
                                                               == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                             << 2U) 
                                                            | ((((1U 
                                                                  == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                                << 1U) 
                                                               | ((0U 
                                                                   == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)))))))))) 
                                 != (0x1ffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o)))));
    bufp->fullBit(oldp+6247,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_en) 
                               != (1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                         >> 1U))) | 
                              ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__expected_acc_rd_en) 
                               != (1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))))));
    bufp->fullBit(oldp+6248,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid)) 
                              & (IData)(((0U != (0x3fe00U 
                                                 & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o)) 
                                         | (0U != (
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])))))))));
    bufp->fullBit(oldp+6249,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__predec_error));
    bufp->fullBit(oldp+6250,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__req_sec_wipe_urnd_keys_q));
    bufp->fullBit(oldp+6251,((0U != (7U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__err_bits_q) 
                                           >> 6U)))));
    bufp->fullBit(oldp+6252,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__non_controller_reg_intg_violation));
    bufp->fullCData(oldp+6253,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                               [0U]),4);
    bufp->fullCData(oldp+6254,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                               [1U]),4);
    bufp->fullCData(oldp+6255,(((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                                 [1U] << 4U) | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flags_q
                                [0U])),8);
    bufp->fullCData(oldp+6256,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__selected_flags),4);
    bufp->fullSData(oldp+6257,(((((8U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                 << 8U) | ((((7U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                            << 7U) 
                                           | ((((6U 
                                                 == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                               << 6U) 
                                              | ((((5U 
                                                    == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                  << 5U) 
                                                 | ((((4U 
                                                       == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                      & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                     << 4U) 
                                                    | ((((3U 
                                                          == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                         & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                        << 3U) 
                                                       | ((((2U 
                                                             == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                            & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                           << 2U) 
                                                          | ((((1U 
                                                                == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en)) 
                                                              << 1U) 
                                                             | ((0U 
                                                                 == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_rd_en))))))))))),9);
    bufp->fullSData(oldp+6258,(((((8U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                 << 8U) | ((((7U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                            << 7U) 
                                           | ((((6U 
                                                 == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                               << 6U) 
                                              | ((((5U 
                                                    == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                  << 5U) 
                                                 | ((((4U 
                                                       == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                      & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                     << 4U) 
                                                    | ((((3U 
                                                          == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                         & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                        << 3U) 
                                                       | ((((2U 
                                                             == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                            & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                           << 2U) 
                                                          | ((((1U 
                                                                == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en)) 
                                                              << 1U) 
                                                             | ((0U 
                                                                 == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_addr)) 
                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en))))))))))),9);
    bufp->fullBit(oldp+6259,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_wr_en));
    bufp->fullBit(oldp+6260,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[0]));
    bufp->fullBit(oldp+6261,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[1]));
    bufp->fullBit(oldp+6262,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[2]));
    bufp->fullBit(oldp+6263,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__flag_mux_in[3]));
    bufp->fullCData(oldp+6264,((0xfU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0xaU)))),4);
    bufp->fullCData(oldp+6265,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__ispr_rdata_intg_mux_sel),3);
    bufp->fullCData(oldp+6266,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__0__KET____DOT__flags_d_mux_sel),5);
    bufp->fullCData(oldp+6267,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_flag_groups__BRA__1__KET____DOT__flags_d_mux_sel),5);
    bufp->fullBit(oldp+6268,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 2U)))));
    bufp->fullBit(oldp+6269,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 3U)))));
    bufp->fullBit(oldp+6270,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 0x25U)))));
    __Vtemp_4[0U] = (Vimem_test__ConstPool__CONST_h52851b65_0[0U] 
                     & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x25U))))));
    __Vtemp_4[1U] = (Vimem_test__ConstPool__CONST_h52851b65_0[1U] 
                     & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x25U))))));
    __Vtemp_4[2U] = (Vimem_test__ConstPool__CONST_h52851b65_0[2U] 
                     & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x25U))))));
    __Vtemp_4[3U] = (Vimem_test__ConstPool__CONST_h52851b65_0[3U] 
                     & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x25U))))));
    __Vtemp_4[4U] = (Vimem_test__ConstPool__CONST_h52851b65_0[4U] 
                     & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x25U))))));
    __Vtemp_4[5U] = (Vimem_test__ConstPool__CONST_h52851b65_0[5U] 
                     & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x25U))))));
    __Vtemp_4[6U] = (Vimem_test__ConstPool__CONST_h52851b65_0[6U] 
                     & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x25U))))));
    __Vtemp_4[7U] = (Vimem_test__ConstPool__CONST_h52851b65_0[7U] 
                     & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x25U))))));
    __Vtemp_4[8U] = (Vimem_test__ConstPool__CONST_h52851b65_0[8U] 
                     & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x25U))))));
    bufp->fullWData(oldp+6271,(__Vtemp_4),257);
    bufp->fullBit(oldp+6280,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 0x23U)))));
    __Vtemp_5[0U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x23U)))));
    __Vtemp_5[1U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x23U)))));
    __Vtemp_5[2U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x23U)))));
    __Vtemp_5[3U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x23U)))));
    __Vtemp_5[4U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x23U)))));
    __Vtemp_5[5U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x23U)))));
    __Vtemp_5[6U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x23U)))));
    __Vtemp_5[7U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x23U)))));
    bufp->fullWData(oldp+6281,(__Vtemp_5),256);
    bufp->fullBit(oldp+6289,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 0x21U)))));
    __Vtemp_6[0U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x21U)))));
    __Vtemp_6[1U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x21U)))));
    __Vtemp_6[2U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x21U)))));
    __Vtemp_6[3U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x21U)))));
    __Vtemp_6[4U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x21U)))));
    __Vtemp_6[5U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x21U)))));
    __Vtemp_6[6U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x21U)))));
    __Vtemp_6[7U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0x21U)))));
    bufp->fullWData(oldp+6290,(__Vtemp_6),256);
    bufp->fullBit(oldp+6298,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[0]));
    bufp->fullBit(oldp+6299,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[1]));
    bufp->fullBit(oldp+6300,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[2]));
    bufp->fullBit(oldp+6301,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flag_mux__in_i[3]));
    bufp->fullCData(oldp+6302,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux[0]),4);
    bufp->fullCData(oldp+6303,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
                                [0U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0xaU)))),4);
    bufp->fullCData(oldp+6304,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
                               [0U]),4);
    bufp->fullCData(oldp+6305,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i[0]),4);
    bufp->fullCData(oldp+6306,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__u_flags_q_mux__in_i[1]),4);
    bufp->fullCData(oldp+6307,((3U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                              >> 0xeU)))),2);
    bufp->fullCData(oldp+6308,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[0]),2);
    bufp->fullCData(oldp+6309,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[1]),2);
    bufp->fullCData(oldp+6310,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[2]),2);
    bufp->fullCData(oldp+6311,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux[3]),2);
    bufp->fullCData(oldp+6312,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__out_mux_bits),2);
    bufp->fullCData(oldp+6313,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                               [0U]),2);
    bufp->fullCData(oldp+6314,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                                [1U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0xeU)))),2);
    bufp->fullCData(oldp+6315,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                               [1U]),2);
    bufp->fullCData(oldp+6316,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                                [2U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0xeU)))),2);
    bufp->fullCData(oldp+6317,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                               [2U]),2);
    bufp->fullCData(oldp+6318,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                                [3U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0xeU)))),2);
    bufp->fullCData(oldp+6319,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flags_q_mux__DOT__in_mux
                               [3U]),2);
    bufp->fullBit(oldp+6320,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                    >> 2U))));
    __Vtemp_8[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    __Vtemp_8[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    __Vtemp_8[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    __Vtemp_8[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    __Vtemp_8[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    __Vtemp_8[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    __Vtemp_8[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    __Vtemp_8[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    __Vtemp_8[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    __Vtemp_8[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                     & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                         >> 2U)))));
    bufp->fullWData(oldp+6321,(__Vtemp_8),312);
    bufp->fullBit(oldp+6331,((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o)));
    __Vtemp_10[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    __Vtemp_10[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    __Vtemp_10[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    __Vtemp_10[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    __Vtemp_10[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    __Vtemp_10[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    __Vtemp_10[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    __Vtemp_10[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    __Vtemp_10[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    __Vtemp_10[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o))));
    bufp->fullWData(oldp+6332,(__Vtemp_10),312);
    bufp->fullSData(oldp+6342,((0x1ffU & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                          >> 9U))),9);
    bufp->fullBit(oldp+6343,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 0x15U)))));
    __Vtemp_11[0U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x15U)))));
    __Vtemp_11[1U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x15U)))));
    __Vtemp_11[2U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x15U)))));
    __Vtemp_11[3U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x15U)))));
    __Vtemp_11[4U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x15U)))));
    __Vtemp_11[5U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x15U)))));
    __Vtemp_11[6U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x15U)))));
    __Vtemp_11[7U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x15U)))));
    bufp->fullWData(oldp+6344,(__Vtemp_11),256);
    bufp->fullBit(oldp+6352,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 0x14U)))));
    __Vtemp_12[0U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x14U)))));
    __Vtemp_12[1U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x14U)))));
    __Vtemp_12[2U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x14U)))));
    __Vtemp_12[3U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x14U)))));
    __Vtemp_12[4U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x14U)))));
    __Vtemp_12[5U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x14U)))));
    __Vtemp_12[6U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x14U)))));
    __Vtemp_12[7U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x14U)))));
    bufp->fullWData(oldp+6353,(__Vtemp_12),256);
    bufp->fullCData(oldp+6361,((0xfU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullBit(oldp+6362,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 0x20U)))));
    __Vtemp_13[0U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x20U)))));
    __Vtemp_13[1U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x20U)))));
    __Vtemp_13[2U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x20U)))));
    __Vtemp_13[3U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x20U)))));
    __Vtemp_13[4U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x20U)))));
    __Vtemp_13[5U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x20U)))));
    __Vtemp_13[6U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x20U)))));
    __Vtemp_13[7U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x20U)))));
    bufp->fullWData(oldp+6363,(__Vtemp_13),256);
    bufp->fullBit(oldp+6371,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                            >> 0x1fU)))));
    __Vtemp_14[0U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x1fU)))));
    __Vtemp_14[1U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x1fU)))));
    __Vtemp_14[2U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x1fU)))));
    __Vtemp_14[3U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x1fU)))));
    __Vtemp_14[4U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x1fU)))));
    __Vtemp_14[5U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x1fU)))));
    __Vtemp_14[6U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x1fU)))));
    __Vtemp_14[7U] = (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                               >> 0x1fU)))));
    bufp->fullWData(oldp+6372,(__Vtemp_14),256);
    bufp->fullCData(oldp+6380,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw),5);
    bufp->fullBit(oldp+6381,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid_err));
    bufp->fullBit(oldp+6382,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__done_complete));
    bufp->fullBit(oldp+6383,(((0xaU == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)) 
                              | (0x13U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)))));
    bufp->fullBit(oldp+6384,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error));
    bufp->fullBit(oldp+6385,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error_d));
    bufp->fullBit(oldp+6386,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__state_error_q));
    bufp->fullBit(oldp+6387,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__spurious_secure_wipe_ack_q));
    bufp->fullBit(oldp+6388,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__sec_wipe_err_q));
    bufp->fullBit(oldp+6389,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__mubi_err_q));
    bufp->fullBit(oldp+6390,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall));
    bufp->fullBit(oldp+6391,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_valid_q)) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rnd_req_raw))));
    bufp->fullBit(oldp+6392,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw));
    bufp->fullBit(oldp+6393,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall));
    bufp->fullBit(oldp+6394,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn)))));
    bufp->fullBit(oldp+6395,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_11) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_28))));
    bufp->fullBit(oldp+6396,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_14) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_28))));
    bufp->fullSData(oldp+6397,((0xfffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)),12);
    bufp->fullCData(oldp+6398,((7U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)),3);
    bufp->fullCData(oldp+6399,((7U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                              >> 0x14U)))),3);
    bufp->fullCData(oldp+6400,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_base),4);
    bufp->fullCData(oldp+6401,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_addr_base),3);
    bufp->fullCData(oldp+6402,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_sel_base),8);
    bufp->fullCData(oldp+6403,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_addr_bignum),4);
    bufp->fullBit(oldp+6404,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn));
    bufp->fullBit(oldp+6405,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn));
    bufp->fullBit(oldp+6406,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn) 
                              & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                                 & (0x7d8U != (0xfffU 
                                               & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base))))));
    bufp->fullBit(oldp+6407,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset))));
    bufp->fullBit(oldp+6408,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset))));
    bufp->fullBit(oldp+6409,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_store_req_raw));
    bufp->fullBit(oldp+6410,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                              & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
                                 & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                                    | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn))))));
    bufp->fullBit(oldp+6411,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn)))));
    bufp->fullBit(oldp+6412,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_base) 
                                 & (1U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl))))));
    bufp->fullBit(oldp+6413,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                              & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_base) 
                                  & (1U == (0x1fU & 
                                            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U]))) 
                                 | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_base) 
                                    & (1U == (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                                              >> 0x1bU)))))));
    bufp->fullBit(oldp+6414,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                               & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn) 
                                  | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn))) 
                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q))));
    bufp->fullBit(oldp+6415,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rnd_req_raw));
    bufp->fullBit(oldp+6416,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_rd_en_a_raw));
    bufp->fullBit(oldp+6417,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_rd_en_b_raw));
    bufp->fullBit(oldp+6418,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_base_wr_en_raw));
    bufp->fullBit(oldp+6419,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req));
    bufp->fullSData(oldp+6420,((0xfffU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                  >> 0x14U)))),12);
    bufp->fullBit(oldp+6421,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr));
    bufp->fullBit(oldp+6422,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_illegal_addr));
    bufp->fullBit(oldp+6423,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                               ? (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_illegal_addr)
                               : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr))));
    bufp->fullBit(oldp+6424,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                                ? (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_illegal_addr)
                                : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__csr_illegal_addr)) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                 & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rd_insn) 
                                    | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_wr_insn))))));
    bufp->fullBit(oldp+6425,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn))
                               ? (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall)
                               : ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw) 
                                  | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_store_req_raw)))));
    bufp->fullBit(oldp+6426,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_static));
    bufp->fullBit(oldp+6427,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid));
    bufp->fullBit(oldp+6428,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_q));
    bufp->fullBit(oldp+6429,((3U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_bignum))));
    bufp->fullBit(oldp+6430,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn))));
    bufp->fullCData(oldp+6431,(((3U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_bignum))
                                 ? 0xffU : (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_rd_insn))
                                             ? (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__ispr_word_sel_base)
                                             : 0U))),8);
    bufp->fullBit(oldp+6432,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                 & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid)) 
                                    & (0x7d8U != (0xfffU 
                                                  & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base)))))));
    bufp->fullCData(oldp+6433,((3U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_wr_en_unbuf)))),2);
    bufp->fullSData(oldp+6434,((0xfffU & (- (IData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q))))),12);
    bufp->fullBit(oldp+6435,((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    bufp->fullBit(oldp+6436,((8U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    bufp->fullBit(oldp+6437,(((8U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req))));
    bufp->fullBit(oldp+6438,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_cnt_err));
    bufp->fullCData(oldp+6439,((7U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                      - (IData)(1U)))),3);
    bufp->fullIData(oldp+6440,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[0]),32);
    bufp->fullIData(oldp+6441,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[1]),32);
    bufp->fullIData(oldp+6442,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[2]),32);
    bufp->fullIData(oldp+6443,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[3]),32);
    bufp->fullIData(oldp+6444,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[4]),32);
    bufp->fullIData(oldp+6445,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[5]),32);
    bufp->fullIData(oldp+6446,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[6]),32);
    bufp->fullIData(oldp+6447,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters[7]),32);
    bufp->fullCData(oldp+6448,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__err_q) 
                                 << 7U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__err_q) 
                                            << 6U) 
                                           | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__err_q) 
                                               << 5U) 
                                              | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__err_q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__err_q) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__err_q) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__err_q) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__err_q))))))))),8);
    bufp->fullCData(oldp+6449,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_d),8);
    bufp->fullCData(oldp+6450,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_q),8);
    bufp->fullIData(oldp+6451,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                                [(7U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                        - (IData)(1U)))] 
                                - (IData)(1U))),32);
    bufp->fullCData(oldp+6452,((7U & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)))),3);
    bufp->fullIData(oldp+6453,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),32);
    bufp->fullBit(oldp+6454,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__err_q));
    bufp->fullQData(oldp+6455,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))),64);
    bufp->fullQData(oldp+6457,((0x1ffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                  + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))),33);
    bufp->fullBit(oldp+6459,((0xffffffffULL != (0x1ffffffffULL 
                                                & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))));
    bufp->fullIData(oldp+6460,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__0__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),32);
    bufp->fullIData(oldp+6461,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),32);
    bufp->fullBit(oldp+6462,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__err_q));
    bufp->fullQData(oldp+6463,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))),64);
    bufp->fullQData(oldp+6465,((0x1ffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                  + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))),33);
    bufp->fullBit(oldp+6467,((0xffffffffULL != (0x1ffffffffULL 
                                                & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))));
    bufp->fullIData(oldp+6468,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__1__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),32);
    bufp->fullIData(oldp+6469,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),32);
    bufp->fullBit(oldp+6470,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__err_q));
    bufp->fullQData(oldp+6471,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))),64);
    bufp->fullQData(oldp+6473,((0x1ffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                  + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))),33);
    bufp->fullBit(oldp+6475,((0xffffffffULL != (0x1ffffffffULL 
                                                & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))));
    bufp->fullIData(oldp+6476,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__2__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),32);
    bufp->fullIData(oldp+6477,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),32);
    bufp->fullBit(oldp+6478,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__err_q));
    bufp->fullQData(oldp+6479,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))),64);
    bufp->fullQData(oldp+6481,((0x1ffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                  + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))),33);
    bufp->fullBit(oldp+6483,((0xffffffffULL != (0x1ffffffffULL 
                                                & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))));
    bufp->fullIData(oldp+6484,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__3__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),32);
    bufp->fullIData(oldp+6485,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),32);
    bufp->fullBit(oldp+6486,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__err_q));
    bufp->fullQData(oldp+6487,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))),64);
    bufp->fullQData(oldp+6489,((0x1ffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                  + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))),33);
    bufp->fullBit(oldp+6491,((0xffffffffULL != (0x1ffffffffULL 
                                                & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))));
    bufp->fullIData(oldp+6492,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__4__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),32);
    bufp->fullIData(oldp+6493,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),32);
    bufp->fullBit(oldp+6494,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__err_q));
    bufp->fullQData(oldp+6495,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))),64);
    bufp->fullQData(oldp+6497,((0x1ffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                  + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))),33);
    bufp->fullBit(oldp+6499,((0xffffffffULL != (0x1ffffffffULL 
                                                & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))));
    bufp->fullIData(oldp+6500,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__5__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),32);
    bufp->fullIData(oldp+6501,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),32);
    bufp->fullBit(oldp+6502,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__err_q));
    bufp->fullQData(oldp+6503,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))),64);
    bufp->fullQData(oldp+6505,((0x1ffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                  + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))),33);
    bufp->fullBit(oldp+6507,((0xffffffffULL != (0x1ffffffffULL 
                                                & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))));
    bufp->fullIData(oldp+6508,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__6__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),32);
    bufp->fullIData(oldp+6509,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),32);
    bufp->fullBit(oldp+6510,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__err_q));
    bufp->fullQData(oldp+6511,((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))),64);
    bufp->fullQData(oldp+6513,((0x1ffffffffULL & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                  + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))),33);
    bufp->fullBit(oldp+6515,((0xffffffffULL != (0x1ffffffffULL 
                                                & ((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                   + (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))));
    bufp->fullIData(oldp+6516,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__g_loop_counters__BRA__7__KET____DOT__u_loop_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),32);
    bufp->fullCData(oldp+6517,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),4);
    bufp->fullBit(oldp+6518,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__err_q));
    bufp->fullBit(oldp+6519,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__cnt_err_q));
    bufp->fullBit(oldp+6520,((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    bufp->fullCData(oldp+6521,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                                 << 4U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))),8);
    bufp->fullCData(oldp+6522,((0x1fU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                         + (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))),5);
    bufp->fullBit(oldp+6523,((0xfU != (0x1fU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                + (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    bufp->fullCData(oldp+6524,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),4);
    bufp->fullBit(oldp+6525,((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o))));
    __Vtemp_16[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_16[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_16[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_16[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_16[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_16[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_16[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_16[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_16[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_16[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    bufp->fullWData(oldp+6526,(__Vtemp_16),312);
    bufp->fullBit(oldp+6536,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)))));
    bufp->fullBit(oldp+6537,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)))));
    bufp->fullBit(oldp+6538,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__illegal_insn));
    bufp->fullBit(oldp+6539,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_base));
    bufp->fullBit(oldp+6540,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_bignum));
    bufp->fullCData(oldp+6541,((0x1fU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                 >> 0xfU)))),5);
    bufp->fullCData(oldp+6542,((0x1fU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                 >> 0x14U)))),5);
    bufp->fullCData(oldp+6543,((0x1fU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                 >> 7U)))),5);
    bufp->fullCData(oldp+6544,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode),7);
    bufp->fullCData(oldp+6545,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__opcode_alu),7);
    bufp->fullBit(oldp+6546,((IData)((0ULL != (0x1ff8f80ULL 
                                               & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q)))));
    bufp->fullCData(oldp+6547,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_mux_sel_base),3);
    bufp->fullCData(oldp+6548,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__shift_amt_mux_sel_bignum),2);
    bufp->fullIData(oldp+6549,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_i_type_base),32);
    bufp->fullIData(oldp+6550,((((- (IData)((1U & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0x1fU))))) 
                                 << 0xcU) | ((0xfe0U 
                                              & ((IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0x19U)) 
                                                 << 5U)) 
                                             | (0x1fU 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 7U)))))),32);
    bufp->fullIData(oldp+6551,((((- (IData)((1U & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0x1fU))))) 
                                 << 0xdU) | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 0x1fU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                             >> 7U)) 
                                                    << 0xbU)) 
                                                | ((0x7e0U 
                                                    & ((IData)(
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                >> 0x19U)) 
                                                       << 5U)) 
                                                   | (0x1eU 
                                                      & ((IData)(
                                                                 (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                  >> 8U)) 
                                                         << 1U))))))),32);
    bufp->fullIData(oldp+6552,(((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                         >> 0xcU)) 
                                << 0xcU)),32);
    bufp->fullIData(oldp+6553,((((- (IData)((1U & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0x1fU))))) 
                                 << 0x14U) | ((0xff000U 
                                               & ((IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0xcU)) 
                                                  << 0xcU)) 
                                              | ((0x800U 
                                                  & ((IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                              >> 0x14U)) 
                                                     << 0xbU)) 
                                                 | (0x7feU 
                                                    & ((IData)(
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                                >> 0x15U)) 
                                                       << 1U)))))),32);
    bufp->fullIData(oldp+6554,(((0x3e0U & ((IData)(
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                    >> 0xfU)) 
                                           << 5U)) 
                                | (0x1fU & (IData)(
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+6555,((((- (IData)((1U & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                           >> 0xbU))))) 
                                 << 0xfU) | ((0x7000U 
                                              & ((IData)(
                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                          >> 9U)) 
                                                 << 0xcU)) 
                                             | (0xfe0U 
                                                & ((IData)(
                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                            >> 0x19U)) 
                                                   << 5U))))),32);
    bufp->fullCData(oldp+6556,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_base),4);
    bufp->fullCData(oldp+6557,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_operator_bignum),4);
    bufp->fullCData(oldp+6558,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base),2);
    bufp->fullBit(oldp+6559,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_base));
    bufp->fullBit(oldp+6560,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_b_mux_sel_bignum));
    bufp->fullBit(oldp+6561,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__comparison_operator_base));
    bufp->fullCData(oldp+6562,((3U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                              >> 0x19U)))),2);
    bufp->fullCData(oldp+6563,((3U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                              >> 0x1bU)))),2);
    bufp->fullBit(oldp+6564,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                            >> 0x1dU)))));
    bufp->fullCData(oldp+6565,((3U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                              >> 0xdU)))),2);
    bufp->fullBit(oldp+6566,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+6567,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+6568,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_en_bignum));
    bufp->fullBit(oldp+6569,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_base));
    bufp->fullBit(oldp+6570,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_base));
    bufp->fullBit(oldp+6571,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_bignum));
    bufp->fullBit(oldp+6572,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_bignum));
    bufp->fullBit(oldp+6573,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum));
    bufp->fullBit(oldp+6574,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum));
    bufp->fullBit(oldp+6575,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum));
    __Vtemp_17[0U] = (0x3ffU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                        >> 0x14U)));
    __Vtemp_17[1U] = 0U;
    __Vtemp_17[2U] = 0U;
    __Vtemp_17[3U] = 0U;
    __Vtemp_17[4U] = 0U;
    __Vtemp_17[5U] = 0U;
    __Vtemp_17[6U] = 0U;
    __Vtemp_17[7U] = 0U;
    bufp->fullWData(oldp+6576,(__Vtemp_17),256);
    bufp->fullCData(oldp+6584,((0xf8U & ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                  >> 0x19U)) 
                                         << 3U))),8);
    bufp->fullCData(oldp+6585,(((0xfeU & ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                                   >> 0x19U)) 
                                          << 1U)) | 
                                (1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                               >> 0xeU))))),8);
    bufp->fullBit(oldp+6586,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+6587,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_flag_en_bignum));
    bufp->fullBit(oldp+6588,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__mac_flag_en_bignum));
    bufp->fullCData(oldp+6589,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_base),3);
    bufp->fullCData(oldp+6590,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_wdata_sel_bignum),3);
    bufp->fullBit(oldp+6591,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__d_inc_bignum));
    bufp->fullBit(oldp+6592,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__a_inc_bignum));
    bufp->fullBit(oldp+6593,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__a_wlen_word_inc_bignum));
    bufp->fullBit(oldp+6594,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__b_inc_bignum));
    bufp->fullBit(oldp+6595,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__sel_insn_bignum));
    bufp->fullBit(oldp+6596,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ecall_insn));
    bufp->fullBit(oldp+6597,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn));
    bufp->fullBit(oldp+6598,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn));
    bufp->fullBit(oldp+6599,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn));
    bufp->fullBit(oldp+6600,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn));
    bufp->fullBit(oldp+6601,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__loop_insn));
    bufp->fullBit(oldp+6602,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rd_insn));
    bufp->fullBit(oldp+6603,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_wr_insn));
    bufp->fullBit(oldp+6604,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rs_insn));
    bufp->fullIData(oldp+6605,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__imm_b_base),32);
    bufp->fullCData(oldp+6606,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_shift_amt_bignum),8);
    bufp->fullQData(oldp+6607,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q),39);
    bufp->fullCData(oldp+6609,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_intg_error_vec),2);
    bufp->fullBit(oldp+6610,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_kill_q));
    bufp->fullIData(oldp+6611,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__data_o),32);
    bufp->fullCData(oldp+6612,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_insn_intg_check__DOT__syndrome_o),7);
    bufp->fullBit(oldp+6613,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__expected_acc_rd_en));
    bufp->fullBit(oldp+6614,((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))));
    __Vtemp_18[0U] = (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))));
    __Vtemp_18[1U] = (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))));
    __Vtemp_18[2U] = (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))));
    __Vtemp_18[3U] = (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))));
    __Vtemp_18[4U] = (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))));
    __Vtemp_18[5U] = (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))));
    __Vtemp_18[6U] = (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))));
    __Vtemp_18[7U] = (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))));
    bufp->fullWData(oldp+6615,(__Vtemp_18),256);
    bufp->fullBit(oldp+6623,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                    >> 1U))));
    __Vtemp_19[0U] = (- (IData)((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                       >> 1U))));
    __Vtemp_19[1U] = (- (IData)((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                       >> 1U))));
    __Vtemp_19[2U] = (- (IData)((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                       >> 1U))));
    __Vtemp_19[3U] = (- (IData)((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                       >> 1U))));
    __Vtemp_19[4U] = (- (IData)((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                       >> 1U))));
    __Vtemp_19[5U] = (- (IData)((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                       >> 1U))));
    __Vtemp_19[6U] = (- (IData)((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                       >> 1U))));
    __Vtemp_19[7U] = (- (IData)((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o) 
                                       >> 1U))));
    bufp->fullWData(oldp+6624,(__Vtemp_19),256);
    bufp->fullBit(oldp+6632,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_a));
    bufp->fullBit(oldp+6633,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_b));
    bufp->fullBit(oldp+6634,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_reqd));
    bufp->fullBit(oldp+6635,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_a_err));
    bufp->fullBit(oldp+6636,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__pop_stack_b_err));
    bufp->fullBit(oldp+6637,((1U == (0x1fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U]))));
    bufp->fullBit(oldp+6638,((1U == (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+6639,((8U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    bufp->fullBit(oldp+6640,((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    bufp->fullCData(oldp+6641,((7U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                      - (IData)(1U)))),3);
    bufp->fullCData(oldp+6642,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),4);
    bufp->fullBit(oldp+6643,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__err_q));
    bufp->fullBit(oldp+6644,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__cnt_err_q));
    bufp->fullBit(oldp+6645,((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    bufp->fullCData(oldp+6646,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                                 << 4U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))),8);
    bufp->fullCData(oldp+6647,((0x1fU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                         + (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))),5);
    bufp->fullBit(oldp+6648,((0xfU != (0x1fU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                + (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))));
    bufp->fullCData(oldp+6649,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),4);
    bufp->fullBit(oldp+6650,((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U])));
    __Vtemp_21[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    __Vtemp_21[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    __Vtemp_21[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    __Vtemp_21[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    __Vtemp_21[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    __Vtemp_21[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    __Vtemp_21[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    __Vtemp_21[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    __Vtemp_21[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    __Vtemp_21[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U]))));
    bufp->fullWData(oldp+6651,(__Vtemp_21),312);
    bufp->fullBit(oldp+6661,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0xaU))));
    __Vtemp_23[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    __Vtemp_23[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    __Vtemp_23[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    __Vtemp_23[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    __Vtemp_23[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    __Vtemp_23[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    __Vtemp_23[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    __Vtemp_23[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    __Vtemp_23[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    __Vtemp_23[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xaU)))));
    bufp->fullWData(oldp+6662,(__Vtemp_23),312);
    bufp->fullBit(oldp+6672,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0xbU))));
    __Vtemp_25[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    __Vtemp_25[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    __Vtemp_25[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    __Vtemp_25[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    __Vtemp_25[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    __Vtemp_25[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    __Vtemp_25[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    __Vtemp_25[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    __Vtemp_25[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    __Vtemp_25[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xbU)))));
    bufp->fullWData(oldp+6673,(__Vtemp_25),312);
    bufp->fullBit(oldp+6683,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0xcU))));
    __Vtemp_27[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    __Vtemp_27[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    __Vtemp_27[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    __Vtemp_27[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    __Vtemp_27[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    __Vtemp_27[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    __Vtemp_27[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    __Vtemp_27[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    __Vtemp_27[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    __Vtemp_27[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xcU)))));
    bufp->fullWData(oldp+6684,(__Vtemp_27),312);
    bufp->fullBit(oldp+6694,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0xdU))));
    __Vtemp_29[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    __Vtemp_29[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    __Vtemp_29[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    __Vtemp_29[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    __Vtemp_29[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    __Vtemp_29[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    __Vtemp_29[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    __Vtemp_29[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    __Vtemp_29[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    __Vtemp_29[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xdU)))));
    bufp->fullWData(oldp+6695,(__Vtemp_29),312);
    bufp->fullBit(oldp+6705,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0xeU))));
    __Vtemp_31[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    __Vtemp_31[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    __Vtemp_31[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    __Vtemp_31[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    __Vtemp_31[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    __Vtemp_31[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    __Vtemp_31[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    __Vtemp_31[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    __Vtemp_31[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    __Vtemp_31[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xeU)))));
    bufp->fullWData(oldp+6706,(__Vtemp_31),312);
    bufp->fullBit(oldp+6716,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0xfU))));
    __Vtemp_33[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    __Vtemp_33[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    __Vtemp_33[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    __Vtemp_33[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    __Vtemp_33[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    __Vtemp_33[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    __Vtemp_33[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    __Vtemp_33[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    __Vtemp_33[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    __Vtemp_33[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0xfU)))));
    bufp->fullWData(oldp+6717,(__Vtemp_33),312);
    bufp->fullBit(oldp+6727,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x10U))));
    __Vtemp_35[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    __Vtemp_35[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    __Vtemp_35[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    __Vtemp_35[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    __Vtemp_35[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    __Vtemp_35[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    __Vtemp_35[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    __Vtemp_35[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    __Vtemp_35[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    __Vtemp_35[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x10U)))));
    bufp->fullWData(oldp+6728,(__Vtemp_35),312);
    bufp->fullBit(oldp+6738,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x11U))));
    __Vtemp_37[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    __Vtemp_37[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    __Vtemp_37[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    __Vtemp_37[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    __Vtemp_37[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    __Vtemp_37[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    __Vtemp_37[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    __Vtemp_37[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    __Vtemp_37[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    __Vtemp_37[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x11U)))));
    bufp->fullWData(oldp+6739,(__Vtemp_37),312);
    bufp->fullBit(oldp+6749,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x12U))));
    __Vtemp_39[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    __Vtemp_39[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    __Vtemp_39[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    __Vtemp_39[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    __Vtemp_39[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    __Vtemp_39[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    __Vtemp_39[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    __Vtemp_39[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    __Vtemp_39[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    __Vtemp_39[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x12U)))));
    bufp->fullWData(oldp+6750,(__Vtemp_39),312);
    bufp->fullBit(oldp+6760,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x13U))));
    __Vtemp_41[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    __Vtemp_41[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    __Vtemp_41[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    __Vtemp_41[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    __Vtemp_41[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    __Vtemp_41[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    __Vtemp_41[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    __Vtemp_41[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    __Vtemp_41[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    __Vtemp_41[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x13U)))));
    bufp->fullWData(oldp+6761,(__Vtemp_41),312);
    bufp->fullBit(oldp+6771,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 1U))));
    __Vtemp_43[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    __Vtemp_43[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    __Vtemp_43[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    __Vtemp_43[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    __Vtemp_43[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    __Vtemp_43[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    __Vtemp_43[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    __Vtemp_43[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    __Vtemp_43[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    __Vtemp_43[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 1U)))));
    bufp->fullWData(oldp+6772,(__Vtemp_43),312);
    bufp->fullBit(oldp+6782,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x14U))));
    __Vtemp_45[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    __Vtemp_45[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    __Vtemp_45[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    __Vtemp_45[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    __Vtemp_45[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    __Vtemp_45[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    __Vtemp_45[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    __Vtemp_45[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    __Vtemp_45[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    __Vtemp_45[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x14U)))));
    bufp->fullWData(oldp+6783,(__Vtemp_45),312);
    bufp->fullBit(oldp+6793,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x15U))));
    __Vtemp_47[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    __Vtemp_47[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    __Vtemp_47[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    __Vtemp_47[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    __Vtemp_47[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    __Vtemp_47[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    __Vtemp_47[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    __Vtemp_47[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    __Vtemp_47[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    __Vtemp_47[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x15U)))));
    bufp->fullWData(oldp+6794,(__Vtemp_47),312);
    bufp->fullBit(oldp+6804,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x16U))));
    __Vtemp_49[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    __Vtemp_49[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    __Vtemp_49[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    __Vtemp_49[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    __Vtemp_49[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    __Vtemp_49[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    __Vtemp_49[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    __Vtemp_49[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    __Vtemp_49[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    __Vtemp_49[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x16U)))));
    bufp->fullWData(oldp+6805,(__Vtemp_49),312);
    bufp->fullBit(oldp+6815,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x17U))));
    __Vtemp_51[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    __Vtemp_51[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    __Vtemp_51[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    __Vtemp_51[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    __Vtemp_51[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    __Vtemp_51[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    __Vtemp_51[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    __Vtemp_51[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    __Vtemp_51[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    __Vtemp_51[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x17U)))));
    bufp->fullWData(oldp+6816,(__Vtemp_51),312);
    bufp->fullBit(oldp+6826,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x18U))));
    __Vtemp_53[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    __Vtemp_53[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    __Vtemp_53[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    __Vtemp_53[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    __Vtemp_53[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    __Vtemp_53[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    __Vtemp_53[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    __Vtemp_53[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    __Vtemp_53[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    __Vtemp_53[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x18U)))));
    bufp->fullWData(oldp+6827,(__Vtemp_53),312);
    bufp->fullBit(oldp+6837,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x19U))));
    __Vtemp_55[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    __Vtemp_55[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    __Vtemp_55[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    __Vtemp_55[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    __Vtemp_55[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    __Vtemp_55[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    __Vtemp_55[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    __Vtemp_55[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    __Vtemp_55[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    __Vtemp_55[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x19U)))));
    bufp->fullWData(oldp+6838,(__Vtemp_55),312);
    bufp->fullBit(oldp+6848,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1aU))));
    __Vtemp_57[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    __Vtemp_57[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    __Vtemp_57[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    __Vtemp_57[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    __Vtemp_57[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    __Vtemp_57[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    __Vtemp_57[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    __Vtemp_57[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    __Vtemp_57[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    __Vtemp_57[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1aU)))));
    bufp->fullWData(oldp+6849,(__Vtemp_57),312);
    bufp->fullBit(oldp+6859,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1bU))));
    __Vtemp_59[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    __Vtemp_59[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    __Vtemp_59[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    __Vtemp_59[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    __Vtemp_59[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    __Vtemp_59[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    __Vtemp_59[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    __Vtemp_59[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    __Vtemp_59[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    __Vtemp_59[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1bU)))));
    bufp->fullWData(oldp+6860,(__Vtemp_59),312);
    bufp->fullBit(oldp+6870,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1cU))));
    __Vtemp_61[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    __Vtemp_61[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    __Vtemp_61[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    __Vtemp_61[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    __Vtemp_61[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    __Vtemp_61[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    __Vtemp_61[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    __Vtemp_61[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    __Vtemp_61[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    __Vtemp_61[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1cU)))));
    bufp->fullWData(oldp+6871,(__Vtemp_61),312);
    bufp->fullBit(oldp+6881,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1dU))));
    __Vtemp_63[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    __Vtemp_63[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    __Vtemp_63[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    __Vtemp_63[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    __Vtemp_63[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    __Vtemp_63[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    __Vtemp_63[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    __Vtemp_63[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    __Vtemp_63[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    __Vtemp_63[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1dU)))));
    bufp->fullWData(oldp+6882,(__Vtemp_63),312);
    bufp->fullBit(oldp+6892,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 2U))));
    __Vtemp_65[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    __Vtemp_65[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    __Vtemp_65[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    __Vtemp_65[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    __Vtemp_65[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    __Vtemp_65[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    __Vtemp_65[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    __Vtemp_65[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    __Vtemp_65[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    __Vtemp_65[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 2U)))));
    bufp->fullWData(oldp+6893,(__Vtemp_65),312);
    bufp->fullBit(oldp+6903,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1eU))));
    __Vtemp_67[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    __Vtemp_67[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    __Vtemp_67[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    __Vtemp_67[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    __Vtemp_67[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    __Vtemp_67[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    __Vtemp_67[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    __Vtemp_67[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    __Vtemp_67[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    __Vtemp_67[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 0x1eU)))));
    bufp->fullWData(oldp+6904,(__Vtemp_67),312);
    bufp->fullBit(oldp+6914,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                              >> 0x1fU)));
    __Vtemp_69[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    __Vtemp_69[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    __Vtemp_69[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    __Vtemp_69[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    __Vtemp_69[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    __Vtemp_69[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    __Vtemp_69[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    __Vtemp_69[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    __Vtemp_69[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    __Vtemp_69[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 0x1fU))));
    bufp->fullWData(oldp+6915,(__Vtemp_69),312);
    bufp->fullBit(oldp+6925,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 3U))));
    __Vtemp_71[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    __Vtemp_71[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    __Vtemp_71[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    __Vtemp_71[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    __Vtemp_71[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    __Vtemp_71[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    __Vtemp_71[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    __Vtemp_71[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    __Vtemp_71[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    __Vtemp_71[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 3U)))));
    bufp->fullWData(oldp+6926,(__Vtemp_71),312);
    bufp->fullBit(oldp+6936,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 4U))));
    __Vtemp_73[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    __Vtemp_73[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    __Vtemp_73[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    __Vtemp_73[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    __Vtemp_73[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    __Vtemp_73[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    __Vtemp_73[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    __Vtemp_73[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    __Vtemp_73[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    __Vtemp_73[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 4U)))));
    bufp->fullWData(oldp+6937,(__Vtemp_73),312);
    bufp->fullBit(oldp+6947,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 5U))));
    __Vtemp_75[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    __Vtemp_75[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    __Vtemp_75[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    __Vtemp_75[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    __Vtemp_75[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    __Vtemp_75[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    __Vtemp_75[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    __Vtemp_75[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    __Vtemp_75[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    __Vtemp_75[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 5U)))));
    bufp->fullWData(oldp+6948,(__Vtemp_75),312);
    bufp->fullBit(oldp+6958,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 6U))));
    __Vtemp_77[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    __Vtemp_77[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    __Vtemp_77[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    __Vtemp_77[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    __Vtemp_77[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    __Vtemp_77[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    __Vtemp_77[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    __Vtemp_77[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    __Vtemp_77[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    __Vtemp_77[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 6U)))));
    bufp->fullWData(oldp+6959,(__Vtemp_77),312);
    bufp->fullBit(oldp+6969,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 7U))));
    __Vtemp_79[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    __Vtemp_79[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    __Vtemp_79[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    __Vtemp_79[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    __Vtemp_79[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    __Vtemp_79[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    __Vtemp_79[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    __Vtemp_79[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    __Vtemp_79[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    __Vtemp_79[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 7U)))));
    bufp->fullWData(oldp+6970,(__Vtemp_79),312);
    bufp->fullBit(oldp+6980,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 8U))));
    __Vtemp_81[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    __Vtemp_81[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    __Vtemp_81[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    __Vtemp_81[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    __Vtemp_81[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    __Vtemp_81[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    __Vtemp_81[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    __Vtemp_81[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    __Vtemp_81[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    __Vtemp_81[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 8U)))));
    bufp->fullWData(oldp+6981,(__Vtemp_81),312);
    bufp->fullBit(oldp+6991,((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                    >> 9U))));
    __Vtemp_83[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    __Vtemp_83[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    __Vtemp_83[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    __Vtemp_83[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    __Vtemp_83[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    __Vtemp_83[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    __Vtemp_83[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    __Vtemp_83[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    __Vtemp_83[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    __Vtemp_83[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U] 
                                          >> 9U)))));
    bufp->fullWData(oldp+6992,(__Vtemp_83),312);
    bufp->fullBit(oldp+7002,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellinp__u_rf_we_onehot_enc__en_i));
    bufp->fullBit(oldp+7003,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_data_en));
    bufp->fullBit(oldp+7004,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_complete));
    bufp->fullBit(oldp+7005,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__rnd_req_queued_q));
    bufp->fullBit(oldp+7006,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__controller_start) 
                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_q)) 
                              | ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_complete)) 
                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_data_ignore_q)))));
    bufp->fullBit(oldp+7007,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_data_ignore_q));
    bufp->fullBit(oldp+7008,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__xoshiro_seed_en));
    bufp->fullWData(oldp+7009,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q),256);
    bufp->fullCData(oldp+7017,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_state_regs__DOT__state_raw),7);
    bufp->fullBit(oldp+7018,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_q));
    bufp->fullBit(oldp+7019,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_d));
    bufp->fullCData(oldp+7020,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_wipe_after_urnd_refresh_flop__DOT__mubi_int),4);
    bufp->fullBit(oldp+7021,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__state_error_q));
    bufp->fullBit(oldp+7022,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__mubi_err_q));
    bufp->fullBit(oldp+7023,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__urnd_reseed_err_q));
    bufp->fullBit(oldp+7024,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__secure_wipe_error_q));
    bufp->fullCData(oldp+7025,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__addr_cnt_q),6);
    bufp->fullBit(oldp+7026,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__spurious_urnd_ack_error));
    bufp->fullBit(oldp+7027,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__rma_request));
    bufp->fullBit(oldp+7028,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__should_lock_q));
    bufp->fullCData(oldp+7029,((0xfU & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__u_prim_mubi4_sender_rma_ack__DOT__mubi_int)))),4);
    bufp->fullCData(oldp+7030,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_state_regs__DOT__state_raw),5);
    bufp->fullCData(oldp+7031,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__state_d),5);
    bufp->fullBit(oldp+7032,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_scramble_req_pending_q));
    bufp->fullBit(oldp+7033,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_scramble_req_pending_q));
    bufp->fullBit(oldp+7034,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_en));
    bufp->fullBit(oldp+7035,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_en));
    bufp->fullBit(oldp+7036,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__otp_key_req));
    bufp->fullBit(oldp+7037,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__otp_key_ack));
    bufp->fullBit(oldp+7038,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    bufp->fullBit(oldp+7039,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
    bufp->fullBit(oldp+7040,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack));
    bufp->fullBit(oldp+7041,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake));
    bufp->fullBit(oldp+7042,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq));
    bufp->fullBit(oldp+7043,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__word_req));
    bufp->fullBit(oldp+7044,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__word_ack));
    bufp->fullBit(oldp+7045,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__gen_rep_chk__DOT__chk_rep));
    bufp->fullBit(oldp+7046,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__clr_q)) 
                              & (8U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q)))));
    bufp->fullCData(oldp+7047,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q),4);
    bufp->fullBit(oldp+7048,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__load_data));
    bufp->fullBit(oldp+7049,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__clr_q));
    bufp->fullBit(oldp+7050,(((IData)(vlSelf->imem_test__DOT__dut__DOT__edn_rnd_ack) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__clr_q))));
    bufp->fullCData(oldp+7051,((((IData)(vlSelf->imem_test__DOT__dut__DOT__edn_rnd_ack) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__clr_q))
                                 ? 0U : (0xfU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q) 
                                                 + (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__load_data))))),4);
    bufp->fullBit(oldp+7052,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    bufp->fullBit(oldp+7053,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
    bufp->fullBit(oldp+7054,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d));
    bufp->fullBit(oldp+7055,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    bufp->fullBit(oldp+7056,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack));
    bufp->fullBit(oldp+7057,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake));
    bufp->fullBit(oldp+7058,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq));
    bufp->fullBit(oldp+7059,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__fips_q));
    bufp->fullBit(oldp+7060,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__word_req));
    bufp->fullBit(oldp+7061,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__word_ack));
    bufp->fullBit(oldp+7062,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q)) 
                              & (8U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q)))));
    bufp->fullCData(oldp+7063,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q),4);
    bufp->fullBit(oldp+7064,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__load_data));
    bufp->fullBit(oldp+7065,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q));
    bufp->fullBit(oldp+7066,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q))));
    bufp->fullCData(oldp+7067,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_reseed_ack) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__clr_q))
                                 ? 0U : (0xfU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__depth_q) 
                                                 + (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__load_data))))),4);
    bufp->fullBit(oldp+7068,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns));
    bufp->fullBit(oldp+7069,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
    bufp->fullBit(oldp+7070,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d));
    bufp->fullBit(oldp+7071,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    bufp->fullBit(oldp+7072,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack));
    bufp->fullBit(oldp+7073,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake));
    bufp->fullBit(oldp+7074,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq));
    bufp->fullCData(oldp+7075,(vlSelf->imem_test__DOT__dut__DOT____Vcellinp__u_prim_mubi4_sender__mubi_i),4);
    bufp->fullWData(oldp+7076,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h),66);
    bufp->fullBit(oldp+7079,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_q));
    bufp->fullCData(oldp+7080,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_status__DOT__q),8);
    bufp->fullBit(oldp+7081,((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q))));
    bufp->fullBit(oldp+7082,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+7083,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+7084,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+7085,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 4U))));
    bufp->fullBit(oldp+7086,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 5U))));
    bufp->fullBit(oldp+7087,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 6U))));
    bufp->fullBit(oldp+7088,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 7U))));
    bufp->fullBit(oldp+7089,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 8U))));
    bufp->fullBit(oldp+7090,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 9U))));
    bufp->fullBit(oldp+7091,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+7092,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+7093,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+7094,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+7095,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+7096,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+7097,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_imem_intg_violation__DOT__q));
    bufp->fullBit(oldp+7098,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_dmem_intg_violation__DOT__q));
    bufp->fullBit(oldp+7099,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_reg_intg_violation__DOT__q));
    bufp->fullBit(oldp+7100,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bus_intg_violation__DOT__q));
    bufp->fullBit(oldp+7101,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__q));
    bufp->fullBit(oldp+7102,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_illegal_bus_access__DOT__q));
    bufp->fullBit(oldp+7103,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_lifecycle_escalation__DOT__q));
    bufp->fullBit(oldp+7104,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_fatal_software__DOT__q));
    bufp->fullBit(oldp+7105,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
    bufp->fullIData(oldp+7106,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q),32);
    bufp->fullBit(oldp+7107,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q));
    bufp->fullCData(oldp+7108,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q),8);
    bufp->fullCData(oldp+7109,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q),2);
    bufp->fullCData(oldp+7110,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q),3);
    __Vtemp_85[0U] = (IData)((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                               << 0x39U) | (((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
    __Vtemp_85[1U] = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                       << 0x1eU) | (IData)(((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                              << 0x39U) 
                                             | (((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                       << 1U) 
                                                                      | (1U 
                                                                         & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                                            >> 0x20U)));
    __Vtemp_85[2U] = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                       << 1U) | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                                 >> 2U));
    bufp->fullWData(oldp+7111,(__Vtemp_85),66);
    bufp->fullCData(oldp+7114,((0x7fU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
                                                 >> 0x20U)))),7);
    bufp->fullBit(oldp+7115,((1U & (~ ((((VL_REDXOR_4(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                                          ^ VL_REDXOR_2(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                         ^ VL_REDXOR_8(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        ^ VL_REDXOR_32(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                       ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q))))));
    bufp->fullIData(oldp+7116,((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o)),32);
    bufp->fullQData(oldp+7117,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o),39);
    bufp->fullSData(oldp+7119,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__num_req_outstanding),9);
    bufp->fullCData(oldp+7120,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__dev_select_outstanding),2);
    bufp->fullWData(oldp+7121,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT____Vcellout__gen_err_resp__DOT__err_resp__tl_h_o),66);
    bufp->fullCData(oldp+7124,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_opcode),3);
    bufp->fullCData(oldp+7125,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_source),8);
    bufp->fullCData(oldp+7126,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_size),2);
    bufp->fullBit(oldp+7127,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending));
    bufp->fullCData(oldp+7128,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__err_instr_type),4);
    bufp->fullWData(oldp+7129,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int),66);
    bufp->fullCData(oldp+7132,((0x7fU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                 >> 0x39U)))),7);
    bufp->fullCData(oldp+7133,((0x7fU & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
                                                 >> 0x20U)))),7);
    bufp->fullBit(oldp+7134,((1U & VL_REDXOR_32(((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                  ^ 
                                                  vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
                                                 ^ 
                                                 vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])))));
    bufp->fullIData(oldp+7135,((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o)),32);
    bufp->fullIData(oldp+7136,(((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                 << 0x10U) | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                              >> 0x10U))),32);
    bufp->fullQData(oldp+7137,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o),39);
    bufp->fullCData(oldp+7139,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp),6);
    bufp->fullQData(oldp+7140,((0x1ffffffffffffffULL 
                                & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o)),57);
    bufp->fullQData(oldp+7142,((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT__gen_rsp_intg__DOT__rsp))),57);
    bufp->fullQData(oldp+7144,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_err_resp__DOT__err_resp__DOT__u_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o),64);
    bufp->fullBit(oldp+7146,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q));
    bufp->fullBit(oldp+7147,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q));
    bufp->fullBit(oldp+7148,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q));
    bufp->fullBit(oldp+7149,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__intg_error_q));
    bufp->fullBit(oldp+7150,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    bufp->fullBit(oldp+7151,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    bufp->fullBit(oldp+7152,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    bufp->fullBit(oldp+7153,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    bufp->fullBit(oldp+7154,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__missed_err_gnt_q));
    bufp->fullBit(oldp+7155,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full));
    bufp->fullBit(oldp+7156,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                       ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full))))));
    bufp->fullBit(oldp+7157,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
    bufp->fullBit(oldp+7158,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full));
    bufp->fullBit(oldp+7159,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                       ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full))))));
    bufp->fullBit(oldp+7160,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    bufp->fullBit(oldp+7161,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full));
    bufp->fullBit(oldp+7162,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                       ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full))))));
    bufp->fullBit(oldp+7163,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q));
    bufp->fullBit(oldp+7164,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q));
    bufp->fullBit(oldp+7165,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q));
    bufp->fullBit(oldp+7166,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__intg_error_q));
    bufp->fullBit(oldp+7167,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    bufp->fullBit(oldp+7168,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    bufp->fullBit(oldp+7169,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    bufp->fullBit(oldp+7170,((1U & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    bufp->fullBit(oldp+7171,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__missed_err_gnt_q));
    bufp->fullBit(oldp+7172,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full));
    bufp->fullBit(oldp+7173,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                       ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full))))));
    bufp->fullBit(oldp+7174,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
    bufp->fullBit(oldp+7175,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full));
    bufp->fullBit(oldp+7176,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                       ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full))))));
    bufp->fullBit(oldp+7177,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q));
    bufp->fullBit(oldp+7178,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full));
    bufp->fullBit(oldp+7179,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                       ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__inv_full))))));
    bufp->fullIData(oldp+7180,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]),32);
    bufp->fullIData(oldp+7181,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]),32);
    bufp->fullBit(oldp+7182,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_complete) 
                              | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__word_ack)
                                  ? ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__fips_q) 
                                     & (IData)((vlSelf->imem_test__DOT__edn_rnd_i 
                                                >> 0x20U)))
                                  : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__fips_q)))));
    __Vtemp_86[0U] = (IData)(vlSelf->imem_test__DOT__edn_rnd_i);
    __Vtemp_86[1U] = 0U;
    __Vtemp_86[2U] = 0U;
    __Vtemp_86[3U] = 0U;
    __Vtemp_86[4U] = 0U;
    __Vtemp_86[5U] = 0U;
    __Vtemp_86[6U] = 0U;
    __Vtemp_86[7U] = 0U;
    VL_SHIFTL_WWI(256,256,32, __Vtemp_87, __Vtemp_86, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q), 5U));
    if (vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__clr_q) {
        __Vtemp_92[0U] = Vimem_test__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_92[1U] = Vimem_test__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_92[2U] = Vimem_test__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_92[3U] = Vimem_test__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_92[4U] = Vimem_test__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_92[5U] = Vimem_test__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_92[6U] = Vimem_test__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_92[7U] = Vimem_test__ConstPool__CONST_h9e67c271_0[7U];
    } else if (vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__load_data) {
        __Vtemp_92[0U] = (__Vtemp_87[0U] | ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                             ? Vimem_test__ConstPool__CONST_h9e67c271_0[0U]
                                             : vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U]));
        __Vtemp_92[1U] = (__Vtemp_87[1U] | ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                             ? Vimem_test__ConstPool__CONST_h9e67c271_0[1U]
                                             : vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U]));
        __Vtemp_92[2U] = (__Vtemp_87[2U] | ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                             ? Vimem_test__ConstPool__CONST_h9e67c271_0[2U]
                                             : vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U]));
        __Vtemp_92[3U] = (__Vtemp_87[3U] | ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                             ? Vimem_test__ConstPool__CONST_h9e67c271_0[3U]
                                             : vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U]));
        __Vtemp_92[4U] = (__Vtemp_87[4U] | ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                             ? Vimem_test__ConstPool__CONST_h9e67c271_0[4U]
                                             : vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U]));
        __Vtemp_92[5U] = (__Vtemp_87[5U] | ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                             ? Vimem_test__ConstPool__CONST_h9e67c271_0[5U]
                                             : vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U]));
        __Vtemp_92[6U] = (__Vtemp_87[6U] | ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                             ? Vimem_test__ConstPool__CONST_h9e67c271_0[6U]
                                             : vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U]));
        __Vtemp_92[7U] = (__Vtemp_87[7U] | ((0U == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q))
                                             ? Vimem_test__ConstPool__CONST_h9e67c271_0[7U]
                                             : vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U]));
    } else {
        __Vtemp_92[0U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U];
        __Vtemp_92[1U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U];
        __Vtemp_92[2U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U];
        __Vtemp_92[3U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U];
        __Vtemp_92[4U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U];
        __Vtemp_92[5U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U];
        __Vtemp_92[6U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U];
        __Vtemp_92[7U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U];
    }
    bufp->fullWData(oldp+7183,(__Vtemp_92),256);
    __Vtemp_93[0U] = (IData)(vlSelf->imem_test__DOT__edn_rnd_i);
    __Vtemp_93[1U] = 0U;
    __Vtemp_93[2U] = 0U;
    __Vtemp_93[3U] = 0U;
    __Vtemp_93[4U] = 0U;
    __Vtemp_93[5U] = 0U;
    __Vtemp_93[6U] = 0U;
    __Vtemp_93[7U] = 0U;
    VL_SHIFTL_WWI(256,256,32, __Vtemp_94, __Vtemp_93, 
                  VL_SHIFTL_III(32,32,32, (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_packer_fifo__DOT__depth_q), 5U));
    bufp->fullWData(oldp+7191,(__Vtemp_94),256);
    __Vtemp_97[0U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[0U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[0U]
                          : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg)));
    __Vtemp_97[1U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[1U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[1U]
                          : (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                              << 7U) | (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                >> 0x20U)))));
    __Vtemp_97[2U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[2U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[2U]
                          : (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                              << 0xeU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                           >> 0x19U) 
                                          | ((IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                      >> 0x20U)) 
                                             << 7U)))));
    __Vtemp_97[3U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[3U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[3U]
                          : (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                              << 0x15U) | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                             >> 0x12U) 
                                            | ((IData)(
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                        >> 0x20U)) 
                                               << 0xeU)) 
                                           | ((IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                       >> 0x20U)) 
                                              >> 0x19U)))));
    __Vtemp_97[4U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[4U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[4U]
                          : (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                              << 0x1cU) | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                             >> 0xbU) 
                                            | ((IData)(
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                        >> 0x20U)) 
                                               << 0x15U)) 
                                           | ((IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                       >> 0x20U)) 
                                              >> 0x12U)))));
    __Vtemp_97[5U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[5U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[5U]
                          : ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                               >> 4U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                  >> 0x20U)) 
                                         << 0x1cU)) 
                             | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                         >> 0x20U)) 
                                >> 0xbU))));
    __Vtemp_97[6U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[6U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[6U]
                          : (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                              << 3U) | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                 >> 0x20U)) 
                                        >> 4U))));
    __Vtemp_97[7U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[7U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[7U]
                          : (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                              << 0xaU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                           >> 0x1dU) 
                                          | ((IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                      >> 0x20U)) 
                                             << 3U)))));
    __Vtemp_97[8U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[8U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[8U]
                          : (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                              << 0x11U) | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                                             >> 0x16U) 
                                            | ((IData)(
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                        >> 0x20U)) 
                                               << 0xaU)) 
                                           | ((IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                       >> 0x20U)) 
                                              >> 0x1dU)))));
    __Vtemp_97[9U] = (Vimem_test__ConstPool__CONST_h3b9d891d_0[9U] 
                      & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)
                          ? vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[9U]
                          : ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg) 
                               >> 0xfU) | ((IData)(
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                                    >> 0x20U)) 
                                           << 0x11U)) 
                             | ((IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg 
                                         >> 0x20U)) 
                                >> 0x16U))));
    bufp->fullWData(oldp+7199,(__Vtemp_97),312);
    bufp->fullWData(oldp+7209,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation),68);
    __Vtemp_98[0U] = (IData)((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg)) 
                               << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))));
    __Vtemp_98[1U] = (IData)(((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg)) 
                                << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))) 
                              >> 0x20U));
    __Vtemp_98[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__comparison_operator_base;
    bufp->fullWData(oldp+7212,(__Vtemp_98),65);
    bufp->fullBit(oldp+7215,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__comparison_operator_base)
                                     ? (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__is_equal))
                                     : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__is_equal)))));
    bufp->fullBit(oldp+7216,(((((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                   | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                      | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                         | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                            | ((0U 
                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                               | ((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                                  | (0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_a_intg_dec__err_o))))))))) 
                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                              | (((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                  | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                     | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                        | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                           | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                              | ((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                    | (0U 
                                                       != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_b_intg_dec__err_o))))))))) 
                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)))));
    bufp->fullWData(oldp+7217,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation),530);
    bufp->fullBit(oldp+7234,(((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_a_onehot 
                               != vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U]) 
                              | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_b_onehot 
                                  != vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U]) 
                                 | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_wr_en_onehot 
                                    != vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U])))));
    bufp->fullBit(oldp+7235,(((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn) 
                                   | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn))) 
                               != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q)) 
                              | (((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                         >> 2U)) != 
                                  ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn) 
                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid))) 
                                 | (((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                            >> 1U)) 
                                     != ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__loop_insn) 
                                         & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid))) 
                                    | (((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                               >> 3U)) 
                                        != ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                                            & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid))) 
                                       | (((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)) 
                                           != ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__sel_insn_bignum) 
                                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid))) 
                                          | (((1U & 
                                               ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                                >> 4U)) 
                                              != ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                                  & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_base) 
                                                     & (1U 
                                                        == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl))))) 
                                             | (((1U 
                                                  & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                                     >> 5U)) 
                                                 != 
                                                 ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                                  & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_base) 
                                                      & (1U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U]))) 
                                                     | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_base) 
                                                        & (1U 
                                                           == 
                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                                                            >> 0x1bU)))))) 
                                                | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                                                    & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn) 
                                                       & ((0U 
                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base)) 
                                                          & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q) 
                                                             != 
                                                             (0x1fffU 
                                                              & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result))))) 
                                                   | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q) 
                                                       != 
                                                       (0x1fffU 
                                                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_end_addr_full))) 
                                                      & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req))))))))))));
    bufp->fullQData(oldp+7236,((1ULL | ((QData)((IData)(
                                                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U])) 
                                        << 1U))),33);
    bufp->fullQData(oldp+7238,(((1U == (0xfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U]))
                                 ? (1ULL | ((QData)((IData)(
                                                            (~ 
                                                             vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U]))) 
                                            << 1U))
                                 : ((QData)((IData)(
                                                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])) 
                                    << 1U))),33);
    bufp->fullBit(oldp+7240,((1U == (0xfU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U]))));
    bufp->fullQData(oldp+7241,((0x1ffffffffULL & ((1ULL 
                                                   | ((QData)((IData)(
                                                                      vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U])) 
                                                      << 1U)) 
                                                  + 
                                                  ((1U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U]))
                                                    ? 
                                                   (1ULL 
                                                    | ((QData)((IData)(
                                                                       (~ 
                                                                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U]))) 
                                                       << 1U))
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])) 
                                                    << 1U))))),33);
    bufp->fullIData(oldp+7243,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])),32);
    bufp->fullIData(oldp+7244,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])),32);
    bufp->fullIData(oldp+7245,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                ^ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])),32);
    bufp->fullIData(oldp+7246,((~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U])),32);
    bufp->fullQData(oldp+7247,((((QData)((IData)(((
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U] 
                                                   >> 0x1fU) 
                                                  & (6U 
                                                     == 
                                                     vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U])))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((8U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U]))
                                                               ? vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__operand_a_reverse
                                                               : 
                                                              vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[1U]))))),33);
    bufp->fullCData(oldp+7249,((0x1fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])),5);
    bufp->fullBit(oldp+7250,((1U & ((IData)(1U) + (IData)(
                                                          ((1U 
                                                            == 
                                                            (0xfU 
                                                             & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[2U]))
                                                            ? 
                                                           (1ULL 
                                                            | ((QData)((IData)(
                                                                               (~ 
                                                                                vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U]))) 
                                                               << 1U))
                                                            : 
                                                           ((QData)((IData)(
                                                                            vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation[0U])) 
                                                            << 1U)))))));
    bufp->fullCData(oldp+7251,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
                               [0U]),4);
    bufp->fullCData(oldp+7252,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags
                               [1U]),4);
    bufp->fullCData(oldp+7253,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mac_update_flags
                               [0U]),4);
    bufp->fullCData(oldp+7254,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mac_update_flags
                               [1U]),4);
    bufp->fullCData(oldp+7255,((((3U == (3U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                               >> 2U))) 
                                 << 3U) | (((2U == 
                                             (3U & 
                                              (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                               >> 2U))) 
                                            << 2U) 
                                           | (((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                                    >> 2U))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                                     >> 2U))))))),4);
    bufp->fullCData(oldp+7256,((3U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_adder_update) 
                                         | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_logic_update) 
                                            | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_mac_update) 
                                               | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_flags_wr))))))),2);
    __Vtemp_101[0U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    __Vtemp_101[1U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    __Vtemp_101[2U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    __Vtemp_101[3U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    __Vtemp_101[4U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    __Vtemp_101[5U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    __Vtemp_101[6U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    __Vtemp_101[7U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    bufp->fullWData(oldp+7257,(__Vtemp_101),256);
    if ((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                       >> 0x1eU)))) {
        __Vtemp_107[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_operand_b_blanked[0U];
        __Vtemp_107[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_operand_b_blanked[1U];
        __Vtemp_107[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_operand_b_blanked[2U];
        __Vtemp_107[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_operand_b_blanked[3U];
        __Vtemp_107[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_operand_b_blanked[4U];
        __Vtemp_107[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_operand_b_blanked[5U];
        __Vtemp_107[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_operand_b_blanked[6U];
        __Vtemp_107[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_operand_b_blanked[7U];
    } else {
        __Vtemp_107[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_in_lower_reverse[0U];
        __Vtemp_107[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_in_lower_reverse[1U];
        __Vtemp_107[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_in_lower_reverse[2U];
        __Vtemp_107[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_in_lower_reverse[3U];
        __Vtemp_107[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_in_lower_reverse[4U];
        __Vtemp_107[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_in_lower_reverse[5U];
        __Vtemp_107[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_in_lower_reverse[6U];
        __Vtemp_107[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_in_lower_reverse[7U];
    }
    __Vtemp_107[8U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    __Vtemp_107[9U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x20U))))));
    __Vtemp_107[0xaU] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                           << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                        >> 0xeU)) & 
                         (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x20U))))));
    __Vtemp_107[0xbU] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                           << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                        >> 0xeU)) & 
                         (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x20U))))));
    __Vtemp_107[0xcU] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                           << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                        >> 0xeU)) & 
                         (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x20U))))));
    __Vtemp_107[0xdU] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                           << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                        >> 0xeU)) & 
                         (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x20U))))));
    __Vtemp_107[0xeU] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                           << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                        >> 0xeU)) & 
                         (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x20U))))));
    __Vtemp_107[0xfU] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                           << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                        >> 0xeU)) & 
                         (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x20U))))));
    bufp->fullWData(oldp+7265,(__Vtemp_107),512);
    __Vtemp_111[0U] = ((1U | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                               << 0x13U) | (0x7fffeU 
                                            & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                               >> 0xdU)))) 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x25U))))));
    __Vtemp_111[1U] = (((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                               >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                             << 0x13U) 
                                            | (0x7fffeU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                                  >> 0xdU)))) 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x25U))))));
    __Vtemp_111[2U] = (((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                               >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                             << 0x13U) 
                                            | (0x7fffeU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                                  >> 0xdU)))) 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x25U))))));
    __Vtemp_111[3U] = (((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                               >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                             << 0x13U) 
                                            | (0x7fffeU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                                  >> 0xdU)))) 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x25U))))));
    __Vtemp_111[4U] = (((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                               >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                             << 0x13U) 
                                            | (0x7fffeU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                                  >> 0xdU)))) 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x25U))))));
    __Vtemp_111[5U] = (((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                               >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                             << 0x13U) 
                                            | (0x7fffeU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                                  >> 0xdU)))) 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x25U))))));
    __Vtemp_111[6U] = (((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                               >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                             << 0x13U) 
                                            | (0x7fffeU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                                  >> 0xdU)))) 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x25U))))));
    __Vtemp_111[7U] = (((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                               >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                                             << 0x13U) 
                                            | (0x7fffeU 
                                               & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                                  >> 0xdU)))) 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x25U))))));
    __Vtemp_111[8U] = (1U & ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                              >> 0xdU) & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                >> 0x25U)))))));
    bufp->fullWData(oldp+7281,(__Vtemp_111),257);
    __Vtemp_116[0U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                          ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                 << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                              >> 0xeU)))
                          : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                              << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                           >> 0xeU))) 
                        << 1U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_carry_in));
    __Vtemp_116[1U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                          ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                 << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                              >> 0xeU)))
                          : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                              << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                           >> 0xeU))) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                       ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                              << 0x12U) 
                                             | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                                >> 0xeU)))
                                       : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                           << 0x12U) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                             >> 0xeU))) 
                                     << 1U));
    __Vtemp_116[2U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                          ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                 << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                              >> 0xeU)))
                          : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                              << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                           >> 0xeU))) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                       ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                              << 0x12U) 
                                             | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                                >> 0xeU)))
                                       : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                           << 0x12U) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                             >> 0xeU))) 
                                     << 1U));
    __Vtemp_116[3U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                          ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                 << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                              >> 0xeU)))
                          : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                              << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                           >> 0xeU))) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                       ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                              << 0x12U) 
                                             | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                                >> 0xeU)))
                                       : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                           << 0x12U) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                             >> 0xeU))) 
                                     << 1U));
    __Vtemp_116[4U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                          ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                 << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                              >> 0xeU)))
                          : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                              << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                           >> 0xeU))) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                       ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                              << 0x12U) 
                                             | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                                >> 0xeU)))
                                       : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                           << 0x12U) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                             >> 0xeU))) 
                                     << 1U));
    __Vtemp_116[5U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                          ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                 << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                              >> 0xeU)))
                          : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                              << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                           >> 0xeU))) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                       ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                              << 0x12U) 
                                             | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                                >> 0xeU)))
                                       : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                           << 0x12U) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                             >> 0xeU))) 
                                     << 1U));
    __Vtemp_116[6U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                          ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                 << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                              >> 0xeU)))
                          : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                              << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                           >> 0xeU))) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                       ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                              << 0x12U) 
                                             | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                                >> 0xeU)))
                                       : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                           << 0x12U) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                             >> 0xeU))) 
                                     << 1U));
    __Vtemp_116[7U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                          ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                 << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                              >> 0xeU)))
                          : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                              << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                           >> 0xeU))) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                       ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                              << 0x12U) 
                                             | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                                >> 0xeU)))
                                       : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                           << 0x12U) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                             >> 0xeU))) 
                                     << 1U));
    __Vtemp_116[8U] = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                         ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                             >> 0xeU)))
                         : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                             << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                          >> 0xeU))) 
                       >> 0x1fU);
    bufp->fullWData(oldp+7290,(__Vtemp_116),257);
    __Vtemp_123[0U] = (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                           ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                  << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                               >> 0xeU)))
                           : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                               << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                            >> 0xeU))) 
                         << 1U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_carry_in)) 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x25U))))));
    __Vtemp_123[1U] = (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                           ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                  << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                               >> 0xeU)))
                           : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                               << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                            >> 0xeU))) 
                         >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                        ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                               << 0x12U) 
                                              | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                                 >> 0xeU)))
                                        : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                              >> 0xeU))) 
                                      << 1U)) & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x25U))))));
    __Vtemp_123[2U] = (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                           ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                  << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                               >> 0xeU)))
                           : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                               << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                            >> 0xeU))) 
                         >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                        ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                               << 0x12U) 
                                              | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                                 >> 0xeU)))
                                        : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                              >> 0xeU))) 
                                      << 1U)) & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x25U))))));
    __Vtemp_123[3U] = (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                           ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                  << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                               >> 0xeU)))
                           : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                               << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                            >> 0xeU))) 
                         >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                        ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                               << 0x12U) 
                                              | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                                 >> 0xeU)))
                                        : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                              >> 0xeU))) 
                                      << 1U)) & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x25U))))));
    __Vtemp_123[4U] = (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                           ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                  << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                               >> 0xeU)))
                           : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                               << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                            >> 0xeU))) 
                         >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                        ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                               << 0x12U) 
                                              | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                                 >> 0xeU)))
                                        : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                              >> 0xeU))) 
                                      << 1U)) & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x25U))))));
    __Vtemp_123[5U] = (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                           ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                  << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                               >> 0xeU)))
                           : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                               << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                            >> 0xeU))) 
                         >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                        ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                               << 0x12U) 
                                              | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                                 >> 0xeU)))
                                        : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                              >> 0xeU))) 
                                      << 1U)) & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x25U))))));
    __Vtemp_123[6U] = (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                           ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                  << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                               >> 0xeU)))
                           : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                               << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                            >> 0xeU))) 
                         >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                        ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                               << 0x12U) 
                                              | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                                 >> 0xeU)))
                                        : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                              >> 0xeU))) 
                                      << 1U)) & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x25U))))));
    __Vtemp_123[7U] = (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                           ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                  << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                               >> 0xeU)))
                           : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                               << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                            >> 0xeU))) 
                         >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                                        ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                               << 0x12U) 
                                              | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                                 >> 0xeU)))
                                        : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                              >> 0xeU))) 
                                      << 1U)) & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                       >> 0x25U))))));
    __Vtemp_123[8U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert)
                          ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                 << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                              >> 0xeU)))
                          : ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                              << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                           >> 0xeU))) 
                        >> 0x1fU) & (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x25U))))));
    bufp->fullWData(oldp+7299,(__Vtemp_123),257);
    __Vtemp_130[0U] = (1U | (((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                             >> 0x24U)))
                               ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                   << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U] 
                                                >> 1U))
                               : (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                    << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                                 >> 0xeU)) 
                                  & (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                           >> 0x23U))))))) 
                             << 1U));
    __Vtemp_130[1U] = ((((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                        >> 0x24U)))
                          ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                              << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U] 
                                           >> 1U)) : 
                         (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                            << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                         >> 0xeU)) 
                          & (- (IData)((1U & (IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                      >> 0x23U))))))) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0x24U)))
                                       ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                           << 0x1fU) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                             >> 1U))
                                       : (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                              >> 0xeU)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x23U))))))) 
                                     << 1U));
    __Vtemp_130[2U] = ((((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                        >> 0x24U)))
                          ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                              << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                           >> 1U)) : 
                         (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                            << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                         >> 0xeU)) 
                          & (- (IData)((1U & (IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                      >> 0x23U))))))) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0x24U)))
                                       ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                           << 0x1fU) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                             >> 1U))
                                       : (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                              >> 0xeU)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x23U))))))) 
                                     << 1U));
    __Vtemp_130[3U] = ((((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                        >> 0x24U)))
                          ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                              << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                           >> 1U)) : 
                         (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                            << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                         >> 0xeU)) 
                          & (- (IData)((1U & (IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                      >> 0x23U))))))) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0x24U)))
                                       ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                           << 0x1fU) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                             >> 1U))
                                       : (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                              >> 0xeU)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x23U))))))) 
                                     << 1U));
    __Vtemp_130[4U] = ((((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                        >> 0x24U)))
                          ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                              << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                           >> 1U)) : 
                         (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                            << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                         >> 0xeU)) 
                          & (- (IData)((1U & (IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                      >> 0x23U))))))) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0x24U)))
                                       ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                           << 0x1fU) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                             >> 1U))
                                       : (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                              >> 0xeU)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x23U))))))) 
                                     << 1U));
    __Vtemp_130[5U] = ((((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                        >> 0x24U)))
                          ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                              << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                           >> 1U)) : 
                         (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                            << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                         >> 0xeU)) 
                          & (- (IData)((1U & (IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                      >> 0x23U))))))) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0x24U)))
                                       ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                           << 0x1fU) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                             >> 1U))
                                       : (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                              >> 0xeU)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x23U))))))) 
                                     << 1U));
    __Vtemp_130[6U] = ((((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                        >> 0x24U)))
                          ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                              << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                           >> 1U)) : 
                         (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                            << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                         >> 0xeU)) 
                          & (- (IData)((1U & (IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                      >> 0x23U))))))) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0x24U)))
                                       ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                           << 0x1fU) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                             >> 1U))
                                       : (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                              >> 0xeU)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x23U))))))) 
                                     << 1U));
    __Vtemp_130[7U] = ((((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                        >> 0x24U)))
                          ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                              << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                           >> 1U)) : 
                         (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                            << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                         >> 0xeU)) 
                          & (- (IData)((1U & (IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                      >> 0x23U))))))) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                     >> 0x24U)))
                                       ? ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                                           << 0x1fU) 
                                          | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                             >> 1U))
                                       : (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                                            << 0x12U) 
                                           | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                              >> 0xeU)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                   >> 0x23U))))))) 
                                     << 1U));
    __Vtemp_130[8U] = (((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                       >> 0x24U))) ? 
                        ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                          << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                       >> 1U)) : ((
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                                                    << 0x12U) 
                                                   | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                                      >> 0xeU)) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                           >> 0x23U))))))) 
                       >> 0x1fU);
    bufp->fullWData(oldp+7308,(__Vtemp_130),257);
    __Vtemp_133[0U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x23U))))));
    __Vtemp_133[1U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x23U))))));
    __Vtemp_133[2U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x23U))))));
    __Vtemp_133[3U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x23U))))));
    __Vtemp_133[4U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x23U))))));
    __Vtemp_133[5U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x23U))))));
    __Vtemp_133[6U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x23U))))));
    __Vtemp_133[7U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                         << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                      >> 0xeU)) & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                                         >> 0x23U))))));
    bufp->fullWData(oldp+7317,(__Vtemp_133),256);
    __Vtemp_135[0U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[0U] 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x21U))))));
    __Vtemp_135[1U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[1U] 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x21U))))));
    __Vtemp_135[2U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[2U] 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x21U))))));
    __Vtemp_135[3U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[3U] 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x21U))))));
    __Vtemp_135[4U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[4U] 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x21U))))));
    __Vtemp_135[5U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[5U] 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x21U))))));
    __Vtemp_135[6U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[6U] 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x21U))))));
    __Vtemp_135[7U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res[7U] 
                       & (- (IData)((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x21U))))));
    bufp->fullWData(oldp+7325,(__Vtemp_135),256);
    if ((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                       >> 0x24U)))) {
        __Vtemp_141[0U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U] 
                                         >> 1U));
        __Vtemp_141[1U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[1U] 
                                         >> 1U));
        __Vtemp_141[2U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[2U] 
                                         >> 1U));
        __Vtemp_141[3U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[3U] 
                                         >> 1U));
        __Vtemp_141[4U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[4U] 
                                         >> 1U));
        __Vtemp_141[5U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[5U] 
                                         >> 1U));
        __Vtemp_141[6U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[6U] 
                                         >> 1U));
        __Vtemp_141[7U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[8U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[7U] 
                                         >> 1U));
    } else {
        __Vtemp_141[0U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                             << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                          >> 0xeU)) 
                           & (- (IData)((1U & (IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                       >> 0x23U))))));
        __Vtemp_141[1U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                             << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                          >> 0xeU)) 
                           & (- (IData)((1U & (IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                       >> 0x23U))))));
        __Vtemp_141[2U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                             << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                          >> 0xeU)) 
                           & (- (IData)((1U & (IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                       >> 0x23U))))));
        __Vtemp_141[3U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                             << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                          >> 0xeU)) 
                           & (- (IData)((1U & (IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                       >> 0x23U))))));
        __Vtemp_141[4U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                             << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                          >> 0xeU)) 
                           & (- (IData)((1U & (IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                       >> 0x23U))))));
        __Vtemp_141[5U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                             << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                          >> 0xeU)) 
                           & (- (IData)((1U & (IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                       >> 0x23U))))));
        __Vtemp_141[6U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                             << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                          >> 0xeU)) 
                           & (- (IData)((1U & (IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                       >> 0x23U))))));
        __Vtemp_141[7U] = (((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                             << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                          >> 0xeU)) 
                           & (- (IData)((1U & (IData)(
                                                      (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                       >> 0x23U))))));
    }
    bufp->fullWData(oldp+7333,(__Vtemp_141),256);
    bufp->fullCData(oldp+7341,((0xffU & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                         >> 5U))),8);
    bufp->fullBit(oldp+7342,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                              & ((0xbU != (0xfU & (
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                                                   >> 0xeU))) 
                                 & ((~ (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x22U))) 
                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used))))));
    bufp->fullBit(oldp+7343,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_update_flag_groups__BRA__0__KET____DOT__u_mac_z_flag_en_blanker__in_i) 
                              & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                         >> 2U)))));
    bufp->fullBit(oldp+7344,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_update_flag_groups__BRA__0__KET____DOT__u_mac_z_flag_en_blanker__in_i) 
                              & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                         >> 3U)))));
    __Vtemp_143[0U] = (1U | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                              << 0x13U) | (0x7fffeU 
                                           & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                              >> 0xdU))));
    __Vtemp_143[1U] = ((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                              >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                            << 0x13U) 
                                           | (0x7fffeU 
                                              & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                                 >> 0xdU))));
    __Vtemp_143[2U] = ((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                              >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                            << 0x13U) 
                                           | (0x7fffeU 
                                              & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                                 >> 0xdU))));
    __Vtemp_143[3U] = ((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                              >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                            << 0x13U) 
                                           | (0x7fffeU 
                                              & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                                 >> 0xdU))));
    __Vtemp_143[4U] = ((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                              >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                            << 0x13U) 
                                           | (0x7fffeU 
                                              & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                                 >> 0xdU))));
    __Vtemp_143[5U] = ((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                              >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                            << 0x13U) 
                                           | (0x7fffeU 
                                              & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                                 >> 0xdU))));
    __Vtemp_143[6U] = ((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                              >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                            << 0x13U) 
                                           | (0x7fffeU 
                                              & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                                 >> 0xdU))));
    __Vtemp_143[7U] = ((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                              >> 0xdU)) | ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                                            << 0x13U) 
                                           | (0x7fffeU 
                                              & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                                 >> 0xdU))));
    __Vtemp_143[8U] = (1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                             >> 0xdU));
    bufp->fullWData(oldp+7345,(__Vtemp_143),257);
    __Vtemp_144[0U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                                     >> 0xeU));
    __Vtemp_144[1U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[9U] 
                                     >> 0xeU));
    __Vtemp_144[2U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xaU] 
                                     >> 0xeU));
    __Vtemp_144[3U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xbU] 
                                     >> 0xeU));
    __Vtemp_144[4U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xcU] 
                                     >> 0xeU));
    __Vtemp_144[5U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xdU] 
                                     >> 0xeU));
    __Vtemp_144[6U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xeU] 
                                     >> 0xeU));
    __Vtemp_144[7U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0xfU] 
                                     >> 0xeU));
    bufp->fullWData(oldp+7354,(__Vtemp_144),256);
    bufp->fullCData(oldp+7362,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+7363,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x64U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7364,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x65U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7365,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x66U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7366,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x67U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7367,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x68U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7368,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x69U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7369,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x6aU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7370,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x6bU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7371,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x6cU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7372,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x6dU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7373,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xaU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                  >> 0x10U)))),4);
    bufp->fullCData(oldp+7374,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x6eU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7375,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x6fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7376,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x70U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7377,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x71U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7378,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x72U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7379,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x73U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7380,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x74U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7381,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x75U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7382,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x76U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7383,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x77U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7384,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xbU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                  >> 0x10U)))),4);
    bufp->fullCData(oldp+7385,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x78U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7386,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x79U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7387,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x7aU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7388,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x7bU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7389,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x7cU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7390,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x7dU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7391,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x7eU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7392,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x7fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7393,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x80U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7394,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x81U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7395,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xcU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                  >> 0x10U)))),4);
    bufp->fullCData(oldp+7396,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x82U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7397,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x83U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7398,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x84U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7399,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x85U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7400,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x86U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7401,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x87U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7402,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x88U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7403,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x89U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7404,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x8aU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7405,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x8bU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7406,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xdU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                  >> 0x10U)))),4);
    bufp->fullCData(oldp+7407,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x8cU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7408,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x8dU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7409,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x8eU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7410,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x8fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7411,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x90U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7412,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x91U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7413,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x92U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7414,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x93U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7415,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x94U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7416,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x95U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7417,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xeU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                  >> 0x10U)))),4);
    bufp->fullCData(oldp+7418,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x96U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7419,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x97U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7420,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x98U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7421,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x99U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7422,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x9aU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7423,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x9bU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7424,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x9cU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7425,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x9dU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7426,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x9eU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7427,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x9fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7428,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xfU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                  >> 0x10U)))),4);
    bufp->fullCData(oldp+7429,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa0U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7430,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa1U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7431,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa2U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7432,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa3U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7433,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa4U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7434,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa5U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7435,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa6U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7436,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa7U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7437,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa8U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7438,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xa9U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7439,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x10U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7440,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xaaU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7441,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xabU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7442,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xacU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7443,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xadU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7444,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xaeU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7445,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xafU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7446,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb0U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7447,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb1U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7448,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb2U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7449,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb3U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7450,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x11U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7451,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb4U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7452,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb5U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7453,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb6U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7454,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb7U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7455,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb8U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7456,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xb9U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7457,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xbaU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7458,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xbbU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7459,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xbcU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7460,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xbdU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7461,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x12U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7462,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xbeU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7463,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xbfU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7464,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc0U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7465,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc1U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7466,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc2U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7467,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc3U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7468,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc4U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7469,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc5U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7470,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc6U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7471,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc7U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7472,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x13U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7473,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [1U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+7474,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc8U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7475,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xc9U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7476,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xcaU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7477,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xcbU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7478,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xccU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7479,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xcdU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7480,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xceU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7481,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xcfU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7482,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd0U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7483,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd1U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7484,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x14U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7485,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd2U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7486,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd3U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7487,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd4U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7488,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd5U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7489,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd6U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7490,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd7U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7491,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd8U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7492,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xd9U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7493,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xdaU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7494,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xdbU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7495,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x15U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7496,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xdcU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7497,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xddU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7498,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xdeU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7499,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xdfU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7500,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe0U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7501,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe1U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7502,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe2U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7503,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe3U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7504,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe4U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7505,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe5U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7506,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x16U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7507,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe6U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7508,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe7U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7509,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe8U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7510,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xe9U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7511,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xeaU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7512,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xebU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7513,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xecU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7514,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xedU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7515,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xeeU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7516,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xefU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7517,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x17U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7518,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf0U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7519,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf1U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7520,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf2U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7521,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf3U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7522,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf4U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7523,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf5U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7524,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf6U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7525,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf7U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7526,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf8U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7527,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xf9U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7528,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x18U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7529,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xfaU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7530,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xfbU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7531,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xfcU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7532,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xfdU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7533,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xfeU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7534,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0xffU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7535,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x19U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7536,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x1aU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7537,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x1bU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7538,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x1cU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7539,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x1dU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7540,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [2U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+7541,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x1eU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7542,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x1fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7543,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x20U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7544,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x21U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7545,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x22U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7546,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x23U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7547,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x24U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7548,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x25U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7549,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x26U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7550,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x27U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7551,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [3U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+7552,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x28U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7553,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x29U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7554,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x2aU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7555,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x2bU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7556,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x2cU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7557,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x2dU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7558,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x2eU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7559,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x2fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7560,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x30U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7561,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x31U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7562,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [4U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+7563,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x32U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7564,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x33U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7565,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x34U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7566,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x35U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7567,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x36U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7568,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x37U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7569,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x38U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7570,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x39U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7571,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x3aU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7572,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x3bU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7573,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [5U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+7574,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x3cU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7575,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x3dU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7576,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x3eU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7577,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x3fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7578,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x40U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7579,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x41U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7580,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x42U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7581,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x43U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7582,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x44U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7583,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x45U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7584,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [6U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+7585,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x46U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7586,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x47U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7587,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x48U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7588,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x49U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7589,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x4aU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7590,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x4bU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7591,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x4cU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7592,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x4dU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7593,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x4eU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7594,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x4fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7595,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [7U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+7596,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x50U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7597,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x51U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7598,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x52U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7599,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x53U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7600,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x54U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7601,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x55U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7602,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x56U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7603,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x57U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7604,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x58U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7605,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x59U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7606,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [8U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+7607,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x5aU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7608,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x5bU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7609,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x5cU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7610,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x5dU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7611,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x5eU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7612,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x5fU] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7613,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x60U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7614,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x61U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7615,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x62U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7616,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [0x63U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                   >> 0x10U)))),4);
    bufp->fullCData(oldp+7617,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                                [9U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                >> 0x10U)))),4);
    __Vtemp_145[0U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0U] 
                                     >> 0xeU));
    __Vtemp_145[1U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[1U] 
                                     >> 0xeU));
    __Vtemp_145[2U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[2U] 
                                     >> 0xeU));
    __Vtemp_145[3U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[3U] 
                                     >> 0xeU));
    __Vtemp_145[4U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[4U] 
                                     >> 0xeU));
    __Vtemp_145[5U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[5U] 
                                     >> 0xeU));
    __Vtemp_145[6U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[6U] 
                                     >> 0xeU));
    __Vtemp_145[7U] = ((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[8U] 
                        << 0x12U) | (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[7U] 
                                     >> 0xeU));
    bufp->fullWData(oldp+7618,(__Vtemp_145),256);
    bufp->fullBit(oldp+7626,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn) 
                                 & ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base)) 
                                    & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q) 
                                       != (0x1fffU 
                                           & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result)))))));
    bufp->fullBit(oldp+7627,((((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                      >> 2U)) != ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn) 
                                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid))) 
                              | (((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                         >> 1U)) != 
                                  ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__loop_insn) 
                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid))) 
                                 | (((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                            >> 3U)) 
                                     != ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                                         & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid))) 
                                    | (((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)) 
                                        != ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__sel_insn_bignum) 
                                            & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid))) 
                                       | (((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                                  >> 4U)) 
                                           != ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                               & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_we_base) 
                                                  & (1U 
                                                     == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_wr_addr_ctrl))))) 
                                          | (((1U & 
                                               ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o) 
                                                >> 5U)) 
                                              != ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                                  & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_a_base) 
                                                      & (1U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U]))) 
                                                     | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_ren_b_base) 
                                                        & (1U 
                                                           == 
                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                                                            >> 0x1bU)))))) 
                                             | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                                                 & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__alu_op_a_mux_sel_base)) 
                                                       & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q) 
                                                          != 
                                                          (0x1fffU 
                                                           & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result))))) 
                                                | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q) 
                                                    != 
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_end_addr_full))) 
                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req)))))))))));
    __Vtemp_147[0U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[0U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_147[1U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[1U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_147[2U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[2U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_147[3U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[3U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_147[4U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[4U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_147[5U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[5U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_147[6U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[6U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_147[7U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[7U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_147[8U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[8U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    __Vtemp_147[9U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[9U] 
                       & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    bufp->fullWData(oldp+7628,(__Vtemp_147),312);
    if ((1U & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)) 
               | (0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__in_mux
                         [0U] & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                         >> 0xaU))))))) {
        __Vtemp_151[0U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[0U];
        __Vtemp_151[1U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[1U];
        __Vtemp_151[2U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[2U];
        __Vtemp_151[3U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[3U];
        __Vtemp_151[4U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[4U];
        __Vtemp_151[5U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[5U];
        __Vtemp_151[6U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[6U];
        __Vtemp_151[7U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[7U];
        __Vtemp_151[8U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[8U];
        __Vtemp_151[9U] = vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[9U];
    } else {
        __Vtemp_151[0U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[0U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
        __Vtemp_151[1U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[1U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
        __Vtemp_151[2U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[2U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
        __Vtemp_151[3U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[3U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
        __Vtemp_151[4U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[4U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
        __Vtemp_151[5U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[5U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
        __Vtemp_151[6U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[6U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
        __Vtemp_151[7U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[7U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
        __Vtemp_151[8U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[8U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
        __Vtemp_151[9U] = (vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[9U] 
                           & (- (IData)((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
    }
    bufp->fullWData(oldp+7638,(__Vtemp_151),312);
    bufp->fullIData(oldp+7648,(((0x40U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                                 ? (0x3fU & ((IData)(1U) 
                                             + (0x1fU 
                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))))
                                 : ((0x10U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                                     ? (0x3fU & ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))))
                                     : ((0x80U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                                         ? (0x3fU & 
                                            ((IData)(1U) 
                                             + (0x1fU 
                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))))
                                         : ((0x20U 
                                             & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_bignum[1U])
                                             ? (((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                            >> 5U))) 
                                                << 5U)
                                             : (0x3fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))))))))),32);
    __Vtemp_157[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[0U];
    __Vtemp_157[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[1U];
    __Vtemp_157[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[2U];
    __Vtemp_157[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[3U];
    if ((0x60000000ULL == (0x60000000ULL & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q))) {
        __Vtemp_157[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[0U];
        __Vtemp_157[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[1U];
        __Vtemp_157[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[2U];
        __Vtemp_157[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[3U];
    } else {
        __Vtemp_157[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[4U];
        __Vtemp_157[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[5U];
        __Vtemp_157[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[6U];
        __Vtemp_157[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[7U];
    }
    bufp->fullWData(oldp+7649,(__Vtemp_157),256);
    bufp->fullBit(oldp+7657,(((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counter_err_d)) 
                              | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_cnt_err) 
                                 | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                    & (0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_intg_err)))))));
    bufp->fullBit(oldp+7658,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q) 
                               != (0x1fffU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_end_addr_full))) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req))));
    bufp->fullBit(oldp+7659,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                              & ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__st_insn))
                                   ? (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall)
                                   : ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_load_req_raw) 
                                      | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_store_req_raw))) 
                                 & ((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
                                            >> 0xcU)) 
                                    | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                                        & (0U != (0x1fU 
                                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked)))) 
                                       | ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                                          & (0U != 
                                             (3U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked))))))))));
    bufp->fullBit(oldp+7660,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset)) 
                              & (0U != (3U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked))))));
    bufp->fullBit(oldp+7661,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                              & (0U != (0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked))))));
    bufp->fullBit(oldp+7662,(((0U == vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req))));
    bufp->fullBit(oldp+7663,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                 & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__branch_insn) 
                                    | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__jump_insn))))));
    bufp->fullBit(oldp+7664,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_start_req))));
    bufp->fullBit(oldp+7665,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2) 
                              & (((~ (IData)((0xfU 
                                              == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write)) 
                                 | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
                                    & (0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))));
    bufp->fullBit(oldp+7666,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT____VdfgRegularize_h2047be64_0_2) 
                              & (((~ (IData)((0xfU 
                                              == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read)) 
                                 | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                                    & (0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))))));
    bufp->fullBit(oldp+7667,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_a_onehot 
                              != vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U])));
    bufp->fullBit(oldp+7668,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_b_onehot 
                              != vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U])));
    bufp->fullBit(oldp+7669,((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_wr_en_onehot 
                              != vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U])));
    bufp->fullBit(oldp+7670,((1U & (~ ((((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                         | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                            | ((0U 
                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                               | ((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                                     | ((0U 
                                                         != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                                        | ((0U 
                                                            != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                                           | (0U 
                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_a_intg_dec__err_o))))))))) 
                                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                       | (((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                           | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                              | ((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                    | ((0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                       | ((0U 
                                                           != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                          | ((0U 
                                                              != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                             | (0U 
                                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_b_intg_dec__err_o))))))))) 
                                          & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf)))))));
    bufp->fullBit(oldp+7671,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT____Vcellout__u_otp_key_req_sync__dst_req_o));
    bufp->fullWData(oldp+7672,(vlSelf->imem_test__DOT__otbn_otp_key_i),194);
    __Vtemp_158[0U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[3U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[2U] 
                                     >> 1U));
    __Vtemp_158[1U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[4U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[3U] 
                                     >> 1U));
    __Vtemp_158[2U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[5U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[4U] 
                                     >> 1U));
    __Vtemp_158[3U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[6U] 
                        << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[5U] 
                                     >> 1U));
    bufp->fullWData(oldp+7679,(__Vtemp_158),128);
    bufp->fullQData(oldp+7683,((((QData)((IData)(vlSelf->imem_test__DOT__otbn_otp_key_i[2U])) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               vlSelf->imem_test__DOT__otbn_otp_key_i[1U])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->imem_test__DOT__otbn_otp_key_i[0U])) 
                                                 >> 1U)))),64);
    bufp->fullBit(oldp+7685,((1U & vlSelf->imem_test__DOT__otbn_otp_key_i[0U])));
    bufp->fullBit(oldp+7686,((1U & (vlSelf->imem_test__DOT__otbn_otp_key_i[6U] 
                                    >> 1U))));
    __Vtemp_161[0U] = vlSelf->imem_test__DOT__otbn_otp_key_i[0U];
    __Vtemp_161[1U] = vlSelf->imem_test__DOT__otbn_otp_key_i[1U];
    __Vtemp_161[2U] = vlSelf->imem_test__DOT__otbn_otp_key_i[2U];
    __Vtemp_161[3U] = vlSelf->imem_test__DOT__otbn_otp_key_i[3U];
    __Vtemp_161[4U] = vlSelf->imem_test__DOT__otbn_otp_key_i[4U];
    __Vtemp_161[5U] = vlSelf->imem_test__DOT__otbn_otp_key_i[5U];
    __Vtemp_161[6U] = (1U & vlSelf->imem_test__DOT__otbn_otp_key_i[6U]);
    bufp->fullWData(oldp+7687,(__Vtemp_161),193);
    bufp->fullBit(oldp+7694,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    bufp->fullBit(oldp+7695,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
    bufp->fullBit(oldp+7696,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    bufp->fullBit(oldp+7697,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q));
    bufp->fullBit(oldp+7698,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req));
    bufp->fullBit(oldp+7699,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake));
    bufp->fullBit(oldp+7700,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq));
    bufp->fullQData(oldp+7701,(vlSelf->imem_test__DOT__edn_rnd_i),34);
    bufp->fullIData(oldp+7703,((IData)(vlSelf->imem_test__DOT__edn_rnd_i)),32);
    bufp->fullBit(oldp+7704,((1U & (IData)((vlSelf->imem_test__DOT__edn_rnd_i 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+7705,((1U & (IData)((vlSelf->imem_test__DOT__edn_rnd_i 
                                            >> 0x21U)))));
    bufp->fullQData(oldp+7706,((0x1ffffffffULL & vlSelf->imem_test__DOT__edn_rnd_i)),33);
    bufp->fullBit(oldp+7708,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
    bufp->fullBit(oldp+7709,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    bufp->fullBit(oldp+7710,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q));
    bufp->fullBit(oldp+7711,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake));
    bufp->fullBit(oldp+7712,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    bufp->fullBit(oldp+7713,(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q));
    bufp->fullSData(oldp+7714,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o) 
                                 << 0xeU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o) 
                                              << 0xcU) 
                                             | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o) 
                                                             << 2U) 
                                                            | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o))))))))),16);
    bufp->fullIData(oldp+7715,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7716,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7717,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7718,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7719,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7720,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7721,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7722,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7723,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7724,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7725,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7726,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7727,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7728,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7729,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7730,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7731,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7732,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7733,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7734,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7735,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7736,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7737,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__g_mod_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7738,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullSData(oldp+7739,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o) 
                                 << 0xeU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o) 
                                              << 0xcU) 
                                             | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o) 
                                                             << 2U) 
                                                            | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o))))))))),16);
    bufp->fullIData(oldp+7740,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7741,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__0__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7742,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7743,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7744,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__1__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7745,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7746,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7747,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__2__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7748,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7749,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7750,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__3__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7751,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7752,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7753,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__4__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7754,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7755,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7756,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7757,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7758,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7759,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7760,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullIData(oldp+7761,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__data_o),32);
    bufp->fullCData(oldp+7762,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__g_acc_words__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+7763,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o),2);
    bufp->fullCData(oldp+7764,((0x7fU & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked) 
                                         >> 5U))),7);
    bufp->fullWData(oldp+7765,(vlSelf->imem_test__DOT__dut__DOT__dmem_wmask_core),312);
    bufp->fullCData(oldp+7775,(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_d),8);
    bufp->fullSData(oldp+7776,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked),12);
    bufp->fullBit(oldp+7777,((1U & VL_REDXOR_32((0x1fU 
                                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_blanked))))));
    bufp->fullWData(oldp+7778,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram),312);
    bufp->fullQData(oldp+7788,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[0U]))))),39);
    bufp->fullQData(oldp+7790,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[2U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[1U])) 
                                                      >> 7U)))),39);
    bufp->fullQData(oldp+7792,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[3U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[2U])) 
                                                      >> 0xeU)))),39);
    bufp->fullQData(oldp+7794,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[4U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[3U])) 
                                                      >> 0x15U)))),39);
    bufp->fullQData(oldp+7796,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[6U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[5U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[4U])) 
                                                         >> 0x1cU))))),39);
    bufp->fullQData(oldp+7798,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[7U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[6U])) 
                                                      >> 3U)))),39);
    bufp->fullQData(oldp+7800,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[8U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[7U])) 
                                                      >> 0xaU)))),39);
    bufp->fullQData(oldp+7802,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[9U])) 
                                                    << 0xfU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram[8U])) 
                                                      >> 0x11U)))),39);
    bufp->fullBit(oldp+7804,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__rvalid_inst));
    bufp->fullQData(oldp+7805,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rdata_sram),39);
    bufp->fullBit(oldp+7807,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__rvalid_inst));
    bufp->fullSData(oldp+7808,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr),13);
    bufp->fullQData(oldp+7809,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg),39);
    bufp->fullQData(oldp+7811,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg),39);
    bufp->fullBit(oldp+7813,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_intg_err_d));
    bufp->fullIData(oldp+7814,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result),32);
    bufp->fullWData(oldp+7815,(vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o),312);
    bufp->fullCData(oldp+7825,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr),5);
    bufp->fullWData(oldp+7826,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_data_no_intg_ctrl),256);
    bufp->fullCData(oldp+7834,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf),5);
    bufp->fullWData(oldp+7835,(vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o),312);
    bufp->fullCData(oldp+7845,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf),5);
    bufp->fullWData(oldp+7846,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation_result),256);
    bufp->fullWData(oldp+7854,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation),521);
    bufp->fullWData(oldp+7871,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result),256);
    bufp->fullCData(oldp+7879,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_flags),4);
    bufp->fullCData(oldp+7880,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_flags_en),4);
    bufp->fullBit(oldp+7881,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_predec_error));
    bufp->fullBit(oldp+7882,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__predec_error_d));
    bufp->fullBit(oldp+7883,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__is_equal));
    bufp->fullIData(oldp+7884,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__operand_a_reverse),32);
    bufp->fullQData(oldp+7885,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out),33);
    bufp->fullIData(oldp+7887,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out_reverse),32);
    bufp->fullBit(oldp+7888,((1U & (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_base__DOT__shift_out 
                                            >> 0x20U)))));
    bufp->fullWData(oldp+7889,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res),258);
    bufp->fullWData(oldp+7898,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res),256);
    bufp->fullCData(oldp+7906,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_update_flags),4);
    bufp->fullBit(oldp+7907,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_update_flags_en_raw));
    bufp->fullBit(oldp+7908,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logic_update_flags_en_raw));
    bufp->fullCData(oldp+7909,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mac_update_z_flag_en_blanked),2);
    bufp->fullCData(oldp+7910,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flag_group_sel),2);
    bufp->fullCData(oldp+7911,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_adder_update),2);
    bufp->fullCData(oldp+7912,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_logic_update),2);
    bufp->fullCData(oldp+7913,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_flags_mac_update),2);
    bufp->fullWData(oldp+7914,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_operand_b_blanked),256);
    bufp->fullWData(oldp+7922,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_in_lower_reverse),256);
    bufp->fullWData(oldp+7930,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out),512);
    bufp->fullWData(oldp+7946,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out_lower_reverse),256);
    bufp->fullWData(oldp+7954,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_res),256);
    __Vtemp_162[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[8U];
    __Vtemp_162[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[9U];
    __Vtemp_162[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[0xaU];
    __Vtemp_162[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[0xbU];
    __Vtemp_162[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[0xcU];
    __Vtemp_162[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[0xdU];
    __Vtemp_162[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[0xeU];
    __Vtemp_162[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shifter_out[0xfU];
    bufp->fullWData(oldp+7962,(__Vtemp_162),256);
    bufp->fullBit(oldp+7970,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_carry_in));
    bufp->fullBit(oldp+7971,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_op_b_invert));
    bufp->fullWData(oldp+7972,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res),258);
    __Vtemp_165[0U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                          ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U])
                          : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U]) 
                        << 1U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_carry_in));
    __Vtemp_165[1U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                          ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U])
                          : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[0U]) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                       ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U])
                                       : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U]) 
                                     << 1U));
    __Vtemp_165[2U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                          ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U])
                          : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[1U]) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                       ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U])
                                       : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U]) 
                                     << 1U));
    __Vtemp_165[3U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                          ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U])
                          : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[2U]) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                       ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U])
                                       : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U]) 
                                     << 1U));
    __Vtemp_165[4U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                          ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U])
                          : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[3U]) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                       ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U])
                                       : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U]) 
                                     << 1U));
    __Vtemp_165[5U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                          ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U])
                          : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[4U]) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                       ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U])
                                       : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U]) 
                                     << 1U));
    __Vtemp_165[6U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                          ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U])
                          : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[5U]) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                       ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U])
                                       : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U]) 
                                     << 1U));
    __Vtemp_165[7U] = ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                          ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U])
                          : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[6U]) 
                        >> 0x1fU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                                       ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U])
                                       : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U]) 
                                     << 1U));
    __Vtemp_165[8U] = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert)
                         ? (~ vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U])
                         : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out[7U]) 
                       >> 0x1fU);
    bufp->fullWData(oldp+7981,(__Vtemp_165),257);
    bufp->fullBit(oldp+7990,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_carry_in));
    bufp->fullBit(oldp+7991,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_op_b_invert));
    bufp->fullWData(oldp+7992,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__shift_mod_mux_out),256);
    bufp->fullBit(oldp+8000,((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_x_res[0U])));
    bufp->fullBit(oldp+8001,((1U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res[0U])));
    bufp->fullBit(oldp+8002,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_adder_x_en));
    bufp->fullBit(oldp+8003,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_x_res_operand_a_sel));
    bufp->fullBit(oldp+8004,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_adder_y_op_a_en));
    bufp->fullBit(oldp+8005,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_adder_y_op_shifter_en));
    bufp->fullBit(oldp+8006,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_shifter_a_en));
    bufp->fullBit(oldp+8007,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_shifter_b_en));
    bufp->fullBit(oldp+8008,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_shift_right));
    bufp->fullBit(oldp+8009,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_shift_mod_sel));
    bufp->fullBit(oldp+8010,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_logic_a_en));
    bufp->fullBit(oldp+8011,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_logic_shifter_en));
    bufp->fullCData(oldp+8012,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__expected_logic_res_sel),4);
    bufp->fullWData(oldp+8013,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[0]),256);
    bufp->fullWData(oldp+8021,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[1]),256);
    bufp->fullWData(oldp+8029,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[2]),256);
    bufp->fullWData(oldp+8037,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_res_mux_in[3]),256);
    bufp->fullWData(oldp+8045,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_op_a_blanked),256);
    bufp->fullWData(oldp+8053,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__logical_op_shifter_res_blanked),256);
    bufp->fullBit(oldp+8061,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used));
    bufp->fullBit(oldp+8062,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellinp__g_update_flag_groups__BRA__0__KET____DOT__u_mac_z_flag_en_blanker__in_i));
    bufp->fullCData(oldp+8063,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0U]),4);
    bufp->fullCData(oldp+8064,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x64U]),4);
    bufp->fullCData(oldp+8065,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x65U]),4);
    bufp->fullCData(oldp+8066,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x66U]),4);
    bufp->fullCData(oldp+8067,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x67U]),4);
    bufp->fullCData(oldp+8068,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x68U]),4);
    bufp->fullCData(oldp+8069,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x69U]),4);
    bufp->fullCData(oldp+8070,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x6aU]),4);
    bufp->fullCData(oldp+8071,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x6bU]),4);
    bufp->fullCData(oldp+8072,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x6cU]),4);
    bufp->fullCData(oldp+8073,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x6dU]),4);
    bufp->fullCData(oldp+8074,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xaU]),4);
    bufp->fullCData(oldp+8075,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x6eU]),4);
    bufp->fullCData(oldp+8076,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x6fU]),4);
    bufp->fullCData(oldp+8077,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x70U]),4);
    bufp->fullCData(oldp+8078,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x71U]),4);
    bufp->fullCData(oldp+8079,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x72U]),4);
    bufp->fullCData(oldp+8080,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x73U]),4);
    bufp->fullCData(oldp+8081,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x74U]),4);
    bufp->fullCData(oldp+8082,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x75U]),4);
    bufp->fullCData(oldp+8083,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x76U]),4);
    bufp->fullCData(oldp+8084,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x77U]),4);
    bufp->fullCData(oldp+8085,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xbU]),4);
    bufp->fullCData(oldp+8086,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x78U]),4);
    bufp->fullCData(oldp+8087,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x79U]),4);
    bufp->fullCData(oldp+8088,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x7aU]),4);
    bufp->fullCData(oldp+8089,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x7bU]),4);
    bufp->fullCData(oldp+8090,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x7cU]),4);
    bufp->fullCData(oldp+8091,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x7dU]),4);
    bufp->fullCData(oldp+8092,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x7eU]),4);
    bufp->fullCData(oldp+8093,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x7fU]),4);
    bufp->fullCData(oldp+8094,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x80U]),4);
    bufp->fullCData(oldp+8095,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x81U]),4);
    bufp->fullCData(oldp+8096,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xcU]),4);
    bufp->fullCData(oldp+8097,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x82U]),4);
    bufp->fullCData(oldp+8098,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x83U]),4);
    bufp->fullCData(oldp+8099,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x84U]),4);
    bufp->fullCData(oldp+8100,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x85U]),4);
    bufp->fullCData(oldp+8101,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x86U]),4);
    bufp->fullCData(oldp+8102,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x87U]),4);
    bufp->fullCData(oldp+8103,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x88U]),4);
    bufp->fullCData(oldp+8104,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x89U]),4);
    bufp->fullCData(oldp+8105,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x8aU]),4);
    bufp->fullCData(oldp+8106,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x8bU]),4);
    bufp->fullCData(oldp+8107,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xdU]),4);
    bufp->fullCData(oldp+8108,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x8cU]),4);
    bufp->fullCData(oldp+8109,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x8dU]),4);
    bufp->fullCData(oldp+8110,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x8eU]),4);
    bufp->fullCData(oldp+8111,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x8fU]),4);
    bufp->fullCData(oldp+8112,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x90U]),4);
    bufp->fullCData(oldp+8113,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x91U]),4);
    bufp->fullCData(oldp+8114,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x92U]),4);
    bufp->fullCData(oldp+8115,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x93U]),4);
    bufp->fullCData(oldp+8116,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x94U]),4);
    bufp->fullCData(oldp+8117,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x95U]),4);
    bufp->fullCData(oldp+8118,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xeU]),4);
    bufp->fullCData(oldp+8119,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x96U]),4);
    bufp->fullCData(oldp+8120,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x97U]),4);
    bufp->fullCData(oldp+8121,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x98U]),4);
    bufp->fullCData(oldp+8122,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x99U]),4);
    bufp->fullCData(oldp+8123,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x9aU]),4);
    bufp->fullCData(oldp+8124,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x9bU]),4);
    bufp->fullCData(oldp+8125,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x9cU]),4);
    bufp->fullCData(oldp+8126,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x9dU]),4);
    bufp->fullCData(oldp+8127,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x9eU]),4);
    bufp->fullCData(oldp+8128,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x9fU]),4);
    bufp->fullCData(oldp+8129,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xfU]),4);
    bufp->fullCData(oldp+8130,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa0U]),4);
    bufp->fullCData(oldp+8131,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa1U]),4);
    bufp->fullCData(oldp+8132,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa2U]),4);
    bufp->fullCData(oldp+8133,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa3U]),4);
    bufp->fullCData(oldp+8134,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa4U]),4);
    bufp->fullCData(oldp+8135,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa5U]),4);
    bufp->fullCData(oldp+8136,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa6U]),4);
    bufp->fullCData(oldp+8137,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa7U]),4);
    bufp->fullCData(oldp+8138,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa8U]),4);
    bufp->fullCData(oldp+8139,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xa9U]),4);
    bufp->fullCData(oldp+8140,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x10U]),4);
    bufp->fullCData(oldp+8141,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xaaU]),4);
    bufp->fullCData(oldp+8142,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xabU]),4);
    bufp->fullCData(oldp+8143,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xacU]),4);
    bufp->fullCData(oldp+8144,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xadU]),4);
    bufp->fullCData(oldp+8145,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xaeU]),4);
    bufp->fullCData(oldp+8146,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xafU]),4);
    bufp->fullCData(oldp+8147,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb0U]),4);
    bufp->fullCData(oldp+8148,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb1U]),4);
    bufp->fullCData(oldp+8149,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb2U]),4);
    bufp->fullCData(oldp+8150,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb3U]),4);
    bufp->fullCData(oldp+8151,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x11U]),4);
    bufp->fullCData(oldp+8152,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb4U]),4);
    bufp->fullCData(oldp+8153,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb5U]),4);
    bufp->fullCData(oldp+8154,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb6U]),4);
    bufp->fullCData(oldp+8155,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb7U]),4);
    bufp->fullCData(oldp+8156,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb8U]),4);
    bufp->fullCData(oldp+8157,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xb9U]),4);
    bufp->fullCData(oldp+8158,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xbaU]),4);
    bufp->fullCData(oldp+8159,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xbbU]),4);
    bufp->fullCData(oldp+8160,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xbcU]),4);
    bufp->fullCData(oldp+8161,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xbdU]),4);
    bufp->fullCData(oldp+8162,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x12U]),4);
    bufp->fullCData(oldp+8163,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xbeU]),4);
    bufp->fullCData(oldp+8164,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xbfU]),4);
    bufp->fullCData(oldp+8165,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc0U]),4);
    bufp->fullCData(oldp+8166,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc1U]),4);
    bufp->fullCData(oldp+8167,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc2U]),4);
    bufp->fullCData(oldp+8168,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc3U]),4);
    bufp->fullCData(oldp+8169,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc4U]),4);
    bufp->fullCData(oldp+8170,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc5U]),4);
    bufp->fullCData(oldp+8171,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc6U]),4);
    bufp->fullCData(oldp+8172,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc7U]),4);
    bufp->fullCData(oldp+8173,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x13U]),4);
    bufp->fullCData(oldp+8174,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [1U]),4);
    bufp->fullCData(oldp+8175,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc8U]),4);
    bufp->fullCData(oldp+8176,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xc9U]),4);
    bufp->fullCData(oldp+8177,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xcaU]),4);
    bufp->fullCData(oldp+8178,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xcbU]),4);
    bufp->fullCData(oldp+8179,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xccU]),4);
    bufp->fullCData(oldp+8180,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xcdU]),4);
    bufp->fullCData(oldp+8181,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xceU]),4);
    bufp->fullCData(oldp+8182,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xcfU]),4);
    bufp->fullCData(oldp+8183,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd0U]),4);
    bufp->fullCData(oldp+8184,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd1U]),4);
    bufp->fullCData(oldp+8185,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x14U]),4);
    bufp->fullCData(oldp+8186,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd2U]),4);
    bufp->fullCData(oldp+8187,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd3U]),4);
    bufp->fullCData(oldp+8188,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd4U]),4);
    bufp->fullCData(oldp+8189,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd5U]),4);
    bufp->fullCData(oldp+8190,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd6U]),4);
    bufp->fullCData(oldp+8191,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd7U]),4);
    bufp->fullCData(oldp+8192,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd8U]),4);
    bufp->fullCData(oldp+8193,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xd9U]),4);
    bufp->fullCData(oldp+8194,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xdaU]),4);
    bufp->fullCData(oldp+8195,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xdbU]),4);
    bufp->fullCData(oldp+8196,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x15U]),4);
    bufp->fullCData(oldp+8197,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xdcU]),4);
    bufp->fullCData(oldp+8198,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xddU]),4);
    bufp->fullCData(oldp+8199,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xdeU]),4);
    bufp->fullCData(oldp+8200,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xdfU]),4);
    bufp->fullCData(oldp+8201,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe0U]),4);
    bufp->fullCData(oldp+8202,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe1U]),4);
    bufp->fullCData(oldp+8203,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe2U]),4);
    bufp->fullCData(oldp+8204,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe3U]),4);
    bufp->fullCData(oldp+8205,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe4U]),4);
    bufp->fullCData(oldp+8206,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe5U]),4);
    bufp->fullCData(oldp+8207,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x16U]),4);
    bufp->fullCData(oldp+8208,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe6U]),4);
    bufp->fullCData(oldp+8209,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe7U]),4);
    bufp->fullCData(oldp+8210,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe8U]),4);
    bufp->fullCData(oldp+8211,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xe9U]),4);
    bufp->fullCData(oldp+8212,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xeaU]),4);
    bufp->fullCData(oldp+8213,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xebU]),4);
    bufp->fullCData(oldp+8214,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xecU]),4);
    bufp->fullCData(oldp+8215,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xedU]),4);
    bufp->fullCData(oldp+8216,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xeeU]),4);
    bufp->fullCData(oldp+8217,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xefU]),4);
    bufp->fullCData(oldp+8218,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x17U]),4);
    bufp->fullCData(oldp+8219,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf0U]),4);
    bufp->fullCData(oldp+8220,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf1U]),4);
    bufp->fullCData(oldp+8221,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf2U]),4);
    bufp->fullCData(oldp+8222,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf3U]),4);
    bufp->fullCData(oldp+8223,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf4U]),4);
    bufp->fullCData(oldp+8224,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf5U]),4);
    bufp->fullCData(oldp+8225,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf6U]),4);
    bufp->fullCData(oldp+8226,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf7U]),4);
    bufp->fullCData(oldp+8227,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf8U]),4);
    bufp->fullCData(oldp+8228,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xf9U]),4);
    bufp->fullCData(oldp+8229,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x18U]),4);
    bufp->fullCData(oldp+8230,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xfaU]),4);
    bufp->fullCData(oldp+8231,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xfbU]),4);
    bufp->fullCData(oldp+8232,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xfcU]),4);
    bufp->fullCData(oldp+8233,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xfdU]),4);
    bufp->fullCData(oldp+8234,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xfeU]),4);
    bufp->fullCData(oldp+8235,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0xffU]),4);
    bufp->fullCData(oldp+8236,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x19U]),4);
    bufp->fullCData(oldp+8237,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x1aU]),4);
    bufp->fullCData(oldp+8238,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x1bU]),4);
    bufp->fullCData(oldp+8239,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x1cU]),4);
    bufp->fullCData(oldp+8240,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x1dU]),4);
    bufp->fullCData(oldp+8241,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [2U]),4);
    bufp->fullCData(oldp+8242,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x1eU]),4);
    bufp->fullCData(oldp+8243,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x1fU]),4);
    bufp->fullCData(oldp+8244,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x20U]),4);
    bufp->fullCData(oldp+8245,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x21U]),4);
    bufp->fullCData(oldp+8246,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x22U]),4);
    bufp->fullCData(oldp+8247,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x23U]),4);
    bufp->fullCData(oldp+8248,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x24U]),4);
    bufp->fullCData(oldp+8249,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x25U]),4);
    bufp->fullCData(oldp+8250,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x26U]),4);
    bufp->fullCData(oldp+8251,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x27U]),4);
    bufp->fullCData(oldp+8252,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [3U]),4);
    bufp->fullCData(oldp+8253,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x28U]),4);
    bufp->fullCData(oldp+8254,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x29U]),4);
    bufp->fullCData(oldp+8255,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x2aU]),4);
    bufp->fullCData(oldp+8256,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x2bU]),4);
    bufp->fullCData(oldp+8257,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x2cU]),4);
    bufp->fullCData(oldp+8258,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x2dU]),4);
    bufp->fullCData(oldp+8259,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x2eU]),4);
    bufp->fullCData(oldp+8260,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x2fU]),4);
    bufp->fullCData(oldp+8261,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x30U]),4);
    bufp->fullCData(oldp+8262,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x31U]),4);
    bufp->fullCData(oldp+8263,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [4U]),4);
    bufp->fullCData(oldp+8264,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x32U]),4);
    bufp->fullCData(oldp+8265,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x33U]),4);
    bufp->fullCData(oldp+8266,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x34U]),4);
    bufp->fullCData(oldp+8267,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x35U]),4);
    bufp->fullCData(oldp+8268,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x36U]),4);
    bufp->fullCData(oldp+8269,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x37U]),4);
    bufp->fullCData(oldp+8270,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x38U]),4);
    bufp->fullCData(oldp+8271,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x39U]),4);
    bufp->fullCData(oldp+8272,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x3aU]),4);
    bufp->fullCData(oldp+8273,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x3bU]),4);
    bufp->fullCData(oldp+8274,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [5U]),4);
    bufp->fullCData(oldp+8275,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x3cU]),4);
    bufp->fullCData(oldp+8276,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x3dU]),4);
    bufp->fullCData(oldp+8277,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x3eU]),4);
    bufp->fullCData(oldp+8278,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x3fU]),4);
    bufp->fullCData(oldp+8279,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x40U]),4);
    bufp->fullCData(oldp+8280,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x41U]),4);
    bufp->fullCData(oldp+8281,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x42U]),4);
    bufp->fullCData(oldp+8282,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x43U]),4);
    bufp->fullCData(oldp+8283,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x44U]),4);
    bufp->fullCData(oldp+8284,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x45U]),4);
    bufp->fullCData(oldp+8285,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [6U]),4);
    bufp->fullCData(oldp+8286,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x46U]),4);
    bufp->fullCData(oldp+8287,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x47U]),4);
    bufp->fullCData(oldp+8288,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x48U]),4);
    bufp->fullCData(oldp+8289,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x49U]),4);
    bufp->fullCData(oldp+8290,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x4aU]),4);
    bufp->fullCData(oldp+8291,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x4bU]),4);
    bufp->fullCData(oldp+8292,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x4cU]),4);
    bufp->fullCData(oldp+8293,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x4dU]),4);
    bufp->fullCData(oldp+8294,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x4eU]),4);
    bufp->fullCData(oldp+8295,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x4fU]),4);
    bufp->fullCData(oldp+8296,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [7U]),4);
    bufp->fullCData(oldp+8297,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x50U]),4);
    bufp->fullCData(oldp+8298,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x51U]),4);
    bufp->fullCData(oldp+8299,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x52U]),4);
    bufp->fullCData(oldp+8300,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x53U]),4);
    bufp->fullCData(oldp+8301,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x54U]),4);
    bufp->fullCData(oldp+8302,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x55U]),4);
    bufp->fullCData(oldp+8303,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x56U]),4);
    bufp->fullCData(oldp+8304,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x57U]),4);
    bufp->fullCData(oldp+8305,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x58U]),4);
    bufp->fullCData(oldp+8306,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x59U]),4);
    bufp->fullCData(oldp+8307,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [8U]),4);
    bufp->fullCData(oldp+8308,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x5aU]),4);
    bufp->fullCData(oldp+8309,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x5bU]),4);
    bufp->fullCData(oldp+8310,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x5cU]),4);
    bufp->fullCData(oldp+8311,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x5dU]),4);
    bufp->fullCData(oldp+8312,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x5eU]),4);
    bufp->fullCData(oldp+8313,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x5fU]),4);
    bufp->fullCData(oldp+8314,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x60U]),4);
    bufp->fullCData(oldp+8315,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x61U]),4);
    bufp->fullCData(oldp+8316,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x62U]),4);
    bufp->fullCData(oldp+8317,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [0x63U]),4);
    bufp->fullCData(oldp+8318,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_logical_res_mux__DOT__in_mux
                               [9U]),4);
    bufp->fullBit(oldp+8319,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__branch_taken));
    bufp->fullSData(oldp+8320,((0x1fffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result)),13);
    bufp->fullBit(oldp+8321,((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
                                     >> 0xdU))));
    bufp->fullSData(oldp+8322,((0xfffU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result)),12);
    bufp->fullIData(oldp+8323,((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg)),32);
    bufp->fullIData(oldp+8324,((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg)),32);
    bufp->fullWData(oldp+8325,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_data_a_no_intg),256);
    bufp->fullWData(oldp+8333,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_data_b_no_intg),256);
    bufp->fullCData(oldp+8341,((0x3fU & ((IData)(1U) 
                                         + (0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))))),6);
    bufp->fullCData(oldp+8342,((0x3fU & ((IData)(1U) 
                                         + (0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))))),6);
    bufp->fullIData(oldp+8343,((0x7ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                         >> 5U))))),27);
    bufp->fullIData(oldp+8344,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations),32);
    bufp->fullBit(oldp+8345,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_jump));
    bufp->fullSData(oldp+8346,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_jump_addr),13);
    bufp->fullBit(oldp+8347,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__imem_addr_err));
    bufp->fullBit(oldp+8348,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_sw_err));
    bufp->fullBit(oldp+8349,((0U != (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result 
                                     >> 0xcU))));
    bufp->fullBit(oldp+8350,((0U != (0x7fU & (IData)(
                                                     (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                      >> 0x20U))))));
    bufp->fullCData(oldp+8351,((0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg))),5);
    bufp->fullCData(oldp+8352,((0x1fU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_b_intg))),5);
    bufp->fullBit(oldp+8353,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__at_current_loop_end_insn));
    bufp->fullBit(oldp+8354,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop));
    bufp->fullCData(oldp+8355,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_intg_err),2);
    bufp->fullSData(oldp+8356,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_end_addr_full),15);
    bufp->fullSData(oldp+8357,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_end_addr_imem),14);
    bufp->fullQData(oldp+8358,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_addrs_padded_intg),39);
    bufp->fullCData(oldp+8360,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_wr_idx),3);
    bufp->fullBit(oldp+8361,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write));
    bufp->fullBit(oldp+8362,((1U & VL_REDXOR_32((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_addrs_padded_intg)))));
    bufp->fullIData(oldp+8363,(((IData)(0xffffffffU) 
                                - vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations)),32);
    bufp->fullQData(oldp+8364,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT____Vcellinp__loop_info_stack__push_data_i),34);
    bufp->fullBit(oldp+8366,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read));
    bufp->fullCData(oldp+8367,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt),5);
    bufp->fullBit(oldp+8368,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                 >> 4U))));
    bufp->fullBit(oldp+8369,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                 >> 4U))));
    bufp->fullCData(oldp+8370,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
                                 & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                    >> 4U)) ? 0U : 
                                (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                                  & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                     >> 4U)) ? 0xfU
                                  : (0xfU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))))),4);
    bufp->fullCData(oldp+8371,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt),5);
    bufp->fullBit(oldp+8372,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                 >> 4U))));
    bufp->fullBit(oldp+8373,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                 >> 4U))));
    bufp->fullCData(oldp+8374,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write) 
                                 & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                    >> 4U)) ? 0U : 
                                (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__stack_read) 
                                  & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                     >> 4U)) ? 0xfU
                                  : (0xfU & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))))),4);
    bufp->fullIData(oldp+8375,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__u_loop_addrs_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8376,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__u_loop_addrs_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8377,((0x1fU & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf)))),5);
    bufp->fullCData(oldp+8378,((0x1fU & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf)))),5);
    if ((8U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])) {
        __Vtemp_178[0U] = 0U;
        __Vtemp_178[1U] = 0U;
        __Vtemp_178[2U] = 0U;
        __Vtemp_178[3U] = 0U;
        if ((4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])) {
            __Vtemp_178[4U] = 0U;
            __Vtemp_178[5U] = 0U;
            __Vtemp_178[6U] = (IData)((((QData)((IData)(
                                                        vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[0U]))));
            __Vtemp_178[7U] = (IData)(((((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[0U]))) 
                                       >> 0x20U));
        } else {
            __Vtemp_178[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[0U];
            __Vtemp_178[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[1U];
            __Vtemp_178[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[2U];
            __Vtemp_178[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[3U];
        }
    } else {
        if ((4U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])) {
            __Vtemp_178[0U] = 0U;
            __Vtemp_178[1U] = 0U;
            __Vtemp_178[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[0U];
            __Vtemp_178[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[1U];
            __Vtemp_178[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[2U];
            __Vtemp_178[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[3U];
        } else {
            __Vtemp_178[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[0U];
            __Vtemp_178[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[1U];
            __Vtemp_178[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[2U];
            __Vtemp_178[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res[3U];
            __Vtemp_178[4U] = 0U;
            __Vtemp_178[5U] = 0U;
        }
        __Vtemp_178[6U] = 0U;
        __Vtemp_178[7U] = 0U;
    }
    bufp->fullWData(oldp+8379,(__Vtemp_178),256);
    bufp->fullCData(oldp+8387,((((IData)((0U == (((
                                                   vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[4U] 
                                                   | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[5U]) 
                                                  | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[6U]) 
                                                 | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[7U]))) 
                                 << 1U) | (0U == ((
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[0U] 
                                                    | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[1U]) 
                                                   | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[2U]) 
                                                  | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation_result[3U])))),2);
    bufp->fullQData(oldp+8388,(((0x100U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])
                                 ? ((0x80U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])
                                     ? (((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_a_blanked[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_a_blanked[6U])))
                                     : (((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_a_blanked[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_a_blanked[4U]))))
                                 : ((0x80U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])
                                     ? (((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_a_blanked[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_a_blanked[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_a_blanked[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_a_blanked[0U])))))),64);
    bufp->fullQData(oldp+8390,(((0x40U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])
                                 ? ((0x20U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])
                                     ? (((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_b_blanked[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_b_blanked[6U])))
                                     : (((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_b_blanked[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_b_blanked[4U]))))
                                 : ((0x20U & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_operation[0U])
                                     ? (((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_b_blanked[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_b_blanked[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_b_blanked[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_b_blanked[0U])))))),64);
    bufp->fullWData(oldp+8392,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__mul_res),128);
    bufp->fullWData(oldp+8396,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_a_blanked),256);
    bufp->fullWData(oldp+8404,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__operand_b_blanked),256);
    bufp->fullCData(oldp+8412,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_a_err),2);
    bufp->fullCData(oldp+8413,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__rd_data_b_err),2);
    bufp->fullQData(oldp+8414,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__stack_data_intg),39);
    bufp->fullIData(oldp+8416,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8417,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_a_intg_dec__DOT__syndrome_o),7);
    bufp->fullIData(oldp+8418,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8419,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_rd_data_b_intg_dec__DOT__syndrome_o),7);
    bufp->fullSData(oldp+8420,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_a_intg_dec__err_o) 
                                 << 0xeU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_a_intg_dec__err_o) 
                                              << 0xcU) 
                                             | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_a_intg_dec__err_o) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_a_intg_dec__err_o) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_a_intg_dec__err_o) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_a_intg_dec__err_o) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_a_intg_dec__err_o) 
                                                             << 2U) 
                                                            | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_a_intg_dec__err_o))))))))),16);
    bufp->fullSData(oldp+8421,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_b_intg_dec__err_o) 
                                 << 0xeU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_b_intg_dec__err_o) 
                                              << 0xcU) 
                                             | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_b_intg_dec__err_o) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_b_intg_dec__err_o) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_b_intg_dec__err_o) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_b_intg_dec__err_o) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_b_intg_dec__err_o) 
                                                             << 2U) 
                                                            | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_b_intg_dec__err_o))))))))),16);
    bufp->fullIData(oldp+8422,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_a_onehot),32);
    bufp->fullIData(oldp+8423,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_rd_en_b_onehot),32);
    bufp->fullIData(oldp+8424,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__expected_wr_en_onehot),32);
    bufp->fullQData(oldp+8425,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[0U]))))),39);
    bufp->fullIData(oldp+8427,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_a_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8428,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_a_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8429,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_a_intg_dec__err_o),2);
    bufp->fullQData(oldp+8430,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[0U]))))),39);
    bufp->fullIData(oldp+8432,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_b_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8433,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_b_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8434,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_b_intg_dec__err_o),2);
    bufp->fullQData(oldp+8435,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[2U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[1U])) 
                                                      >> 7U)))),39);
    bufp->fullIData(oldp+8437,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_a_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8438,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_a_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8439,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_a_intg_dec__err_o),2);
    bufp->fullQData(oldp+8440,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[2U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[1U])) 
                                                      >> 7U)))),39);
    bufp->fullIData(oldp+8442,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_b_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8443,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_b_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8444,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_b_intg_dec__err_o),2);
    bufp->fullQData(oldp+8445,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[3U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[2U])) 
                                                      >> 0xeU)))),39);
    bufp->fullIData(oldp+8447,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_a_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8448,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_a_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8449,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_a_intg_dec__err_o),2);
    bufp->fullQData(oldp+8450,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[3U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[2U])) 
                                                      >> 0xeU)))),39);
    bufp->fullIData(oldp+8452,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_b_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8453,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_b_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8454,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_b_intg_dec__err_o),2);
    bufp->fullQData(oldp+8455,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[4U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[3U])) 
                                                      >> 0x15U)))),39);
    bufp->fullIData(oldp+8457,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_a_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8458,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_a_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8459,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_a_intg_dec__err_o),2);
    bufp->fullQData(oldp+8460,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[4U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[3U])) 
                                                      >> 0x15U)))),39);
    bufp->fullIData(oldp+8462,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_b_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8463,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_b_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8464,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_b_intg_dec__err_o),2);
    bufp->fullQData(oldp+8465,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[6U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[5U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[4U])) 
                                                         >> 0x1cU))))),39);
    bufp->fullIData(oldp+8467,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_a_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8468,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_a_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8469,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_a_intg_dec__err_o),2);
    bufp->fullQData(oldp+8470,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[6U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[5U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[4U])) 
                                                         >> 0x1cU))))),39);
    bufp->fullIData(oldp+8472,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_b_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8473,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_b_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8474,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_b_intg_dec__err_o),2);
    bufp->fullQData(oldp+8475,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[7U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[6U])) 
                                                      >> 3U)))),39);
    bufp->fullIData(oldp+8477,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_a_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8478,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_a_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8479,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_a_intg_dec__err_o),2);
    bufp->fullQData(oldp+8480,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[7U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[6U])) 
                                                      >> 3U)))),39);
    bufp->fullIData(oldp+8482,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_b_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8483,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_b_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8484,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_b_intg_dec__err_o),2);
    bufp->fullQData(oldp+8485,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[8U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[7U])) 
                                                      >> 0xaU)))),39);
    bufp->fullIData(oldp+8487,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_a_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8488,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_a_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8489,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_a_intg_dec__err_o),2);
    bufp->fullQData(oldp+8490,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[8U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[7U])) 
                                                      >> 0xaU)))),39);
    bufp->fullIData(oldp+8492,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_b_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8493,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_b_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8494,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_b_intg_dec__err_o),2);
    bufp->fullQData(oldp+8495,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[9U])) 
                                                    << 0xfU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[8U])) 
                                                      >> 0x11U)))),39);
    bufp->fullIData(oldp+8497,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_a_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8498,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_a_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8499,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_a_intg_dec__err_o),2);
    bufp->fullQData(oldp+8500,((0x7fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[9U])) 
                                                    << 0xfU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b.out_o[8U])) 
                                                      >> 0x11U)))),39);
    bufp->fullIData(oldp+8502,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_b_intg_dec__DOT__data_o),32);
    bufp->fullCData(oldp+8503,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_b_intg_dec__DOT__syndrome_o),7);
    bufp->fullCData(oldp+8504,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_b_intg_dec__err_o),2);
    bufp->fullBit(oldp+8505,((1U & (VL_REDXOR_8(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_a_unbuf) 
                                    ^ (VL_REDXOR_8(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_addr_b_unbuf) 
                                       ^ VL_REDXOR_8(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_addr))))));
    bufp->fullSData(oldp+8506,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_rdata),16);
    bufp->fullIData(oldp+8507,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data),32);
    bufp->fullCData(oldp+8508,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_integ),7);
    bufp->fullSData(oldp+8509,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_rdata),16);
    bufp->fullIData(oldp+8510,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data),32);
    bufp->fullCData(oldp+8511,(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_integ),7);
    bufp->fullBit(oldp+8512,(vlSelf->rst_ni));
    bufp->fullBit(oldp+8513,(vlSelf->rst_otp_ni));
    bufp->fullBit(oldp+8514,(vlSelf->imem_test__DOT__clk_i));
    bufp->fullBit(oldp+8515,(vlSelf->imem_test__DOT__clk_otp_i));
    bufp->fullBit(oldp+8516,(vlSelf->imem_test__DOT__clk_edn_i));
    bufp->fullBit(oldp+8517,((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_gnt)) 
                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_req)) 
                              | ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_gnt)) 
                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_req)))));
    bufp->fullBit(oldp+8518,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__recoverable_err) 
                              | ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__software_errs_fatal_q)) 
                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err)))));
    bufp->fullSData(oldp+8519,(((0x8000U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__core_err_bits) 
                                            << 3U)) 
                                | ((0x6000U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                               << 0xbU)) 
                                   | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__wr_en) 
                                       << 0xcU) | (
                                                   (0x800U 
                                                    & ((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                                       << 0xbU)) 
                                                   | (0x7ffU 
                                                      & (IData)(vlSelf->imem_test__DOT__dut__DOT__core_err_bits))))))),16);
    bufp->fullSData(oldp+8520,(((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_clear)
                                 ? 0U : ((0x8000U & 
                                          ((IData)(vlSelf->imem_test__DOT__dut__DOT__core_err_bits) 
                                           << 3U)) 
                                         | ((0x6000U 
                                             & ((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                                << 0xbU)) 
                                            | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__wr_en) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & ((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                                      << 0xbU)) 
                                                  | (0x7ffU 
                                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__core_err_bits)))))))),16);
    bufp->fullBit(oldp+8521,(((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_clear) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__done_core))));
    __Vtemp_199[2U] = (0xaaaaU | (((IData)(vlSelf->imem_test__DOT__dut__DOT__err_bits_q) 
                                   << 0x10U) | ((0x4000U 
                                                 & ((IData)(vlSelf->imem_test__DOT__dut__DOT__core_err_bits) 
                                                    << 2U)) 
                                                | ((0x1000U 
                                                    & ((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                                       << 9U)) 
                                                   | ((0x400U 
                                                       & ((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                                          << 8U)) 
                                                      | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__wr_en) 
                                                          << 8U) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                                                << 6U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->imem_test__DOT__dut__DOT__core_err_bits) 
                                                                   >> 6U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->imem_test__DOT__dut__DOT__core_err_bits) 
                                                                      >> 7U)) 
                                                                  | (1U 
                                                                     & ((IData)(vlSelf->imem_test__DOT__dut__DOT__core_err_bits) 
                                                                        >> 8U)))))))))));
    __Vtemp_204[0U] = (IData)((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q)) 
                                << 0x20U) | (QData)((IData)(
                                                            (~ vlSelf->imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_q)))));
    __Vtemp_204[1U] = (IData)(((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q)) 
                                 << 0x20U) | (QData)((IData)(
                                                             (~ vlSelf->imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_q)))) 
                               >> 0x20U));
    __Vtemp_204[2U] = __Vtemp_199[2U];
    __Vtemp_204[3U] = (1U | (((IData)(vlSelf->imem_test__DOT__dut__DOT____Vcellout__u_intr_hw_done__hw2reg_intr_state_d_o) 
                              << 0xbU) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_intr_hw_done__DOT__g_intr_event__DOT__new_event) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->imem_test__DOT__dut__DOT__software_errs_fatal_q) 
                                              << 9U) 
                                             | ((IData)(vlSelf->imem_test__DOT__dut__DOT__status_q) 
                                                << 1U)))));
    bufp->fullWData(oldp+8522,(__Vtemp_204),108);
    bufp->fullWData(oldp+8526,(vlSelf->imem_test__DOT__dut__DOT__tl_win_d2h
                               [0U]),66);
    bufp->fullWData(oldp+8529,(vlSelf->imem_test__DOT__dut__DOT__tl_win_d2h
                               [1U]),66);
    bufp->fullBit(oldp+8532,(((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_access_core) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_rvalid))));
    bufp->fullQData(oldp+8533,((((QData)((IData)(((IData)(vlSelf->imem_test__DOT__dut__DOT__locking_q)
                                                   ? 0x2aU
                                                   : 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->imem_test__DOT__dut__DOT__imem_rdata_bus_raw 
                                                              >> 0x20U)))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_rdata_bus_raw)))),39);
    bufp->fullBit(oldp+8535,(((IData)(vlSelf->imem_test__DOT__dut__DOT____VdfgRegularize_hab8adb3c_3_0) 
                              & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_dummy_response_d)) 
                                 & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf))))));
    bufp->fullBit(oldp+8536,((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_access_core)) 
                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_rvalid)) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__imem_dummy_response_q))));
    bufp->fullSData(oldp+8537,(((((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__7__KET____DOT__dmem_rerror_raw) 
                                  & (- (IData)((((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                 >> 7U) 
                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))))) 
                                 << 0xeU) | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__6__KET____DOT__dmem_rerror_raw) 
                                               & (- (IData)(
                                                            (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                              >> 6U) 
                                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))))) 
                                              << 0xcU) 
                                             | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__5__KET____DOT__dmem_rerror_raw) 
                                                  & (- (IData)(
                                                               (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                 >> 5U) 
                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))))) 
                                                 << 0xaU) 
                                                | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__4__KET____DOT__dmem_rerror_raw) 
                                                     & (- (IData)(
                                                                  (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                    >> 4U) 
                                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))))) 
                                                    << 8U) 
                                                   | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__3__KET____DOT__dmem_rerror_raw) 
                                                        & (- (IData)(
                                                                     (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                       >> 3U) 
                                                                      & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))))) 
                                                       << 6U) 
                                                      | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__2__KET____DOT__dmem_rerror_raw) 
                                                           & (- (IData)(
                                                                        (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                          >> 2U) 
                                                                         & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__1__KET____DOT__dmem_rerror_raw) 
                                                              & (- (IData)(
                                                                           (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                             >> 1U) 
                                                                            & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))))) 
                                                             << 2U) 
                                                            | ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__0__KET____DOT__dmem_rerror_raw) 
                                                               & (- (IData)(
                                                                            ((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))))))))))))),16);
    bufp->fullBit(oldp+8538,(((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__7__KET____DOT__dmem_rerror_raw) 
                                      & (- (IData)(
                                                   (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                     >> 7U) 
                                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                              | ((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__6__KET____DOT__dmem_rerror_raw) 
                                         & (- (IData)(
                                                      (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                        >> 6U) 
                                                       & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                 | ((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__5__KET____DOT__dmem_rerror_raw) 
                                            & (- (IData)(
                                                         (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                           >> 5U) 
                                                          & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                    | ((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__4__KET____DOT__dmem_rerror_raw) 
                                               & (- (IData)(
                                                            (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                              >> 4U) 
                                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                       | ((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__3__KET____DOT__dmem_rerror_raw) 
                                                  & (- (IData)(
                                                               (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                 >> 3U) 
                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                          | ((0U != 
                                              ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__2__KET____DOT__dmem_rerror_raw) 
                                               & (- (IData)(
                                                            (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                              >> 2U) 
                                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                             | ((0U 
                                                 != 
                                                 ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__1__KET____DOT__dmem_rerror_raw) 
                                                  & (- (IData)(
                                                               (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                 >> 1U) 
                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                                | (0U 
                                                   != 
                                                   ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__0__KET____DOT__dmem_rerror_raw) 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))))))))))));
    bufp->fullBit(oldp+8539,(((IData)(vlSelf->imem_test__DOT__dut__DOT____VdfgRegularize_hab8adb3c_3_0) 
                              & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_dummy_response_d)) 
                                 & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__intg_error_buf))))));
    bufp->fullBit(oldp+8540,((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__busy_execute_q)) 
                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid)) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_dummy_response_q))));
    bufp->fullBit(oldp+8541,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_q) 
                              | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__intg_err) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_we_err)))));
    bufp->fullBit(oldp+8542,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                               | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                  | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__intg_error_q) 
                                     | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q)))) 
                              | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                  | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                     | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__intg_error_q) 
                                        | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q)))) 
                                 | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__err_q) 
                                    | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__intg_err) 
                                       | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_we_err)))))));
    bufp->fullBit(oldp+8543,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger))));
    bufp->fullBit(oldp+8544,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger))));
    bufp->fullIData(oldp+8545,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_key__Vstatic__valid),32);
    bufp->fullIData(oldp+8546,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__simutil_get_scramble_nonce__Vstatic__valid),32);
    bufp->fullWData(oldp+8547,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo),256);
    bufp->fullQData(oldp+8555,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd),64);
    bufp->fullQData(oldp+8557,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd),64);
    bufp->fullQData(oldp+8559,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd),64);
    bufp->fullIData(oldp+8561,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid),32);
    bufp->fullIData(oldp+8562,(vlSelf->imem_test__DOT__dut__DOT__u_dmem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid),32);
    bufp->fullCData(oldp+8563,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__addr_scr) 
                                 == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__waddr_scr_q))
                                 ? 6U : 9U)),4);
    bufp->fullIData(oldp+8564,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_key__Vstatic__valid),32);
    bufp->fullIData(oldp+8565,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__simutil_get_scramble_nonce__Vstatic__valid),32);
    bufp->fullQData(oldp+8566,(((vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_nonce_q 
                                 << 0xbU) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__imem_index)))),64);
    bufp->fullWData(oldp+8568,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo),256);
    bufp->fullQData(oldp+8576,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd),64);
    bufp->fullQData(oldp+8578,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd),64);
    bufp->fullQData(oldp+8580,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd),64);
    bufp->fullCData(oldp+8582,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__addr_scr) 
                                 == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__waddr_scr_q))
                                 ? 9U : 6U)),4);
    bufp->fullIData(oldp+8583,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_set_mem__Vstatic__valid),32);
    bufp->fullIData(oldp+8584,(vlSelf->imem_test__DOT__dut__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__gen_ram_inst__BRA__0__KET____DOT__u_mem__DOT__simutil_get_mem__Vstatic__valid),32);
    bufp->fullIData(oldp+8585,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__load_checksum_we)
                                 ? (~ ((vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                        [2U][1U] << 8U) 
                                       | (vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__tl_socket_h2d
                                          [2U][0U] 
                                          >> 0x18U)))
                                 : vlSelf->imem_test__DOT__dut__DOT__u_mem_load_crc32__DOT__crc_stages
                                [6U])),32);
    bufp->fullBit(oldp+8586,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final) 
                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) 
                                 & ((~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
                                        | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__internal_fatal_err))) 
                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____VdfgRegularize_h1abe2abd_0_0))))));
    bufp->fullBit(oldp+8587,((((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__7__KET____DOT__dmem_rerror_raw) 
                                       & (- (IData)(
                                                    (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                      >> 7U) 
                                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                               | ((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__6__KET____DOT__dmem_rerror_raw) 
                                          & (- (IData)(
                                                       (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                         >> 6U) 
                                                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                  | ((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__5__KET____DOT__dmem_rerror_raw) 
                                             & (- (IData)(
                                                          (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                            >> 5U) 
                                                           & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                     | ((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__4__KET____DOT__dmem_rerror_raw) 
                                                & (- (IData)(
                                                             (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                               >> 4U) 
                                                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                        | ((0U != ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__3__KET____DOT__dmem_rerror_raw) 
                                                   & (- (IData)(
                                                                (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                  >> 3U) 
                                                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                           | ((0U != 
                                               ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__2__KET____DOT__dmem_rerror_raw) 
                                                & (- (IData)(
                                                             (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                               >> 2U) 
                                                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                              | ((0U 
                                                  != 
                                                  ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__1__KET____DOT__dmem_rerror_raw) 
                                                   & (- (IData)(
                                                                (((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                  >> 1U) 
                                                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core)))))) 
                                                 | (0U 
                                                    != 
                                                    ((IData)(vlSelf->imem_test__DOT__dut__DOT__g_dmem_intg_check__BRA__0__KET____DOT__dmem_rerror_raw) 
                                                     & (- (IData)(
                                                                  ((IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rmask_core_q) 
                                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))))))))))))) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__dmem_rvalid_core))));
    bufp->fullBit(oldp+8588,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                               & ((0xbU != (0xfU & 
                                            (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                                             >> 0xeU))) 
                                  & ((~ (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                 >> 0x22U))) 
                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used)))) 
                              & ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
                                 | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
                                    | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
                                       | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
                                          | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
                                             | ((0U 
                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
                                                | ((0U 
                                                    != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
                                                   | (0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o))))))))))));
    bufp->fullBit(oldp+8589,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__expected_acc_rd_en) 
                              & ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
                                 | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
                                    | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
                                       | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
                                          | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
                                             | ((0U 
                                                 != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
                                                | ((0U 
                                                    != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
                                                   | (0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o))))))))))));
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
        __Vtemp_207[0U] = Vimem_test__ConstPool__CONST_h14adc512_0[0U];
        __Vtemp_207[1U] = Vimem_test__ConstPool__CONST_h14adc512_0[1U];
        __Vtemp_207[2U] = Vimem_test__ConstPool__CONST_h14adc512_0[2U];
        __Vtemp_207[3U] = Vimem_test__ConstPool__CONST_h14adc512_0[3U];
        __Vtemp_207[4U] = Vimem_test__ConstPool__CONST_h14adc512_0[4U];
        __Vtemp_207[5U] = Vimem_test__ConstPool__CONST_h14adc512_0[5U];
        __Vtemp_207[6U] = Vimem_test__ConstPool__CONST_h14adc512_0[6U];
        __Vtemp_207[7U] = Vimem_test__ConstPool__CONST_h14adc512_0[7U];
        __Vtemp_207[8U] = Vimem_test__ConstPool__CONST_h14adc512_0[8U];
        __Vtemp_207[9U] = Vimem_test__ConstPool__CONST_h14adc512_0[9U];
    } else {
        __Vtemp_207[0U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[0U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
        __Vtemp_207[1U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[1U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
        __Vtemp_207[2U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[2U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
        __Vtemp_207[3U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[3U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
        __Vtemp_207[4U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[4U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
        __Vtemp_207[5U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[5U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
        __Vtemp_207[6U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[6U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
        __Vtemp_207[7U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[7U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
        __Vtemp_207[8U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[8U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
        __Vtemp_207[9U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[9U] 
                           & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                               >> 2U)))));
    }
    bufp->fullWData(oldp+8590,(__Vtemp_207),312);
    bufp->fullIData(oldp+8600,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_pop)
                                 ? vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                                [(7U & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)))]
                                 : ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__current_loop_counter_dec)
                                     ? (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                                        [(7U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                - (IData)(1U)))] 
                                        - (IData)(1U))
                                     : ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_stack_write)
                                         ? vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations
                                         : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_counters
                                        [(7U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__loop_info_stack__DOT__u_stack_wr_ptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                - (IData)(1U)))])))),32);
    bufp->fullBit(oldp+8601,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
                              | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__internal_fatal_err))));
    bufp->fullBit(oldp+8602,(((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                & ((0xbU != (0xfU & 
                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_bignum_operation[0x10U] 
                                              >> 0xeU))) 
                                   & ((~ (IData)((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o 
                                                  >> 0x22U))) 
                                      & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__adder_y_res_used)))) 
                               & ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
                                  | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
                                     | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
                                        | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
                                           | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
                                              | ((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
                                                    | (0U 
                                                       != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT____Vcellout__g_mod_words__BRA__0__KET____DOT__i_secded_dec__err_o)))))))))) 
                              | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__expected_acc_rd_en) 
                                  & ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__7__KET____DOT__i_secded_dec__err_o)) 
                                     | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__6__KET____DOT__i_secded_dec__err_o)) 
                                        | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__5__KET____DOT__i_secded_dec__err_o)) 
                                           | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__4__KET____DOT__i_secded_dec__err_o)) 
                                              | ((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__3__KET____DOT__i_secded_dec__err_o)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__2__KET____DOT__i_secded_dec__err_o)) 
                                                    | ((0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__1__KET____DOT__i_secded_dec__err_o)) 
                                                       | (0U 
                                                          != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT____Vcellout__g_acc_words__BRA__0__KET____DOT__i_secded_dec__err_o)))))))))) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_intg_err_d)))));
    bufp->fullSData(oldp+8603,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__fatal_software_err) 
                                 << 8U) | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_internal_state_err) 
                                            << 7U) 
                                           | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__reg_intg_violation_err) 
                                               << 6U) 
                                              | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__key_invalid_err) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_sw_err) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__illegal_insn_err) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_insn_addr_err) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__bad_data_addr_err)))))))))),9);
    bufp->fullSData(oldp+8604,((0xfffU & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                                           & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall)) 
                                              & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__insn_subset) 
                                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ld_insn))))
                                           ? (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__lsu_addr_saved_q)
                                           : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__alu_base_operation_result))),12);
    bufp->fullBit(oldp+8605,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum) 
                              & ((0U != (0x7ffffffU 
                                         & (IData)(
                                                   (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                    >> 5U)))) 
                                 & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err)) 
                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_a))))));
    bufp->fullBit(oldp+8606,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_valid) 
                              & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_a_indirect_bignum) 
                                  & ((0U != (0x7ffffffU 
                                             & (IData)(
                                                       (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_data_a_intg 
                                                        >> 5U)))) 
                                     & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err)) 
                                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_rd_en_a)))) 
                                 | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_b_indirect_bignum) 
                                     | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__rf_d_indirect_bignum)) 
                                    & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_637))))));
    bufp->fullBit(oldp+8607,(((~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT____VdfgRegularize_h7865728d_0_3) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_base_call_stack_sw_err))) 
                              & ((((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                   | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                      | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                         | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                            | ((0U 
                                                != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                               | ((0U 
                                                   != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_a_intg_dec__err_o)) 
                                                     | (0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_a_intg_dec__err_o))))))))) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_a_unbuf)) 
                                 | (((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__7__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                     | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__6__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                        | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__5__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                           | ((0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__4__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                              | ((0U 
                                                  != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__3__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__2__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                    | ((0U 
                                                        != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__1__KET____DOT__u_rd_data_b_intg_dec__err_o)) 
                                                       | (0U 
                                                          != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT____Vcellout__g_rf_intg_calc__BRA__0__KET____DOT__u_rd_data_b_intg_dec__err_o))))))))) 
                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_bignum_rd_en_b_unbuf))))));
    bufp->fullIData(oldp+8608,((((0x1dU == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)) 
                                 | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we) 
                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__is_not_running_q)) 
                                    | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_cnt_clear_int)))
                                 ? 0U : ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
                                           & (~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__stall))) 
                                          & (0xffffffffU 
                                             != vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q))
                                          ? ((IData)(1U) 
                                             + vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q)
                                          : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q))),32);
    bufp->fullBit(oldp+8609,(((0x1dU == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_state_regs__DOT__state_raw)) 
                              | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__insn_cnt_we) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__is_not_running_q)) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_cnt_clear_int)))));
    bufp->fullBit(oldp+8610,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__start_secure_wipe) 
                              | ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_ack)) 
                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__secure_wipe_running_q)))));
    __Vtemp_208[0U] = (IData)((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_end_addr_imem)) 
                                << 0x27U) | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_addrs_padded_intg 
                                                                          >> 0x20U))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations)))));
    __Vtemp_208[1U] = ((((IData)(4U) + (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q)) 
                        << 0x15U) | (IData)(((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_end_addr_imem)) 
                                               << 0x27U) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (IData)(
                                                                             (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_addrs_padded_intg 
                                                                              >> 0x20U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_iterations)))) 
                                             >> 0x20U)));
    __Vtemp_208[2U] = (3U & (((IData)(4U) + (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q)) 
                             >> 0xbU));
    bufp->fullWData(oldp+8611,(__Vtemp_208),66);
    bufp->fullIData(oldp+8614,(((0x7ffc000U & (((IData)(4U) 
                                                + (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_addr_q)) 
                                               << 0xeU)) 
                                | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_otbn_loop_controller__DOT__new_loop_end_addr_imem))),32);
    bufp->fullCData(oldp+8615,((7U & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)
                                        ? 0U : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_24)) 
                                      - (IData)(1U)))),3);
    bufp->fullQData(oldp+8616,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en)
                                 ? vlSelf->imem_test__DOT__dut__DOT__imem_rdata
                                 : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_data_intg_q)),39);
    bufp->fullBit(oldp+8618,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_valid)
                               ? ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final) 
                                  & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_req_addr) 
                                     == (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr)))
                               : ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear)) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_resp_valid_q)))));
    bufp->fullBit(oldp+8619,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en));
    bufp->fullBit(oldp+8620,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) 
                              & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final)) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____VdfgRegularize_h1abe2abd_0_0)))));
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_wdr_d) {
        __Vtemp_217[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__rf_bignum_wr_sec_wipe_onehot;
        __Vtemp_217[1U] = 0U;
        __Vtemp_217[2U] = 0U;
    } else if (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__rf_indirect_stall))) {
        __Vtemp_217[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_wr_indirect_onehot;
        __Vtemp_217[1U] = (IData)((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_a_indirect_onehot)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_b_indirect_onehot))));
        __Vtemp_217[2U] = (IData)(((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_a_indirect_onehot)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_rd_b_indirect_onehot))) 
                                   >> 0x20U));
    } else if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en) {
        __Vtemp_217[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_we_bignum_onehot_enc__out_o;
        __Vtemp_217[1U] = (IData)((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_a_bignum_onehot_enc__out_o)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_b_bignum_onehot_enc__out_o))));
        __Vtemp_217[2U] = (IData)(((((QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_a_bignum_onehot_enc__out_o)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT____Vcellout__rf_ren_b_bignum_onehot_enc__out_o))) 
                                   >> 0x20U));
    } else if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear) {
        __Vtemp_217[0U] = 0U;
        __Vtemp_217[1U] = 0U;
        __Vtemp_217[2U] = 0U;
    } else {
        __Vtemp_217[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[0U];
        __Vtemp_217[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[1U];
        __Vtemp_217[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_bignum_predec_flop__q_o[2U];
    }
    bufp->fullWData(oldp+8621,(__Vtemp_217),96);
    bufp->fullQData(oldp+8624,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_zero))
                                 ? vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_zero_flags
                                 : ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en)
                                     ? vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__alu_bignum_predec_insn
                                     : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_bignum_predec_flop__q_o))),38);
    bufp->fullIData(oldp+8626,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ispr_bignum_predec_d),18);
    bufp->fullCData(oldp+8627,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en)
                                 ? (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_op_en) 
                                     << 1U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__mac_bignum_acc_rd_en))
                                 : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_mac_bignum_predec_flop__q_o))),2);
    bufp->fullBit(oldp+8628,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en)
                               ? (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_insn)
                               : ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear)) 
                                  & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__lsu_addr_en_predec_q)))));
    bufp->fullCData(oldp+8629,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en)
                                 ? (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_a_base) 
                                       & (0x8000ULL 
                                          == (0xf8000ULL 
                                              & vlSelf->imem_test__DOT__dut__DOT__imem_rdata))) 
                                      | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_ren_b_base) 
                                         & (0x100000ULL 
                                            == (0x1f00000ULL 
                                                & vlSelf->imem_test__DOT__dut__DOT__imem_rdata)))) 
                                     << 5U) | (((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_a_base) 
                                                  & (0x8000ULL 
                                                     == 
                                                     (0xf8000ULL 
                                                      & vlSelf->imem_test__DOT__dut__DOT__imem_rdata))) 
                                                 | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_b_base) 
                                                     & (0x100000ULL 
                                                        == 
                                                        (0x1f00000ULL 
                                                         & vlSelf->imem_test__DOT__dut__DOT__imem_rdata))) 
                                                    | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__rf_we_d_base) 
                                                       & (0x80ULL 
                                                          == 
                                                          (0xf80ULL 
                                                           & vlSelf->imem_test__DOT__dut__DOT__imem_rdata))))) 
                                                << 4U) 
                                               | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__branch_insn) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__jump_insn) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__loop_insn) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__u_otbn_predecode__DOT__sel_insn))))))
                                 : ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_fetch_resp_clear)
                                     ? 0U : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))),6);
    bufp->fullSData(oldp+8630,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_fetch_en)
                                 ? (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec)
                                 : (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__ctrl_flow_target_predec_q))),13);
    bufp->fullBit(oldp+8631,((1U & (~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__imem_rvalid_final) 
                                       & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_fetch_req_valid_raw) 
                                          & ((~ ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__software_err) 
                                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__internal_fatal_err))) 
                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____VdfgRegularize_h1abe2abd_0_0))))))));
    bufp->fullSData(oldp+8632,((0x7fffU & ((IData)(4U) 
                                           + ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr) 
                                              + (0x3ffcU 
                                                 & ((IData)(
                                                            (vlSelf->imem_test__DOT__dut__DOT__imem_rdata 
                                                             >> 0x14U)) 
                                                    << 2U)))))),15);
    bufp->fullBit(oldp+8633,((1U & VL_REDXOR_32((3U 
                                                 & (((IData)(4U) 
                                                     + 
                                                     ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT__insn_prefetch_addr) 
                                                      + 
                                                      (0x3ffcU 
                                                       & ((IData)(
                                                                  (vlSelf->imem_test__DOT__dut__DOT__imem_rdata 
                                                                   >> 0x14U)) 
                                                          << 2U)))) 
                                                    >> 0xdU))))));
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd) {
        __Vtemp_222[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[0U];
        __Vtemp_222[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[1U];
        __Vtemp_222[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[2U];
        __Vtemp_222[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[3U];
        __Vtemp_222[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[4U];
        __Vtemp_222[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[5U];
        __Vtemp_222[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[6U];
        __Vtemp_222[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[7U];
        __Vtemp_222[8U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[8U];
        __Vtemp_222[9U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[9U];
    } else if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_acc_wr_en) {
        if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_init) {
            __Vtemp_222[0U] = Vimem_test__ConstPool__CONST_h14adc512_0[0U];
            __Vtemp_222[1U] = Vimem_test__ConstPool__CONST_h14adc512_0[1U];
            __Vtemp_222[2U] = Vimem_test__ConstPool__CONST_h14adc512_0[2U];
            __Vtemp_222[3U] = Vimem_test__ConstPool__CONST_h14adc512_0[3U];
            __Vtemp_222[4U] = Vimem_test__ConstPool__CONST_h14adc512_0[4U];
            __Vtemp_222[5U] = Vimem_test__ConstPool__CONST_h14adc512_0[5U];
            __Vtemp_222[6U] = Vimem_test__ConstPool__CONST_h14adc512_0[6U];
            __Vtemp_222[7U] = Vimem_test__ConstPool__CONST_h14adc512_0[7U];
            __Vtemp_222[8U] = Vimem_test__ConstPool__CONST_h14adc512_0[8U];
            __Vtemp_222[9U] = Vimem_test__ConstPool__CONST_h14adc512_0[9U];
        } else {
            __Vtemp_222[0U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[0U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
            __Vtemp_222[1U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[1U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
            __Vtemp_222[2U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[2U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
            __Vtemp_222[3U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[3U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
            __Vtemp_222[4U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[4U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
            __Vtemp_222[5U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[5U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
            __Vtemp_222[6U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[6U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
            __Vtemp_222[7U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[7U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
            __Vtemp_222[8U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[8U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
            __Vtemp_222[9U] = (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_bignum_wdata_intg[9U] 
                               & (- (IData)((1U & (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_bignum_predec_flop__q_o 
                                                   >> 2U)))));
        }
    } else {
        __Vtemp_222[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[0U];
        __Vtemp_222[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[1U];
        __Vtemp_222[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[2U];
        __Vtemp_222[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[3U];
        __Vtemp_222[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[4U];
        __Vtemp_222[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[5U];
        __Vtemp_222[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[6U];
        __Vtemp_222[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[7U];
        __Vtemp_222[8U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[8U];
        __Vtemp_222[9U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_calc[9U];
    }
    bufp->fullWData(oldp+8634,(__Vtemp_222),312);
    bufp->fullBit(oldp+8644,((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_executing) 
                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__mac_bignum_en)) 
                              | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__ispr_acc_wr_en) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__sec_wipe_acc_urnd)))));
    bufp->fullQData(oldp+8645,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out),39);
    bufp->fullQData(oldp+8647,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg
                               [(0x1fU & vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[2U])]),39);
    bufp->fullQData(oldp+8649,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__rf_reg
                               [(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__insn_dec_base[1U] 
                                 >> 0x1bU)]),39);
    bufp->fullBit(oldp+8651,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree) 
                                    | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                        ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)) 
                                       | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                          ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree)))))));
    bufp->fullQData(oldp+8652,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree),63);
    bufp->fullQData(oldp+8654,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree),63);
    bufp->fullQData(oldp+8656,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree),63);
    bufp->fullBit(oldp+8658,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                    ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_en_masked)))));
    bufp->fullBit(oldp+8659,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                    ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__and_tree)))));
    bufp->fullBit(oldp+8660,((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__gen_rf_base_ff__DOT__u_otbn_rf_base_inner__DOT__u_prim_onehot_check__DOT__err_tree))));
    bufp->fullQData(oldp+8661,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_write)
                                 ? vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__wr_data_intg_mux_out
                                 : vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_base__DOT__u_call_stack__DOT__stack_storage
                                [(7U & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)
                                          ? 0U : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_58)) 
                                        - (IData)(1U)))])),39);
    bufp->fullCData(oldp+8663,((7U & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__loop_reset)
                                        ? 0U : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_2_58)) 
                                      - (IData)(1U)))),3);
    bufp->fullBit(oldp+8664,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree) 
                                    | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                        ^ (0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal))) 
                                       | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                          ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree)))))));
    bufp->fullBit(oldp+8665,((1U & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree) 
                                     | (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                         ^ (0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal))) 
                                        | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                           ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree)))) 
                                    | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__rf_bignum_spurious_we_err)))));
    bufp->fullQData(oldp+8666,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree),63);
    bufp->fullQData(oldp+8668,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree),63);
    bufp->fullQData(oldp+8670,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree),63);
    bufp->fullBit(oldp+8672,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                    ^ (0U != (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_en_internal))))));
    bufp->fullBit(oldp+8673,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__or_tree) 
                                    ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__and_tree)))));
    bufp->fullBit(oldp+8674,((1U & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_prim_onehot_check__DOT__err_tree))));
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__xoshiro_seed_en) {
        __Vtemp_226[0U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[0U];
        __Vtemp_226[1U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[1U];
        __Vtemp_226[2U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[2U];
        __Vtemp_226[3U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[3U];
        __Vtemp_226[4U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[4U];
        __Vtemp_226[5U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[5U];
        __Vtemp_226[6U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[6U];
        __Vtemp_226[7U] = vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_urnd_req__DOT__u_prim_packer_fifo__DOT__data_q[7U];
    } else if (((~ (IData)((0U != (((((((vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U] 
                                         | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U]) 
                                        | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U]) 
                                       | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U]) 
                                      | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U]) 
                                     | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U]) 
                                    | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U]) 
                                   | vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U])))) 
                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance))) {
        __Vtemp_226[0U] = Vimem_test__ConstPool__CONST_h954211c2_0[0U];
        __Vtemp_226[1U] = Vimem_test__ConstPool__CONST_h954211c2_0[1U];
        __Vtemp_226[2U] = Vimem_test__ConstPool__CONST_h954211c2_0[2U];
        __Vtemp_226[3U] = Vimem_test__ConstPool__CONST_h954211c2_0[3U];
        __Vtemp_226[4U] = Vimem_test__ConstPool__CONST_h954211c2_0[4U];
        __Vtemp_226[5U] = Vimem_test__ConstPool__CONST_h954211c2_0[5U];
        __Vtemp_226[6U] = Vimem_test__ConstPool__CONST_h954211c2_0[6U];
        __Vtemp_226[7U] = Vimem_test__ConstPool__CONST_h954211c2_0[7U];
    } else if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__urnd_advance) {
        __Vtemp_226[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][0U];
        __Vtemp_226[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][1U];
        __Vtemp_226[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][2U];
        __Vtemp_226[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][3U];
        __Vtemp_226[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][4U];
        __Vtemp_226[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][5U];
        __Vtemp_226[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][6U];
        __Vtemp_226[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__unrolled_state
            [4U][7U];
    } else {
        __Vtemp_226[0U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[0U];
        __Vtemp_226[1U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[1U];
        __Vtemp_226[2U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[2U];
        __Vtemp_226[3U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[3U];
        __Vtemp_226[4U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[4U];
        __Vtemp_226[5U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[5U];
        __Vtemp_226[6U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[6U];
        __Vtemp_226[7U] = vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__u_xoshiro256pp__DOT__xoshiro_q[7U];
    }
    bufp->fullWData(oldp+8675,(__Vtemp_226),256);
    bufp->fullBit(oldp+8683,((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe)) 
                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req)) 
                              | ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe) 
                                 & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req)) 
                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_d))))));
    bufp->fullBit(oldp+8684,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__allow_secure_wipe)) 
                              & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req))));
    bufp->fullBit(oldp+8685,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__expect_secure_wipe) 
                              & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__secure_wipe_req)) 
                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_start_stop_control__DOT__init_sec_wipe_done_d)))));
    bufp->fullBit(oldp+8686,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_seed_valid_d));
    bufp->fullBit(oldp+8687,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_seed_valid_d));
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_sel_otp) {
        __Vtemp_228[0U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[3U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[2U] 
                                         >> 1U));
        __Vtemp_228[1U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[4U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[3U] 
                                         >> 1U));
        __Vtemp_228[2U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[5U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[4U] 
                                         >> 1U));
        __Vtemp_228[3U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[6U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[5U] 
                                         >> 1U));
    } else {
        __Vtemp_228[0U] = vlSelf->imem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[0U];
        __Vtemp_228[1U] = vlSelf->imem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[1U];
        __Vtemp_228[2U] = vlSelf->imem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[2U];
        __Vtemp_228[3U] = vlSelf->imem_test__DOT__dut__DOT__dmem_sec_wipe_urnd_key[3U];
    }
    bufp->fullWData(oldp+8688,(__Vtemp_228),128);
    if (vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__imem_key_sel_otp) {
        __Vtemp_231[0U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[3U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[2U] 
                                         >> 1U));
        __Vtemp_231[1U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[4U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[3U] 
                                         >> 1U));
        __Vtemp_231[2U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[5U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[4U] 
                                         >> 1U));
        __Vtemp_231[3U] = ((vlSelf->imem_test__DOT__otbn_otp_key_i[6U] 
                            << 0x1fU) | (vlSelf->imem_test__DOT__otbn_otp_key_i[5U] 
                                         >> 1U));
    } else {
        __Vtemp_231[0U] = (IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_1);
        __Vtemp_231[1U] = (IData)((vlSelf->__VdfgRegularize_hd87f99a1_3_1 
                                   >> 0x20U));
        __Vtemp_231[2U] = (IData)(vlSelf->__VdfgRegularize_hd87f99a1_3_0);
        __Vtemp_231[3U] = (IData)((vlSelf->__VdfgRegularize_hd87f99a1_3_0 
                                   >> 0x20U));
    }
    bufp->fullWData(oldp+8692,(__Vtemp_231),128);
    bufp->fullBit(oldp+8696,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d));
    bufp->fullBit(oldp+8697,(vlSelf->imem_test__DOT__dut__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    bufp->fullBit(oldp+8698,(((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rnd__DOT__edn_rnd_req_complete)) 
                              & (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__gen_rep_chk__DOT__chk_rep) 
                                  & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__word_ack) 
                                     & ((IData)(vlSelf->imem_test__DOT__edn_rnd_i) 
                                        == vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__gen_rep_chk__DOT__word_data_q))) 
                                 | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_prim_edn_rnd_req__DOT__gen_rep_chk__DOT__err_q)))));
    bufp->fullBit(oldp+8699,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                    | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_bus_intg_violation__DOT__q)))));
    bufp->fullBit(oldp+8700,((1U & (((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                     >> 2U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_illegal_bus_access__DOT__q)))));
    bufp->fullBit(oldp+8701,((IData)((((IData)(vlSelf->imem_test__DOT__dut__DOT__non_core_err_bits_d) 
                                       >> 3U) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_fatal_alert_cause_lifecycle_escalation__DOT__q)))));
    bufp->fullIData(oldp+8702,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree),31);
    bufp->fullIData(oldp+8703,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree),31);
    bufp->fullIData(oldp+8704,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree),31);
    bufp->fullBit(oldp+8705,((1U & ((~ ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__addrmiss)) 
                                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_we))) 
                                    & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))));
    bufp->fullBit(oldp+8706,((1U & vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)));
    bufp->fullBit(oldp+8707,((1U & VL_REDXOR_32(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree))));
    bufp->fullBit(oldp+8708,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__hold_all_requests));
    __Vtemp_235[0U] = ((0xfffffffcU & (vlSelf->imem_test__DOT__tl_i[0U] 
                                       << 1U)) | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__reg_steer));
    __Vtemp_235[1U] = (((2U & (vlSelf->imem_test__DOT__tl_i[1U] 
                               << 1U)) | (vlSelf->imem_test__DOT__tl_i[0U] 
                                          >> 0x1fU)) 
                       | (0xfffffffcU & (vlSelf->imem_test__DOT__tl_i[1U] 
                                         << 1U)));
    __Vtemp_235[2U] = (((2U & (vlSelf->imem_test__DOT__tl_i[2U] 
                               << 1U)) | (vlSelf->imem_test__DOT__tl_i[1U] 
                                          >> 0x1fU)) 
                       | (0xfffffffcU & (vlSelf->imem_test__DOT__tl_i[2U] 
                                         << 1U)));
    __Vtemp_235[3U] = (((2U & (vlSelf->imem_test__DOT__tl_i[3U] 
                               << 1U)) | (vlSelf->imem_test__DOT__tl_i[2U] 
                                          >> 0x1fU)) 
                       | (0x1ffcU & (vlSelf->imem_test__DOT__tl_i[3U] 
                                     << 1U)));
    bufp->fullWData(oldp+8709,(__Vtemp_235),109);
    bufp->fullBit(oldp+8713,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
    bufp->fullBit(oldp+8714,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__1__KET____DOT__dev_select));
    bufp->fullBit(oldp+8715,(vlSelf->imem_test__DOT__dut__DOT__u_reg__DOT__u_socket__DOT__gen_u_o__BRA__2__KET____DOT__dev_select));
    __Vtemp_236[1U] = (((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h3dc25d6d__2)) 
                          & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid))
                          ? 0U : 1U) << 0x1eU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                                              ? 
                                                                             ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                               ? 
                                                                              (3U 
                                                                               & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                                                >> 8U))
                                                                               : 0U)
                                                                              : 0U))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                                                 ? 
                                                                                ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                                                 : 0U)
                                                                                 : 0U))) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                                                                                 ? 
                                                                                ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                                                                                 ? (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data))) 
                                                                  << 0x10U) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__data_intg) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error) 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h4d1de382_1_2)))))))) 
                                                          >> 0x20U)));
    __Vtemp_237[0U] = (IData)((((QData)((IData)(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                  ? 
                                                 ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                      >> 8U))
                                                   : 0U)
                                                  : 0U))) 
                                << 0x39U) | (((QData)((IData)(
                                                              ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                                ? 
                                                               ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                 ? 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                                 : 0U)
                                                                : 0U))) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                                                                   ? 
                                                                  ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                                                                    ? (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                               >> 8U))
                                                                    : 0U)
                                                                   : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__data_intg) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error) 
                                                                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h4d1de382_1_2)))))))));
    __Vtemp_237[1U] = __Vtemp_236[1U];
    __Vtemp_237[2U] = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
                        << 1U) | ((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h3dc25d6d__2)) 
                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid))
                                    ? 0U : 1U) >> 2U));
    bufp->fullWData(oldp+8716,(__Vtemp_237),66);
    bufp->fullBit(oldp+8719,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h3dc25d6d__2) 
                              & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h3dc20f1e__2)) 
                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__reqfifo_rready)))));
    bufp->fullBit(oldp+8720,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
                                    ^ (VL_REDXOR_32(
                                                    (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgExtracted_h3dc25d6d__2)) 
                                                      & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid))
                                                      ? 0U
                                                      : 1U)) 
                                       ^ (VL_REDXOR_32(
                                                       ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                         ? 
                                                        ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                          ? 
                                                         (3U 
                                                          & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                             >> 8U))
                                                          : 0U)
                                                         : 0U)) 
                                          ^ (VL_REDXOR_32(
                                                          ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                                            ? 
                                                           ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                             ? 
                                                            (0xffU 
                                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                             : 0U)
                                                            : 0U)) 
                                             ^ (VL_REDXOR_32(
                                                             (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                                                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                                                               ? 
                                                              ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__rspfifo_rvalid)
                                                                ? (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                           >> 8U))
                                                                : 0U)
                                                               : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data)) 
                                                ^ (
                                                   VL_REDXOR_8(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__data_intg) 
                                                   ^ 
                                                   (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_error) 
                                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)) 
                                                    ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_h4d1de382_1_2)))))))))));
    __Vtemp_238[1U] = (((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h3dc25d6d__0)) 
                          & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid))
                          ? 0U : 1U) << 0x1eU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                                              ? 
                                                                             ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                               ? 
                                                                              (3U 
                                                                               & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                                                >> 8U))
                                                                               : 0U)
                                                                              : 0U))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                                                 ? 
                                                                                ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                                                 : 0U)
                                                                                 : 0U))) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                                                                                 ? 
                                                                                ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                                                                                 ? (IData)(
                                                                                (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data))) 
                                                                  << 0x10U) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__data_intg) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error) 
                                                                                & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8c225e8c_1_2)))))))) 
                                                          >> 0x20U)));
    __Vtemp_239[0U] = (IData)((((QData)((IData)(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                  ? 
                                                 ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                      >> 8U))
                                                   : 0U)
                                                  : 0U))) 
                                << 0x39U) | (((QData)((IData)(
                                                              ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                                ? 
                                                               ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                                 ? 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                                 : 0U)
                                                                : 0U))) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                                                                   & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                                                                   ? 
                                                                  ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                                                                    ? (IData)(
                                                                              (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                               >> 8U))
                                                                    : 0U)
                                                                   : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__data_intg) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error) 
                                                                        & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8c225e8c_1_2)))))))));
    __Vtemp_239[1U] = __Vtemp_238[1U];
    __Vtemp_239[2U] = (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
                        << 1U) | ((((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h3dc25d6d__0)) 
                                    & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid))
                                    ? 0U : 1U) >> 2U));
    bufp->fullWData(oldp+8721,(__Vtemp_239),66);
    bufp->fullBit(oldp+8724,(((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h3dc25d6d__0) 
                              & ((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h3dc20f1e__0)) 
                                 & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__reqfifo_rready)))));
    bufp->fullBit(oldp+8725,((1U & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
                                    ^ (VL_REDXOR_32(
                                                    (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgExtracted_h3dc25d6d__0)) 
                                                      & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid))
                                                      ? 0U
                                                      : 1U)) 
                                       ^ (VL_REDXOR_32(
                                                       ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                         ? 
                                                        ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                          ? 
                                                         (3U 
                                                          & ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage) 
                                                             >> 8U))
                                                          : 0U)
                                                         : 0U)) 
                                          ^ (VL_REDXOR_32(
                                                          ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                                            ? 
                                                           ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                                                             ? 
                                                            (0xffU 
                                                             & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__storage))
                                                             : 0U)
                                                            : 0U)) 
                                             ^ (VL_REDXOR_32(
                                                             (((~ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                                                               & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                                                               ? 
                                                              ((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__rspfifo_rvalid)
                                                                ? (IData)(
                                                                          (vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__rdata_int 
                                                                           >> 8U))
                                                                : 0U)
                                                               : vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data)) 
                                                ^ (
                                                   VL_REDXOR_8(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__data_intg) 
                                                   ^ 
                                                   (((IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_error) 
                                                     & (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)) 
                                                    ^ (IData)(vlSelf->imem_test__DOT__dut__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h8c225e8c_1_2)))))))))));
}
