// Bluespec wrapper, created by Import BVI Wizard
// Created on: Thu Oct 11 12:03:51 IST 2018
// Created by: vishvesh
// Bluespec version: 2017.07.A 2017-07-21 1da80f1
package bsvmksdModel ::*;

interface Ifc_sdModel;
	interface Inout#(bit) cmd;
	interface Inout#(Bit#(4)) dat;
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
	parameter invalidcrctoken = 1111;

	default_clock clk_sdclk;
	default_reset rst;

	input_clock clk_sdclk (sdclk)  <- exposeCurrentClock;
	input_reset rst (/* empty */) clocked_by(clk_sdclk)  <- exposeCurrentReset;

	ifc_inout cmd(cmd) clocked_by (clk_sdclk) reset_by (rst);
	ifc_inout dat(dat) clocked_by (clk_sdclk) reset_by (rst);


endmodule
endpackage

