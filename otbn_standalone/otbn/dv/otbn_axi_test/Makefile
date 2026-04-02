.PHONY: all clean run sim

all: run

SIM_DIR = obj_dir

OTBN_RTL = ../../rtl
PRIM_RTL = ../../../prim/rtl
TLUL_RTL = ../../../tlul/rtl
TOP_RTL = ../../../top_earlgrey/rtl
OTP_CTRL_RTL = ../../../otp_ctrl/rtl
LC_CTRL_RTL = ../../../lc_ctrl/rtl
PRIM_GENERIC_RTL = ../../../prim_generic/rtl
EDN_RTL = ../../../edn/rtl
KEYMGR_RTL = ../../../keymgr/rtl
ENTROPY_SRC_RTL = ../../../entropy_src/rtl
CSRNG_RTL = ../../../csrng/rtl

sim:
	verilator --cc --trace-fst --sv --timing\
		-Wno-TIMESCALEMOD\
		-Wno-WIDTH \
		-Wno-MODDUP \
		-Wno-UNOPTFLAT \
		-Wno-INITIALDLY \
		-Wno-PINMISSING \
		-Wno-CASEINCOMPLETE \
		--top-module tb_otbn_axi \
		-I$(OTBN_RTL) \
		-I$(PRIM_RTL) \
		-I$(TLUL_RTL) \
		-I$(TOP_RTL) \
		-I$(OTP_CTRL_RTL) \
		-I$(LC_CTRL_RTL) \
		-I$(PRIM_GENERIC_RTL) \
		-I$(EDN_RTL) \
		-I$(KEYMGR_RTL) \
		-I$(ENTROPY_SRC_RTL) \
		-I$(CSRNG_RTL) \
		$(TOP_RTL)/top_pkg.sv \
		$(shell find $(PRIM_RTL) -name "*_pkg.sv" | sort) \
		$(shell find $(TLUL_RTL) -name "*_pkg.sv" | sort) \
		$(shell find $(ENTROPY_SRC_RTL) -name "*_pkg.sv" | sort) \
		$(CSRNG_RTL)/csrng_reg_pkg.sv \
		$(CSRNG_RTL)/csrng_pkg.sv \
		$(shell find $(EDN_RTL) -name "*_pkg.sv" | sort) \
		$(KEYMGR_RTL)/keymgr_reg_pkg.sv \
		$(KEYMGR_RTL)/keymgr_pkg.sv \
		$(LC_CTRL_RTL)/lc_ctrl_state_pkg.sv \
		$(LC_CTRL_RTL)/lc_ctrl_reg_pkg.sv \
		$(LC_CTRL_RTL)/lc_ctrl_pkg.sv \
		$(OTP_CTRL_RTL)/otp_ctrl_pkg.sv \
		$(shell find $(OTBN_RTL) -name "*_pkg.sv" | sort) \
		$(shell find $(OTP_CTRL_RTL) -name "*_pkg.sv" | sort) \
		$(shell find $(PRIM_GENERIC_RTL) -name "*_pkg.sv" | sort)\
		$(shell find $(PRIM_RTL) -name "*.sv" | grep -v "_pkg.sv" | grep -v "prim_edn_req.sv" | grep -v "prim_racl_error_arb.sv" | grep -v "prim_ram_1p_adv.sv" | grep -v "prim_ram_1r1w_adv.sv" | grep -v "prim_ram_1r1w_async_adv.sv" | grep -v "prim_ram_2p_adv.sv" | grep -v "prim_ram_2p_async_adv.sv" | grep -v "prim_rom_adv.sv" | sort) \
		$(shell find $(TLUL_RTL) -name "*.sv" | grep -v "_pkg.sv" | grep -v "tlul_adapter_dmi.sv" | grep -v "tlul_adapter_racl.sv" | grep -v "tlul_adapter_reg_racl.sv" | grep -v "tlul_adapter_sram_racl.sv" | grep -v "tlul_jtag_dtm.sv" | sort) \
		$(shell find $(OTBN_RTL) -name "*.sv" | grep -v "_pkg.sv" | sort) \
		otbn_axi_wrapper.sv \
		tb_otbn_axi.sv \
		--exe main.cpp \
		-Mdir obj_dir

	make -C obj_dir -f Vtb_otbn_axi.mk

run: sim
	./$(SIM_DIR)/Vtb_otbn_axi

clean:
	rm -rf $(SIM_DIR) *.vcd *.fst
