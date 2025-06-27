/* 
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
conditions and the following disclaimer in the documentation and/or other materials provided 
with the distribution.  
* Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or 
promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
conditions and the following disclaimer in the documentation and/or other materials provided 
with the distribution.  
* Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or 
promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Author: Aniketh Ganesh	
Email id: ep20b009@smail.iitm.ac.in
Details:

--------------------------------------------------------------------------------------------------
*/
package rtc;

`include "rtc.defines"

/*==== Package imports ==== */
import TriState          	::*;
import Vector				::*;
import BUtils				::*;	
import ConfigReg			::*;
import GetPut     ::*;
import Clocks :: * ;
import FIFOLevel :: * ;
/*===== Project Imports ===== */
import Semi_FIFOF        :: *;
import AXI4_Lite_Types   :: *;
import AXI4_Lite_Fabric  :: *;
import AXI4_Types 		 ::*;
import AXI4_Fabric 		 ::*;
import device_common	 ::*;


export Ifc_rtc_axi4lite   (..);
export Ifc_rtc_axi4       (..);
export User_ifc (..);
export mkrtc_axi4;
export mkrtc_axi4lite;

interface User_ifc#(numeric type addr_width, numeric type data_width);
    (*always_ready,always_enabled*)
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data);
		method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width)addr);
        method Bit#(1) interrupt;
        method Bit#(1) write_ctrl_en;
        method Bit#(1) loclock;
endinterface

typedef struct {
    Bit#(4) tos;
    Bit#(4) s;
    Bit#(3) ts;
    Bit#(4) m;
    Bit#(3) tm;
    Bit#(4) h;
    Bit#(2) th;
    Bit#(3) dow;
    Bit#(5) dummy;
} Time deriving(Bits, Eq);
typedef struct {
    Bit#(4) d;
    Bit#(2) td;
    Bit#(4) m;
    Bit#(1) tm;
    Bit#(4) y;
    Bit#(4) ty;
    Bit#(4) c;
    Bit#(4) tc;
    Bit#(5) dummy;
} Date deriving(Bits, Eq);
typedef struct {
    Bit#(4) tos;
    Bit#(4) s;
    Bit#(3) ts;
    Bit#(4) m;
    Bit#(3) tm;
    Bit#(4) h;
    Bit#(2) th;
    Bit#(3) dow;
    Bool ctos;
    Bool cs;
    Bool cm;
    Bool ch;
    Bool cdow;
} Talrm deriving(Bits, Eq);
typedef struct {
    Bit#(4) d;
    Bit#(2) td;
    Bit#(4) m;
    Bit#(1) tm;
    Bit#(4) y;
    Bit#(4) ty;
    Bit#(4) c;
    Bit#(4) tc;
    Bool cd;
    Bool cm;
    Bool cy;
    Bool cc;
    Bit#(1) dummy;
} Dalrm deriving(Bits, Eq);
typedef struct {
    Bit#(27) div;
    Bool btos;
    Bool eclk;
    Bool inte;
    Bool alrm;
    Bool en;    
} Ctrl deriving(Bits, Eq);

module mkrtc(Clock ext_clk, Reset ext_rst, User_ifc#(addr_width, data_width) userIfc)
    provisos(Bits#(Time, data_width), Bits#(Date, data_width), Bits#(Talrm, data_width), Bits#(Dalrm, data_width), Bits#(Ctrl, data_width), Add#(b__, data_width, 32));

    let default_talrm = Talrm{tos: 0, s: 4, ts: 1, m: 0, tm: 0, h: 0, th: 0, dow: 5, ctos: False, cs: True, cm: False, ch: False, cdow: False};
    let default_dalrm = Dalrm{d: 1, td: 0, m: 1, tm: 0, y: 0, ty: 7, c: 9, tc: 1, cd: False, cm: False, cy: False, cc: False, dummy: 0};
    let default_ctrl = Ctrl{div: 16384, btos: False, eclk: False, inte: True, alrm: True, en: False};
    let default_time = Time{tos: 0, s: 0, ts: 0, m: 0, tm: 0, h: 0, th: 0, dow: 5, dummy: 0};
    let default_date = Date{d: 1, td: 0, m: 1, tm: 0, y: 0, ty: 7, c: 9, tc: 1, dummy: 0};

    Reg#(Talrm) talrm_reg <- mkRegA(default_talrm);
    Reg#(Dalrm) dalrm_reg <- mkRegA(default_dalrm);
    Reg#(Ctrl) ctrl_reg <- mkRegA(default_ctrl);

    /*Clock Divider*/    
    Reg#(Ctrl) sync_ctrl_reg <- mkSyncRegFromCC(default_ctrl, ext_clk); //READ: ext_clk, WRITE: default_clk
    rule sync_ctrl; //default_clk
        sync_ctrl_reg <= ctrl_reg;
    endrule

    Reg#(Bit#(27)) cntr_div <- mkRegA(unpack(default_ctrl.div), clocked_by ext_clk, reset_by ext_rst);
    Reg#(Bit#(1)) osc <- mkRegA(0, clocked_by ext_clk, reset_by ext_rst);
    MakeClockIfc#(Bit#(1)) mc <- mkClock(0, True, clocked_by ext_clk, reset_by ext_rst);
    Clock lo_clk = mc.new_clk;
    rule oscillate;
        let new_osc = osc;
        if (cntr_div == 0) begin //when cntr_div reaches 0, 
            cntr_div <=  sync_ctrl_reg.div; //set it to the divide factor
            new_osc = invert(osc); //make a clockedge of the divided clock
            mc.setClockValue(new_osc);
            osc <= new_osc;
        end else if (sync_ctrl_reg.en) begin
            mc.setClockValue(new_osc);
            osc <= new_osc;
            cntr_div <= cntr_div - 1; //then, reduce cntr_div by one in every original clock cycle
        end else begin
            osc <= new_osc;
        end
    endrule
    Reset lo_rst <- mkAsyncResetFromCR (0, lo_clk);

    Reg#(Bit#(1)) btos_lo <- mkSyncRegFromCC(0, lo_clk); //READ: lo_clk, WRITE: default_clk
    Reg#(Bit#(1)) en_lo <- mkSyncRegFromCC(0, lo_clk); //READ: lo_clk, WRITE: default_clk
    rule sync_ctrl_reg_to_lo_clk;
	      btos_lo <= pack(ctrl_reg.btos);
          en_lo <= pack(ctrl_reg.en);
	endrule

    Reg#(Time) time_reg <- mkRegA(default_time, clocked_by lo_clk, reset_by lo_rst);
    Reg#(Date) date_reg <- mkRegA(default_date, clocked_by lo_clk, reset_by lo_rst);
    //
    // Leap year calculation
    //
    Bool leapyear =
        (({date_reg.ty, date_reg.y} == 8'h00) &&				// xx00
        (( date_reg.tc[0] == 1'b1 && !(date_reg.c[3]==1'b1) && (date_reg.c[1:0] == 2'b10)) ||	// 12xx, 16xx, 32xx ...
        (!(date_reg.tc[0] == 1'b1) && (date_reg.c[1:0] == 2'b00) &&		// 00xx, 04xx, 08xx, 20xx, 24xx ...
        ((date_reg.c[3:2] == 2'b01) || !(date_reg.c[2] == 1'b1))))) ||
        (!(date_reg.ty[0] == 1'b1) && (date_reg.y[1:0] == 2'b00) && ({date_reg.ty, date_reg.y} != 8'h00)) || // xx04, xx08, xx24 ...
        ((date_reg.ty[0] == 1'b1) && (date_reg.y[1:0] == 2'b10));			// xx12, xx16, xx32 ...

    //
    // Control of counters:
    // Asserted high when correspoding RRTC_TIME/DATE fields reach
    // boundary values and previous counters are cleared
    //
    Bool rst_time_tos = (time_reg.tos == 4'd9) || (btos_lo == 1);
    Bool rst_time_s = (time_reg.s == 4'd9) && rst_time_tos;
    Bool rst_time_ts = (time_reg.ts == 3'd5) && rst_time_s;
    Bool rst_time_m = (time_reg.m == 4'd9) && rst_time_ts;
    Bool rst_time_tm = (time_reg.tm == 3'd5) && rst_time_m;
    Bool rst_time_h = (time_reg.h == 4'd9) && rst_time_tm || (time_reg.th == 2'd2) && (time_reg.h == 4'd3) && rst_time_tm;
    Bool rst_time_th = (time_reg.th == 2'd2) && rst_time_h;
    Bool rst_time_dow = (time_reg.dow == 3'd7) && rst_time_th;
    Bool one_date_d =
            ({'0, date_reg.tm, date_reg.m} == 8'h01 && date_reg.td == 2'd3 && date_reg.d == 4'd1 ||
            {'0, date_reg.tm, date_reg.m} == 8'h02 && date_reg.td == 2'd2 && date_reg.d == 4'd8 && !leapyear ||
            {'0, date_reg.tm, date_reg.m} == 8'h02 && date_reg.td == 2'd2 && date_reg.d == 4'd9 && leapyear ||
            {'0, date_reg.tm, date_reg.m} == 8'h03 && date_reg.td == 2'd3 && date_reg.d == 4'd1 ||
            {'0, date_reg.tm, date_reg.m} == 8'h04 && date_reg.td == 2'd3 && date_reg.d == 4'd0 ||
            {'0, date_reg.tm, date_reg.m} == 8'h05 && date_reg.td == 2'd3 && date_reg.d == 4'd1 ||
            {'0, date_reg.tm, date_reg.m} == 8'h06 && date_reg.td == 2'd3 && date_reg.d == 4'd0 ||
            {'0, date_reg.tm, date_reg.m} == 8'h07 && date_reg.td == 2'd3 && date_reg.d == 4'd1 ||
            {'0, date_reg.tm, date_reg.m} == 8'h08 && date_reg.td == 2'd3 && date_reg.d == 4'd1 ||
            {'0, date_reg.tm, date_reg.m} == 8'h09 && date_reg.td == 2'd3 && date_reg.d == 4'd0 ||
            {'0, date_reg.tm, date_reg.m} == 8'h10 && date_reg.td == 2'd3 && date_reg.d == 4'd1 ||
            {'0, date_reg.tm, date_reg.m} == 8'h11 && date_reg.td == 2'd3 && date_reg.d == 4'd0 ||
            {'0, date_reg.tm, date_reg.m} == 8'h12 && date_reg.td == 2'd3 && date_reg.d == 4'd1 ) && rst_time_th;
    Bool rst_date_d = date_reg.d == 4'd9 && rst_time_th;
    Bool rst_date_td = ({'0, date_reg.tm, date_reg.m} == 8'h02 && (date_reg.td[1] == 1) || date_reg.td == 2'h3) && (rst_date_d || one_date_d);
    Bool one_date_m = (date_reg.tm == 1'b1) && (date_reg.m == 4'd2) && rst_date_td;
    Bool rst_date_m = ! (date_reg.tm == 1'b1) && (date_reg.m == 4'd9) && rst_date_td;
    Bool rst_date_tm = (date_reg.tm == 1'b1) && (rst_date_m || one_date_m);
    Bool rst_date_y = (date_reg.y == 4'd9) && rst_date_tm;
    Bool rst_date_ty = (date_reg.ty == 4'd9)&& rst_date_y;
    Bool rst_date_c = (date_reg.c == 4'd9) && rst_date_ty;
    Bool rst_date_tc = (date_reg.tc == 4'd9) && rst_date_c;

    //
    // Control for counter increment
    //
    Bool inc_time_tos = (en_lo == 1) && !(btos_lo == 1);
    Bool inc_time_s = rst_time_tos || ((btos_lo == 1) && (en_lo == 1));
    Bool inc_time_ts = rst_time_s;
    Bool inc_time_m = rst_time_ts;
    Bool inc_time_tm = rst_time_m;
    Bool inc_time_h = rst_time_tm;
    Bool inc_time_th = rst_time_h;
    Bool inc_time_dow = rst_time_th;
    Bool inc_date_d = rst_time_th;
    Bool inc_date_td = rst_date_d;
    Bool inc_date_m = rst_date_td;
    Bool inc_date_tm = rst_date_m;
    Bool inc_date_y = rst_date_tm;
    Bool inc_date_ty = rst_date_y;
    Bool inc_date_c = rst_date_ty;
    Bool inc_date_tc = rst_date_c;

    //
    // Syncing other regs
    //
    Reg#(Ctrl) ctrl_reg_lo_read <- mkSyncRegFromCC(default_ctrl, lo_clk); //READ: lo_clk, WRITE: default_clk
    Reg#(Dalrm) dalrm_reg_lo_read <- mkSyncRegFromCC(default_dalrm, lo_clk); //READ: lo_clk, WRITE: default_clk
    Reg#(Talrm) talrm_reg_lo_read <- mkSyncRegFromCC(default_talrm, lo_clk); //READ: lo_clk, WRITE: default_clk
    rule sync_ctrl_alarm_regs; //default_clk
        ctrl_reg_lo_read <= ctrl_reg;
        dalrm_reg_lo_read <= dalrm_reg;
        talrm_reg_lo_read <= talrm_reg;
    endrule
    //
    // Asserted high when correspoding RRTC_TIME/DATE fields match
    // RRTC_T/DALRM fields
    //
    Bool match_tos = (time_reg.tos == talrm_reg_lo_read.tos);
    Bool match_secs = (time_reg.s == talrm_reg_lo_read.s) && 
                (time_reg.ts == talrm_reg_lo_read.ts);
    Bool match_mins = (time_reg.m == talrm_reg_lo_read.m) &&
                (time_reg.tm == talrm_reg_lo_read.tm);
    Bool match_hrs = (time_reg.h == talrm_reg_lo_read.h) &&
                (time_reg.th == talrm_reg_lo_read.th);
    Bool match_dow = (time_reg.dow == talrm_reg_lo_read.dow);
    Bool match_days = (date_reg.d == dalrm_reg_lo_read.d) &&
                (date_reg.td == dalrm_reg_lo_read.td);
    Bool match_months = (date_reg.m == dalrm_reg_lo_read.m) &&
                (date_reg.tm == dalrm_reg_lo_read.tm);
    Bool match_yrs = (date_reg.y == dalrm_reg_lo_read.y) &&
                (date_reg.ty == dalrm_reg_lo_read.ty);
    Bool match_cents = (date_reg.c == dalrm_reg_lo_read.c) &&
                (date_reg.tc == dalrm_reg_lo_read.tc);

    //
    // Generate an alarm when all enabled match conditions are asserted high
    //
    Bool alarm = (match_tos || !talrm_reg_lo_read.ctos) &&
		(match_secs || !talrm_reg_lo_read.cs) &&
		(match_mins || !talrm_reg_lo_read.cm) &&
		(match_hrs || !talrm_reg_lo_read.ch) &&
		(match_dow || !talrm_reg_lo_read.cdow) &&
		(match_days || !dalrm_reg_lo_read.cd) &&
		(match_months || !dalrm_reg_lo_read.cm) &&
		(match_yrs || !dalrm_reg_lo_read.cy) &&
		(match_cents || !dalrm_reg_lo_read.cc) &&
		(talrm_reg_lo_read.ctos || 
		 talrm_reg_lo_read.cs || 
		 talrm_reg_lo_read.cm || 
		 talrm_reg_lo_read.ch || 
		 talrm_reg_lo_read.cdow || 
		 dalrm_reg_lo_read.cd || 
		 dalrm_reg_lo_read.cm || 
		 dalrm_reg_lo_read.cy || 
		 dalrm_reg_lo_read.cc);

    Reg#(Bit#(1)) reg_sync_interrupt <- mkSyncRegToCC(0, lo_clk, lo_rst); //READ: default_clk, WRITE: lo_clk
    rule sync_interrupt;
        reg_sync_interrupt <= pack(alarm&&ctrl_reg_lo_read.alrm&&ctrl_reg_lo_read.inte);
    endrule
    rule count_time;
        $display("\t\t\t\tmodTIME %d%d : %d%d : %d%d.%d", time_reg.th, time_reg.h, time_reg.tm, time_reg.m, time_reg.ts, time_reg.s, time_reg.tos);
        /*$display("rst: tos%b, s%b, m%b ", rst_time_tos, rst_time_s, rst_time_ts);
        $display("inc: tos%b, s%b, m%b ", inc_time_tos, inc_time_s, inc_time_ts);*/
        Time temp_time = time_reg;
        if (rst_time_tos)
		    temp_time.tos = 4'b0;
	    else if (inc_time_tos)
		    temp_time.tos = time_reg.tos + 1;

        if (rst_time_s)
            temp_time.s = 4'b0;
        else if (inc_time_s)
            temp_time.s = time_reg.s + 1;

        if (rst_time_ts)
		    temp_time.ts = 3'b0;
	    else if (inc_time_ts)
    		temp_time.ts = time_reg.ts + 1;

        if (rst_time_m)
            temp_time.m = 4'b0;
        else if (inc_time_m)
            temp_time.m = time_reg.m + 1;

        if (rst_time_tm)
            temp_time.tm = 3'b0;
        else if (inc_time_tm)
            temp_time.tm = time_reg.tm + 1;

        if (rst_time_h)
            temp_time.h = 4'b0;
        else if (inc_time_h)
            temp_time.h = time_reg.h + 1;

         if (rst_time_th)
            temp_time.th = 2'b0;
        else if (inc_time_th)
            temp_time.th = time_reg.th + 1;

        if (rst_time_dow)
            temp_time.dow = 3'h1;
        else if (inc_time_dow)
            temp_time.dow = time_reg.dow + 1;

        temp_time.dummy = ?;

        time_reg <= temp_time;
    endrule
    rule count_date;
        $display("\t\t\t\tmodDATE %d%d%d%d/%d%d/%d%d", date_reg.tc, date_reg.c, date_reg.ty, date_reg.y, date_reg.tm, date_reg.m, date_reg.td, date_reg.d);
        Date temp_date = date_reg;
        if (one_date_d)
            temp_date.d = 4'h1;
        else if (rst_date_d)
            temp_date.d = 4'h0;
        else if (inc_date_d)
            temp_date.d = date_reg.d + 1;

        if (rst_date_td)
            temp_date.td = 2'b0;
        else if (inc_date_td)
            temp_date.td = date_reg.td + 1;

        if (one_date_m)
            temp_date.m = 4'h1;
        else if (rst_date_m)
            temp_date.m = 4'h0;
        else if (inc_date_m)
            temp_date.m = date_reg.m + 1;

        if (rst_date_tm)
            temp_date.tm = 1'b0;
        else if (inc_date_tm)
            temp_date.tm = date_reg.tm + 1;

        if (rst_date_y)
            temp_date.y = 4'b0;
        else if (inc_date_y)
            temp_date.y = date_reg.y + 1;

        if (rst_date_ty)
            temp_date.ty = 4'b0;
        else if (inc_date_ty)
            temp_date.ty = date_reg.ty + 1;

        if (rst_date_c)
            temp_date.c = 4'b0;
        else if (inc_date_c)
            temp_date.c = date_reg.c + 1;

        if (rst_date_tc)
            temp_date.tc = 4'b0;
        else if (inc_date_tc)
            temp_date.tc = date_reg.tc + 1;

        temp_date.dummy = ?;

        date_reg <= temp_date;
    endrule

    /*SYNCHRONISING READ REQS*/
/*    Reg#(Bit#(32)) sync_time_reg_read <- mkSyncRegToCC(pack(default_time), lo_clk, lo_rst); //READ: default_clk, WRITE: lo_clk
    Reg#(Bit#(32)) sync_date_reg_read <- mkSyncRegToCC(pack(default_date), lo_clk, lo_rst); //READ: default_clk, WRITE: lo_clk
    rule sync_date_time_regs_to_current_clock; //lo_clk
	      sync_time_reg_read <= pack(time_reg);
        //   sync_date_reg_read <= pack(date_reg);
	endrule

    rule sync_date_regs_to_current_clock; //lo_clk
	    //   sync_time_reg_read <= pack(time_reg);
          sync_date_reg_read <= pack(date_reg);
	endrule
*/
    SyncFIFOIfc#(Time) sync_time_read_fifo <- mkSyncFIFOToCC(3, lo_clk, lo_rst);
    SyncFIFOIfc#(Date) sync_date_read_fifo <- mkSyncFIFOToCC(3, lo_clk, lo_rst);

    rule sync_time_with_FIFO;
        sync_time_read_fifo.enq(time_reg);
        sync_date_read_fifo.enq(date_reg);
    endrule

    Reg#(Time) sync_time <- mkRegA(default_time);
    Reg#(Date) sync_date <- mkRegA(default_date);
    rule clear_FIFO;
        sync_time <= sync_time_read_fifo.first;
        sync_time_read_fifo.deq;
        sync_date <= sync_date_read_fifo.first;
        sync_date_read_fifo.deq;
    endrule

    
    /***
    SYNCHRONISING WRITE REQS
    3 regs each for time & date:
        1 - get_time_write_data - gets the value from outside through
            write_req method. Its value being Valid indicates that this
            value should be written into time_reg. This value is by deafult
            Valid whenever a new value has been written through write_req.
        2 - validate_date_write - stores whether the value stored in
            get_time_write_data is "fresh", ie, valid. If it is, it is
            made invalid in the next clock cycle.
        3 - time_reg - the register that actually does counting
    ***/
    Reg#(Maybe#(Bit#(32))) get_time_write_data <- mkSyncRegFromCC(tagged Invalid, lo_clk); //READ: lo_clk, WRITE: default_clk
    Reg#(Maybe#(Bit#(32))) get_date_write_data <- mkSyncRegFromCC(tagged Invalid, lo_clk); //READ: lo_clk, WRITE: default_clk

    Reg#(Bool) validate_time_write <- mkSyncRegToCC(False, lo_clk, lo_rst); //READ: default_clk, WRITE: lo_clk
    Reg#(Bool) validate_date_write <- mkSyncRegToCC(False, lo_clk, lo_rst); //READ: default_clk, WRITE: lo_clk

    rule write_time_date_data; //lo_clk
        validate_time_write <= isValid(get_time_write_data);
        validate_date_write <= isValid(get_date_write_data);
        if(isValid(get_time_write_data)) begin
            $display("Valid Time Write request");
            time_reg                         <=   unpack(fromMaybe(pack(time_reg), get_time_write_data));
            $display("Writing into time_reg");
        end
        if(isValid(get_date_write_data)) begin
            $display("Valid Date Write request");
            date_reg                         <=   unpack(fromMaybe(pack(date_reg), get_date_write_data));
            $display("Writing into date_reg");
        end
    endrule

    rule disable_after_writing; //default_clk
        if(validate_time_write) begin
            get_time_write_data <= tagged Invalid;
            $display("Time Write request invalidated");
        end
        if(validate_date_write) begin
            get_date_write_data <= tagged Invalid;
            $display("Date Write request invalidated");
        end
    endrule

    function Bool isTimeValid (Time t);
        return (t.tos>=0)&&(t.tos<=9)&&(t.s>=0)&&(t.s<=9)&&(t.ts>=0)&&(t.ts<=5)&&(t.m>=0)&&(t.m<=5)&&
        (((t.h>=0)&&(t.h<=9)&&(t.th!=2))||((t.h>=0)&&(t.h<=3)&&(t.th==2)))&&(t.th>=0)&&(t.th<=2)&&
        (t.dow>=1)&&(t.dow<=7);
    endfunction

    function Bool ly (Date dreg);
        return  (({dreg.ty, dreg.y} == 8'h00) &&				// xx00
                (( dreg.tc[0] == 1'b1 && !(dreg.c[3]==1'b1) && (dreg.c[1:0] == 2'b10)) ||	// 12xx, 16xx, 32xx ...
                (!(dreg.tc[0] == 1'b1) && (dreg.c[1:0] == 2'b00) &&		// 00xx, 04xx, 08xx, 20xx, 24xx ...
                ((dreg.c[3:2] == 2'b01) || !(dreg.c[2] == 1'b1))))) ||
                (!(dreg.ty[0] == 1'b1) && (dreg.y[1:0] == 2'b00) && ({dreg.ty, dreg.y} != 8'h00)) || // xx04, xx08, xx24 ...
                ((dreg.ty[0] == 1'b1) && (dreg.y[1:0] == 2'b10));			// xx12, xx16, xx32 ...
    endfunction

    function Bool isDateValid (Date d);
        if(d.d>=0 && d.d<=9 && (d.y>=0 && d.y<=9 && d.ty>=0 && d.ty<=9) && ((d.tc==1&&d.c==9)||(d.tc==2&&d.c==0))) begin
            if(d.td==3) begin
                if((d.tm==0&&(d.m==1||d.m==3||d.m==5||d.m==7||d.m==8))||(d.tm==1&&(d.m==0||d.m==2)))begin
                    return d.d>=0 && d.d <=1;
                end else if((d.tm==0&&(d.m==4||d.m==6||d.m==9))||(d.tm==1&&d.m==1))begin
                    return d.d==0;
                end else return False;
            end else if(d.td==2) begin
                if(d.tm==0 && d.m==2) begin
                    if(!ly(d)) return d.d!=9;
                    else if(ly(d)) return True;
                    else return False;
                end else return ((d.tm==0&&(d.m>=1&&d.m<=9)) || (d.tm==1&&(d.m==1||d.m==2)));
            end else if(d.td==1||d.td==0) return ((d.tm==0&&(d.m>=1&&d.m<=9)) || (d.tm==1&&(d.m==1||d.m==2)));
            else return False;
        end else return False;
    endfunction

    Reg#(Bool) isValidTimeWrite <- mkRegA(False);
    Reg#(Bool) isValidDateWrite <- mkRegA(False);

    method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data); //default_clk
       // $display                       ("Requested to write %h into %h ", data, addr);
        Bool success = True;
        case (addr[6:0])
            `time_addr: begin
                            if(isTimeValid(unpack(data))) begin
                                $display("Writing from ext into get_time_write_data  %h ", data);
                                get_time_write_data <= tagged Valid unpack(data);
                                isValidTimeWrite <= True;
                            end else begin
                                $display("Invalid time  %h ", data);
                                get_time_write_data <= tagged Invalid;
                                isValidTimeWrite <= False;
                            end
                               
                        end
            `date_addr: begin
                            if(isDateValid(unpack(data))) begin
                                $display("Writing from ext into get_date_write_data  %h ", data);
                                get_date_write_data <= tagged Valid unpack(data);
                                isValidDateWrite <= True;
                            end else begin 
                                $display("Invalid date  %h ", data);
                                get_date_write_data <= tagged Invalid;
                                isValidDateWrite <= False;
                            end
                        end
            `talrm_addr: begin $display("Writing from ext into talrm_reg %h ", data); talrm_reg <= unpack(data); end
            `dalrm_addr: begin $display("Writing from ext into dalrm_reg %h ", data); dalrm_reg <= unpack(data); end
            `ctrl_addr:  begin /*$display("Writing from ext into ctrl_reg  %h ", data);*/ ctrl_reg  <= unpack(data); end
            default:     begin $display("Address not found"); success = False; end
        endcase
        return success;
    endmethod
    method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_req (Bit#(addr_width) addr); //default_clk
        Bit#(data_width) temp = 0;
        Bool success=True;
        case (addr[6:0])
            `time_addr: temp = pack(sync_time);
            `date_addr: temp = pack(sync_date);
            `talrm_addr: temp = pack(talrm_reg);
            `dalrm_addr: temp = pack(dalrm_reg);
            `ctrl_addr: temp = pack(ctrl_reg);
            `alrm_addr: temp = pack({0, reg_sync_interrupt});
            default: success = False;
        endcase
        return tuple2(success,temp);
    endmethod

    method Bit#(1) interrupt;
        return reg_sync_interrupt;
    endmethod

    method Bit#(1) write_ctrl_en;
        return pack(ctrl_reg.en);
    endmethod

    method Bit#(1) loclock;
        return osc;
    endmethod
endmodule:mkrtc

interface Ifc_rtc_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width);
	interface AXI4_Lite_Slave_IFC#(addr_width, data_width,user_width) slave;
    method Bit#(1) interrupt;
    method Bit#(1) write_ctrl_en;
    method Bit#(1) loclock;
