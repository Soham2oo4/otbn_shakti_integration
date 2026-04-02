// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_otbn_axi__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtb_otbn_axi::Vtb_otbn_axi(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_otbn_axi__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , __PVT__csrng_reg_pkg{vlSymsp->TOP.__PVT__csrng_reg_pkg}
    , __PVT__edn_reg_pkg{vlSymsp->TOP.__PVT__edn_reg_pkg}
    , __PVT__prim_sha2_pkg{vlSymsp->TOP.__PVT__prim_sha2_pkg}
    , __PVT__otbn_reg_pkg{vlSymsp->TOP.__PVT__otbn_reg_pkg}
    , __PVT__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a{vlSymsp->TOP.__PVT__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a}
    , __PVT__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b{vlSymsp->TOP.__PVT__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_otbn_axi::Vtb_otbn_axi(const char* _vcname__)
    : Vtb_otbn_axi(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_otbn_axi::~Vtb_otbn_axi() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_otbn_axi___024root___eval_debug_assertions(Vtb_otbn_axi___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_otbn_axi___024root___eval_static(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___eval_initial(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___eval_settle(Vtb_otbn_axi___024root* vlSelf);
void Vtb_otbn_axi___024root___eval(Vtb_otbn_axi___024root* vlSelf);

void Vtb_otbn_axi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_otbn_axi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_otbn_axi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_otbn_axi___024root___eval_static(&(vlSymsp->TOP));
        Vtb_otbn_axi___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_otbn_axi___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_otbn_axi___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_otbn_axi::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_otbn_axi::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_otbn_axi::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_otbn_axi___024root___eval_final(Vtb_otbn_axi___024root* vlSelf);

VL_ATTR_COLD void Vtb_otbn_axi::final() {
    Vtb_otbn_axi___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_otbn_axi::hierName() const { return vlSymsp->name(); }
const char* Vtb_otbn_axi::modelName() const { return "Vtb_otbn_axi"; }
unsigned Vtb_otbn_axi::threads() const { return 1; }
void Vtb_otbn_axi::prepareClone() const { contextp()->prepareClone(); }
void Vtb_otbn_axi::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_otbn_axi::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_otbn_axi___024root__trace_decl_types(VerilatedFst* tracep);

void Vtb_otbn_axi___024root__trace_init_top(Vtb_otbn_axi___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_otbn_axi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_otbn_axi___024root*>(voidSelf);
    Vtb_otbn_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_otbn_axi___024root__trace_decl_types(tracep);
    Vtb_otbn_axi___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_otbn_axi___024root__trace_register(Vtb_otbn_axi___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_otbn_axi::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_otbn_axi::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_otbn_axi___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
