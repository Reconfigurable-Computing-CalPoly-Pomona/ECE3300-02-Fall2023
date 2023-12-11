// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VWBVGAFRAME_H_
#define VERILATED_VWBVGAFRAME_H_  // guard

#include "verilated.h"

class Vwbvgaframe__Syms;
class Vwbvgaframe___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vwbvgaframe VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vwbvgaframe__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&i_clk,0,0);
    VL_IN8(&i_pixclk,0,0);
    VL_IN8(&i_reset,0,0);
    VL_IN8(&i_en,0,0);
    VL_IN8(&i_test,0,0);
    VL_OUT8(&o_wb_cyc,0,0);
    VL_OUT8(&o_wb_stb,0,0);
    VL_IN8(&i_wb_ack,0,0);
    VL_IN8(&i_wb_err,0,0);
    VL_IN8(&i_wb_stall,0,0);
    VL_OUT8(&o_vga_vsync,0,0);
    VL_OUT8(&o_vga_hsync,0,0);
    VL_OUT8(&o_vga_red,7,0);
    VL_OUT8(&o_vga_grn,7,0);
    VL_OUT8(&o_vga_blu,7,0);
    VL_OUT8(&o_interrupt,0,0);
    VL_IN16(&i_line_words,13,0);
    VL_IN16(&i_hm_width,12,0);
    VL_IN16(&i_hm_porch,12,0);
    VL_IN16(&i_hm_synch,12,0);
    VL_IN16(&i_hm_raw,12,0);
    VL_IN16(&i_vm_height,11,0);
    VL_IN16(&i_vm_porch,11,0);
    VL_IN16(&i_vm_synch,11,0);
    VL_IN16(&i_vm_raw,11,0);
    VL_IN(&i_base_addr,23,0);
    VL_OUT(&o_wb_addr,23,0);
    VL_IN(&i_wb_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vwbvgaframe___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vwbvgaframe(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vwbvgaframe(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vwbvgaframe();
  private:
    VL_UNCOPYABLE(Vwbvgaframe);  ///< Copying not allowed

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
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

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
};

#endif  // guard
