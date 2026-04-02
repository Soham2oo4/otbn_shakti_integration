.PHONY: all clean run sim

all: run

SIM_DIR = obj_dir

PRIM_RTL         = ../../../prim/rtl
TLUL_RTL         = ../../../tlul/rtl
TOP_RTL          = ../../../top_earlgrey/rtl
PRIM_GENERIC_RTL = ../../../prim_generic/rtl

sim:
	verilator --cc --trace-fst --sv --timing \
		-Wno-TIMESCALEMOD \
		-Wno-WIDTH \
		-Wno-MODDUP \
		-Wno-UNOPTFLAT \
		--top-module axi_bridge_test \
		-I$(PRIM_RTL) \
		-I$(TLUL_RTL) \
		-I$(TOP_RTL) \
		-I$(PRIM_GENERIC_RTL) \
		$(TOP_RTL)/top_pkg.sv \
		$$(find $(PRIM_RTL) -name "*_pkg.sv" | sort) \
		$$(find $(PRIM_GENERIC_RTL) -name "*_pkg.sv" | sort) \
		$(TLUL_RTL)/tlul_pkg.sv \
		$(TLUL_RTL)/axi64_to_tl64_bridge.sv \
		axi_bridge_test.sv \
		--exe main.cpp \
		-Mdir obj_dir
	make -C obj_dir -f Vaxi_bridge_test.mk

run: sim
	./$(SIM_DIR)/Vaxi_bridge_test

clean:
	rm -rf $(SIM_DIR) *.fst
