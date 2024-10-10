package TCM;

	import BRAMCore::*;
	import DReg::*;
	import Vector::*;
	import GetPut::*;
	import Semi_FIFOF::*;
	import AXI4_Types::*;
	import AXI4_Fabric::*;
	import AXI4_Lite_Types::*;
	import AXI4_Lite_Fabric::*;
	import device_common::*;
	import BUtils::*;
`ifdef ecctcm
	import ecc_hamming::*;
`endif
	`include "Logger.bsv"	

	export mkTCM_axi4lite;
	export mkTCM_axi4;
	export Ifc_TCM_axi4lite(..);
	export Ifc_TCM_axi4(..);

	typedef enum { `ifdef tcm_mem_init  Mem_init, `endif Idle, Data_read,Trap_check,Data_write} Access_State deriving(Eq, Bits, FShow);

	typedef enum {Write,Read} Access_type deriving(Eq, Bits, FShow);

	interface Ifc_TCM#(numeric type addr_width, numeric type data_width, numeric type num_ver_banks,numeric type num_hor_banks, numeric type index_size);
		method Action write_request(Bit#(addr_width) addr,Bit#(data_width) data, Bit#(3) access_size);
		method Bool write_response;
		method Action read_request(Bit#(addr_width) addr, Bit#(3) access_size);
		method Tuple2#(Bool,Bit#(data_width)) read_response;
	endinterface : Ifc_TCM

	module mkTCM#(parameter String modulename, Integer base_address `ifdef testmode , Bool test_mode `endif) (Ifc_TCM#(addr_width,data_width,num_ver_banks,num_hor_banks,index_size))
								provisos(Add#(a__,index_size,addr_width),
												 `ifdef ecctcm Add#(2,TLog#(data_width),ecc_width), `else Add#(0,0,ecc_width), `endif
												 Add#(ecc_width,data_width,encoded_data_width),
												 Div#(encoded_data_width,num_hor_banks,row_width),
												 Mul#(num_hor_banks,row_width,encoded_data_width),
												 Mul#(num_ver_banks,num_hor_banks,num_banks),
												 Add#(f_,TLog#(TDiv#(data_width,8)),addr_width),
												 Add#(g_,TMul#(2,TLog#(TDiv#(data_width,8))),data_width),
												 Add#(h_,TLog#(TDiv#(data_width,8)),TMul#(2,TLog#(TDiv#(data_width,8)))),
												 //Add#(b__, TAdd#(3, TLog#(TDiv#(encoded_data_width, 8))),encoded_data_width),
												 Add#(b__, TAdd#(3, TLog#(TDiv#(data_width, 8))), data_width)
												);

		Integer byte_offset = valueOf(TLog#(TDiv#(data_width,8)));
		Integer v_num_ver_banks = valueOf(num_ver_banks);
		Integer v_num_hor_banks = valueOf(num_hor_banks);
		Integer v_data_width = valueOf(data_width);
		Integer v_ecc_width  = valueOf(ecc_width);
		Integer v_encoded_data_width = valueOf(encoded_data_width);

`ifndef tcm_bram_load
		BRAM_PORT#(Bit#(TSub#(index_size,TLog#(TDiv#(data_width,8)))),Bit#(row_width)) data_mem[v_num_ver_banks][v_num_hor_banks];
		for(Integer i=0; i<v_num_ver_banks; i=i+1) begin
			for(Integer j=0; j<v_num_hor_banks; j=j+1) begin
				data_mem[i][j] <- mkBRAMCore1(valueOf(TExp#(TSub#(index_size,TLog#(TDiv#(data_width,8))))),False);
			end
		end
`else
		BRAM_PORT#(Bit#(TSub#(index_size,TLog#(TDiv#(data_width,8)))),Bit#(row_width)) data_mem[v_num_ver_banks][v_num_hor_banks];
		for(Integer i=0;i<v_num_ver_banks;i=i+1) begin
			Bit#(32) ver_char = fromInteger(i);
			String mem_file_name_1 = stringCons(bitsToHexDigit(ver_char[3:0]),"code.mem");
			String mem_file_name_2 = stringCons(bitsToHexDigit(ver_char[7:4]),mem_file_name_1);
			String mem_file_name_3 = stringCons(bitsToHexDigit(ver_char[11:8]),mem_file_name_2);
			for(Integer j=0; j<v_num_hor_banks; j=j+1) begin
				Bit#(32) hor_char = fromInteger(j);	
				String mem_file_name_4 = stringCons(bitsToHexDigit(hor_char[3:0]),mem_file_name_3);
				String mem_file_name_5 = stringCons(bitsToHexDigit(hor_char[7:4]),mem_file_name_4);
				String mem_file_name_6 = stringCons(bitsToHexDigit(hor_char[11:8]),mem_file_name_5);
				data_mem[i][j] <- mkBRAMCore1Load(valueOf(TExp#(TSub#(index_size,TLog#(TDiv#(data_width,8))))),False,mem_file_name_6,False);
			end
		end
`endif

		Reg#(Bit#(data_width)) rg_data <- mkRegA(0);
		Wire#(Bit#(data_width)) wr_data <- mkWire();
		Reg#(Bit#(index_size)) rg_address <- mkRegA(0);
		Reg#(Bit#(3)) rg_access_size <- mkRegA(0);
		Reg#(Bit#(TLog#(TAdd#(num_ver_banks,1)))) rg_bank_number <- mkRegA(0);

		Reg#(Access_State) rg_mem_state <- mkRegA( `ifdef tcm_mem_init  Mem_init  `else Idle `endif );
		Reg#(Access_type) rg_access_type <- mkRegA(Write);
		Reg#(Bool) wr_access_response <- mkWire();
		Wire#(Bool) wr_access_response_write <- mkWire();

`ifdef ecctcm	
		Reg#(Bool) rg_ecc_decode_trap <- mkRegA(False);
`endif
		Reg#(Bit#(data_width)) rg_corrected_data <- mkRegA(0);

`ifdef tcm_mem_init
		rule rl_init_mem_address_calculation(rg_mem_state == Mem_init);
			if(rg_address == fromInteger(valueOf(TExp#(index_size)) - valueOf(TDiv#(data_width,8)))) begin
				rg_address <= 0;
				rg_mem_state <= Idle;
			end
			else begin
				rg_address <= rg_address + fromInteger(valueOf(TDiv#(data_width,8)));
			end
			`logLevel(tcm,0,$format("TCM : memory intiialisation %x \n",rg_address))
		endrule

		for(Integer i=0; i<v_num_ver_banks; i=i+1) begin
			for(Integer j=0; j<v_num_hor_banks; j=j+1) begin
				rule rl_init_mem_to_zero(rg_mem_state == Mem_init);
					data_mem[i][j].put(True,rg_address[valueOf(index_size)-1:byte_offset],0);
					`logLevel(tcm,0,$format("TCM : %d : %d : memory intiialisation  at %x \n",i,j,rg_address))
				endrule
			end
		end
`endif

		rule rl_data_memory_read(rg_mem_state == Data_read);
			Vector#(num_hor_banks,Bit#(row_width)) temp_hbank;
			for(Integer i=0; i<v_num_hor_banks; i=i+1) begin
				temp_hbank[i] = data_mem[rg_bank_number][i].read;
				`logLevel(tcm,0,$format("TCM : %d : %d : Data read from horizontal bank %x \n",rg_bank_number,i,temp_hbank[i]))
			end
			Bit#(encoded_data_width) temp = pack(temp_hbank);
			`logLevel(tcm,0,$format("TCM : %d : Data read from memory access_type : %b encode data : %x \n",rg_bank_number,rg_access_type,temp))
			`ifdef ecctcm 
				Bit#(data_width) temp_data = temp[v_data_width-1:0];
				Bit#(ecc_width) temp_decoded_parity = temp[v_encoded_data_width-1:v_data_width];
				match {.corrected_data,.decoded_parity,.ecc_trap} = ecc_hamming_decode_correct(temp_data,temp_decoded_parity,0);
				rg_ecc_decode_trap <= ecc_trap;
				rg_mem_state <= Trap_check;
				rg_corrected_data <= corrected_data;
			`logLevel(tcm,0,$format("TCM : %d : Ecc decode : %d parity : %x data : %x corrected data : %x decoded parity : %x ecc trap : %b \n",rg_bank_number,rg_access_type,temp_decoded_parity,temp_data,corrected_data,decoded_parity,ecc_trap))
			`else
				rg_corrected_data <= truncate(temp);
				if(rg_access_type == Write)
					rg_mem_state <= Data_write;
				else begin
					rg_mem_state <= Idle;
					wr_data <= truncate(temp);
				end
				wr_access_response <= True;
			`endif
		endrule

`ifdef ecctcm
		rule rl_ecc_trap_check_read(rg_mem_state == Trap_check && rg_access_type == Read);
			if(rg_ecc_decode_trap == True)
				wr_access_response <= False;
			else
				wr_access_response <= True;
			rg_mem_state <= Idle;
			wr_data <= rg_corrected_data;
			`logLevel(tcm,0,$format("TCM : %d : Trap check read  %b \n",rg_bank_number,rg_ecc_decode_trap))
		endrule
`endif

		rule rl_data_write(rg_access_type == Write && rg_mem_state == `ifdef ecctcm Trap_check `else Data_write `endif );
			Bool data_write = True;
   `ifdef ecctcm
		data_write = False;
			if(rg_ecc_decode_trap == True) begin
				wr_access_response <= False;
				wr_access_response_write <= False;
				if(rg_access_size == 3)
					data_write = True;
			end
			else begin
  
				wr_access_response <= True;
				wr_access_response_write <= True;
				data_write = True;
			end
			`logLevel(tcm,0,$format("TCM : %d : Trap check write  %b \n",rg_bank_number,rg_ecc_decode_trap))
`else
             wr_access_response <= True;
			 wr_access_response_write <= True;
 `endif
			// `logLevel(tcm,0,$format("TCM : %d : Trap check write  %b \n",rg_bank_number,rg_ecc_decode_trap))
			if(data_write) begin
				Bit#(data_width) data_into_mem = rg_data;
				Bit#(ecc_width) encoded_parity = 0;
				if(rg_access_size != 3) begin
					Bit#(TAdd#(3,TLog#(TDiv#(data_width,8)))) bit_offset = 0; 																											//bit_offset to perform write operation - gives the first bit position from where the masking happens
					Bit#(TLog#(TDiv#(data_width,8))) temp_address = rg_address[valueOf(TLog#(TDiv#(data_width,8)))-1:0]; 						//gives byte offset
					bit_offset[valueOf(TAdd#(2,TLog#(TDiv#(data_width,8)))):3] = temp_address; 	//shift according to data_width to get bit offset
					Bit#(data_width) v_lower = zeroExtend(bit_offset);
					Bit#(data_width) temp_mask_1 = rg_access_size == 0 ? 'hFF : rg_access_size == 1 ? 'hFFFF : 'hFFFFFFFF; 	//Mask according to access_size
					Bit#(data_width) mask_1 = temp_mask_1 << v_lower; 																											//Shift the mask at required position
					Bit#(data_width) mask_12 = rg_corrected_data & (~mask_1); 																							//Make the bits to be modified as zeroes
					Bit#(data_width) mask_2 = mask_1 & rg_data; 																														//From rg_data only the bits to be written is made available rest are made zeroes
				  data_into_mem =  mask_12 | mask_2;																																			//Write operation at the required bit position
					`logLevel(tcm,0,$format("TCM : %d : Write shift_amount %x ; Data masks %x : %x : %x : %x : %x \n",rg_bank_number,v_lower,temp_mask_1,mask_1,mask_12,mask_2,data_into_mem))
				end
`ifdef ecctcm
				encoded_parity = ecc_hamming_encode(data_into_mem);
`endif
				Bit#(encoded_data_width) temp = {encoded_parity,data_into_mem};
				Vector#(num_hor_banks,Bit#(row_width)) temp_encoded_data = unpack(temp);
				for(Integer i=0; i<v_num_hor_banks; i=i+1) begin
					data_mem[rg_bank_number][i].put(True,rg_address[valueOf(index_size)-1:byte_offset],temp_encoded_data[i]);
					`logLevel(tcm,0,$format("TCM : %d : %d :  data into horizontal bank %x \n",rg_bank_number,i,temp_encoded_data[i]))
				end
				`logLevel(tcm,0,$format("TCM : %d : Encode data and write to memory : encoded data %x data into memory %x \n",rg_bank_number,encoded_parity,data_into_mem))
			end
			rg_mem_state <= Idle;
		endrule

		method Action write_request(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(3) access_size) if(rg_mem_state == Idle);
			Bit#(TSub#(index_size,TLog#(TDiv#(data_width,8)))) temp_address = (addr - fromInteger(base_address))[valueOf(index_size)-1:byte_offset];
			rg_data <= data;
			rg_access_size <= access_size;
			Bit#(TLog#(TAdd#(num_ver_banks,1))) temp_bank_no = addr[valueOf(TAdd#(index_size,TLog#(TAdd#(num_ver_banks,1))))-1:valueOf(index_size)];
			rg_bank_number <= temp_bank_no;
			rg_address <= truncate(addr-fromInteger(base_address));
			for(Integer i=0; i<v_num_hor_banks; i=i+1) begin
				data_mem[temp_bank_no][i].put(False,temp_address,?);
			end
			rg_mem_state <= Data_read;
			rg_access_type <= Write;	
			`logLevel(tcm,0,$format("TCM : %d : write request address : %x data : %x Absoulte address : %x \n",temp_bank_no,temp_address,data,addr))
		endmethod
		method Bool write_response if(rg_access_type == Write);
			return wr_access_response_write;
		endmethod
		method Action read_request(Bit#(addr_width) addr, Bit#(3) access_size) if(rg_mem_state == Idle);
			Bit#(TSub#(index_size,TLog#(TDiv#(data_width,8)))) temp_address = (addr - fromInteger(base_address))[valueOf(index_size)-1:byte_offset];
			rg_address <= truncate(addr-fromInteger(base_address));
			rg_access_size <= access_size;
			Bit#(TLog#(TAdd#(num_ver_banks,1))) temp_bank_no = addr[valueOf(TAdd#(index_size,TLog#(TAdd#(num_ver_banks,1))))-1:valueOf(index_size)];
			rg_bank_number <= temp_bank_no;
			for(Integer i=0; i<v_num_hor_banks; i=i+1) begin
				data_mem[temp_bank_no][i].put(False,temp_address,?);
			end
			rg_mem_state <= Data_read;
			rg_access_type <= Read;
			`logLevel(tcm,0,$format("TCM : %d : read request address %x Absoulte address %x \n",temp_bank_no,temp_address,addr))
		endmethod
		method Tuple2#(Bool,Bit#(data_width)) read_response if(rg_access_type == Read);
			return tuple2(wr_access_response,wr_data);
		endmethod
	endmodule : mkTCM

	interface Ifc_TCM_axi4#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type num_ver_banks, numeric type num_hor_banks, numeric type index_size);
		interface AXI4_Slave_IFC#(addr_width, data_width, user_width) slave;
	endinterface : Ifc_TCM_axi4

	typedef enum {Idle, Burst} Transfer_State deriving(Eq, Bits, FShow);

	module mkTCM_axi4#(String modulename, Integer base_address `ifdef testmode , Bool test_mode `endif)(Ifc_TCM_axi4#(addr_width,data_width,user_width,num_ver_banks,num_hor_banks,index_size))
								provisos(Add#(a__,index_size,addr_width),
												 Add#(f_,TLog#(TDiv#(data_width,8)),addr_width),
												 Add#(g_,TMul#(2,TLog#(TDiv#(data_width,8))),data_width),
												 Add#(h_,TLog#(TDiv#(data_width,8)),TMul#(2,TLog#(TDiv#(data_width,8)))),
												 Add#(b__, TAdd#(3, TLog#(TDiv#(data_width, 8))), data_width),
												`ifdef ecctcm
												 Mul#(num_hor_banks,TDiv#(TAdd#(TAdd#(2,TLog#(data_width)),data_width),num_hor_banks),TAdd#(TAdd#(2,TLog#(data_width)),data_width))
												`else
												 Mul#(num_hor_banks,TDiv#(data_width,num_hor_banks),data_width)
												`endif
												);

		Ifc_TCM#(addr_width,data_width,num_ver_banks,num_hor_banks,index_size) tcm <- mkTCM(modulename, base_address `ifdef testmode, test_mode `endif);
		AXI4_Slave_Xactor_IFC#(addr_width,data_width,user_width) s_xactor <- mkAXI4_Slave_Xactor;

		Reg#(AXI4_Wr_Addr#(addr_width,user_width)) rg_write_burst_address <- mkRegA(?);
		Reg#(AXI4_Rd_Addr#(addr_width,user_width)) rg_read_burst_address  <- mkRegA(?);
		Reg#(Transfer_State) rg_write_state <- mkRegA(Idle);
		Reg#(Transfer_State) rg_read_state  <- mkRegA(Idle);
		Reg#(Bit#(1)) rg_burst_next_read <- mkDRegA(0);
		Reg#(Bit#(8)) rg_read_burst_counter <- mkRegA(0);

		rule rl_write_request(rg_write_state == Idle && rg_read_state == Idle);
			let wa <- pop_o(s_xactor.o_wr_addr);
			let wd <- pop_o(s_xactor.o_wr_data);
			tcm.write_request(wa.awaddr,wd.wdata,wa.awsize);
			rg_write_burst_address <= wa;
			if(wd.wlast != True)
				rg_write_state <= Burst;
			`logLevel(tcm,0,$format("TCM : write request at %x data %x size %x \n",wa.awaddr,wd.wdata,wa.awsize))
		endrule

		rule rl_write_request_burst(rg_write_state == Burst);
			let wd <- pop_o(s_xactor.o_wr_data);
			let address = axi4burst_addrgen(rg_write_burst_address.awlen, rg_write_burst_address.awsize, 
																			rg_write_burst_address.awburst, rg_write_burst_address.awaddr);
			tcm.write_request(address,wd.wdata,rg_write_burst_address.awsize);
			rg_write_burst_address.awaddr <= address;
			if(wd.wlast)
				rg_write_state <= Idle;
			`logLevel(tcm,0,$format("TCM : burst write request at %x data %x size %x \n",address,wd.wdata,rg_write_burst_address.awsize))
		endrule

		rule rl_write_response(rg_write_state == Idle);
			let success = tcm.write_response;
			`logLevel(tcm,0,$format("TCM : write response success %b \n",success))
			let resp = AXI4_Wr_Resp{bresp : success?AXI4_OKAY:AXI4_SLVERR, buser : rg_write_burst_address.awuser, bid : rg_write_burst_address.awid};
			s_xactor.i_wr_resp.enq(resp);
		endrule

		rule rl_read_request(rg_read_state == Idle && rg_write_state == Idle);
			let ra <- pop_o(s_xactor.o_rd_addr);
			tcm.read_request(ra.araddr,ra.arsize);
			if(ra.arlen != 0)
				rg_read_state <= Burst;
			rg_read_burst_address <= ra;
			`logLevel(tcm,0,$format("TCM : read request at %x size %x \n",ra.araddr,ra.arsize))
		endrule

		rule rl_read_request_burst(rg_read_state == Burst && rg_burst_next_read == 1);
			if(rg_read_burst_counter == rg_read_burst_address.arlen) begin
				rg_read_state <= Idle;
				rg_read_burst_counter <= 0;
			end
			else begin
				rg_read_burst_counter <= rg_read_burst_counter + 1;	
				let address = axi4burst_addrgen(rg_read_burst_address.arlen,rg_read_burst_address.arsize,
																				rg_read_burst_address.arburst,rg_read_burst_address.araddr);
				rg_read_burst_address.araddr <= address;
				tcm.read_request(address,rg_read_burst_address.arsize);
				`logLevel(tcm,0,$format("TCM : burst read request %d  at %x size %x \n",address,rg_read_burst_counter,rg_read_burst_address.arsize))
			end
		endrule

		rule rl_read_response;
			rg_burst_next_read <= 1;
			let {success,data} = tcm.read_response;
			`logLevel(tcm,0,$format("TCM : read response data %x success %b \n",data,success))
			let resp = AXI4_Rd_Data{rresp:success?AXI4_OKAY:AXI4_SLVERR, rdata:data, rlast:rg_read_burst_counter==rg_read_burst_address.arlen, ruser:0, rid:rg_read_burst_address.arid};
			s_xactor.i_rd_data.enq(resp);
		endrule

		interface slave = s_xactor.axi_side;

	endmodule : mkTCM_axi4

	interface Ifc_TCM_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type num_ver_banks, numeric type num_hor_banks, numeric type index_size);
    interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave;
	endinterface : Ifc_TCM_axi4lite

	module mkTCM_axi4lite#(String modulename, Integer base_address `ifdef testmode , Bool test_mode `endif)(Ifc_TCM_axi4lite#(addr_width,data_width,user_width,num_ver_banks,num_hor_banks,index_size))
								provisos(Add#(a__,index_size,addr_width),
												 Add#(f_,TLog#(TDiv#(data_width,8)),addr_width),
												 Add#(g_,TMul#(2,TLog#(TDiv#(data_width,8))),data_width),
												 Add#(h_,TLog#(TDiv#(data_width,8)),TMul#(2,TLog#(TDiv#(data_width,8)))),
												 Add#(b__, TAdd#(3, TLog#(TDiv#(data_width, 8))), data_width),
												`ifdef ecctcm
												 Mul#(num_hor_banks,TDiv#(TAdd#(TAdd#(2,TLog#(data_width)),data_width),num_hor_banks),TAdd#(TAdd#(2,TLog#(data_width)),data_width))
												`else
												 Mul#(num_hor_banks,TDiv#(data_width,num_hor_banks),data_width)
												`endif
												);

		Ifc_TCM#(addr_width,data_width,num_ver_banks,num_hor_banks,index_size) tcm <- mkTCM(modulename, base_address `ifdef testmode , test_mode `endif);
		AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width) s_xactor <- mkAXI4_Lite_Slave_Xactor;

		rule rl_write_request;
			let wa <- pop_o(s_xactor.o_wr_addr);
			let wd <- pop_o(s_xactor.o_wr_data);
			tcm.write_request(wa.awaddr,wd.wdata,zeroExtend(wa.awsize));
		endrule

		rule rl_write_response;
			let success = tcm.write_response;
			let resp = AXI4_Lite_Wr_Resp{bresp : success?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser : ?};
			s_xactor.i_wr_resp.enq(resp);
		endrule

		rule rl_read_request;
			let ra <- pop_o(s_xactor.o_rd_addr);
			tcm.read_request(ra.araddr,zeroExtend(ra.arsize));
		endrule

		rule rl_read_response;
			let {success,data} = tcm.read_response;
			let resp = AXI4_Lite_Rd_Data{rresp : success?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, rdata : data, ruser : ?};
			s_xactor.i_rd_data.enq(resp);
		endrule
		
		interface slave = s_xactor.axi_side;

	endmodule : mkTCM_axi4lite

endpackage : TCM
