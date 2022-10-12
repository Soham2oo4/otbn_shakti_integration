
TOP_MODULE:=mktop_sd
TOP_FILE:=top_sd.bsv
TOP_DIR:=./sdcard/.

AXI4:=/scratch/work/git_ONFI/onfi/ONFI_AXI/src/axi4
TESTBENCH:=./sdcard/.
BSVINCDIR:= .:%/Prelude:%/Libraries:%/Libraries/BlueNoC:$(AXI4):$(TESTBENCH):$(LIB)
BSVBUILDDIR:=./bsv_build/
VERILOGDIR:=./verilog/
BSVOUTDIR:=./bin

check-blue:
	@if test -z "$$BLUESPECDIR"; then echo "BLUESPECDIR variable not set"; exit 1; fi; 

.PHONY: generate_verilog 
generate_verilog: check-blue
	@echo Compiling mkTb_sdc in Verilog for simulations ...
	@mkdir -p $(BSVBUILDDIR); 
	@mkdir -p $(VERILOGDIR);
	@echo "old_define_macros = $(define_macros)" > old_vars
	bsc -u -verilog -elab -vdir $(VERILOGDIR) -bdir $(BSVBUILDDIR) -info-dir $(BSVBUILDDIR) $(define_macros)  -demote-errors G0045 -D verilog=True $(BSVCOMPILEOPTS) -verilog-filter ${BLUESPECDIR}/bin/basicinout -p $(BSVINCDIR) -g $(TOP_MODULE) $(TOP_DIR)/$(TOP_FILE) 2>&1 | tee bsv_compile.log
	@echo Compilation finished


.PHONY: link_ncverilog
link_ncverilog: 
	@echo "Linking $(TOP_MODULE) using ncverilog..."
	@rm -rf work include bin/work
	@mkdir -p bin 
	@mkdir work
#	@cp ./src/bfm/* ./verilog/.
	@echo "define work ./work" > cds.lib
	@echo "define WORK work" > hdl.var
	@ncvlog -sv -cdslib ./cds.lib -hdlvar ./hdl.var +define+TOP=$(TOP_MODULE) ${VERILOGDIR}/main.v -y ./$(VERILOGDIR)/
	@ncelab  -cdslib ./cds.lib -hdlvar ./hdl.var work.main -access +r -timescale 1ns/1ps
	@echo 'ncsim -cdslib ./cds.lib -hdlvar ./hdl.var work.main #> /dev/null' > $(BSVOUTDIR)/out
	@mv work cds.lib hdl.var $(BSVOUTDIR)/
	@chmod +x $(BSVOUTDIR)/out
	@echo Linking finished