endinterface

//(*synthesize*)
//module mkrtcaxi4lite#(Clock ext_clk, Reset ext_rst) (Ifc_rtc_axi4lite#(`paddr, 32,0));
  //let ifc();
  //mkrtc_axi4lite _temp(ifc);
  //return ifc;
//endmodule

module mkrtc_axi4lite#(Clock ext_clk, Reset ext_rst)(Ifc_rtc_axi4lite#(addr_width,data_width,user_width))
	provisos(
			Add#(0, data_width, 32)
		);

	User_ifc#(addr_width,data_width) rtc <- mkrtc(ext_clk, ext_rst);
	AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();

	rule write_request;
		let addreq <- pop_o (s_xactor.o_wr_addr);
		let datareq  <- pop_o (s_xactor.o_wr_data);
		let succ <- rtc.write_req(addreq.awaddr, datareq.wdata);
		let ls = AXI4_Lite_Wr_Resp {bresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: addreq.awuser};
		s_xactor.i_wr_resp.enq (ls);			
	endrule

	rule read_request;
		let req <- pop_o(s_xactor.o_rd_addr);
		let {succ,data}<- rtc.read_req(req.araddr);
		let resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
								rdata:data, ruser: ?};
		s_xactor.i_rd_data.enq(resp);
	endrule
	interface slave = s_xactor.axi_side;
    method Bit#(1) interrupt;
        return rtc.interrupt;
    endmethod
    method Bit#(1) write_ctrl_en;
        return rtc.write_ctrl_en;
    endmethod
    method loclock;
        return rtc.loclock;
    endmethod
