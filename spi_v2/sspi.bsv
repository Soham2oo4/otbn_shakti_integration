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
*/
package sspi;

import ConcatReg ::*;
import Semi_FIFOF        :: *;
import FIFOLevel::*;
import AXI4_Lite_Types   :: *;
import AXI4_Lite_Fabric  :: *;
import AXI4_Types::*;
import AXI4_Fabric::*;
import FIFOF::*;
import Clocks::*;
import SpecialFIFOs::*;
import ConfigReg ::*;
import FIFO::*;
import Vector::*;
import BUtils::*;
import MIMO_MODIFY::*;
import DefaultValue::*;
`ifdef IQC
	import iqc::*;
`endif
`include "sspi.defines"
`include "Logger.bsv"

export Ifc_sspi_axi4 		(..);
export Ifc_sspi_axi4lite 	(..);
export mksspi_axi4;
export mksspi_axi4lite;
export Ifc_sspi_io 			(..);

typedef enum{
			 IDLE,
			 START_TRANSMIT,
			 DATA_TRANSMIT,
			 TRANSMIT_DONE
		} Transmit_state deriving(Bits, Eq, FShow);
			 		
typedef enum{
			 IDLE,
			 START_RECEIVE,
			 DATA_RECEIVE,
			 RECEIVE_DONE
		} Receive_state deriving(Bits, Eq, FShow);

(*always_ready, always_enabled*)
interface Ifc_sspi_io;
		//mosi input output
		method bit mosi_outen;
 		method bit mosi_out;
		method Action mosi_in(bit val);
		//sclk input output
		method bit sclk_outen;
 		method bit sclk_out;
		method Action sclk_in(bit val);
		//miso input output
		method bit miso_outen;
 		method Action miso_in(bit val);
		method bit miso_out;
		//ncs input output
		method bit ncs_outen;
 		method bit ncs_out;
		method Action ncs_in(bit val);
endinterface

