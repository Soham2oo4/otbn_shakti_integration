# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_otbn_axi.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_otbn_axi \
	Vtb_otbn_axi__Dpi_Export__0 \
	Vtb_otbn_axi___024root__DepSet_habb6957c__0 \
	Vtb_otbn_axi___024root__DepSet_habb6957c__1 \
	Vtb_otbn_axi___024root__DepSet_habb6957c__2 \
	Vtb_otbn_axi___024root__DepSet_habb6957c__3 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__0 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__1 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__2 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__3 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__4 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__5 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__6 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__7 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__8 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__9 \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__10 \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_h9d531035__0 \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_ha372155b__0 \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_ha372155b__1 \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_ha372155b__2 \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_ha372155b__3 \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_ha372155b__4 \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_ha372155b__5 \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_ha372155b__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_otbn_axi__ConstPool_0 \
	Vtb_otbn_axi___024root__Slow \
	Vtb_otbn_axi___024root__DepSet_habb6957c__0__Slow \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__0__Slow \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__1__Slow \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__2__Slow \
	Vtb_otbn_axi___024root__DepSet_hd08c9892__3__Slow \
	Vtb_otbn_axi_csrng_reg_pkg__Slow \
	Vtb_otbn_axi_csrng_reg_pkg__DepSet_h8658908a__0__Slow \
	Vtb_otbn_axi_edn_reg_pkg__Slow \
	Vtb_otbn_axi_edn_reg_pkg__DepSet_h47dc51de__0__Slow \
	Vtb_otbn_axi_prim_sha2_pkg__Slow \
	Vtb_otbn_axi_prim_sha2_pkg__DepSet_h6ae0503f__0__Slow \
	Vtb_otbn_axi_otbn_reg_pkg__Slow \
	Vtb_otbn_axi_otbn_reg_pkg__DepSet_h048820c3__0__Slow \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__Slow \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_h9d531035__0__Slow \
	Vtb_otbn_axi_prim_onehot_mux__W138_I20__DepSet_ha372155b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_otbn_axi__Dpi \
	Vtb_otbn_axi__Trace__0 \
	Vtb_otbn_axi__Trace__1 \
	Vtb_otbn_axi__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_otbn_axi__Syms \
	Vtb_otbn_axi__Trace__0__Slow \
	Vtb_otbn_axi__TraceDecls__0__Slow \
	Vtb_otbn_axi__Trace__1__Slow \
	Vtb_otbn_axi__Trace__2__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
