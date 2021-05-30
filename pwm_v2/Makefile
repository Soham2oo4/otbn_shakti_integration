### Makefile for the devices

#make TOP_FILE=riscvDebug013_testbench.bsv TOP_DIR=riscvDebug013 ; make link ; cd bin ; cp ../riscvDebug013/test.mem ./ ; ./out ; cd ..

include Makefile.inc

TOP_MODULE:=mkdummy
BSVBUILDDIR:=./build/
VERILOGDIR:=./verilog/
BSVINCDIR:= .:%/Prelude:%/Libraries:%/Libraries/BlueNoC:$(SUPPORTED):$(DIR)
define_macros:=-D VERBOSITY=2 -D ASSERT=True -D CORE_AXI4=True

## BFM_V_DIR:=
VERILATOR_FLAGS = --stats -O3 -CFLAGS -O3 -LDFLAGS -static --x-assign fast --x-initial fast \
					--no-assert --exe sim_main.cpp -Wno-STMTDLY -Wno-UNOPTFLAT \
					-Wno-WIDTH -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY 

## VERILATOR__RBB_VPI_FLAGS

## BFM_V_DIR:=
VERILATOR_FLAGS = --stats -O3 -CFLAGS -O3 -LDFLAGS -static --x-assign fast --x-initial fast \
					--no-assert --exe sim_main.cpp -Wno-STMTDLY -Wno-UNOPTFLAT \
					-Wno-WIDTH -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY
# open bsc changes 
BSC_DIR := $(shell which bsc)
BSC_VDIR:=$(subst /bin/bsc,/,${BSC_DIR})bin/../lib/

## VERILATOR__RBB_VPI_FLAGS

default: full_clean generate_verilog

.PHONY: compile
compile:
	@echo Compiling $(TOP_MODULE)....
	@mkdir -p $(BSVBUILDDIR)
	@bsc -u -sim -simdir $(BSVBUILDDIR) -bdir $(BSVBUILDDIR) -info-dir $(BSVBUILDDIR) -keep-fires\
 -check-assert $(define_macros) -p $(BSVINCDIR) -g $(TOP_MODULE) $(TOP_DIR)/$(TOP_FILE)
	@echo Compilation finished

.PHONY: module_only
module_only:
	@make TOP_FILE=riscvDebug013.bsv TOP_DIR=riscvDebug013 TOP_MODULE:=mkriscvDebug013

.PHONY: link_bsim
link_bsim:
	@echo Linking $(TOP_MODULE)...
	@mkdir -p bin
	@bsc -e $(TOP_MODULE) -sim -o ./bin/out -simdir $(BSVBUILDDIR) -p .:%/Prelude:%/Libraries:%/Libraries/BlueNoC -bdir $(BSVBUILDDIR) -keep-fires  ./jtagdtm/RBB_Shakti.c
	@echo Linking finished

.PHONY: link_verilator
link_verilator:
	@echo "Linking $(TOP_MODULE) using verilator"
	@mkdir -p bin
	@echo "#define TOPMODULE V$(TOP_MODULE)" > common_tb/sim_main.h
	@echo '#include "V$(TOP_MODULE).h"' >> common_tb/sim_main.h
	@verilator --cc $(TOP_MODULE).v $(VERILATOR_FLAGS) -y $(VERILOGDIR)
	@ln -f -s ../common_tb/sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s ../common_tb/sim_main.h obj_dir/sim_main.h
	@make -j4 -C obj_dir -f V$(TOP_MODULE).mk
	@cp obj_dir/V$(TOP_MODULE) bin/out
	@echo Linking finished

.PHONY: link_verilator_svdpi
link_verilator_svdpi:
	@echo "Linking Verilator With the Shakti RBB Vpi"
	@mkdir -p bin
	@echo "#define TOPMODULE V$(TOP_MODULE)_edited" > common_tb/sim_main.h
	@echo '#include "V$(TOP_MODULE)_edited.h"' >> common_tb/sim_main.h
	@sed  -f jtagdtm/sed_script.txt  $(VERILOGDIR)/$(TOP_MODULE).v > tmp1.v
	@cat  jtagdtm/verilator_config.vlt \
	      jtagdtm/vpi_sv.v \
	      tmp1.v                         > $(VERILOGDIR)/$(TOP_MODULE)_edited.v
	@rm   -f  tmp1.v
	@verilator --threads-dpi none --cc $(TOP_MODULE)_edited.v --exe sim_main.cpp RBB_Shakti.c -y $(VERILOGDIR) $(VERILATOR_FLAGS)
	@ln -f -s ../common_tb/sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s ../common_tb/sim_main.h obj_dir/sim_main.h
	@ln -f -s ../jtagdtm/RBB_Shakti.c obj_dir/RBB_Shakti.c
	@echo "INFO: Linking verilated files"
	@make -j4 -C obj_dir -f V$(TOP_MODULE)_edited.mk
	@cp obj_dir/V$(TOP_MODULE)_edited bin/out
	@echo Linking finished

.PHONY: generate_verilog 
generate_verilog:
	@echo Compiling $(TOP_MODULE) in verilog ...
	@mkdir -p $(BSVBUILDDIR); 
	@mkdir -p $(VERILOGDIR); 
	@bsc -u -remove-dollar -verilog -elab -vdir $(VERILOGDIR) -bdir $(BSVBUILDDIR) -info-dir $(BSVBUILDDIR)\
  -keep-fires -check-assert  $(define_macros) -D VERBOSITY=0 -D verilog=True $(BSVCOMPILEOPTS)\
  -p $(BSVINCDIR) -g $(TOP_MODULE) $(TOP_DIR)/$(TOP_FILE)  || (echo "BSC COMPILE ERROR"; exit 1) 
	@cp ${BSC_VDIR}/Verilog/ResetEither.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog/FIFO2.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog/FIFO20.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog/MakeReset0.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog.Vivado/BRAM2BELoad.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog/ClockInverter.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog/SyncReset0.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog/MakeClock.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog/FIFO1.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog/FIFO10.v ${VERILOGDIR}
	@cp ${BSC_VDIR}/Verilog/SyncFIFO1.v ${VERILOGDIR}
.PHONY: clean
clean:
	rm -rf build bin *.jou *.log

.PHONY: full_clean
full_clean: clean
	rm -rf verilog fpga