interface Ifc_sspi#(numeric type addr_width, numeric type data_width);
	method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
	method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_req(Bit#(addr_width) addr, Bit#(2) size);
	interface Ifc_sspi_io io;
	method Bit#(1) sb_sspi_interrupt;
endinterface

module mksspi(Ifc_sspi#(addr_width, data_width))
			provisos(Add#(a__, 32, data_width),
					 Add#(b__,  4, data_width),
					 Mul#(32, c__, data_width),
					 Mul#( 8, d__, data_width),
					 Mul#(16, e__, data_width),
					 Mul#( 4, f__, data_width),
					 Add#(16, g__, data_width)
					);
	Reg#(bit) rg_mosi_output_enable <- mkRegA(1);
	Reg#(bit) rg_miso_output_enable <- mkRegA(0);
	Reg#(bit) rg_ncs_output_enable  <- mkRegA(1);
	Reg#(bit) rg_sclk_output_enable <- mkRegA(1);
	Reg#(Bit#(8)) rg_total_bit_rx	<- mkRegA(0);
	Reg#(Bit#(8)) rg_total_bit_tx	<- mkRegA(0);
	Reg#(Bit#(2)) rg_comm_mode		<- mkRegA(0);
	Reg#(bit) rg_lsbfirst			<- mkRegA(0);
	Reg#(bit) rg_spi_en				<- mkRegA(0);
	Reg#(bit) rg_master_mode		<- mkRegA(1);
	Reg#(Bit#(32)) rg_comm_ctrl = concatReg12(readOnlyReg(6'd0),rg_mosi_output_enable,rg_miso_output_enable,rg_ncs_output_enable,rg_sclk_output_enable,
												rg_total_bit_rx,rg_total_bit_tx,rg_comm_mode,readOnlyReg(1'd0),rg_lsbfirst,rg_spi_en,rg_master_mode);

	Reg#(Bit#(8)) rg_t_cs_delay <- mkRegA(0);
	Reg#(Bit#(8)) rg_cs_t_delay <- mkRegA(0);
	Reg#(Bit#(8)) rg_prescaller <- mkRegA(0);
	Reg#(bit) rg_clk_phase		<- mkRegA(0);
	Reg#(bit) rg_clk_polarity 	<- mkRegA(0);
	Reg#(Bit#(32)) rg_clk_ctrl = concatReg6(readOnlyReg(6'd0),rg_t_cs_delay,rg_cs_t_delay,rg_prescaller,rg_clk_phase,rg_clk_polarity);

	Reg#(Bit#(32)) rg_tx_data <- mkRegA(0);
	Reg#(Bit#(32)) rg_rx_data <- mkRegA(0);

	Reg#(bit) rg_rx_over_run_err_intr_en <- mkRegA(0);
	Reg#(bit) rg_rx_fifo_full_intr_en <- mkRegA(0);
	Reg#(bit) rg_rx_fifo_half_intr_en <- mkRegA(0);
	Reg#(bit) rg_rx_fifo_quad_intr_en <- mkRegA(0);
	Reg#(bit) rg_rx_fifo_empty_intr_en <- mkRegA(0);
	Reg#(bit) rg_tx_fifo_full_intr_en <- mkRegA(0);
	Reg#(bit) rg_tx_fifo_half_intr_en <- mkRegA(0);
	Reg#(bit) rg_tx_fifo_quad_intr_en <- mkRegA(0);
	Reg#(bit) rg_tx_fifo_empty_intr_en <- mkRegA(0);
	Reg#(Bit#(16)) rg_intr_en = concatReg10(readOnlyReg(7'd0),rg_rx_over_run_err_intr_en,rg_rx_fifo_full_intr_en,rg_rx_fifo_half_intr_en,rg_rx_fifo_quad_intr_en,rg_rx_fifo_empty_intr_en,
											rg_tx_fifo_full_intr_en,rg_tx_fifo_half_intr_en,rg_tx_fifo_quad_intr_en,rg_tx_fifo_empty_intr_en);
		
	Reg#(bit) rg_over_run <- mkRegA(0);
	Reg#(Bit#(2)) rg_rx_fifo_th <- mkRegA(0);
	Reg#(Bit#(2)) rg_tx_fifo_th <- mkRegA(0);
	Reg#(bit) rg_rxne <- mkRegA(1);
	Reg#(bit) rg_txe <- mkRegA(0);
	Reg#(bit) rg_busy <- mkRegA(0);
	Reg#(Bit#(8)) rg_comm_status = concatReg6(rg_over_run,rg_rx_fifo_th,rg_tx_fifo_th,rg_rxne,rg_txe,rg_busy);

	Reg#(bit) rg_rx_fifo_full <- mkRegA(0);
	Reg#(bit) rg_rx_fifo_half <- mkRegA(0);
	Reg#(bit) rg_rx_fifo_quad <- mkRegA(0);
	Reg#(bit) rg_rx_fifo_empty <- mkRegA(0);
	Reg#(bit) rg_tx_fifo_full <- mkRegA(0);
	Reg#(bit) rg_tx_fifo_half <- mkRegA(0);
	Reg#(bit) rg_tx_fifo_quad <- mkRegA(0);
	Reg#(bit) rg_tx_fifo_empty <- mkRegA(0);	
	Reg#(Bit#(8)) rg_fifo_status = concatReg8(rg_rx_fifo_full,rg_rx_fifo_half,rg_rx_fifo_quad,rg_rx_fifo_empty,
												rg_tx_fifo_full,rg_tx_fifo_half,rg_tx_fifo_quad,rg_tx_fifo_empty);

	Reg#(Bit#(1)) rg_ncs <- mkRegA(1);
	Reg#(Bit#(1)) rg_sclk <- mkRegA(0);
	Reg#(Bit#(1)) rg_prev_sclk <- mkRegA(0);
	Reg#(Bit#(8)) rg_clk_counter <- mkRegA(0);
	Wire#(Bit#(1)) wr_write_en <- mkDWire(0);
	Wire#(Bit#(1)) wr_read_en <- mkDWire(0);
	Reg#(bit) rg_txdata_to_txfifo <- mkRegA(0);
	Reg#(bit) rg_rxfifo_to_rxdata <- mkRegA(0);
	Reg#(Bit#(3)) rg_txfifo_enq_size <- mkRegA(0);
	Reg#(Bit#(8)) rg_curr_tx_byte <- mkRegA(0);
	Reg#(Bit#(8)) rg_curr_rx_byte <- mkRegA(0);
	Reg#(Bit#(8)) rg_count_tx_data_bits <- mkRegA(0);
	Reg#(Bit#(8)) rg_count_rx_data_bits <- mkRegA(0);
	Reg#(Bit#(3)) rg_count_tx_data <- mkRegA(0);
	Reg#(Bit#(3)) rg_count_rx_data <- mkRegA(0);

	Reg#(Bit#(1)) rg_transmit_data <- mkRegA(0);	

	Reg#(Transmit_state) rg_transmit_state <- mkRegA(IDLE);
	Reg#(Receive_state) rg_receive_state <- mkRegA(IDLE);

	MIMOConfiguration cfg = defaultValue;
	cfg.unguarded=True;
	MIMO#(4,4,32,Bit#(8)) tx_fifo <- mkMIMO(cfg);
	MIMO#(4,4,32,Bit#(8)) rx_fifo <- mkMIMO(cfg);

	Wire#(bit) wr_spi_master_in <- mkWire();
	Wire#(bit) wr_spi_slave_in <- mkWire();
	Wire#(bit) wr_sclk_slave_in <- mkWire();
	Wire#(bit) wr_ncs_slave_in  <- mkWire();

	Wire#(bit) wr_rx_over_run_intr <- mkDWire(0);
	Wire#(bit) wr_rx_fifo_full_intr <- mkDWire(0);
	Wire#(bit) wr_rx_fifo_half_intr <- mkDWire(0);
	Wire#(bit) wr_rx_fifo_quad_intr <- mkDWire(0);
	Wire#(bit) wr_rx_fifo_empty_intr <- mkDWire(0);
	Wire#(bit) wr_tx_fifo_full_intr <- mkDWire(0);
	Wire#(bit) wr_tx_fifo_half_intr <- mkDWire(0);
	Wire#(bit) wr_tx_fifo_quad_intr <- mkDWire(0);
	Wire#(bit) wr_tx_fifo_empty_intr <- mkDWire(0);

	Wire#(bit) wr_sclk_qual <- mkWire();
	Wire#(bit) wr_ncs_qual  <- mkWire();
	Wire#(bit) wr_spi_in_qual <- mkWire();

	Reg#(Bit#(8)) rg_set_up_count <- mkRegA(0);
	Reg#(Bit#(8)) rg_hold_count <- mkRegA(0);

`ifdef IQC	
	Reg#(Bit#(4)) rg_qual_cycles	<- mkRegA(0);
	Ifc_iqc#(1) sspi_mi_qual <- mkiqc(rg_qual_cycles);
	Ifc_iqc#(1) sspi_si_qual <- mkiqc(rg_qual_cycles);
	Ifc_iqc#(1) sspi_ncs_qual <- mkiqc(rg_qual_cycles);
	Ifc_iqc#(1) sspi_sclk_qual <- mkiqc(rg_qual_cycles);
`endif

	(*conflict_free = "rl_transfer_data_from_txreg_to_txfifo,rl_abort_condition"*)
	(*conflict_free = "rl_transmit_idle_to_data_transfer,rl_chip_select_control_master_mode"*)
	(*conflict_free = "rl_transmit_idle_to_data_transfer,rl_chip_select_control_slave_mode"*)
	(*conflict_free = "rl_receive_idle_to_data_receive,rl_chip_select_control_master_mode"*)
	(*conflict_free = "rl_receive_idle_to_data_receive,rl_chip_select_control_slave_mode"*)
	(*conflict_free = "rl_transmit_state,rl_chip_select_control_master_mode"*)
	(*conflict_free = "rl_transmit_state,rl_chip_select_control_slave_mode"*)
	(*conflict_free = "rl_receive_state,rl_chip_select_control_master_mode"*)
	(*conflict_free = "rl_receive_state,rl_chip_select_control_slave_mode"*)
	(*conflict_free = "rl_abort_condition,rl_chip_select_control_master_mode"*)
	(*conflict_free = "rl_abort_condition,rl_chip_select_control_slave_mode"*)
	(*conflict_free = "rl_transmit_idle_to_data_transfer,rl_receive_idle_to_data_receive"*)
	(*conflict_free = "rl_transmit_idle_to_data_transfer,rl_abort_condition"*)	
	(*conflict_free = "rl_transmit_state,rl_receive_idle_to_data_receive"*)
	(*conflict_free = "rl_receive_state,rl_transmit_idle_to_data_transfer"*)
	(*conflict_free = "rl_transmit_state,rl_receive_state"*)
	(*conflict_free = "rl_receive_idle_to_data_receive,rl_abort_condition"*)
	(*conflict_free = "rl_receive_state,rl_abort_condition"*)
	(*conflict_free = "rl_transmit_state,rl_abort_condition"*)
	(*conflict_free = "rl_transfer_data_from_rxfifo_to_rxreg,rl_chip_select_control_master_mode"*)
	(*conflict_free = "rl_transfer_data_from_rxfifo_to_rxreg,rl_chip_select_control_slave_mode"*)
	(*conflict_free = "rl_transfer_data_from_rxfifo_to_rxreg,rl_abort_condition"*)
	(*conflict_free = "rl_transfer_data_from_rxfifo_to_rxreg,rl_receive_state"*)
	(*conflict_free = "rl_transfer_data_from_rxfifo_to_rxreg,rl_rx_fifo_threshold_updates"*)
	(*conflict_free = "rl_chip_select_control_master_mode,rl_rx_fifo_threshold_updates"*)
	(*conflict_free = "rl_chip_select_control_slave_mode,rl_rx_fifo_threshold_updates"*)
	(*conflict_free = "rl_chip_select_control_master_mode,rl_tx_fifo_threshold_updates"*)
	(*conflict_free = "rl_chip_select_control_slave_mode,rl_tx_fifo_threshold_updates"*)
	(*conflict_free = "rl_chip_select_control_master_mode,rl_spi_clock_generator_master_mode"*)
	(*conflict_free = "rl_chip_select_control_master_mode,rl_spi_clock_generator_slave_mode"*)
	(*conflict_free = "rl_chip_select_control_slave_mode,rl_spi_clock_generator_master_mode"*)
	(*conflict_free = "rl_chip_select_control_slave_mode,rl_spi_clock_generator_slave_mode"*)
	(*conflict_free = "rl_mi_qualification,rl_receive_state"*)
	(*conflict_free = "rl_si_qualification,rl_receive_state"*)
	(*conflict_free = "rl_si_qualification,rl_mi_qualification"*)

	rule rl_mi_qualification(rg_receive_state == DATA_RECEIVE && rg_miso_output_enable == 0);
	`ifdef IQC
		let temp <- sspi_mi_qual.qualify(wr_spi_master_in);
		wr_spi_in_qual <= temp;
	`else
		wr_spi_in_qual <= wr_spi_master_in;
	`endif
	endrule

	rule rl_si_qualification(rg_receive_state == DATA_RECEIVE && rg_mosi_output_enable == 0);
	`ifdef IQC
		let temp <- sspi_si_qual.qualify(wr_spi_slave_in);	
		wr_spi_in_qual <= temp;
	`else
		wr_spi_in_qual <= wr_spi_slave_in;
	`endif
	endrule

	rule rl_chip_select_control_master_mode(rg_ncs_output_enable == 1);
		if(rg_spi_en == 1)
		begin
			rg_ncs <= 0;
			if(rg_ncs != 0) begin
				rg_clk_counter <= rg_prescaller-1;
				rg_busy <= 1;
		   end
		end
		else begin
			if(rg_clk_counter == rg_prescaller-1) begin
				rg_ncs <= 1;
				rg_busy <= 0;
			end
		end
	endrule
	
	rule rl_spi_clock_generator_master_mode(rg_sclk_output_enable == 1);
		Bit#(1) temp_clk_pol = rg_clk_polarity;
		Bit#(1) temp_clk_phase = rg_clk_phase;
		Bit#(8) temp_prescaller = rg_prescaller;
		if(rg_ncs == 1)
			rg_sclk <= temp_clk_pol;
		else begin
			Bit#(8) temp_half_count = zeroExtend(temp_prescaller[7:1]);
			if(rg_clk_counter == temp_prescaller) begin
				rg_sclk <= temp_clk_phase == 0 ? temp_clk_pol : ~temp_clk_pol;
				wr_write_en <= 1;
			end
			else if(rg_clk_counter == temp_half_count) begin
				rg_sclk <= ~rg_sclk;
				wr_read_en <= 1;
			end
			if(rg_clk_counter == temp_prescaller)
				rg_clk_counter <= 0;
			else
				rg_clk_counter <= rg_clk_counter + 1;
		end
	endrule

	rule rl_chip_select_control_slave_mode(rg_ncs_output_enable == 0);
		if(rg_spi_en == 1) begin
			rg_ncs <= wr_ncs_qual;
			if(rg_ncs == 1) begin
			  rg_busy <= 1;
			  //if(rg_clk_phase == 0)
				//  wr_write_en <= 1;
			end
		end
		else begin
			rg_ncs <= 1;
			rg_busy <= 0;
		end
	endrule

	rule rl_spi_clock_generator_slave_mode(rg_sclk_output_enable == 0 && rg_spi_en == 1);
		let temp = wr_sclk_qual;
		rg_sclk <= temp;
		rg_prev_sclk <= rg_sclk;
		if((temp ^ rg_sclk) == 1) begin
			if((rg_clk_polarity ^ rg_clk_phase) == 1) begin
				if(rg_prev_sclk == 0) 	//Rising edge
					wr_write_en <= 1;
				else					//Falling edge
					wr_read_en <= 1;
			end
			else begin
				if(rg_prev_sclk == 1)	//Falling edge
					wr_write_en <= 1;
				else					//Rising edge
					wr_read_en <= 1;
			end
		end
	endrule

	rule rl_tx_fifo_threshold_updates;
		let temp_fifo_count = tx_fifo.count;
		if(temp_fifo_count == 32) begin
			rg_tx_fifo_full <= 1;
			wr_tx_fifo_full_intr <= 1;
		end
		else if(temp_fifo_count == 16) begin
			rg_tx_fifo_half <= 1;
			wr_tx_fifo_half_intr <= 1;
		end
		else if(temp_fifo_count == 8) begin
			rg_tx_fifo_quad <= 1;
			wr_tx_fifo_quad_intr <= 1;
		end
		else if(temp_fifo_count == 0) begin
			rg_tx_fifo_empty <= 1;
			wr_tx_fifo_empty_intr <= 1;
		end
		else begin
			rg_tx_fifo_empty <= 0;
			rg_tx_fifo_quad <= 0;
			rg_tx_fifo_half <= 0;
			rg_tx_fifo_full <= 0;
		end
		if(temp_fifo_count >= 24)
				rg_tx_fifo_th <= 3;
		else if(temp_fifo_count >= 16)
				rg_tx_fifo_th <= 2;
		else if(temp_fifo_count >= 8)
				rg_tx_fifo_th <= 1;
		else
				rg_tx_fifo_th <= 0;
	endrule

	rule rl_rx_fifo_threshold_updates;
		let temp_fifo_count = rx_fifo.count;
		if(temp_fifo_count == 32) begin
			rg_rx_fifo_full <= 1;
			wr_rx_fifo_full_intr <= 1;
		end
		else if(temp_fifo_count == 16) begin
			rg_rx_fifo_half <= 1;
			wr_rx_fifo_half_intr <= 1;
		end
		else if(temp_fifo_count == 8) begin
			rg_rx_fifo_quad <= 1;
			wr_rx_fifo_quad_intr <= 1;
		end
		else if(temp_fifo_count == 0) begin
			rg_rx_fifo_empty <= 1;
			wr_rx_fifo_empty_intr <= 1;
		end
		else begin
			rg_rx_fifo_empty <= 0;
			rg_rx_fifo_quad <= 0;
			rg_rx_fifo_half <= 0;
			rg_rx_fifo_full <= 0;
		end
		if(temp_fifo_count >= 24)
				rg_rx_fifo_th <= 3;
		else if(temp_fifo_count >= 16)
				rg_rx_fifo_th <= 2;
		else if(temp_fifo_count >= 8)
				rg_rx_fifo_th <= 1;
		else
				rg_rx_fifo_th <= 0;
	endrule	


	rule rl_transfer_data_from_txreg_to_txfifo(rg_txdata_to_txfifo == 1);
		Bit#(32) temp_tx = rg_tx_data;
		Vector#(4,Bit#(8)) temp = newVector();
		if(rg_txfifo_enq_size == 4) begin
			if(rg_lsbfirst == 1) begin
				temp[0] = temp_tx[7:0];
				temp[1] = temp_tx[15:8];
				temp[2] = temp_tx[23:16];
				temp[3] = temp_tx[31:24];
			end
			else begin
				temp[0] = temp_tx[31:24];
				temp[1] = temp_tx[23:16];
				temp[2] = temp_tx[15:8];
				temp[3] = temp_tx[7:0];
			end
			tx_fifo.enq(4,temp);
		end
		else if(rg_txfifo_enq_size == 2) begin
			if(rg_lsbfirst == 1) begin
				temp[0] = temp_tx[7:0];
				temp[1] = temp_tx[15:8];
			end
			else begin
				temp[0] = temp_tx[15:8];
				temp[1] = temp_tx[7:0];
			end
			tx_fifo.enq(2,temp);
		end
		else begin
			temp[0] = temp_tx[7:0];
			tx_fifo.enq(1,temp);
		end
		`logLevel(sspi, 0, $format("SSPI : Transfer data from tx reg to tx fifo : ready = %b and data = %x : FIFO count : %d \n",tx_fifo.enqReady,temp,tx_fifo.enqReadyN(4)))	
		rg_txdata_to_txfifo <= 0; 
	endrule

	rule rl_transfer_data_from_rxfifo_to_rxreg(rg_rxfifo_to_rxdata == 1);
		if(rx_fifo.deqReadyN(1)) begin
			Bit#(32) temp;
			if(rg_lsbfirst == 1)
				temp = {rx_fifo.first[3],rx_fifo.first[2],rx_fifo.first[1],rx_fifo.first[0]};
			else
				temp = {rx_fifo.first[0],rx_fifo.first[1],rx_fifo.first[2],rx_fifo.first[3]};
			rg_rx_data <= temp;
		end
		rg_over_run <= 0;
		rg_rxfifo_to_rxdata <= 0;
	endrule

	//rule rl_dump_required_values;
	//	`logLevel(sspi, 0, $format("SSPI : sclk = %b; clk_count = %d; tx_fifo_deq = %b; tx_state = %b; tx_bits = %d; rx_fifo_count : %d; spi_en = %b; ncs = %b tx_data_reg = %x rx_data_reg = %x \n",rg_sclk,rg_clk_counter,tx_fifo.deqReadyN(4),rg_transmit_state,rg_total_bit_tx,rx_fifo.count,rg_spi_en,rg_ncs,rg_tx_data,rg_rx_data)) 
	//endrule

	rule rl_set_up_time(((rg_transmit_state == IDLE && rg_total_bit_tx != 0) || (rg_receive_state == IDLE && rg_total_bit_rx != 0)) && rg_ncs == 0 && rg_spi_en == 1 && wr_write_en == 1 && rg_set_up_count < rg_cs_t_delay);
		rg_set_up_count <= rg_set_up_count + 1;
	endrule

	rule rl_transmit_idle_to_data_transfer(tx_fifo.deqReadyN(1) && rg_transmit_state == IDLE && rg_total_bit_tx != 0 && rg_ncs == 0 && rg_spi_en == 1 && rg_set_up_count == rg_cs_t_delay);
		rg_transmit_state <= DATA_TRANSMIT;
		rg_curr_tx_byte <= tx_fifo.first[0];
		tx_fifo.deq(1);
		rg_count_tx_data_bits <= 0;
		rg_count_tx_data <= 0;
		rg_txe <= 1;
		rg_set_up_count <= 0;
		`logLevel(sspi, 0, $format("SSPI : tx_idle to transmit : %b tx bits : %d \n",tx_fifo.deqReadyN(4),rg_total_bit_tx)) 
	endrule
	
	//===================Transmit state==================//
	rule rl_transmit_state(rg_transmit_state == DATA_TRANSMIT && rg_ncs == 0 && rg_spi_en == 1 && wr_write_en == 1);
		if(rg_lsbfirst == 1)
			rg_transmit_data <= rg_curr_tx_byte[0];
		else
			rg_transmit_data <= rg_curr_tx_byte[7];
		if(rg_count_tx_data_bits == rg_total_bit_tx - 1) begin
			rg_transmit_state <= TRANSMIT_DONE;
			rg_txe <= 0;
		end
		else begin
			if(rg_count_tx_data == 7) begin
				if(tx_fifo.deqReadyN(1)) begin
					rg_curr_tx_byte <= tx_fifo.first[0];
					tx_fifo.deq(1);
			//		rg_count_tx_data <= 0;
				end
				else begin
					rg_transmit_state <= TRANSMIT_DONE;
					rg_txe <= 0;
				end
			end
			else begin
				if(rg_lsbfirst == 1)
					rg_curr_tx_byte <= rg_curr_tx_byte >> 1;
				else
					rg_curr_tx_byte <= rg_curr_tx_byte << 1;
			end
			rg_count_tx_data <= rg_count_tx_data + 1;
			rg_count_tx_data_bits <= rg_count_tx_data_bits + 1;
		end
		`logLevel(sspi, 0, $format("SSPI : transmit state : %b bit count %d and data count %d and data transmitted %d \n",rg_transmit_state,rg_count_tx_data_bits,rg_count_tx_data,rg_transmit_data)) 
	endrule

	rule rl_receive_idle_to_data_receive(wr_write_en == 1 && rx_fifo.enqReadyN(1) && rg_receive_state == IDLE && rg_total_bit_rx != 0 && (rg_comm_mode != 2'b10 || rg_transmit_state == TRANSMIT_DONE) && rg_ncs == 0 && rg_spi_en == 1 && (rg_comm_mode != 2'b01 || rg_set_up_count == rg_cs_t_delay)) ;
		rg_receive_state <= DATA_RECEIVE;
		rg_count_rx_data_bits <= 0;
		rg_count_rx_data <= 0;
		rg_rxne <= 0;
		rg_set_up_count  <= 0;
		`logLevel(sspi, 0, $format("SSPI : rx_idle to receive : %b rx bits : %d \n",tx_fifo.enqReadyN(4),rg_total_bit_rx)) 
	endrule	

	//===================Receive state==================//
	rule rl_receive_state(rg_receive_state == DATA_RECEIVE && wr_read_en == 1 && rg_ncs == 0 && rg_spi_en == 1);
		Bit#(8) temp_rx_data = 0;
		if(rg_lsbfirst == 1)
			temp_rx_data = {wr_spi_in_qual, rg_curr_rx_byte[6:0]};
		else
			temp_rx_data = {rg_curr_rx_byte[7:1],wr_spi_in_qual};
		rg_count_rx_data_bits <= rg_count_rx_data_bits + 1;
		if(rg_count_rx_data_bits == rg_total_bit_rx - 1) begin
				if(rx_fifo.enqReadyN(1)) begin
					Vector#(4,Bit#(8)) temp = newVector();
					temp[0] = temp_rx_data[7:0];
					temp[1] = 0;
					temp[2] = 0;
					temp[3] = 0;
					rx_fifo.enq(1,temp);	
					rg_over_run <= 0;
				end
				else begin
					rg_over_run <= 1;
					wr_rx_over_run_intr <= 1;
				end
				rg_receive_state <= RECEIVE_DONE;
				rg_rxne <= 1;
				rg_rxfifo_to_rxdata <= 1;
		end
		else begin
			if(rg_count_rx_data == 7) begin
				if(rx_fifo.enqReadyN(1)) begin
					Vector#(4,Bit#(8)) temp = newVector();
					temp[0] = temp_rx_data[7:0];
					temp[1] = 0;
					temp[2] = 0;
					temp[3] = 0;
					rx_fifo.enq(1,temp);
					rg_count_rx_data <= 0;
					rg_over_run <= 0;
				end
				else begin
					rg_receive_state <= RECEIVE_DONE;
					rg_rxne <= 1;
					rg_over_run <= 1;
					wr_rx_over_run_intr <= 1;
				end
			end
			else begin
				rg_count_rx_data <= rg_count_rx_data + 1;
				if(rg_lsbfirst == 1)
					rg_curr_rx_byte <= temp_rx_data >> 1;
				else
					rg_curr_rx_byte <= temp_rx_data << 1;	
				rg_over_run <= 0;
			end
		end
		`logLevel(sspi, 0, $format("SSPI : receive state : %b rx bits : %d  rx data : %d total_rx_data %d current data %b \n",rg_receive_state,rg_count_rx_data_bits,rg_count_rx_data,rg_total_bit_rx,temp_rx_data)) 
	endrule	

	rule rl_abort_condition(rg_spi_en == 1 && (((rg_comm_mode == 2'b10 || rg_comm_mode == 2'b11) && rg_transmit_state == TRANSMIT_DONE && rg_receive_state == RECEIVE_DONE) || (rg_comm_mode == 2'b00 && rg_transmit_state == TRANSMIT_DONE) || (rg_comm_mode == 2'b01 && rg_receive_state == RECEIVE_DONE)));
		if(rg_hold_count == rg_t_cs_delay) begin
			rg_transmit_state <= IDLE;
			rg_receive_state <= IDLE;
			rg_spi_en <= 0;
			rg_hold_count <= 0;
		end
		else if(wr_write_en == 1)
			rg_hold_count <= rg_hold_count + 1;
	endrule

	method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
		Bool succ = True;
		if(addr[7:0] == `Communication_control && size == 2)
			rg_comm_ctrl <= truncate(data);
		else if(addr[7:0] == `Clock_control && size == 2)
			rg_clk_ctrl <= truncate(data);
		else if(addr[7:0] == `TX_data_rg) begin
			rg_tx_data <= truncate(data);
			Bit#(3) temp_size = size == 2 ? 4 : zeroExtend(size + 1);
			rg_txfifo_enq_size <= temp_size;
			if(tx_fifo.enqReadyN(unpack(temp_size)))
				rg_txdata_to_txfifo <= 1;
			else
				succ = False;
		end
		else if(addr[7:0] == `Interrupt_enable && size == 1)
			rg_intr_en <= truncate(data);
		`ifdef IQC
		else if(addr[7:0] == `Input_qualification && size == 0)
			rg_qual_cycles <= truncate(data);
		`endif
		else
			succ = False;
		`logLevel( sspi, 0, $format("SSPI : write req : addr = %h, data = %h, succ = %h \n",addr,data,succ))   
		return succ;		
	endmethod

	method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr, Bit#(2) size);
		Bool succ = True;
		Bit#(data_width) data = 0;
		if(addr[7:0] == `Communication_control && size == 2)
			data = duplicate(rg_comm_ctrl);
		else if(addr[7:0] == `Clock_control && size == 2)
			data = duplicate(rg_clk_ctrl);
		else if(addr[7:0] == `RX_data_rg) begin
			Bit#(3) temp_size = size == 2 ? 4 : zeroExtend(size + 1);
			`logLevel( sspi, 0, $format(" Read req RX temp_size = %d ; rx_fifo count = %d; data = %x;\n",temp_size,rx_fifo.count,data))
			if(rx_fifo.count >= unpack(zeroExtend(temp_size))) begin
				rx_fifo.deq(unpack(temp_size));
				if(rg_lsbfirst == 0) begin
					if(size == 0)
						data = duplicate(rg_rx_data[31:24]);
					else if(size == 1)
						data = duplicate(rg_rx_data[31:16]);
					else
						data = duplicate(rg_rx_data);
				end
				else
					data = duplicate(rg_rx_data);
				rg_rxfifo_to_rxdata <= 1;
			end
			else
				succ = False;
			$display($time," Read req RX temp_size = %d ; rx_fifo count = %d; data = %x;\n",temp_size,rx_fifo.count,data);
		end
		else if(addr[7:0] == `FIFO_status && size == 0)
			data = duplicate(rg_fifo_status);
		else if(addr[7:0] == `Communication_status && size == 0)
			data = duplicate(rg_comm_status);
		else if(addr[7:0] == `Interrupt_enable && size == 1)
			data = duplicate(rg_intr_en);
		`ifdef IQC
		else if(addr[7:0] == `Input_qualification && size == 0)
			data = zeroExtend(rg_qual_cycles);
		`endif
		else
			succ = False;
		`logLevel( sspi, 0, $format("Sspi : read req : addr = %h, data = %h, succ = %h \n",addr,data,succ))   
		return tuple2(succ,data);		
	endmethod
    
 	interface io = interface Ifc_sspi_io;
		//mosi input output
		method bit mosi_outen;
			return rg_mosi_output_enable;
		endmethod
 		method bit mosi_out;
 			return rg_transmit_data;
 		endmethod
		method Action mosi_in(bit val);
			wr_spi_slave_in <= val;
		endmethod
		//sclk input output
		method bit sclk_outen;
			return rg_sclk_output_enable;
		endmethod
 		method bit sclk_out;
 			return rg_sclk;
 		endmethod
		method Action sclk_in(bit val);
		`ifdef IQC
			let temp <- sspi_sclk_qual.qualify(val);
			wr_sclk_qual <= temp;
		`else
			wr_sclk_qual <= val;
		`endif
		endmethod
		//miso input output
		method bit miso_outen;
			return rg_miso_output_enable;
		endmethod
 		method Action miso_in(bit val);
 			wr_spi_master_in <= val;
 		endmethod
		method bit miso_out;
			return rg_transmit_data;
		endmethod
		//ncs input output
		method bit ncs_outen;
			return rg_ncs_output_enable;
		endmethod
 		method bit ncs_out;
 			return rg_ncs;
 		endmethod
		method Action ncs_in(bit val);
		if(rg_ncs_output_enable == 0) begin
		`ifdef IQC
			let temp <- sspi_ncs_qual.qualify(val);
			wr_ncs_qual <= temp;
		`else
			wr_ncs_qual <= val;
		`endif
		end
		endmethod
	endinterface;
	method sb_sspi_interrupt = ((wr_rx_over_run_intr & rg_rx_over_run_err_intr_en) | (wr_rx_fifo_full_intr & rg_rx_fifo_full_intr_en) | (wr_rx_fifo_half_intr & rg_rx_fifo_half_intr_en) | (wr_rx_fifo_quad_intr & rg_rx_fifo_quad_intr_en) | 
								(wr_rx_fifo_empty_intr & rg_rx_fifo_empty_intr_en) | (wr_tx_fifo_full_intr & rg_tx_fifo_full_intr_en) | (wr_tx_fifo_half_intr & rg_tx_fifo_half_intr_en) | (wr_tx_fifo_quad_intr & rg_tx_fifo_quad_intr_en) |
								(wr_tx_fifo_empty_intr & rg_tx_fifo_empty_intr_en));
  
endmodule : mksspi

	//axi4lite
	interface Ifc_sspi_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width);
		interface Ifc_sspi_io io;
		method Bit#(1) sb_sspi_interrupt;
		interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave;
	endinterface

	module mksspi_axi4lite(Ifc_sspi_axi4lite#(addr_width,data_width,user_width))
			provisos(Add#(a__, 32, data_width),
					 Add#(b__,  4, data_width),
					 Mul#(32, c__, data_width),
					 Mul#( 8, d__, data_width),
					 Mul#(16, e__, data_width),
					 Mul#( 4, f__, data_width),
					 Add#(16, g__, data_width)
					);
		Ifc_sspi#(addr_width,data_width) sspi <- mksspi;
		AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();

		rule read_request;
	  		let req <- pop_o (s_xactor.o_rd_addr);
      		let {succ,data} <- sspi.read_req(req.araddr,unpack(truncate(req.arsize)));
	  		let resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
                                    rdata:data, ruser: ?};
	  		s_xactor.i_rd_data.enq(resp);
     	endrule

     	rule write_request;
       		let addreq <- pop_o(s_xactor.o_wr_addr);
       		let datareq <- pop_o(s_xactor.o_wr_data);
       		let succ <- sspi.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
       		let resp = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: ?};
       		s_xactor.i_wr_resp.enq(resp);
     	endrule
		interface io = sspi.io;
		method sb_sspi_interrupt = sspi.sb_sspi_interrupt;
     	interface slave = s_xactor.axi_side;
	endmodule

	//axi4
	interface Ifc_sspi_axi4#(numeric type addr_width, numeric type data_width, numeric type user_width);
		interface Ifc_sspi_io io;
		method Bit#(1) sb_sspi_interrupt;
		interface AXI4_Slave_IFC#(addr_width,data_width,user_width)	slave;
	endinterface
	module mksspi_axi4(Ifc_sspi_axi4#(addr_width,data_width,user_width))
			provisos(Add#(a__, 32, data_width),
					 Add#(b__,  4, data_width),
					 Mul#(32, c__, data_width),
					 Mul#( 8, d__, data_width),
					 Mul#(16, e__, data_width),
					 Mul#( 4, f__, data_width),
					 Add#(16, g__, data_width)
					);
		Ifc_sspi#(addr_width,data_width) sspi <- mksspi;
		AXI4_Slave_Xactor_IFC#(addr_width,data_width,user_width) s_xactor<-mkAXI4_Slave_Xactor();
		Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);

		Reg#(AXI4_Rd_Addr#(addr_width,user_width)) rg_rdpacket <- mkRegA(?);
 		Reg#(AXI4_Wr_Addr#(addr_width,user_width)) rg_wrpacket <- mkRegA(?);


		rule read_request(rg_rdburst_count==0);
			let req<-pop_o(s_xactor.o_rd_addr);
			let {succ,data}<-sspi.read_req(req.araddr,unpack(truncate(req.arsize)));
			rg_rdpacket<=req;	

			if(req.arlen!=0)
				rg_rdburst_count<=1;
			let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:req.arid,rlast:(req.arlen==0),rdata:data, ruser: ?};
			s_xactor.i_rd_data.enq(resp);
		endrule
		
		rule read_burst(rg_rdburst_count!=0);
			let rd_req=rg_rdpacket;
			let {succ,data}<-sspi.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
			succ=False;
			if(rg_rdburst_count==rd_req.arlen)
				rg_rdburst_count<=0;
			else
				rg_rdburst_count<=rg_rdburst_count+1;
			let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid,rlast:(rd_req.arlen==0),rdata:data, ruser: ?};
			s_xactor.i_rd_data.enq(resp);
		endrule

		rule write_request(rg_wrburst_count==0);
			let addreq <- pop_o(s_xactor.o_wr_addr);
	        let datareq <- pop_o(s_xactor.o_wr_data);
	        rg_wrpacket<=addreq;
	        let succ <- sspi.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
	        if(addreq.awlen!=0)
	        	rg_wrburst_count<=1;
	        
	        let resp = AXI4_Wr_Resp {bresp: succ?AXI4_SLVERR:AXI4_OKAY, buser: ?, bid:addreq.awid};
	        if(datareq.wlast)
	        	s_xactor.i_wr_resp.enq(resp);
		endrule
		
		rule write_burst(rg_wrburst_count!=0);
			let addreq=rg_wrpacket;
	        let datareq <- pop_o(s_xactor.o_wr_data);
	 		Bool succ=False;
			let resp = AXI4_Wr_Resp {bresp: succ?AXI4_SLVERR:AXI4_OKAY, buser: ?, bid:addreq.awid};
			if(datareq.wlast)begin
	      		s_xactor.i_wr_resp.enq(resp);//enqueuing the write response
	      		rg_wrburst_count<=0;
	      	end
		endrule
		
		interface io = sspi.io;
		method sb_sspi_interrupt = sspi.sb_sspi_interrupt;
		interface slave = s_xactor.axi_side;
	endmodule
/*	
(*synthesize*)
module mkdummy_axi4lite(Ifc_sspi_axi4lite#(64, 32, 0));
	let ifc();
  	mksspi_axi4lite _temp(ifc);
  return ifc;
endmodule

(*synthesize*)
module mkdummy_axi4(Ifc_sspi_axi4#(64, 32, 0));
	let ifc();
  	mksspi_axi4 _temp(ifc);
  return ifc;
endmodule
*/
endpackage
