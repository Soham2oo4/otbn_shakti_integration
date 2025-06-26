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
package spi;

import ConcatReg ::*;
import Semi_FIFOF        :: *;
import FIFOLevel::*;
import AXI4_Lite_Types   :: *;
import AXI4_Lite_Fabric  :: *;
import FIFOF::*;
import Clocks::*;
import SpecialFIFOs::*;
import ConfigReg ::*;
import FIFO::*;
import BUtils::*;
import FIFOLevel :: * ;
`include "spi.defs"
`include "Logger.bsv"

typedef struct{
	Bit#(addr_width) addr;
	Bit#(3) burst_size;
	Bit#(data_width) wdata;
} Write_req#(numeric type addr_width, numeric type data_width) deriving (Bits, Eq);

typedef struct{
	Bit#(addr_width) addr;
	Bit#(3)  burst_size;
} Read_req#(numeric type addr_width) deriving (Bits, Eq);

typedef enum{
			 IDLE,
			 START_TRANSMIT
		} Transmit_state deriving(Bits, Eq, FShow);
			 		
typedef enum{
			 IDLE,
			 START_RECEIVE,
			 RECEIVE_DONE
		} Receive_state deriving(Bits, Eq, FShow);


(*always_ready, always_enabled*)
interface Ifc_spi_io;
	method bit mosi;
	method bit sclk;
  	method bit nss;
	method Action miso(bit dat);
endinterface

interface Ifc_spi_app#( numeric type addr_width, 
                        numeric type data_width);
	method Bit#(data_width) data_to_app;
	method Action read_request  (Read_req#(addr_width) rd_req);
	method Action write_request (Write_req#(addr_width, data_width) wr_req);
endinterface

interface Ifc_spi#( numeric type addr_width, 
                    numeric type data_width);
	interface Ifc_spi_io io;
	interface Ifc_spi_app#(addr_width, data_width) app_interface;
	method Bit#(1) sb_spi_intrpt;
endinterface

interface Ifc_spi_controller#(numeric type addr_width,
                              numeric type data_width,
                              numeric type user_width);
	interface Ifc_spi_io io;
  	interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave;
	method Bit#(1) sb_spi_intrpt; 
endinterface
  
(* preempts = "rl_transfer_start, rl_dr_to_fifo" *)
(* preempts = "rl_transfer_data, rl_dr_to_fifo" *)
(* preempts = "rl_transfer_data, rl_transfer_finish" *)
(* preempts = "rl_receive_finish, rl_receive_start" *)
(* preempts = "rl_write_to_cfg,rl_rx_fifo_threshold_updates"*)
(* preempts = "rl_write_to_cfg,rl_tx_fifo_threshold_updates"*)
(* conflict_free = "rl_transfer_data, rl_receive_finish"*)
(* conflict_free = "rl_dr_to_fifo, rl_fifo_to_dr_if_alarm"*)
(* conflict_free = "rl_dr_to_fifo, rl_transfer_remaining_data"*)
(* conflict_free = "rl_transfer_data,rl_receive_start"*)
(*conflict_free = "rl_receive_start,rl_fifo_to_dr_if_alarm"*)
(*conflict_free = "rl_fifo_to_dr_if_alarm,rl_transfer_remaining_data"*)
(*conflict_free = "rl_chip_select_control,rl_receive_finish"*)
(*conflict_free = "rl_write_to_cfg,rl_transfer_remaining_data"*)
(*conflict_free = "rl_write_to_cfg,rl_fifo_to_dr_if_alarm"*)
(*conflict_free = "rl_write_to_cfg,rl_transfer_start"*)
(*conflict_free = "rl_write_to_cfg,rl_receive_start"*)
(*conflict_free = "rl_write_to_cfg,rl_transfer_finish"*)
(*conflict_free = "rl_write_to_cfg,rl_dr_to_fifo"*)
(*conflict_free = "rl_write_to_cfg,rl_receive_finish"*)
(*conflict_free = "rl_write_to_cfg,rl_start_spi"*)
(*conflict_free = "rl_transfer_start,rl_receive_start"*)
(*conflict_free = "rl_transfer_start,rl_chip_select_control"*)
(*conflict_free = "rl_transfer_data,rl_transfer_remaining_data"*)
(*conflict_free = "rl_dr_to_fifo,rl_start_spi"*)
(*conflict_free = "rl_chip_select_control,rl_transfer_remaining_data"*)
(*conflict_free = "rl_chip_select_control,rl_fifo_to_dr_if_alarm"*)
(*conflict_free = "rl_chip_select_control,rl_transfer_start"*)
(*conflict_free = "rl_chip_select_control,rl_receive_start"*)
(*conflict_free = "rl_chip_select_control,rl_transfer_finish"*)
(*conflict_free = "rl_chip_select_control,rl_dr_to_fifo"*)
(*conflict_free = "rl_receive_finish,rl_start_spi"*)
(*conflict_free = "rl_receive_finish,rl_transfer_start"*)
(*conflict_free = "rl_transfer_remaining_data,rl_start_spi"*)
(*conflict_free = "rl_transfer_finish,rl_dr_to_fifo"*)

