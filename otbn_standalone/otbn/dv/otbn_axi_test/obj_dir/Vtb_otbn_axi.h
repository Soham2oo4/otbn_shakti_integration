// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTB_OTBN_AXI_H_
#define VERILATED_VTB_OTBN_AXI_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtb_otbn_axi__Syms;
class Vtb_otbn_axi___024root;
class VerilatedFstC;
class Vtb_otbn_axi_csrng_reg_pkg;
class Vtb_otbn_axi_edn_reg_pkg;
class Vtb_otbn_axi_otbn_reg_pkg;
class Vtb_otbn_axi_prim_onehot_mux__W138_I20;
class Vtb_otbn_axi_prim_sha2_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtb_otbn_axi VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtb_otbn_axi__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtb_otbn_axi_csrng_reg_pkg* const __PVT__csrng_reg_pkg;
    Vtb_otbn_axi_edn_reg_pkg* const __PVT__edn_reg_pkg;
    Vtb_otbn_axi_prim_sha2_pkg* const __PVT__prim_sha2_pkg;
    Vtb_otbn_axi_otbn_reg_pkg* const __PVT__otbn_reg_pkg;
    Vtb_otbn_axi_prim_onehot_mux__W138_I20* const __PVT__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a;
    Vtb_otbn_axi_prim_onehot_mux__W138_I20* const __PVT__tb_otbn_axi__DOT__u_dut__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_b;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtb_otbn_axi___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtb_otbn_axi(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtb_otbn_axi(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtb_otbn_axi();
  private:
    VL_UNCOPYABLE(Vtb_otbn_axi);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static int simutil_get_mem(int index, svBitVecVal* val);
    static int simutil_get_scramble_key(svBitVecVal* val);
    static int simutil_get_scramble_nonce(svBitVecVal* nonce);
    static void simutil_memload(const char* file);
    static int simutil_set_mem(int index, const svBitVecVal* val);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
