// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vadd_64_test___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"MuBi4True", "MuBi4False"};
        const char* __VenumItemValues[]
        = {"110", "1001"};
        tracep->declDTypeEnum(1, "prim_mubi_pkg::mubi4_t", 2, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"On", "Off"};
        const char* __VenumItemValues[]
        = {"101", "1010"};
        tracep->declDTypeEnum(2, "lc_ctrl_pkg::lc_tx_t", 2, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RegFileFF", "RegFileFPGA"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(3, "otbn_pkg::regfile_e", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StatusIdle", "StatusBusyExecute", "StatusBusySecWipeDmem", 
                                "StatusBusySecWipeImem", 
                                "StatusBusySecWipeInt", 
                                "StatusLocked"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "11111111"};
        tracep->declDTypeEnum(4, "otbn_pkg::status_e", 6, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "AlertHsPhase1", "AlertHsPhase2", 
                                "PingHsPhase1", "PingHsPhase2", 
                                "Pause0", "Pause1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(5, "prim_alert_sender.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IsStd", "IsSkewing", "SigInt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(6, "prim_diff_decode.state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "AlertHsPhase1", "AlertHsPhase2", 
                                "PingHsPhase1", "PingHsPhase2", 
                                "Pause0", "Pause1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(7, "prim_alert_sender.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"InsnSubsetBase", "InsnSubsetBignum"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(8, "otbn_pkg::insn_subset_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IsprMod", "IsprRnd", "IsprAcc", "IsprFlags", 
                                "IsprUrnd", "IsprKeyS0L", 
                                "IsprKeyS0H", "IsprKeyS1L", 
                                "IsprKeyS1H"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(9, "otbn_pkg::ispr_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OtbnStateHalt", "OtbnStateRun", "OtbnStateStall", 
                                "OtbnStateLocked"};
        const char* __VenumItemValues[]
        = {"100", "1010", "10011", "11101"};
        tracep->declDTypeEnum(10, "otbn_pkg::otbn_state_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CsrFg0", "CsrFg1", "CsrFlags", "CsrMod0", 
                                "CsrMod1", "CsrMod2", 
                                "CsrMod3", "CsrMod4", 
                                "CsrMod5", "CsrMod6", 
                                "CsrMod7", "CsrRndPrefetch", 
                                "CsrRnd", "CsrUrnd"};
        const char* __VenumItemValues[]
        = {"11111000000", "11111000001", "11111001000", 
                                "11111010000", "11111010001", 
                                "11111010010", "11111010011", 
                                "11111010100", "11111010101", 
                                "11111010110", "11111010111", 
                                "11111011000", "111111000000", 
                                "111111000001"};
        tracep->declDTypeEnum(11, "otbn_pkg::csr_e", 14, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WsrMod", "WsrRnd", "WsrUrnd", "WsrAcc", 
                                "WsrKeyS0L", "WsrKeyS0H", 
                                "WsrKeyS1L", "WsrKeyS1H"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(12, "otbn_pkg::wsr_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"InsnOpcodeBaseLoad", "InsnOpcodeBaseMemMisc", 
                                "InsnOpcodeBaseOpImm", 
                                "InsnOpcodeBaseStore", 
                                "InsnOpcodeBaseOp", 
                                "InsnOpcodeBaseLui", 
                                "InsnOpcodeBaseBranch", 
                                "InsnOpcodeBaseJalr", 
                                "InsnOpcodeBaseJal", 
                                "InsnOpcodeBaseSystem", 
                                "InsnOpcodeBignumMisc", 
                                "InsnOpcodeBignumArith", 
                                "InsnOpcodeBignumMulqacc", 
                                "InsnOpcodeBignumBaseMisc"};
        const char* __VenumItemValues[]
        = {"11", "1111", "10011", "100011", "110011", 
                                "110111", "1100011", 
                                "1100111", "1101111", 
                                "1110011", "1011", 
                                "101011", "111011", 
                                "1111011"};
        tracep->declDTypeEnum(13, "otbn_pkg::insn_opcode_e", 14, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ImmBaseBI", "ImmBaseBS", "ImmBaseBB", "ImmBaseBU", 
                                "ImmBaseBJ", "ImmBaseBL", 
                                "ImmBaseBX"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(14, "otbn_pkg::imm_b_sel_base_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ShamtSelBignumA", "ShamtSelBignumS", "ShamtSelBignumZero"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(15, "otbn_pkg::shamt_sel_bignum_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AluOpBaseAdd", "AluOpBaseSub", "AluOpBaseXor", 
                                "AluOpBaseOr", "AluOpBaseAnd", 
                                "AluOpBaseNot", "AluOpBaseSra", 
                                "AluOpBaseSrl", "AluOpBaseSll"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(16, "otbn_pkg::alu_op_base_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AluOpBignumAdd", "AluOpBignumAddc", "AluOpBignumAddm", 
                                "AluOpBignumSub", "AluOpBignumSubb", 
                                "AluOpBignumSubm", 
                                "AluOpBignumRshi", 
                                "AluOpBignumXor", "AluOpBignumOr", 
                                "AluOpBignumAnd", "AluOpBignumNot", 
                                "AluOpBignumNone"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011"};
        tracep->declDTypeEnum(17, "otbn_pkg::alu_op_bignum_e", 12, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OpASelRegister", "OpASelZero", "OpASelCurrPc"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(18, "otbn_pkg::op_a_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OpBSelRegister", "OpBSelImmediate"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(19, "otbn_pkg::op_b_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ComparisonOpBaseEq", "ComparisonOpBaseNeq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(20, "otbn_pkg::comparison_op_base_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FlagC", "FlagM", "FlagL", "FlagZ"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(21, "otbn_pkg::flag_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RfWdSelEx", "RfWdSelNextPc", "RfWdSelLsu", 
                                "RfWdSelIspr", "RfWdSelIncr", 
                                "RfWdSelMac", "RfWdSelMovSel"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(22, "otbn_pkg::rf_wd_sel_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OtbnStartStopStateInitial", "OtbnStartStopStateHalt", 
                                "OtbnStartStopStateUrndRefresh", 
                                "OtbnStartStopStateRunning", 
                                "OtbnStartStopSecureWipeWdrUrnd", 
                                "OtbnStartStopSecureWipeAccModBaseUrnd", 
                                "OtbnStartStopSecureWipeAllZero", 
                                "OtbnStartStopSecureWipeComplete", 
                                "OtbnStartStopStateLocked"};
        const char* __VenumItemValues[]
        = {"1010011", "1111001", "110", "1001000", 
                                "101100", "10000", 
                                "110101", "1011", "1101111"};
        tracep->declDTypeEnum(23, "otbn_pkg::otbn_start_stop_state_e", 9, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ScrambleCtrlIdle", "ScrambleCtrlDmemReq", 
                                "ScrambleCtrlImemReq", 
                                "ScrambleCtrlError"};
        const char* __VenumItemValues[]
        = {"10011", "11110", "1000", "101"};
        tracep->declDTypeEnum(24, "otbn_pkg::scramble_ctrl_state_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"EVEN", "ODD"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(25, "prim_sync_reqack.sync_reqack_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SwAccessRW", "SwAccessRO", "SwAccessWO", 
                                "SwAccessW1C", "SwAccessW1S", 
                                "SwAccessW0C", "SwAccessRC"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(26, "prim_subreg_pkg::sw_access_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AccessAck", "AccessAckData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(27, "tlul_pkg::tl_d_op_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PutFullData", "PutPartialData", "Get"};
        const char* __VenumItemValues[]
        = {"0", "1", "100"};
        tracep->declDTypeEnum(28, "tlul_pkg::tl_a_op_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vadd_64_test___024root__trace_decl_types(VerilatedFst* tracep) {
    Vadd_64_test___024root__traceDeclTypesSub0(tracep);
}
