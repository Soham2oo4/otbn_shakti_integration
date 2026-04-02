# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vimem_test.mk for the caller.

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
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vimem_test \
	Vimem_test__Dpi_Export__0 \
	Vimem_test___024root__DepSet_hcabd8bce__0 \
	Vimem_test___024root__DepSet_hcabd8bce__1 \
	Vimem_test___024root__DepSet_hcabd8bce__2 \
	Vimem_test___024root__DepSet_hf3c61892__0 \
	Vimem_test___024root__DepSet_hf3c61892__1 \
	Vimem_test___024root__DepSet_hf3c61892__2 \
	Vimem_test___024root__DepSet_hf3c61892__3 \
	Vimem_test___024root__DepSet_hf3c61892__4 \
	Vimem_test___024root__DepSet_hf3c61892__5 \
	Vimem_test___024root__DepSet_hf3c61892__6 \
	Vimem_test___024root__DepSet_hf3c61892__7 \
	Vimem_test___024root__DepSet_hf3c61892__8 \
	Vimem_test___024root__DepSet_hf3c61892__9 \
	Vimem_test___024root__DepSet_hf3c61892__10 \
	Vimem_test___024root__DepSet_hf3c61892__11 \
	Vimem_test___024root__DepSet_hf3c61892__12 \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_h0184e8df__0 \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_hbcdd3b83__0 \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_hbcdd3b83__1 \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_hbcdd3b83__2 \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_hbcdd3b83__3 \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_hbcdd3b83__4 \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_hbcdd3b83__5 \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_hbcdd3b83__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vimem_test__ConstPool_0 \
	Vimem_test___024root__Slow \
	Vimem_test___024root__DepSet_hcabd8bce__0__Slow \
	Vimem_test___024root__DepSet_hf3c61892__0__Slow \
	Vimem_test___024root__DepSet_hf3c61892__1__Slow \
	Vimem_test___024root__DepSet_hf3c61892__2__Slow \
	Vimem_test___024root__DepSet_hf3c61892__3__Slow \
	Vimem_test___024root__DepSet_hf3c61892__4__Slow \
	Vimem_test_csrng_reg_pkg__Slow \
	Vimem_test_csrng_reg_pkg__DepSet_hf4857e10__0__Slow \
	Vimem_test_edn_reg_pkg__Slow \
	Vimem_test_edn_reg_pkg__DepSet_h56ffcfcf__0__Slow \
	Vimem_test___024unit__Slow \
	Vimem_test___024unit__DepSet_h91fc3b23__0__Slow \
	Vimem_test_otbn_reg_pkg__Slow \
	Vimem_test_otbn_reg_pkg__DepSet_h47c43ee8__0__Slow \
	Vimem_test_prim_sha2_pkg__Slow \
	Vimem_test_prim_sha2_pkg__DepSet_hf14ba18a__0__Slow \
	Vimem_test_prim_onehot_mux__W138_I20__Slow \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_h0184e8df__0__Slow \
	Vimem_test_prim_onehot_mux__W138_I20__DepSet_hbcdd3b83__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vimem_test__Dpi \
	Vimem_test__Trace__0 \
	Vimem_test__Trace__1 \
	Vimem_test__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vimem_test__Syms \
	Vimem_test__Trace__0__Slow \
	Vimem_test__TraceDecls__0__Slow \
	Vimem_test__Trace__1__Slow \
	Vimem_test__Trace__2__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