endmodule:mkrtc_axi4lite


interface Ifc_rtc_axi4#(numeric type addr_width,numeric type id_width, numeric type data_width,numeric type user_width);
	interface AXI4_Slave_IFC#(addr_width,id_width,data_width,user_width) slave;
endinterface

module mkrtc_axi4#(Clock ext_clk, Reset ext_rst)(Ifc_rtc_axi4#(addr_width, id_width, data_width,user_width))
	provisos(
			Add#(0, data_width, 32)
		);

	User_ifc#(addr_width,data_width) rtc <- mkrtc(ext_clk, ext_rst);
	AXI4_Slave_Xactor_IFC#(addr_width,id_width,data_width,user_width) s_xactor <- mkAXI4_Slave_Xactor();
	
	Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
	Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);
	Reg#(AXI4_Rd_Addr#(addr_width,id_width,user_width)) rg_rdpacket <- mkRegA(?);
	Reg#(AXI4_Wr_Addr#(addr_width,id_width,user_width)) rg_wrpacket <- mkRegA(?);	

	rule write_request(rg_wrburst_count==0);
		let addreq <- pop_o (s_xactor.o_wr_addr);
		let datareq  <- pop_o (s_xactor.o_wr_data);

		rg_wrpacket<=addreq;	

		let succ <- rtc.write_req(addreq.awaddr, datareq.wdata);
		if(addreq.awlen!=0)
			rg_wrburst_count <=1;
		let ls = AXI4_Wr_Resp {bresp:succ?AXI4_OKAY:AXI4_SLVERR, buser: addreq.awuser, bid: addreq.awid};
		s_xactor.i_wr_resp.enq (ls);			
	endrule

	rule write_burst_request(rg_wrburst_count!=0);
		let addreq=rg_wrpacket;
		let datareq <-pop_o(s_xactor.o_wr_data);
		Bool succ=False;
		let resp = AXI4_Wr_Resp {bresp: succ?AXI4_SLVERR:AXI4_OKAY, buser: addreq.awuser, bid:addreq.awid};
		if(datareq.wlast)begin
			s_xactor.i_wr_resp.enq(resp);//enqueuing the write response
			rg_wrburst_count<=0;
		end
	endrule

	rule read_request(rg_rdburst_count==0);
		let req <- pop_o(s_xactor.o_rd_addr);

		rg_rdpacket<=req;

		let {succ,data}<- rtc.read_req(req.araddr);

		if(req.arlen!=0)
			rg_rdburst_count<=1;

		let resp= AXI4_Rd_Data {rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:req.arid,rlast:(req.arlen==0),rdata:data, ruser: ?};
		s_xactor.i_rd_data.enq(resp);
	endrule

	rule read_burst_request(rg_rdburst_count!=0);
		let rd_req=rg_rdpacket;
		let {succ,data}<-rtc.read_req(rd_req.araddr);
		succ=False;
		if(rg_rdburst_count==rd_req.arlen)
			rg_rdburst_count<=0;
		else
			rg_rdburst_count<=rg_rdburst_count+1;
		let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid,rlast:(rd_req.arlen==0),rdata:data, ruser: ?};
		s_xactor.i_rd_data.enq(resp);

	endrule
	interface slave = s_xactor.axi_side;
endmodule:mkrtc_axi4
endpackage:rtc
