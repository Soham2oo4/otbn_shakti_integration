// Bluespec wrapper, created by Import BVI Wizard
// Created on: Mon Oct 29 14:51:54 IST 2018
// Created by: vishvesh
// Bluespec version: 2017.07.A 2017-07-21 1da80f1


interface Ifc_sdModelwrapper;
	(*always_ready , always_enabled*)
	method Action isdClk (bit sdclk);
	(*always_ready , always_enabled*)
	method Action isd_cmd_dat_i (bit sd_cmd_dat_i);
	(*always_ready , always_enabled*)
	method Action isd_cmd_oe_i (bit sd_cmd_oe_i);
	(*always_ready , always_enabled*)
	method Action isd_dat_oe_i (bit sd_dat_oe_i);
	(*always_ready , always_enabled*)
	method Action isd_dat_i (Bit#(4) sd_dat_i);
	(*always_enabled*)
	method bit osd_cmd_dat_o ();
	(*always_enabled*)
	method Bit#(4) osd_dat_o ();
endinterface

import "BVI" sdModelwrapper =
module mksdModelwrapper  (Ifc_sdModelwrapper);

	default_clock clk();
	default_reset rst;

	input_clock dummy (clk)  <- exposeCurrentClock;
	input_reset rst (no_reset) clocked_by(dummy)  <- exposeCurrentReset;


	method isdClk (sdClk )
		 enable((*inhigh*)isdClk_enable); // clocked_by(noClock) reset_by(noReset);
	method isd_cmd_dat_i (sd_cmd_dat_i )
		 enable((*inhigh*)isd_cmd_dat_i_enable); // clocked_by(noClock) reset_by(noReset);
	method isd_cmd_oe_i (sd_cmd_oe_i )
		 enable((*inhigh*)isd_cmd_oe_i_enable); // clocked_by(noClock) reset_by(noReset);
	method isd_dat_oe_i (sd_dat_oe_i )
		 enable((*inhigh*)isd_dat_oe_i_enable); // clocked_by(noClock) reset_by(noReset);
	method isd_dat_i (sd_dat_i /*3:0*/)
		 enable((*inhigh*)isd_dat_i_enable); // clocked_by(noClock) reset_by(noReset);
	method sd_cmd_dat_o osd_cmd_dat_o ()
		; // clocked_by(noClock) reset_by(noReset);
	method sd_dat_o /* 3 : 0 */ osd_dat_o ()
		; // clocked_by(noClock) reset_by(noReset);

	schedule isdClk C isdClk;
	schedule isdClk CF isd_cmd_dat_i;
	schedule isdClk CF isd_cmd_oe_i;
	schedule isdClk CF isd_dat_oe_i;
	schedule isdClk CF isd_dat_i;
	schedule osd_cmd_dat_o SB isdClk;
	schedule osd_dat_o SB isdClk;
	schedule isd_cmd_dat_i C isd_cmd_dat_i;
	schedule isd_cmd_dat_i CF isd_cmd_oe_i;
	schedule isd_cmd_dat_i CF isd_dat_oe_i;
	schedule isd_cmd_dat_i CF isd_dat_i;
	schedule osd_cmd_dat_o SB isd_cmd_dat_i;
	schedule osd_dat_o SB isd_cmd_dat_i;
	schedule isd_cmd_oe_i C isd_cmd_oe_i;
	schedule isd_cmd_oe_i CF isd_dat_oe_i;
	schedule isd_cmd_oe_i CF isd_dat_i;
	schedule osd_cmd_dat_o SB isd_cmd_oe_i;
	schedule osd_dat_o SB isd_cmd_oe_i;
	schedule isd_dat_oe_i C isd_dat_oe_i;
	schedule isd_dat_oe_i CF isd_dat_i;
	schedule osd_cmd_dat_o SB isd_dat_oe_i;
	schedule osd_dat_o SB isd_dat_oe_i;
	schedule isd_dat_i C isd_dat_i;
	schedule osd_cmd_dat_o SB isd_dat_i;
	schedule osd_dat_o SB isd_dat_i;
	schedule osd_cmd_dat_o CF osd_cmd_dat_o;
	schedule osd_cmd_dat_o CF osd_dat_o;
	schedule osd_dat_o CF osd_dat_o;
endmodule


