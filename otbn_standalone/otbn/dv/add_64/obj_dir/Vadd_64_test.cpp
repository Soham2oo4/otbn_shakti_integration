// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vadd_64_test__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vadd_64_test::Vadd_64_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vadd_64_test__Syms(contextp(), _vcname__, this)}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , rst_otp_ni{vlSymsp->TOP.rst_otp_ni}
    , __PVT__csrng_reg_pkg{vlSymsp->TOP.__PVT__csrng_reg_pkg}
    , __PVT__edn_reg_pkg{vlSymsp->TOP.__PVT__edn_reg_pkg}
    , __PVT__otbn_reg_pkg{vlSymsp->TOP.__PVT__otbn_reg_pkg}
    , __PVT__prim_sha2_pkg{vlSymsp->TOP.__PVT__prim_sha2_pkg}
    , __PVT__add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a{vlSymsp->TOP.__PVT__add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a}
    , __PVT__add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b{vlSymsp->TOP.__PVT__add_64_test__DOT__dut__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vadd_64_test::Vadd_64_test(const char* _vcname__)
    : Vadd_64_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vadd_64_test::~Vadd_64_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vadd_64_test___024root___eval_debug_assertions(Vadd_64_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vadd_64_test___024root___eval_static(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___eval_initial(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___eval_settle(Vadd_64_test___024root* vlSelf);
void Vadd_64_test___024root___eval(Vadd_64_test___024root* vlSelf);

void Vadd_64_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadd_64_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vadd_64_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vadd_64_test___024root___eval_static(&(vlSymsp->TOP));
        Vadd_64_test___024root___eval_initial(&(vlSymsp->TOP));
        Vadd_64_test___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vadd_64_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vadd_64_test::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vadd_64_test::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vadd_64_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vadd_64_test___024root___eval_final(Vadd_64_test___024root* vlSelf);

VL_ATTR_COLD void Vadd_64_test::final() {
    Vadd_64_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vadd_64_test::hierName() const { return vlSymsp->name(); }
const char* Vadd_64_test::modelName() const { return "Vadd_64_test"; }
unsigned Vadd_64_test::threads() const { return 1; }
void Vadd_64_test::prepareClone() const { contextp()->prepareClone(); }
void Vadd_64_test::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vadd_64_test::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vadd_64_test___024root__trace_decl_types(VerilatedFst* tracep);

void Vadd_64_test___024root__trace_init_top(Vadd_64_test___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vadd_64_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd_64_test___024root*>(voidSelf);
    Vadd_64_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vadd_64_test___024root__trace_decl_types(tracep);
    Vadd_64_test___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vadd_64_test___024root__trace_register(Vadd_64_test___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vadd_64_test::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vadd_64_test::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vadd_64_test___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
