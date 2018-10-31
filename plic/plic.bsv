package plic;
	import Vector::*;
	import ConfigReg::*;
	import Semi_FIFOF::*;
	import AXI4_Lite_Types::*;
	import AXI4_Lite_Fabric::*;
	import AXI4_Types::*;
	import AXI4_Fabric::*;	
	import BUtils ::*;
	import ConcatReg ::*;
	import encoder ::*;
	import device_common::*;

	`include "plic.defines"

/*Platform level interrupt controller:
	Refer to RISC-V privilege spec-v-1.10 chapter 7
	Memory maps of Registers
		Interrupt enable registers :
							rg_ie_0 :0C002000 
							rg_ie_1 :0C002000 
							rg_ie_2 :0C002000 
							.
							.
							.
							rg_ie_7 :0C002000 
							rg_ie_8 :0C002001 
							rg_ie_9 :0C002001 
							.
							.
		Interrupt priority registers :
							rg_priority_0 : 0C000000
							rg_priority_1 : 0C000002
							rg_priority_2 : 0C000004
							.
							.
							.
		Priority Threshold register : 
							rg_priority_threshold : 0C200000
		Claim register : 
							rg_interrupt_id : 0C200004
*/

	typedef enum {Load, Store, Atomic, Fence} Access_type deriving (Bits,Eq,FShow);

	typedef struct {
		Bit#(paddr) 			 address;
		Bit#(TLog#(TDiv#(paddr,8)))  transfer_size;	
		Bit#(1)					 u_signed;
		Bit#(3)						byte_offset;
		Bit#(data_width) write_data;
		Access_type			 ld_st;
	} UncachedMemReq#(numeric type paddr, numeric type data_width) deriving(Bits, Eq);

	interface IFC_GLOBAL_INTERRUPT_IO;
		method Action irq_frm_gateway(Bool ir);
	endinterface

	interface IFC_PROGRAM_REGISTERS#(numeric type addr_width,numeric type data_width);
		method ActionValue#(Tuple2#(Bit#(data_width), Bool)) prog_reg(UncachedMemReq#(addr_width, data_width) mem_req, AccessSize size);
	endinterface 	


interface User_ifc#(numeric type addr_width,numeric type data_width,
      numeric type no_of_ir_pins, numeric type no_of_ir_levels, numeric type no_nmi);
	interface Vector#(no_of_ir_pins,IFC_GLOBAL_INTERRUPT_IO) ifc_external_irq_io;
	interface IFC_PROGRAM_REGISTERS#(addr_width,data_width) ifc_prog_reg;
	interface Get#(Tuple2#(Bool,Bool)) intrpt_note_sb;
	interface Get#(Bit#(64)) intrpt_completion_sb;
endinterface

//(*conflict_free = "rl_prioritise, prog_reg"*)
module mkplic(User_ifc#(addr_width,data_width,no_of_ir_pins,no_of_ir_levels,no_nmi))
	provisos(
	Log#(no_of_ir_pins, ir_bits),
	Log#(no_of_ir_levels, priority_bits),
	Add#(1,ir_bits,x_ir_bits),
	Add#(msb_ir_bits,1,ir_bits),
	Add#(msb_ir_pins,1,no_of_ir_pins),
	Add#(msb_priority_levels,1,no_of_ir_levels),
	Add#(msb_priority_bits,1,priority_bits),
	Add#(a__, no_of_ir_levels, data_width),
	Add#(c__, no_of_ir_pins, 1024),
	Add#(d__, ir_bits, 10),
	Add#(f__, no_of_ir_levels, 1024),
	Add#(g__, priority_bits, 10),
	Add#(h__, no_of_ir_levels, 32),
	Add#(e__, 32, data_width),
	Add#(i__, data_width, 64),
	Add#(j__, no_of_ir_levels, 64),
	Add#(k__, ir_bits, 64),
	Add#(l__, ir_bits, TLog#(no_of_ir_pins))
	);

	let v_no_of_ir_pins = valueOf(no_of_ir_pins);
	let v_ir_bits = valueOf(ir_bits);
	let v_msb_ir_bits = valueOf(msb_ir_bits);
	let v_msb_ir_pins = valueOf(msb_ir_pins);
	let v_msb_priority = valueOf(msb_priority_levels);
	let v_data_width = valueOf(data_width);


	Vector#(no_of_ir_pins,Array#(Reg#(Bool))) rg_ip <- replicateM(mkCReg(2,False));


	Reg#(Bool) rg_ie[v_no_of_ir_pins];//interrupt enable 
	for(Integer i = 0; i < v_no_of_ir_pins;i=i+1)
		begin
			if(i<valueOf(no_nmi))//these are for the non maskable interrupt
				rg_ie[i] = readOnlyReg(True);// interrupt is always enabled for these interrupts 
			else
				rg_ie[i] <- mkReg(False);
		end		

	Reg#(Bit#(no_of_ir_levels)) rg_priority_low[v_no_of_ir_pins];
	for(Integer i =0; i < v_no_of_ir_pins; i=i+1)
		begin
			if(i<valueOf(no_nmi))//for non maskable interrupt
				rg_priority_low[i] = readOnlyReg(1);// these interrupts have the highest priority
			else
				rg_priority_low[i] <- mkConfigReg(0);
		end	

	Reg#(Bit#(32)) rg_priority[v_no_of_ir_pins];
	for(Integer i=0;i < v_no_of_ir_pins;i=i+1)
		rg_priority[i] = concatReg2(readOnlyReg(0), rg_priority_low[i]);

	Reg#(Bit#(no_of_ir_levels))	 rg_priority_threshold <- mkReg(0);
	Reg#(Bit#(ir_bits))	 rg_interrupt_id <- mkConfigReg(0);
	Reg#(Bool)	 rg_interrupt_valid <- mkConfigReg(False);
	Reg#(Maybe#(Bit#(ir_bits))) rg_completion_id <- mkReg(tagged Invalid);
	Reg#(Bit#(no_of_ir_pins)) rg_total_priority <- mkReg(0);
	Reg#(Bit#(1)) rg_plic_state <- mkReg(0); //TODO put an enum later
	Reg#(Bit#(no_of_ir_levels)) rg_winner_priority <- mkReg(0);
	Ifc_encoder#(no_of_ir_levels) ir_priority_encoder <- mkencoder();
	Ifc_encoder#(no_of_ir_pins) irencoder <- mkencoder();

	rule rl_prioritise(rg_plic_state==0);
		Bit#(priority_bits) winner_priority = 0;
		Bit#(ir_bits) winner_interrupts = 0;
		Bit#(x_ir_bits) ir_id_valid = 0;
		Bit#(no_of_ir_levels) lv_priority = 0;
		Bit#(no_of_ir_pins) lv_total_priority = 0;
		for(Integer i = 0; i < v_no_of_ir_pins; i = i + 1)
		 begin
			if(rg_ip[i][1] && rg_ie[i]) begin
				lv_priority = lv_priority | truncate(rg_priority[i]);//taking the OR of multiple priority registers
				`ifdef verbose $display($time,"\tInterrupt id %d and priority is %d", i, lv_priority);`endif
			end
		end
		winner_priority = ir_priority_encoder.encode(lv_priority);
		`ifdef verbose $display($time,"\t winner priority is  %d", winner_priority);`endif
		for(Integer i = 0; i < v_no_of_ir_pins; i = i + 1) begin
			if(rg_priority[i][winner_priority] == 1 && rg_ip[i][1] && rg_ie[i])
				lv_total_priority[i] = 1;
		end
		if(lv_total_priority!=0) begin
			rg_total_priority <= lv_total_priority;
			rg_plic_state <= 1;
			Bit#(no_of_ir_levels) lv_winner_priority = 0;
			lv_winner_priority[winner_priority] = 1;
			rg_winner_priority <= lv_winner_priority;
		end
	endrule

	rule rl_encoder(rg_plic_state==1);
		Bit#(ir_bits) interrupt_id = irencoder.encode(rg_total_priority);
		if(interrupt_id!=0 && rg_priority_threshold >= rg_winner_priority) begin
			`ifdef verbose $display("Interrupt valid");`endif
			rg_interrupt_id <= interrupt_id;
			rg_interrupt_valid <= True;
			$display($time,"\t The highest priority interrupt is  %d and the priority is ", interrupt_id, rg_winner_priority);
		end
		rg_plic_state <= 0;
			
		
	endrule

	Vector#(no_of_ir_pins, IFC_GLOBAL_INTERRUPT_IO) temp_ifc_irq;

	for(Integer i = 0; i < v_no_of_ir_pins; i = i + 1) begin

		temp_ifc_irq[i] = interface IFC_GLOBAL_INTERRUPT_IO

							method Action irq_frm_gateway(Bool ir);
								`ifdef verbose $display("Interrupt id %d is pending", i);`endif
								rg_ip[i][0] <= True;
							endmethod
						  endinterface;
	end

	interface ifc_external_irq_io = temp_ifc_irq;

interface ifc_prog_reg = interface IFC_PROGRAM_REGISTER;

							method ActionValue#(Tuple2#(Bit#(data_width),Bool)) prog_reg(UncachedMemReq#(addr_width, data_width) mem_req,AccessSize size);
								//update memory mapped registers
								`ifdef verbose $display($time,"\tPLIC : programming registers for address %h", mem_req.address);`endif
								Bool success= True;
								let address = mem_req.address;
								Bit#(ir_bits) source_id=0;
								Bit#(data_width) data_return = 0;
								let loop=(size==Byte)?8:(size==HWord)?16:(size==Word)?32:64;// to get the correct number of concatination for rg_ip

								Bit#(64) temp=0;
								let dvalue=valueOf(data_width);
								Bit#(6) shift_amt=zeroExtend(address[2:0])<<3;

								if(address < `base) begin
									address = address >> 2;
									if(mem_req.ld_st == Load) begin
										source_id = address[v_msb_ir_bits:0];
										`ifdef verbose $display($time,"\tPLIC : source %d Priority set to %h", source_id, mem_req.write_data);`endif
										temp = zeroExtend(rg_priority[source_id]);
									end
									else if(mem_req.ld_st == Store) begin
										Bit#(data_width) store_data;
										if(mem_req.byte_offset==0)
											store_data=mem_req.write_data[v_msb_ir_pins:0];
										else
											store_data=mem_req.write_data[v_data_width-1:v_data_width-v_no_of_ir_pins];
										mem_req.byte_offset = mem_req.byte_offset >> 2;
										source_id = address[v_msb_ir_bits:0];
										$display($time,"\tPLIC : source %d Priority set to %h", source_id, store_data);
										rg_priority[source_id] <= truncate(store_data);
									end
								end
								else if(address < `base+'h1000) begin
									if(mem_req.ld_st == Load) begin
										source_id = address[v_msb_ir_bits:0];
										// let shift=(loop==8)?3:(loop==16)?4:(loop==32)?5:6;
										// source_id = source_id << shift;
										// for(Integer i = 0; i < loop; i = i+1)
										// 		temp[i] = pack(rg_ip[source_id + fromInteger(i)][1]);
										if(loop==8) begin
											source_id = source_id << 3;
											for(Integer i = 0; i < 8; i = i+1)
												temp[i] = pack(rg_ip[source_id + fromInteger(i)][1]);
										end
										else if(loop==16) begin
											source_id = source_id << 4;
											for(Integer i = 0; i < 16; i = i+1)
												temp[i] = pack(rg_ip[source_id + fromInteger(i)][1]);
										end
										else if(loop==32) begin
											source_id = source_id << 5;
											for(Integer i = 0; i < 32; i = i+1)
												temp[i] = pack(rg_ip[source_id + fromInteger(i)][1]);
										end
									end
									else if(mem_req.ld_st == Store) begin
										source_id = address[v_msb_ir_bits:0];
										// let shift=(loop==8)?3:(loop==16)?4:(loop==32)?5:6;
										// source_id = source_id << shift;										
										if(loop==8)begin
											for(Integer i = 0; i < 8; i = i+1) begin
											`ifdef verbose $display($time,"\tPLIC : pending interrupt  %b id %d", mem_req.write_data[i], source_id);`endif
											rg_ip[source_id + fromInteger(i)][1] <= unpack(mem_req.write_data[i]); 
											end	
										end
										else if(loop==16)begin
											for(Integer i = 0; i < 16; i = i+1) begin
											`ifdef verbose $display($time,"\tPLIC : pending interrupt  %b id %d", mem_req.write_data[i], source_id);`endif
											rg_ip[source_id + fromInteger(i)][1] <= unpack(mem_req.write_data[i]); 
											end
										end
										else if(loop==32)begin
											for(Integer i = 0; i < 32; i = i+1) begin
											`ifdef verbose $display($time,"\tPLIC : pending interrupt  %b id %d", mem_req.write_data[i], source_id);`endif
											rg_ip[source_id + fromInteger(i)][1] <= unpack(mem_req.write_data[i]); 
											end
										end
									end
								end
								else if(address < `base+'h20000)
								begin
									if(mem_req.ld_st == Load) 
									begin
										source_id = address[v_msb_ir_bits:0];
										// let shift=(loop==8)?3:(loop==16)?4:(loop==32)?5:6;
										// source_id = source_id << shift;	
										if(loop==8)	
										begin								
											source_id = source_id << 3;	
											for(Integer i = 0; i < 8; i = i+1)
											temp[i] = pack(rg_ie[source_id + fromInteger(i)]);
										end
										if(loop==16)	
										begin								
											source_id = source_id << 4;	
											for(Integer i = 0; i < 16; i = i+1)
											temp[i] = pack(rg_ie[source_id + fromInteger(i)]);
										end
										if(loop==32)	
										begin								
											source_id = source_id << 5;	
											for(Integer i = 0; i < 32; i = i+1)
											temp[i] = pack(rg_ie[source_id + fromInteger(i)]);
										end
                                            `ifdef verbose $display($time,"PLIC: Printing Source Enable Interrupt: %h data_return: %h",source_id,temp); `endif
									end
									else if(mem_req.ld_st == Store) begin
										source_id = address[v_msb_ir_bits:0];
										// let shift=(loop==8)?3:(loop==16)?4:(loop==32)?5:6;
										// source_id = source_id << shift;			
										if(loop==8)begin
											source_id=source_id<<3;
											for(Integer i = 0; i < 8; i = i+1) begin
											`ifdef verbose $display($time,"\tPLIC : enabled interrupt  %b id %d", mem_req.write_data[i], source_id);`endif
											rg_ie[source_id + fromInteger(i)] <= unpack(mem_req.write_data[i]); 
											end
										end
										if(loop==16)begin
											source_id=source_id<<4;
											for(Integer i = 0; i < 16; i = i+1) begin
											`ifdef verbose $display($time,"\tPLIC : enabled interrupt  %b id %d", mem_req.write_data[i], source_id);`endif
											rg_ie[source_id + fromInteger(i)] <= unpack(mem_req.write_data[i]); 
											end
										end
										if(loop==32)begin
											source_id=source_id<<5;
											for(Integer i = 0; i < 32; i = i+1) begin
											`ifdef verbose $display($time,"\tPLIC : enabled interrupt  %b id %d", mem_req.write_data[i], source_id);`endif
											rg_ie[source_id + fromInteger(i)] <= unpack(mem_req.write_data[i]); 
											end
										end
									
									end
								end
								else if(address == `base+200000) begin
									if(mem_req.ld_st == Load) begin
										temp = zeroExtend(rg_priority_threshold); 
									end
									else if(mem_req.ld_st == Store)
										rg_priority_threshold <= mem_req.write_data[v_msb_priority:0];
								end
								else if(address == `base+'h204000) begin
									if(mem_req.ld_st == Load) begin
										temp = zeroExtend(rg_interrupt_id); 
										rg_ip[rg_interrupt_id][1] <= False;
                                       `ifdef verbose $display($time,"rg_ip is made false here"); `endif
									end
									else if(mem_req.ld_st == Store) begin
										source_id = mem_req.write_data[v_msb_ir_bits:0];
										rg_completion_id <= tagged Valid source_id;
                                        `ifdef verbose $display("rg_completion_id is made tagged valid and completion is signaled-- source_id: %d",source_id); `endif
									end
								end

								temp=temp>>shift_amt;

								if(size==Byte && dvalue%8==0)
							           temp = duplicate(temp[7:0]);
							    else if(size==HWord && dvalue%16==0)
							           temp = duplicate(temp[15:0]);
							    else if(size==Word && dvalue%32==0)
							           temp = duplicate(temp[31:0]);
						        else 
					                   success=False;

					            data_return=truncate(temp);
								return tuple2(data_return,success);
							endmethod

						endinterface;

							interface  intrpt_completion_sb= interface Get if(isValid(rg_completion_id))
								method ActionValue#(ActionValue#(Bit#(64))) toget;
								let completion_msg = validValue(rg_completion_id);
								rg_completion_id <= tagged Invalid;
                                `ifdef verbose $display("Sending Completion to SoC"); `endif
                                // completion_msg=zeroExtend(completion_msg);
								return zeroExtend(completion_msg);
							endinterface;

							interface intrpt_note_sb= interface Get
								method ActionValue#(Tuple2#(Bool,Bool)) toget;
								let v_no_nmi=valueOf(no_nmi);
								Bool if_nmi = (rg_interrupt_id < fromInteger(v_no_nmi));
								Bool valid_interrupt = rg_interrupt_valid;
								rg_interrupt_valid <= False;
								return tuple2(valid_interrupt, if_nmi);
							endinterface;
endmodule

	interface Ifc_plic_axi4lite#(numeric type addr_width,numeric type data_width,numeric type
      user_width, numeric type no_of_ir_pins, numeric type no_of_ir_levels, numeric type no_nmi);
			interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave;
			interface Vector#(no_of_ir_pins,IFC_GLOBAL_INTERRUPT_IO) ifc_external_irq_io;
			interface Get#(Tuple2#(Bool,Bool)) intrpt_note_sb;
			interface Get#(Bit#(64)) intrpt_completion_sb;
	endinterface

	module mkplic_axi4lite(Ifc_plic_axi4lite#(addr_width, data_width, user_width, no_of_ir_pins, 
      no_of_ir_levels,no_nmi))
		provisos(
				    Add#(a__, data_width, 64),
				    Add#(b__, 8, data_width),
		        Add#(c__, 32, data_width),
            Add#(d__, 1, TLog#(no_of_ir_pins)),
            Add#(e__, 1, no_of_ir_pins),
            Add#(f__, 1, no_of_ir_levels),
            Add#(g__, 1, TLog#(no_of_ir_levels)),
            Add#(h__, no_of_ir_levels, data_width),
            Add#(i__, no_of_ir_pins, 1024),
            Add#(j__, TLog#(no_of_ir_pins), 10),
            Add#(k__, no_of_ir_levels, 1024),
            Add#(l__, TLog#(no_of_ir_levels), 10),
            Add#(m__, no_of_ir_levels, 32),
            Add#(n__, no_of_ir_levels, 64),
            Add#(o__, TLog#(no_of_ir_pins), 64)
			);

		AXI4_Lite_Slave_Xactor_IFC #(addr_width, data_width, user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor;
		User_ifc#(addr_width, data_width, no_of_ir_pins, no_of_ir_levels, no_nmi) plic <- mkplic();

		(*preempts="rl_config_plic_reg_read, rl_config_plic_reg_write"*)
			rule rl_config_plic_reg_write;
				let aw <- pop_o(s_xactor.o_wr_addr);
				let w <- pop_o(s_xactor.o_wr_data);
				let w_strobe = w.wstrb;
				Bit#(3) byte_offset=0;
				for(Integer i=3; i >= 0; i=i-1) begin 
					if(w_strobe[i]==1)
						byte_offset=fromInteger(i);
				end
				let {x,success} <- plic.ifc_prog_reg.prog_reg(UncachedMemReq{address : aw.awaddr, transfer_size : 'd3, 
														u_signed : 0, byte_offset : byte_offset, write_data : w.wdata, ld_st : Store},unpack(aw.awsize)); 

				let w_resp = AXI4_Lite_Wr_Resp {bresp: success?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: 0 }; //TODO user value is null
				s_xactor.i_wr_resp.enq(w_resp);
			endrule

 			rule rl_config_plic_reg_read;

				let ar <- pop_o(s_xactor.o_rd_addr);
				let {x,success} <- plic.ifc_prog_reg.prog_reg(UncachedMemReq{address : ar.araddr, transfer_size : 'd3, 
			    														u_signed : 0, byte_offset : 0, ld_st : Load},unpack(ar.arsize)); 
		        

				let r = AXI4_Lite_Rd_Data {rresp: success?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, rdata: duplicate(x), ruser: 0};
				s_xactor.i_rd_data.enq(r);
			endrule

			interface slave = s_xactor.axi_side;
			interface ifc_external_irq_io = plic.ifc_external_irq_io;
			method ActionValue#(Tuple2#(Bool,Bool)) intrpt_note_sb = plic.intrpt_note_sb;
			method ActionValue#(Bit#(64)) intrpt_completion_sb = plic.intrpt_completion_sb;
	endmodule

	interface Ifc_plic_axi4#(numeric type addr_width, numeric type data_width, numeric type
      user_width, numeric type no_of_ir_pins, numeric type no_of_ir_levels, numeric type no_nmi);
		interface AXI4_Slave_IFC#(addr_width,data_width,user_width) slave;
		interface Vector#(no_of_ir_pins,IFC_GLOBAL_INTERRUPT_IO) ifc_external_irq_io;
		interface Get#(Tuple2#(Bool,Bool)) intrpt_note_sb;
		interface Get#(Bit#(64)) intrpt_completion_sb;
	endinterface

	module mkplic_axi4(Ifc_plic_axi4#(addr_width,data_width,user_width, no_of_ir_pins,no_of_ir_levels,
      no_nmi))
			provisos(
				    Add#(a__, data_width, 64),
				    Add#(b__, 8, data_width),
				    Add#(c__, 32, data_width),
            Add#(d__, 1, TLog#(no_of_ir_pins)),
            Add#(e__, 1, no_of_ir_pins),
            Add#(f__, 1, no_of_ir_levels),
            Add#(g__, 1, TLog#(no_of_ir_levels)),
            Add#(h__, no_of_ir_levels, data_width),
            Add#(i__, no_of_ir_pins, 1024),
            Add#(j__, TLog#(no_of_ir_pins), 10),
            Add#(k__, no_of_ir_levels, 1024),
            Add#(l__, TLog#(no_of_ir_levels), 10),
            Add#(m__, no_of_ir_levels, 32),
            Add#(n__, no_of_ir_levels, 64),
            Add#(o__, TLog#(no_of_ir_pins), 64)
			);

		AXI4_Slave_Xactor_IFC #(addr_width, data_width, user_width)  s_xactor <- mkAXI4_Slave_Xactor;
		User_ifc#(addr_width, data_width, no_of_ir_pins, no_of_ir_levels, no_nmi) plic <- mkplic();

	 	Reg#(Bit#(8)) rg_rdburst_count <- mkReg(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkReg(0);

		Reg#(AXI4_Rd_Addr#(addr_width,user_width)) rg_rdpacket <- mkReg(?);
 		Reg#(AXI4_Wr_Addr#(addr_width,user_width)) rg_wrpacket <- mkReg(?);


		 (*preempts="rl_config_plic_reg_read,rl_config_plic_reg_write"*)
		 //because of the read method side effects (there is also a write to IP bits during the read method)
		 (*preempts="rl_config_plic_reg_read_burst,rl_config_plic_reg_write_burst"*)
		 (*preempts="rl_config_plic_reg_read,rl_config_plic_reg_write_burst"*)
		 (*preempts="rl_config_plic_reg_read_burst,rl_config_plic_reg_write"*)

			rule rl_config_plic_reg_write(rg_wrburst_count==0);
				let aw <- pop_o(s_xactor.o_wr_addr);
				let w <- pop_o(s_xactor.o_wr_data);
				let w_strobe = w.wstrb;
				Bit#(3) byte_offset=0;
				for(Integer i=7; i >= 0; i=i-1) begin 
					if(w_strobe[i]==1)
						byte_offset=fromInteger(i);
				end
				
				rg_wrpacket<=aw;
		 		if(aw.awlen!=0)
		 			rg_wrburst_count<=1;
				let {x,success} <- plic.ifc_prog_reg.prog_reg(UncachedMemReq{address : aw.awaddr, transfer_size : 'd3, 
														u_signed : 0, byte_offset : byte_offset, write_data : w.wdata, ld_st : Store},unpack(truncate(aw.awsize))); 

				let w_resp = AXI4_Wr_Resp {bresp: success?AXI4_OKAY:AXI4_SLVERR, buser: 0,bid:aw.awid }; //TODO user value is null
				s_xactor.i_wr_resp.enq(w_resp);
			endrule

			rule rl_config_plic_reg_write_burst(rg_wrburst_count!=0);
				let wr_req=rg_wrpacket;
				let w <- pop_o(s_xactor.o_wr_data);
				let w_strobe = w.wstrb;
				Bit#(3) byte_offset=0;
				for(Integer i=7; i >= 0; i=i-1) begin 
					if(w_strobe[i]==1)
						byte_offset=fromInteger(i);
				end
				let {data,success}<-plic.ifc_prog_reg.prog_reg(UncachedMemReq{address : wr_req.awaddr, transfer_size : 'd3, 
														u_signed : 0, byte_offset : byte_offset, write_data : w.wdata, ld_st : Store},unpack(truncate(wr_req.awsize))); 
				if(rg_wrburst_count==wr_req.awlen)
					rg_wrburst_count<=0;
				else
					rg_wrburst_count<=rg_wrburst_count+1;
				let resp= AXI4_Wr_Resp {bresp: success?AXI4_OKAY:AXI4_SLVERR, buser: 0,bid:wr_req.awid };
				s_xactor.i_wr_resp.enq(resp);
			endrule

 			rule rl_config_plic_reg_read(rg_rdburst_count==0);


				let ar <- pop_o(s_xactor.o_rd_addr);
				rg_rdpacket<=ar;
				if(ar.arlen!=0)
		 			rg_rdburst_count<=1;
				let {x,success} <- plic.ifc_prog_reg.prog_reg(UncachedMemReq{address : ar.araddr, transfer_size : 'd3, 
			    														u_signed : 0, byte_offset : 0, ld_st : Load},unpack(truncate(ar.arsize))); 

				let r = AXI4_Rd_Data {rresp: success?AXI4_OKAY:AXI4_SLVERR, rdata: duplicate(x), ruser: 0,rid:ar.arid,rlast:(ar.arlen==0)};
				s_xactor.i_rd_data.enq(r);
			endrule

			rule rl_config_plic_reg_read_burst(rg_rdburst_count!=0);
				let rd_req=rg_rdpacket;
				let {x,success} <- plic.ifc_prog_reg.prog_reg(UncachedMemReq{address : rd_req.araddr, transfer_size : 'd3, 
			    														u_signed : 0, byte_offset : 0, ld_st : Load},unpack(truncate(rd_req.arsize))); 			
		        success=False;
		        if(rg_rdburst_count==rd_req.arlen)
					rg_rdburst_count<=0;
				else
					rg_rdburst_count<=rg_rdburst_count+1;
				let r = AXI4_Rd_Data {rresp: success?AXI4_OKAY:AXI4_SLVERR, rdata: duplicate(x), ruser: 0,rid:rd_req.arid,rlast:(rd_req.arlen==0)};
				s_xactor.i_rd_data.enq(r);	
			endrule

			interface slave = s_xactor.axi_side;
			interface ifc_external_irq_io = plic.ifc_external_irq_io;
			method ActionValue#(Tuple2#(Bool,Bool)) intrpt_note_sb = plic.intrpt_note_sb;
			method ActionValue#(Bit#(64)) intrpt_completion_sb = plic.intrpt_completion_sb;		
	endmodule
endpackage	
