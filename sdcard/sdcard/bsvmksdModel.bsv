// Bluespec wrapper, created by Import BVI Wizard
// Created on: Thu Oct 18 18:21:44 IST 2018
// Created by: vishvesh
// Bluespec version: 2017.07.A 2017-07-21 1da80f1


interface Ifc_sdModel;
	interface Inout#(Bit#(1)) cmd;
	interface Inout#(Bit#(4)) dat;
	(*always_ready , always_enabled*)
	method Action isd_clk (Bit#(1) sd_clk);
endinterface

import "BVI" sdModel =
module mksdModel  (Ifc_sdModel);

	parameter SIZE = 10;
	parameter CONTENT_SIZE = 40;
	parameter IDLE = 0000000001;
	parameter READ_CMD = 0000000010;
	parameter ANALYZE_CMD = 0000000100;
	parameter SEND_CMD = 0000001000;
	parameter DATA_IDLE = 0000000001;
	parameter READ_WAITS = 0000000010;
	parameter READ_DATA = 0000000100;
	parameter WRITE_FLASH = 0000001000;
	parameter WRITE_DATA = 0000010000;
	parameter okcrctoken = 0101;
	parameter invalidcrctoken = 11111;

	default_clock dummy;
	default_reset rst;

	input_clock dummy (no_clock)  <- exposeCurrentClock;
	input_reset rst (no_reset) clocked_by(dummy)  <- exposeCurrentReset;

	ifc_inout cmd(cmd) clocked_by (dummy) reset_by (rst);
	ifc_inout dat(dat) clocked_by (dummy) reset_by (rst);
//	inout cmd clocked_by (dummy) reset_by (rst) = cmd;
//	inout dat clocked_by (dummy) reset_by (rst) = dat;

	method isd_clk (sd_clk )
		 enable((*inhigh*)isd_clk_enable) clocked_by(dummy) reset_by(rst);

	schedule isd_clk C isd_clk;
endmodule


