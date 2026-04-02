# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vdmem_test.mk for the caller.

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
	Vdmem_test \
	Vdmem_test__Dpi_Export__0 \
	Vdmem_test___024root__DepSet_haa025a06__0 \
	Vdmem_test___024root__DepSet_haa025a06__1 \
	Vdmem_test___024root__DepSet_haa025a06__2 \
	Vdmem_test___024root__DepSet_h7cb5e825__0 \
	Vdmem_test___024root__DepSet_h7cb5e825__1 \
	Vdmem_test___024root__DepSet_h7cb5e825__2 \
	Vdmem_test___024root__DepSet_h7cb5e825__3 \
	Vdmem_test___024root__DepSet_h7cb5e825__4 \
	Vdmem_test___024root__DepSet_h7cb5e825__5 \
	Vdmem_test___024root__DepSet_h7cb5e825__6 \
	Vdmem_test___024root__DepSet_h7cb5e825__7 \
	Vdmem_test___024root__DepSet_h7cb5e825__8 \
	Vdmem_test___024root__DepSet_h7cb5e825__9 \
	Vdmem_test___024root__DepSet_h7cb5e825__10 \
	Vdmem_test___024root__DepSet_h7cb5e825__11 \
	Vdmem_test___024root__DepSet_h7cb5e825__12 \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_h6eb3c1d3__0 \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_hb94550fa__0 \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_hb94550fa__1 \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_hb94550fa__2 \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_hb94550fa__3 \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_hb94550fa__4 \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_hb94550fa__5 \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_hb94550fa__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vdmem_test__ConstPool_0 \
	Vdmem_test___024root__Slow \
	Vdmem_test___024root__DepSet_haa025a06__0__Slow \
	Vdmem_test___024root__DepSet_h7cb5e825__0__Slow \
	Vdmem_test___024root__DepSet_h7cb5e825__1__Slow \
	Vdmem_test___024root__DepSet_h7cb5e825__2__Slow \
	Vdmem_test___024root__DepSet_h7cb5e825__3__Slow \
	Vdmem_test___024root__DepSet_h7cb5e825__4__Slow \
	Vdmem_test___024root__DepSet_h7cb5e825__5__Slow \
	Vdmem_test_csrng_reg_pkg__Slow \
	Vdmem_test_csrng_reg_pkg__DepSet_hacbe3343__0__Slow \
	Vdmem_test_edn_reg_pkg__Slow \
	Vdmem_test_edn_reg_pkg__DepSet_h08bb00d8__0__Slow \
	Vdmem_test___024unit__Slow \
	Vdmem_test___024unit__DepSet_h5ed22831__0__Slow \
	Vdmem_test_otbn_reg_pkg__Slow \
	Vdmem_test_otbn_reg_pkg__DepSet_hb1e1599d__0__Slow \
	Vdmem_test_prim_sha2_pkg__Slow \
	Vdmem_test_prim_sha2_pkg__DepSet_he42f2734__0__Slow \
	Vdmem_test_prim_onehot_mux__W138_I20__Slow \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_h6eb3c1d3__0__Slow \
	Vdmem_test_prim_onehot_mux__W138_I20__DepSet_hb94550fa__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vdmem_test__Dpi \
	Vdmem_test__Trace__0 \
	Vdmem_test__Trace__1 \
	Vdmem_test__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vdmem_test__Syms \
	Vdmem_test__Trace__0__Slow \
	Vdmem_test__TraceDecls__0__Slow \
	Vdmem_test__Trace__1__Slow \
	Vdmem_test__Trace__2__Slow \

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