module mkspi(Ifc_spi#(addr_width, data_width))
  provisos(
          Add#(a__, 8, addr_width),
          Add#(b__, 32, data_width),
          Mul#(32, c__, data_width));


    Reg#(Bit#(8)) 	  rg_total_bit_rx   	  <- mkRegA(0);
    Reg#(Bit#(8)) 	  rg_total_bit_tx   	  <- mkRegA(0);
    Reg#(bit)             rg_bidimode   	  <- mkRegA(0);
    Reg#(bit)   	  rg_bidioe   	  <- mkRegA(0);
    Reg#(bit)   	  rg_crcen   	  <- mkRegA(0);
    Reg#(bit)   	  rg_crcnext   	  <- mkRegA(0);
    Reg#(bit)   	  rg_crcl   	  <- mkRegA(0);
    Reg#(bit)   	  rg_rxonly   	  <- mkRegA(0);
    Reg#(bit)   	  rg_ssm   	  <- mkRegA(0);
    Reg#(bit)   	  rg_ssi   	  <- mkRegA(0);
    Reg#(bit)   	  rg_lsbfirst     <- mkRegA(0);
    Reg#(bit)   	  rg_spe   	  <- mkRegA(0);
    Reg#(Bit#(3)) 	  rg_br   	  <- mkRegA(0);
    Reg#(bit)   	  rg_mstr   	  <- mkRegA(0);
    Reg#(bit)   	  rg_cpol   	  <- mkRegA(0);
    Reg#(bit)   	  rg_cpha   	  <- mkRegA(0);
	 
    Reg#(Bit#(32)) rg_spi_cfg_cr1 = concatReg16(rg_total_bit_rx,rg_total_bit_tx,rg_bidimode,rg_bidioe,rg_crcen,rg_crcnext,rg_crcl,rg_rxonly,
    rg_ssm,rg_ssi,rg_lsbfirst,rg_spe,rg_br,rg_mstr,rg_cpol,rg_cpha);

    
    Reg#(bit)       rg_rx_imm_start	<- mkRegA(0);
    Reg#(bit)       rg_rx_start		<- mkRegA(0); //user defined
    Reg#(bit)       rg_frxth      	<- mkRegA(0);
    Reg#(bit)       rg_tx_fifo_full    	<- mkRegA(0);
    Reg#(bit)       rg_tx_fifo_half    	<- mkRegA(0);
    Reg#(bit)       rg_tx_fifo_quad    	<- mkRegA(0);
    Reg#(bit)       rg_tx_fifo_empt    	<- mkRegA(0);
    Reg#(bit)       rg_rx_fifo_full    	<- mkRegA(0);
    Reg#(bit)       rg_rx_fifo_half    	<- mkRegA(0);
    Reg#(bit)       rg_rx_fifo_quad    	<- mkRegA(0);
    Reg#(bit)       rg_rx_fifo_empt    	<- mkRegA(0);
    Reg#(bit)       rg_err_ie      	<- mkRegA(0);
    Reg#(bit)       rg_tx_alarm_ie      <- mkRegA(0);
    Reg#(bit)       rg_rx_alarm_ie      <- mkRegA(0);
    Reg#(bit)       rg_ssoe       	<- mkRegA(0);
    Reg#(bit)       rg_txe_ie      	<- mkRegA(0);
    Reg#(bit)       rg_rxne_ie      	<- mkRegA(0);

    Reg#(Bit#(32)) rg_spi_cfg_cr2 = concatReg18(readOnlyReg(15), rg_rx_imm_start, rg_rx_start, rg_frxth, rg_tx_fifo_full, rg_tx_fifo_half, 
    rg_tx_fifo_quad, rg_tx_fifo_empt, rg_rx_fifo_full, rg_rx_fifo_half, rg_rx_fifo_quad, rg_rx_fifo_empt, rg_err_ie, rg_tx_alarm_ie, 
    rg_rx_alarm_ie, rg_ssoe, rg_txe_ie, rg_rxne_ie);

    Reg#(Bit#(2))      rg_ftlvl   	  <- mkRegA(0);
    Reg#(Bit#(2))      rg_frlvl   	  <- mkRegA(0);
    Reg#(bit)          rg_fre   	  <- mkRegA(0);
    Reg#(bit)          rg_bsy   	  <- mkRegA(0);
    Reg#(bit)          rg_tx_ovr   	  <- mkRegA(0);
    Reg#(bit)          rg_rx_ovr   	  <- mkRegA(0);  
    Reg#(bit)          rg_modf   	  <- mkRegA(0);
    Reg#(bit)          rg_tx_alarm	  <- mkRegA(0);
    Reg#(bit)          rg_rx_alarm   	  <- mkRegA(0);
    Reg#(bit)          rg_txe   	  <- mkRegA(0);
    Reg#(bit)          rg_rxne		  <- mkRegA(0);

    Reg#(Bit#(32)) rg_spi_cfg_sr = concatReg12(readOnlyReg(19),rg_ftlvl,rg_frlvl,rg_fre,rg_bsy,
   				 rg_tx_ovr, rg_rx_ovr, rg_modf, rg_tx_alarm,rg_rx_alarm,rg_txe,rg_rxne);

  Reg#(Bit#(32))		rg_spi_cfg_dr1     <- mkRegA(0);
  Reg#(Bit#(32))		rg_spi_cfg_dr2     <- mkRegA(0);
  Reg#(Bit#(32))		rg_spi_cfg_dr3     <- mkRegA(0);
  Reg#(Bit#(32))		rg_spi_cfg_dr4     <- mkRegA(0);
  Reg#(Bit#(32))		rg_spi_cfg_dr5     <- mkRegA(0);
      
  Reg#(Bit#(160))  rg_concat_reg = concatReg5(rg_spi_cfg_dr1, rg_spi_cfg_dr2, rg_spi_cfg_dr3, rg_spi_cfg_dr4, rg_spi_cfg_dr5); 
  
    // MOSI and MISO signals of the spi
  Wire#(bit)			wr_spi_in_io1		<- mkWire();
  Wire#(bit)			wr_spi_in_io2		<- mkWire();
  Reg#(bit)			wr_spi_out_io1		<- mkRegA(0);//TODO making wr_spi_out_io1 as Reg
  Wire#(bit)			wr_spi_out_io2		<- mkWire();
  Wire#(bit)			wr_spi_en_io1		<- mkWire();
  Wire#(bit)			wr_spi_en_io2		<- mkWire();

  Reg#(Transmit_state)	rg_transmit_state 	<- mkRegA(IDLE);
  Reg#(Receive_state)	rg_receive_state  	<- mkRegA(IDLE);
  
  Reg#(Bit#(8)) 	rg_clk_counter	   	<- mkRegA(0);
  Reg#(bit)		rg_write_en	   	<- mkRegA(0);
  Reg#(bit)		data_alarm_en	   	<- mkRegA(0);
  Reg#(Bit#(8))		rg_alarm	   	<- mkRegA(0);
  Reg#(Bit#(8))		rg_data_tx	   	<- mkRegA(0);
  Reg#(Bit#(8))		rg_data_rx	  	<- mkRegA(0);
  Reg#(Bit#(8))		rg_data_counter	   	<- mkRegA(0);
  Reg#(Bit#(8))		rg_bit_count	   	<- mkRegA(0);
  Reg#(bit)		rg_spi_start	  	<- mkRegA(0);
  Reg#(Bit#(8))		rg_dr_to_tx_counter 	<- mkRegA(0); //TODO
  Reg#(Bit#(8))		rg_rx_to_dr_counter 	<- mkRegA(0); //TODO  
  Reg#(bit)		rg_nss			<- mkRegA(1);
  Reg#(bit)		rg_clk			<- mkRegA(0);
  Reg#(Bit#(8))		pre_scalar		<- mkRegA(1);
  Wire#(bit)		wr_clk_gate_en 		<- mkWire();
  Wire#(Bool) 		wr_transfer_en 		<- mkDWire(False);
  Reg#(bit)          	rg_tx_eof   	  	<- mkRegA(1);
  Reg#(bit)          	rg_rx_eof   	  	<- mkRegA(1);
  Wire#(bit)		wr_tx_fifo_empt		<- mkDWire(0);
  Wire#(bit)		wr_tx_fifo_full		<- mkDWire(0);
  Wire#(bit)		wr_rx_fifo_empt		<- mkDWire(0);
  Wire#(bit)		wr_rx_fifo_full		<- mkDWire(0);

  Wire#(Bit#(addr_width))     wr_write_addr  	<- mkWire();
  Wire#(Bit#(data_width))     wr_write_data  	<- mkWire();
  Wire#(Bit#(addr_width))     wr_rd_addr	 <- mkWire();
  Wire#(Bit#(data_width))     wr_rd_data     	<- mkWire();
  
  //Embedded fifo for receive and transmit
  FIFOCountIfc#(Bit#(8),`TXFIFO_DEPTH)	tx_fifo	  <- mkFIFOCount;
  FIFOCountIfc#(Bit#(8),`RXFIFO_DEPTH)	rx_fifo	  <- mkFIFOCount;
  
  //This function writes to configuration registers
    function Action fn_wr_cfg_reg(Bit#(32) data, Bit#(addr_width) address);
     action
     Bit#(8) addr = truncate(address);
     case(addr) 
     	`CR1 	: rg_spi_cfg_cr1	<= unpack(data);
	`CR2   	: rg_spi_cfg_cr2	<= unpack(data);
	`SR   	: rg_spi_cfg_sr		<= unpack(data);        
	`DR1   	: rg_spi_cfg_dr1	<= data;
	`DR2   	: rg_spi_cfg_dr2	<= data;
	`DR3	: rg_spi_cfg_dr3	<= data;
	`DR4	: rg_spi_cfg_dr4	<= data;
	`DR5	: rg_spi_cfg_dr5	<= data;
	default : noAction;
     endcase
    endaction 
  endfunction
  
  // This function returns the configuration register 
  function Bit#(32) fn_rd_cfg_reg(Bit#(addr_width) address);
    Bit#(8) addr = truncate(address);
    case(addr)
	`CR1     : return pack(rg_spi_cfg_cr1);
	`CR2     : return pack(rg_spi_cfg_cr2);
	`SR      : return pack(rg_spi_cfg_sr);
	`DR1     : return rg_spi_cfg_dr1;
	`DR2     : return rg_spi_cfg_dr2;
	`DR3     : return rg_spi_cfg_dr3;
	`DR4  	 : return rg_spi_cfg_dr4;
	`DR5  	 : return rg_spi_cfg_dr5;
	endcase
  endfunction
  
  rule rl_clock_phase_enable;
      wr_clk_gate_en <= (rg_cpha == 1 && rg_cpol == 1 && rg_clk == 0) ? 1 :
     			  (rg_cpha == 1 && rg_cpol == 0 && rg_clk == 1) ? 1 :
     			  (rg_cpha == 0 && rg_cpol == 1 && rg_clk == 1) ? 1 :
     			  (rg_cpha == 0 && rg_cpol == 0 && rg_clk == 0) ? 1 : 0;
  endrule
 
  // This rule takes care of the bidirectional mode of the controller, full-
  // duplex, simplex and duplex (software programmable)
  
  rule rl_bidimode_bidioe;
      if(rg_bidimode == 0) begin // full duplex mode
     	 wr_spi_en_io1 <= 1;
     	 wr_spi_en_io2 <= 0;
      end
      else if(rg_bidioe == 1) begin // transmit only mode
     	 wr_spi_en_io2 <= 1;   				   // Master mode so mosi pin is used
      end
      else if(rg_bidioe == 0) begin //receive only mode
     	 wr_spi_en_io2 <= 0;   				   // Master mode so mosi pin is used
      end
  endrule //TODO do we need rxonly mode also.. if bidioe is disabled isn't that enough?
 
  //TODO MSTR reg need to be used for control of the circuit
 
 
  rule rl_write_to_cfg;
      fn_wr_cfg_reg(truncate(wr_write_data), wr_write_addr);
      `logLevel( spi, 0, $format(" SPI : Write request wr_addr %x wr_data %x ",wr_write_addr,
                                                                          	wr_write_data))
      $display($stime," SPI : Write request wr_addr %x wr_data %x ",wr_write_addr, wr_write_data);
  endrule
 
  rule rl_read_from_cfg;
      wr_rd_data <= duplicate(fn_rd_cfg_reg(wr_rd_addr));
      `logLevel( spi, 0, $format(" SPI : Read request rd_addr %x ",wr_rd_addr))
      $display($stime," SPI : Read request rd_addr %x",wr_rd_addr);
  endrule
 
  // This rule takes care of the chip select pin control
  rule rl_chip_select_control(rg_ssm == 1);
     	 rg_nss <= rg_ssi;
  endrule
  
  // This rule generates the clock according to software specified baudrate
  rule rl_generate_clk_baud_rate;
      if(rg_nss == 1 ) begin // chip select is active low
     	 rg_clk <= rg_cpol == 0 ? 0 : 1;
      end
  	else begin // f_clk = f_sclk * 2^(rg_br+1)  
     	 if(((pre_scalar << rg_br) - 1) == rg_clk_counter) begin
     		 rg_clk <= ~rg_clk;
     		 rg_clk_counter <= 0;
   		 wr_transfer_en <= True;
     	 end
     	 else
     		 rg_clk_counter <= rg_clk_counter + 1;
      end
  endrule 
  
//****************Upadating FIFO threshold for both fifo *********************************************//

 rule rl_tx_fifo_threshold_updates;
  	if(tx_fifo.count == 0)begin  rg_ftlvl <= 0; wr_tx_fifo_empt <= 1; end
  	else if(tx_fifo.count == `TXFIFO_DEPTH/4) rg_ftlvl <= 1;
  	else if(tx_fifo.count == `TXFIFO_DEPTH/2) rg_ftlvl <= 2;
  	else if(tx_fifo.count == `TXFIFO_DEPTH)begin  rg_ftlvl <= 3; wr_tx_fifo_full <= 1; end
 endrule
 
 rule rl_rx_fifo_threshold_updates;
  	if(rx_fifo.count == 0) begin rg_frlvl <= 0; wr_rx_fifo_empt <= 1; end
 	 else if(rx_fifo.count == `RXFIFO_DEPTH/4) rg_frlvl <= 1;
  	else if(rx_fifo.count == `RXFIFO_DEPTH/2) rg_frlvl <= 2;
  	else if(rx_fifo.count == `RXFIFO_DEPTH) begin rg_frlvl <= 3; wr_rx_fifo_full <= 1; end
 endrule
 
  //*************************start the spi protocol**************************************//
  
 rule rl_start_spi(rg_spe == 1 && rg_transmit_state ==IDLE && rg_spi_start == 0 );
	rg_write_en <= 1;
	rg_tx_eof <= 0;
	rg_spi_start <= 1;
	rg_rxne <= 0;

 endrule

/********This rule takes data from the data register DR and puts it into the fifo ***********/

  rule rl_dr_to_fifo(rg_tx_eof  == 0 && tx_fifo.notFull);
  	if(tx_fifo.count < `TXFIFO_DEPTH) begin //  TX_FIFO_ALARM is 16 

  		Bit#(8) data = 0;
		 if(rg_lsbfirst == 1) begin
			data = rg_concat_reg[7 : 0];
  		 	rg_concat_reg <= rg_concat_reg >> 8;
		end
		else begin
			data = rg_concat_reg [159: 152];
  		 	rg_concat_reg <= rg_concat_reg << 8;
	    	end	
	    	if(rg_dr_to_tx_counter < rg_total_bit_tx) begin
  			tx_fifo.enq(data);
			rg_dr_to_tx_counter <= rg_dr_to_tx_counter + 8 ;
			`logLevel( spi, 0, $format(" SPI : DR to  tx_fifo data %x", data))
  		 	$display($stime," SPI : DR to  tx_fifo data %x rg_data_counter %d", data, tx_fifo.count());
		end
		else if(rg_dr_to_tx_counter == rg_total_bit_tx) begin
			rg_tx_eof <= 1;
  			rg_dr_to_tx_counter <= 0;
  		//	rg_txe <= 0;
  		end
		if(rg_total_bit_tx < 160)  begin 
			if(tx_fifo.count > 0 && rg_transmit_state == IDLE) 
				rg_write_en <= 0;
		end
		else begin
			if(tx_fifo.count > 18 && rg_transmit_state == IDLE) begin 
				rg_write_en <= 0;
				rg_txe <= 1;
			end
		end
		if(tx_fifo.count > `TXFIFO_ALARM) rg_tx_alarm <= 1; //TODO 
		else rg_tx_alarm <= 0;	
  	end
  	else begin 
  		rg_tx_ovr <= 1;
  		$display($stime," SPI : TX Memery Overflow Error");
 	end
  endrule
 
  
//************Transmit Start***********************//

  rule rl_transfer_start(rg_transmit_state == IDLE  && rg_write_en == 0 && rg_spi_start == 1 && rg_rx_start == 0 );
      if(tx_fifo.notEmpty()) begin
     	 rg_transmit_state <= START_TRANSMIT;
     	 rg_data_tx <= tx_fifo.first();
	 if(rg_cpha == 1) begin
	 	tx_fifo.deq();
	 end  
     	 rg_bsy <= 1;
     	 rg_nss <= 0;
   	 rg_data_counter <= 0;
   	 `logLevel( spi, 0, $format(" SPI : Transmit state has started rg_data_tx %x",tx_fifo.first()))
   	 $display($stime," SPI : Transmit state has started rg_data_tx %x",tx_fifo.first());
      end
      else if(wr_clk_gate_en == 0 && wr_transfer_en == True && rg_spe == 1 && rg_rx_imm_start == 0)begin
     	 rg_nss <= 1;
   	 rg_spi_start <= 0;
	 rg_spe <= 0;
	 rg_spi_start <= 0;
     	 `logLevel( spi, 0, $format(" SPI : Transmit state is in idle"))
     	 $display($stime," SPI : Transmit state is in idle");
      end
  endrule
    
 rule rl_transfer_data(rg_transmit_state == START_TRANSMIT && rg_nss == 0 );
  let data_tx = 0; // debug
 	if(rg_cpha == 0 && rg_bit_count == 0 )begin // to transmit first bit according to clock phase
 	  	if(wr_clk_gate_en == 1 || (wr_clk_gate_en == 0 && rg_cpha == 1) && wr_transfer_en) begin
  		let data = 0;		
  		if(rg_lsbfirst == 1) begin
  			data = rg_data_tx[0];
  			wr_spi_out_io1 	<= rg_data_tx[0];
  			rg_data_tx 	<= rg_data_tx >> 1;
  		end
  		else begin
  			data = rg_data_tx[7];
  			wr_spi_out_io1 	<= rg_data_tx[7];
  			rg_data_tx    	<= rg_data_tx << 1;
  		end
		rg_bit_count <= rg_bit_count + 1;
		rg_data_counter <= rg_data_counter + 1;
		tx_fifo.deq();
  	  	`logLevel( spi, 0, $format(" SPI : START_TRANSMIT case0 counter %x data %x", rg_data_counter,data))
  	  	$display($stime," SPI : START_TRANSMIT case0 counter %x data %x rg_bit_count %x", rg_data_counter,data, rg_bit_count);
  		end
  	end
 	else begin
  		if(rg_data_counter < 7  && wr_transfer_en && wr_clk_gate_en == 0 ) begin
  			if(rg_lsbfirst == 1) begin
  				data_tx = rg_data_tx[0];
  				wr_spi_out_io1 <= rg_data_tx[0];
  				rg_data_tx <= rg_data_tx >> 1;
  			end
  			else begin
  				data_tx = rg_data_tx[7];
  				wr_spi_out_io1 <= rg_data_tx[7];
  				rg_data_tx    <= rg_data_tx << 1;
  			end
  			  	rg_data_counter <= rg_data_counter + 1;
				rg_bit_count	<= rg_bit_count + 1;
  	    			`logLevel( spi, 0, $format(" SPI : DATA_TRANSMIT case 1 data %x rg_data_counter %x",data_tx, rg_data_counter))
  	    			$display($stime," SPI : DATA_TRANSMIT case 1 data %x rg_data_counter %x rg_bit_count %d",data_tx,rg_data_counter, rg_bit_count);
  		end

  		else if(rg_data_counter == 7  && wr_transfer_en && wr_clk_gate_en == 0 ) begin
  				if(rg_lsbfirst == 1) begin
  					data_tx = rg_data_tx[0];
  					wr_spi_out_io1 <= rg_data_tx[0];
  				end
  				else begin
  					data_tx = rg_data_tx[7];
  					wr_spi_out_io1 <= rg_data_tx[7];
  				end
			rg_bit_count <= rg_bit_count + 1;
  	      		`logLevel( spi, 0, $format(" SPI : DATA_TRANSMIT cashttps://www.youtube.com/watch?v=UG_7ZRHkeske 2 data %x rg_data_counter %x ",data_tx, rg_data_counter))
  	      		$display($stime," SPI : DATA_TRANSMIT case 2 data %x rg_data_counter %x rg_bit_count %d",data_tx, rg_data_counter, rg_bit_count);
  	      		 if(tx_fifo.notEmpty()) begin
  				$display($stime(), " SPI : tx_fifo data %x", tx_fifo.first);
  				rg_data_tx <= tx_fifo.first;
  				tx_fifo.deq();
				rg_data_counter <= 0;
  			end
  		end
  	end
endrule

 rule rl_transfer_finish(rg_bit_count >= rg_total_bit_tx-8 && wr_transfer_en == True && wr_clk_gate_en == 0 
      && rg_transmit_state == START_TRANSMIT && rg_receive_state == IDLE );
 	let data_tx =0;
 	if(rg_bit_count == rg_total_bit_tx) begin	
  		rg_bsy <= 0;		 		
  		rg_bit_count <= 0;
  		rg_data_counter <= 0;
  		rg_transmit_state <= IDLE;
  		tx_fifo.clear();
  		if(rg_rx_imm_start == 1) begin 
  			rg_receive_state <= START_RECEIVE; 
  			rg_rx_eof <= 0;
  		end
  		else begin 
  			rg_nss <= 1; 	rg_spi_start <= 0;  	rg_spe <= 0;	rg_txe <= 0;
  		end
  	end
  	else begin
  	if(rg_lsbfirst == 1) begin
  		data_tx = rg_data_tx[0];
  		wr_spi_out_io1 <= rg_data_tx[0];
  		rg_data_tx    <= rg_data_tx >> 1;
  	end
  	else begin
  		data_tx = rg_data_tx[7];
  		wr_spi_out_io1 <= rg_data_tx[7];
  		rg_data_tx    <= rg_data_tx << 1;
  	end
  	rg_bit_count <= rg_bit_count + 1;
  	`logLevel( spi, 0, $format(" SPI : DATA rg_data_counter"))
  	$display($stime," SPI : DATA_TRANSMIT case 3 data %x rg_data_counter %x rg_bit_count %d",data_tx, rg_data_counter, rg_bit_count);
  	end
 endrule
 
//********************************Receive Rules *******************************//

 rule rl_receive_start(rg_receive_state == START_RECEIVE && rg_nss == 0 && wr_transfer_en );
 	if(rx_fifo.notFull && wr_clk_gate_en == 1 && rg_bit_count < rg_total_bit_rx) begin
   		Bit#(8) data_rx = 0;
   		if(rg_data_counter < 7) begin
  			if(rg_lsbfirst == 1) begin
  				data_rx = {wr_spi_in_io2, rg_data_rx[6:0]};
  				rg_data_rx <= data_rx >> 1;
  			end
  			else begin
  				data_rx = {rg_data_rx[7:1], wr_spi_in_io2};
  				rg_data_rx <= data_rx << 1;
  			end
  			rg_data_counter <= rg_data_counter + 1;
			rg_bit_count	<= rg_bit_count + 1;
  	    		`logLevel( spi, 0, $format(" SPI : DATA_RECEIVE case1 counter %x data_rx %x", rg_data_counter, data_rx))
  	    		$display($stime," SPI : DATA_RECEIVE case1 counter %x data_rx %b rg_bit_count %d",rg_data_counter, data_rx, rg_bit_count);
  		end
  		else if(rg_data_counter == 7) begin
  			Bit#(8) data = 0;
  			if(rg_lsbfirst == 1)
  				data = {wr_spi_in_io2, rg_data_rx[6 : 0]};				
  			else
  				data = {rg_data_rx[7 : 1], wr_spi_in_io2};
			rg_bit_count <= rg_bit_count + 1;
  			rx_fifo.enq(data);  
  			rg_data_counter <= 0;
  	    `logLevel( spi, 0, $format(" SPI : DATA_RECEIVE case2 counter %x data_rx %x", rg_data_counter, data))
  	    $display($stime," SPI : DATA_RECEIVE case2 counter %x data_rx %b rg_bit_count %d",rg_data_counter, data,rg_bit_count);
  		end
  	end
  	else if(rg_bit_count < rg_total_bit_rx && !rx_fifo.notFull ) begin
  		rg_nss <= 1;
  		rg_rx_ovr <= 1;
  		rg_receive_state <= RECEIVE_DONE;
  		$display($stime," SPI : RX Memery Overflow Error");
  	end
	if(rx_fifo.count > `RXFIFO_ALARM ) rg_rx_alarm <= 1;
	else rg_rx_alarm <= 0;
endrule

 rule rl_receive_finish(rg_bit_count == rg_total_bit_rx && rg_receive_state == START_RECEIVE );
	if(wr_clk_gate_en==0 && wr_transfer_en) begin
		rg_nss <= 1;
  		rg_data_counter <= 0;
  		rg_receive_state <= RECEIVE_DONE;
  		rg_spe <= 0;
  		rg_spi_start <= 0;
  		rg_rx_imm_start <= 0;
  	end
 endrule

//************rule to transfer data from fifo to data register***********///

 rule rl_fifo_to_dr_if_alarm(rg_rx_alarm == 1 );
 	Bit#(160) data = rg_concat_reg;
 		if(rg_rx_to_dr_counter < (`RXFIFO_ALARM+1)*8) begin
 			if(rg_lsbfirst == 1) begin
                		data[159 : 152] = rx_fifo.first();
                	end
        		else begin	
                		data[7:0] = rx_fifo.first;                       
                	end
                	if(rg_rx_to_dr_counter < `RXFIFO_ALARM*8) begin
                		rg_rx_to_dr_counter <= rg_rx_to_dr_counter + 8;
                		rx_fifo.deq();
                		if(rg_lsbfirst == 1) begin
                          		rg_concat_reg <= data >> 8;
                		end
        			else begin
                			rg_concat_reg <= data << 8;                       
                		end
                	end
                	else begin
               			rg_concat_reg <= data;
				rg_rx_alarm <= 0;
			end
               end
               `logLevel( spi, 0, $format(" SPI : rx_fifo to dr reg %x",data))
    		$display($stime," SPI : rx_fifo to dr reg %x",data);
               
 endrule


 rule rl_transfer_remaining_data(rg_rx_eof == 0 && rg_receive_state == RECEIVE_DONE && rx_fifo.notEmpty );
  	Bit#(160) data = rg_concat_reg;
  		if(rg_lsbfirst == 1) begin
                	data[159 : 152] = rx_fifo.first();
                end
        	else begin	
                	data[7:0] = rx_fifo.first();                       
                end
                if(rg_rx_to_dr_counter < rg_total_bit_rx-8) begin
                	rg_rx_to_dr_counter <= rg_rx_to_dr_counter + 8;
                	rx_fifo.deq();
                	if(rg_lsbfirst == 1) begin
                          	rg_concat_reg <= data >> 8;
                	end
        		else begin
                		rg_concat_reg <= data << 8;                       
                	end
               end
               else begin
               		rg_concat_reg <= data;
               		rg_receive_state <= IDLE;
			rg_rx_eof <= 1;
			rg_rxne <= 1;
			rg_rx_to_dr_counter <= 0;
			rg_bit_count <= 0;			
			rx_fifo.clear();
		end
    `logLevel( spi, 0, $format(" SPI : rx_fifo to dr reg %x",data))
    $display($stime," SPI : rx_fifo to dr reg %x",data);
 endrule
	
	
  interface Ifc_spi_app app_interface;
  	method Bit#(data_width) data_to_app;
  		return wr_rd_data; // TODO hook created need to be changed later
  	endmethod
  	method Action read_request(Read_req#(addr_width) rd_req);
  		wr_rd_addr <= rd_req.addr; // TODO hook created and burst size if needed to be added or 
  								  // to removed from the method and struct
  	endmethod		
  	method Action write_request(Write_req#(addr_width, data_width)  wr_req);
  		wr_write_addr <= wr_req.addr; //TODO hook created and if needed in future use burst size
  		wr_write_data <= wr_req.wdata; // or remove from the struct itself
  	endmethod
  endinterface
  
  
  interface Ifc_spi_io io;
  	method bit mosi;
  		return wr_spi_out_io1;
  	endmethod
  	method bit sclk;
  		return  (rg_nss == 1) ? rg_cpol : rg_clk;
  	endmethod
  	method Action miso(bit dat);
  		wr_spi_in_io2 <= dat ;
  	endmethod
      method bit nss;
  		return rg_nss;
  	endmethod
  endinterface
  
  method sb_spi_intrpt = ((rg_rxne & rg_rxne_ie) | (rg_txe & rg_txe_ie) | (rg_rx_alarm & rg_rx_alarm_ie) | (rg_tx_alarm & rg_tx_alarm_ie) 
  	| (rg_err_ie & (rg_tx_ovr | rg_rx_ovr | rg_modf | rg_fre)) | (rg_tx_fifo_empt & wr_tx_fifo_empt) | (rg_tx_fifo_half & rg_ftlvl[1]) | 
  	(rg_tx_fifo_quad & rg_ftlvl[0]) | (rg_tx_fifo_full & wr_tx_fifo_full) | (rg_rx_fifo_empt & wr_rx_fifo_empt) | (rg_rx_fifo_half & rg_frlvl[1]) | 
  	(rg_rx_fifo_quad & rg_frlvl[0]) | (rg_rx_fifo_full & wr_tx_fifo_full))  ;
 
  
endmodule: mkspi

//AXILite

module mkspi_controller#(Clock slow_clk, Reset slow_rst)(Ifc_spi_controller#(addr_width, 
                                                                            data_width,
                                                                            user_width))
  provisos(
          Add#(a__, 8, addr_width),
          Add#(b__, 32, data_width),
          Mul#(32, c__, data_width));

  AXI4_Lite_Slave_Xactor_IFC #(addr_width, data_width, user_width)  s_xactor_spi <- 
                                                                          mkAXI4_Lite_Slave_Xactor;
  
  Ifc_spi#(addr_width, data_width) spi <- mkspi(clocked_by slow_clk, reset_by slow_rst);
  
  
  SyncFIFOIfc#(Write_req#(addr_width, data_width)) 		ff_wr_req   <- mkSyncFIFOFromCC(1, slow_clk);

  // SyncFIFO is not used yet since the error in spi is not defined, after
  // defining the error this SyncFIFO maybe used
  //SyncFIFOIfc#(AXI4_Lite_Resp) 	ff_sync_wr_resp 	<- mkSyncFIFOToCC(1, slow_clk, slow_rst);
  SyncFIFOIfc#(Read_req#(addr_width))			ff_rd_req    		<- mkSyncFIFOFromCC(1, slow_clk);
  // This SyncFIFO only used for data may be in future the whole AXI response
  // will be used
  SyncFIFOIfc#(Bit#(data_width))		ff_sync_rd_resp	    <- mkSyncFIFOToCC(1, slow_clk, slow_rst);
  
  // considering spi controller wont get burst transaction address and data are
  // popped from same rule(moreover AXI_Lite is used which doesnt support burst mode), otherwise 
  // there should be a separate rule to pop address and data
  rule rl_write_request_from_core;
  	let aw <- pop_o(s_xactor_spi.o_wr_addr);
  	let w  <- pop_o(s_xactor_spi.o_wr_data);
  	`logLevel( spi, 0, $format(" SPI : Controller Write Channel"))
  	$display($stime," SPI : Controller Write Channel");
   	ff_wr_req.enq(Write_req {
  							  addr : truncate(aw.awaddr),
  							  burst_size : zeroExtend(aw.awsize),
  							  wdata : w.wdata });	
  
  	let w_resp = AXI4_Lite_Wr_Resp {bresp : AXI4_LITE_OKAY, buser : 0};
      s_xactor_spi.i_wr_resp.enq(w_resp);
  endrule
  
  rule rl_write_request_to_controller;
  	let w = ff_wr_req.first();	
  	spi.app_interface.write_request(w);
  	ff_wr_req.deq();
  endrule
  
  rule rl_read_request_from_core;      		
  	let ar <- pop_o(s_xactor_spi.o_rd_addr);
  	ff_rd_req.enq(Read_req {
  							addr : ar.araddr,
  							burst_size : zeroExtend(ar.arsize)});
  endrule
  
  rule rl_read_request_to_controller;
  	let r = ff_rd_req.first();
  	spi.app_interface.read_request(r);
  	ff_rd_req.deq();
  endrule
  
  rule rl_read_response_from_controller;
  	ff_sync_rd_resp.enq(spi.app_interface.data_to_app);
  endrule
  
  rule rl_read_response_to_core;
  	let rdata = ff_sync_rd_resp.first();
  	ff_sync_rd_resp.deq();
  	let r = AXI4_Lite_Rd_Data{rresp : AXI4_LITE_OKAY, rdata : rdata, ruser : 0};
  	s_xactor_spi.i_rd_data.enq(r);
  endrule

  interface io = spi.io;
  method Bit#(1) sb_spi_intrpt = spi.sb_spi_intrpt;
  interface slave = s_xactor_spi.axi_side;

endmodule

endpackage

