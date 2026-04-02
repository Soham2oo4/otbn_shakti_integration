// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdmem_test__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdmem_test::Vdmem_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdmem_test__Syms(contextp(), _vcname__, this)}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , rst_otp_ni{vlSymsp->TOP.rst_otp_ni}
    , __PVT__csrng_reg_pkg{vlSymsp->TOP.__PVT__csrng_reg_pkg}
    , __PVT__edn_reg_pkg{vlSymsp->TOP.__PVT__edn_reg_pkg}
    , __PVT__otbn_reg_pkg{vlSymsp->TOP.__PVT__otbn_reg_pkg}
    , __PVT__prim_sha2_pkg{vlSymsp->TOP.__PVT__prim_sha2_pkg}
    , __PVT__dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a{vlSymsp->TOP.__PVT__dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a}
    , __PVT__dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b{vlSymsp->TOP.__PVT__dmem_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdmem_test::Vdmem_test(const char* _vcname__)
    : Vdmem_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdmem_test::~Vdmem_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdmem_test___024root___eval_debug_assertions(Vdmem_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vdmem_test___024root___eval_static(Vdmem_test___024root* vlSelf);
void Vdmem_test___024root___eval_initial(Vdmem_test___024root* vlSelf);
void Vdmem_test___024root___eval_settle(Vdmem_test___024root* vlSelf);
void Vdmem_test___024root___eval(Vdmem_test___024root* vlSelf);

void Vdmem_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdmem_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdmem_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdmem_test___024root___eval_static(&(vlSymsp->TOP));
        Vdmem_test___024root___eval_initial(&(vlSymsp->TOP));
        Vdmem_test___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdmem_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdmem_test::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdmem_test::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdmem_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdmem_test___024root___eval_final(Vdmem_test___024root* vlSelf);

VL_ATTR_COLD void Vdmem_test::final() {
    Vdmem_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdmem_test::hierName() const { return vlSymsp->name(); }
const char* Vdmem_test::modelName() const { return "Vdmem_test"; }
unsigned Vdmem_test::threads() const { return 1; }
void Vdmem_test::prepareClone() const { contextp()->prepareClone(); }
void Vdmem_test::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdmem_test::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdmem_test___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdmem_test___024root__trace_init_top(Vdmem_test___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdmem_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdmem_test___024root*>(voidSelf);
    Vdmem_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdmem_test___024root__trace_decl_types(tracep);
    Vdmem_test___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdmem_test___024root__trace_register(Vdmem_test___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdmem_test::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdmem_test::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdmem_test___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
