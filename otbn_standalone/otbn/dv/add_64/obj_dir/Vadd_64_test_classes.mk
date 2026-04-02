# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vadd_64_test.mk for the caller.

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
	Vadd_64_test \
	Vadd_64_test__Dpi_Export__0 \
	Vadd_64_test___024root__DepSet_h79d8a1e2__0 \
	Vadd_64_test___024root__DepSet_h79d8a1e2__1 \
	Vadd_64_test___024root__DepSet_h79d8a1e2__2 \
	Vadd_64_test___024root__DepSet_h60e7c52b__0 \
	Vadd_64_test___024root__DepSet_h60e7c52b__1 \
	Vadd_64_test___024root__DepSet_h60e7c52b__2 \
	Vadd_64_test___024root__DepSet_h60e7c52b__3 \
	Vadd_64_test___024root__DepSet_h60e7c52b__4 \
	Vadd_64_test___024root__DepSet_h60e7c52b__5 \
	Vadd_64_test___024root__DepSet_h60e7c52b__6 \
	Vadd_64_test___024root__DepSet_h60e7c52b__7 \
	Vadd_64_test___024root__DepSet_h60e7c52b__8 \
	Vadd_64_test___024root__DepSet_h60e7c52b__9 \
	Vadd_64_test___024root__DepSet_h60e7c52b__10 \
	Vadd_64_test___024root__DepSet_h60e7c52b__11 \
	Vadd_64_test___024root__DepSet_h60e7c52b__12 \
	Vadd_64_test___024root__DepSet_h60e7c52b__13 \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h19f729e2__0 \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h80d24d2b__0 \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h80d24d2b__1 \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h80d24d2b__2 \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h80d24d2b__3 \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h80d24d2b__4 \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h80d24d2b__5 \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h80d24d2b__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vadd_64_test__ConstPool_0 \
	Vadd_64_test___024root__Slow \
	Vadd_64_test___024root__DepSet_h79d8a1e2__0__Slow \
	Vadd_64_test___024root__DepSet_h60e7c52b__0__Slow \
	Vadd_64_test___024root__DepSet_h60e7c52b__1__Slow \
	Vadd_64_test___024root__DepSet_h60e7c52b__2__Slow \
	Vadd_64_test___024root__DepSet_h60e7c52b__3__Slow \
	Vadd_64_test___024root__DepSet_h60e7c52b__4__Slow \
	Vadd_64_test___024root__DepSet_h60e7c52b__5__Slow \
	Vadd_64_test_csrng_reg_pkg__Slow \
	Vadd_64_test_csrng_reg_pkg__DepSet_hf6ffc7c0__0__Slow \
	Vadd_64_test_edn_reg_pkg__Slow \
	Vadd_64_test_edn_reg_pkg__DepSet_h70acc2a5__0__Slow \
	Vadd_64_test___024unit__Slow \
	Vadd_64_test___024unit__DepSet_h1f834ffd__0__Slow \
	Vadd_64_test_otbn_reg_pkg__Slow \
	Vadd_64_test_otbn_reg_pkg__DepSet_h542e346c__0__Slow \
	Vadd_64_test_prim_sha2_pkg__Slow \
	Vadd_64_test_prim_sha2_pkg__DepSet_h69dfc3ce__0__Slow \
	Vadd_64_test_prim_onehot_mux__W138_I20__Slow \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h19f729e2__0__Slow \
	Vadd_64_test_prim_onehot_mux__W138_I20__DepSet_h80d24d2b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vadd_64_test__Dpi \
	Vadd_64_test__Trace__0 \
	Vadd_64_test__Trace__1 \
	Vadd_64_test__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vadd_64_test__Syms \
	Vadd_64_test__Trace__0__Slow \
	Vadd_64_test__TraceDecls__0__Slow \
	Vadd_64_test__Trace__1__Slow \
	Vadd_64_test__Trace__2__Slow \

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
