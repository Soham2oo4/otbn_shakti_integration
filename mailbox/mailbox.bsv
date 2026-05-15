package mailbox;

	import BRAMCore::*;
	import DReg::*;
	import Vector::*;
	import GetPut::*;
	import Semi_FIFOF::*;
	import AXI4_Types::*;
	import AXI4_Fabric::*;
	import device_common::*;
	import BUtils::*;
	`include "Soc.defines" 
	
	`include "Logger.bsv"	

	export mkmailbox_axi4;
	export Ifc_mailbox_axi4(..);

	typedef enum { `ifdef mail_mem_init  Mem_init, `endif Idle, Data_read,Trap_check,Data_write} Access_State deriving(Eq, Bits, FShow);

	typedef enum {Write,Read} Access_type deriving(Eq, Bits, FShow);

	interface Ifc_mailbox#(numeric type addr_width, numeric type data_width, numeric type num_ver_banks,numeric type num_hor_banks, numeric type index_size);
		method Action write_request(Bit#(addr_width) addr,Bit#(data_width) data, Bit#(3) access_size);
		method Bool write_response;
		method Action read_request(Bit#(addr_width) addr, Bit#(3) access_size);
		method Tuple2#(Bool,Bit#(data_width)) read_response;
		method Bit#(1) return_mail_box_interrupt;
	endinterface : Ifc_mailbox

	module mkmailbox#(parameter String modulename, Integer base_address `ifdef testmode , Bool test_mode `endif ) (Ifc_mailbox#(addr_width,data_width,num_ver_banks,num_hor_banks,index_size))
								provisos(Add#(a__,index_size,addr_width),
												 Add#(0,0,ecc_width),
												 Add#(ecc_width,data_width,encoded_data_width),
												 Div#(encoded_data_width,num_hor_banks,row_width),
												 Mul#(num_hor_banks,row_width,encoded_data_width),
												 Mul#(num_ver_banks,num_hor_banks,num_banks),
												 Add#(f_,TLog#(TDiv#(data_width,8)),addr_width),
												 Add#(g_,TMul#(2,TLog#(TDiv#(data_width,8))),data_width),
												 Add#(h_,TLog#(TDiv#(data_width,8)),TMul#(2,TLog#(TDiv#(data_width,8)))),
												 //Add#(b__, TAdd#(3, TLog#(TDiv#(encoded_data_width, 8))),encoded_data_width),
												 Add#(b__, TAdd#(3, TLog#(TDiv#(data_width, 8))), data_width),
												 Add#(c__, 3, TLog#(encoded_data_width))
												);

		Integer byte_offset = valueOf(TLog#(TDiv#(data_width,8)));
		Integer v_num_ver_banks = valueOf(num_ver_banks);
		Integer v_num_hor_banks = valueOf(num_hor_banks);
		Integer v_data_width = valueOf(data_width);
		Integer v_ecc_width  = valueOf(ecc_width);
		Integer v_encoded_data_width = valueOf(encoded_data_width);

`ifndef mail_bram_load
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
		Reg#(Bool) rg_write_response <- mkRegA(False);
		Reg#(Bit#(TLog#(TAdd#(num_ver_banks,1)))) rg_bank_number <- mkRegA(0);

		Reg#(Access_State) rg_mem_state <- mkRegA( `ifdef mail_mem_init  Mem_init  `else Idle `endif );
		Reg#(Access_type) rg_access_type <- mkRegA(Write);
		Reg#(Bool) wr_access_response <- mkWire();
		Wire#(Bool) wr_access_response_write <- mkWire();
		
		Reg#(Bit#(1)) mail_box_interrupt <- mkRegA(0);
		Reg#(Bit#(2)) counter <- mkRegA(0);


		Reg#(Bit#(data_width)) rg_corrected_data <- mkRegA(0);

`ifdef mail_mem_init
		rule rl_init_mem_address_calculation(rg_mem_state == Mem_init);
			if(rg_address == fromInteger(valueOf(TExp#(index_size)) - valueOf(TDiv#(data_width,8)))) begin
				rg_address <= 0;
				rg_mem_state <= Idle;
			end
			else begin
				rg_address <= rg_address + fromInteger(valueOf(TDiv#(data_width,8)));
			end
			`logLevel(mail,0,$format("MAILBOX : memory intiialisation %x \n",rg_address))
		endrule

		for(Integer i=0; i<v_num_ver_banks; i=i+1) begin
			for(Integer j=0; j<v_num_hor_banks; j=j+1) begin
				rule rl_init_mem_to_zero(rg_mem_state == Mem_init);
					data_mem[i][j].put(True,rg_address[valueOf(index_size)-1:byte_offset],0);
					`logLevel(mail,0,$format("MAILBOX : %d : %d : memory intiialisation  at %x \n",i,j,rg_address))
				endrule
			end
		end
`endif
		rule interrupt_generation(mail_box_interrupt == 1'b1);
			counter <= counter + 1;
			if (counter == 2) 
			begin
				mail_box_interrupt <= 1'b0;
				rg_mem_state <= `ifdef mail_mem_init  Mem_init  `else Idle `endif ;
			end
		endrule

		rule terminate_counter((counter == 2) && (mail_box_interrupt == 1'b0));
			counter <= 0;
		endrule

		rule rl_data_memory_read(rg_mem_state == Data_read);
			Vector#(num_hor_banks,Bit#(row_width)) temp_hbank;
			for(Integer i=0; i<v_num_hor_banks; i=i+1) begin
				temp_hbank[i] = data_mem[rg_bank_number][i].read;
				`logLevel(mail,0,$format("MAILBOX : %d : %d : Data read from horizontal bank %x \n",rg_bank_number,i,temp_hbank[i]))
			end
			Bit#(encoded_data_width) temp = pack(temp_hbank);
			`logLevel(mail,0,$format("MAILBOX : %d : Data read from memory access_type : %b encode data : %x \n",rg_bank_number,rg_access_type,temp))
				rg_corrected_data <= truncate(temp);
				if(rg_access_type == Write)
					rg_mem_state <= Data_write;
				else begin
					rg_mem_state <= Idle;
					wr_data <= truncate(temp);
				end
				wr_access_response <= True;
		endrule


		rule rl_data_write(rg_access_type == Write && rg_mem_state == Data_write );
    			Bit#(data_width) data_into_mem = rg_data;

    			// Masking logic for ANY access smaller than the full bus width (128-bit)
    	 	  if(rg_access_size != 3'b100) begin  
        		Bit#(data_width) temp_mask = 0;
        
        		case (rg_access_size)
            		  3'b000: temp_mask = 'hFF;                // Byte
           		  3'b001: temp_mask = 'hFFFF;              // Halfword
            		  3'b010: temp_mask = 'hFFFFFFFF;          // Word
            		  3'b011: temp_mask = 'hFFFFFFFFFFFFFFFF;  // Double Word (64-bit)
            		  default: temp_mask = '1;
        		endcase

        		Bit#(TLog#(data_width)) shift_amt = {rg_address[byte_offset-1:0], 3'b0};
        		Bit#(data_width) mask = temp_mask << shift_amt;
        
        		// Use the mask to preserve parts of the original 128-bit row (rg_corrected_data)
        		data_into_mem = (rg_corrected_data & ~mask) | (rg_data & mask);
    		  end

    			// Encoding and Storage
   		 	Bit#(encoded_data_width) temp = { 0 , data_into_mem};
    			Vector#(num_hor_banks, Bit#(row_width)) temp_encoded_data = unpack(temp);
    
    			for(Integer i=0; i<v_num_hor_banks; i=i+1) begin
        		  data_mem[rg_bank_number][i].put(True, rg_address[valueOf(index_size)-1:byte_offset], temp_encoded_data[i]);
    			end

    			rg_mem_state <= Idle;
    			wr_access_response_write <= True; 
    			//wr_access_response <= True; // Ensure both response wires are high
		endrule

		rule rl_trigger_write_response(rg_write_response==True);
			wr_access_response_write <= True; 
			rg_write_response<=False;
		endrule

		method Action write_request(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(3) access_size) if(rg_mem_state == Idle);
			Bit#(TSub#(index_size,TLog#(TDiv#(data_width,8)))) temp_address = (addr - fromInteger(base_address))[valueOf(index_size)-1:byte_offset];
			rg_data <= data;
			rg_access_size <= access_size;
			Bit#(TLog#(TAdd#(num_ver_banks,1))) temp_bank_no = addr[valueOf(TAdd#(index_size,TLog#(TAdd#(num_ver_banks,1))))-1:valueOf(index_size)];
			if(addr == `INTRBase)
			begin
				mail_box_interrupt <= 1'b1;
				rg_write_response<= True;
    			//wr_access_response <= True; // Ensure both response wires are high
			end
			else
			begin
				rg_bank_number <= temp_bank_no;
				rg_address <= truncate(addr-fromInteger(base_address));
				for(Integer i=0; i<v_num_hor_banks; i=i+1) begin
					data_mem[temp_bank_no][i].put(False,temp_address,?);
				end
				rg_mem_state <= Data_read;
				rg_access_type <= Write;	
			end
			`logLevel(mail,0,$format("MAILBOX : %d : write request address : %x data : %x Absoulte address : %x \n",temp_bank_no,temp_address,data,addr))
		endmethod

		method Bool write_response ;
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
			`logLevel(mail,0,$format("MAILBOX : %d : read request address %x Absoulte address %x \n",temp_bank_no,temp_address,addr))
		endmethod
		method Tuple2#(Bool,Bit#(data_width)) read_response ;
			return tuple2(wr_access_response,wr_data);
		endmethod

		method Bit#(1) return_mail_box_interrupt if(rg_mem_state == Idle);
			return mail_box_interrupt;
		endmethod
	endmodule : mkmailbox

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	interface Ifc_mailbox_axi4#(numeric type addr_width,numeric type id_width, numeric type data_width, numeric type user_width, numeric type num_ver_banks, numeric type num_hor_banks, numeric type index_size);
		interface AXI4_Slave_IFC#(addr_width,id_width, data_width, user_width) slave;
		method Bit#(1) return_mail_box_interrupt;
	endinterface : Ifc_mailbox_axi4

	typedef enum {Idle, Burst} Transfer_State deriving(Eq, Bits, FShow);

	module mkmailbox_axi4#(String modulename, Integer base_address `ifdef testmode , Bool test_mode `endif )(Ifc_mailbox_axi4#(addr_width,id_width,data_width,user_width,num_ver_banks,num_hor_banks,index_size))
								provisos(Add#(a__,index_size,addr_width),
												 Add#(f_,TLog#(TDiv#(data_width,8)),addr_width),
												 Add#(g_,TMul#(2,TLog#(TDiv#(data_width,8))),data_width),
												 Add#(h_,TLog#(TDiv#(data_width,8)),TMul#(2,TLog#(TDiv#(data_width,8)))),
												 Add#(b__, TAdd#(3, TLog#(TDiv#(data_width, 8))), data_width),
												 Mul#(8, k__, data_width),
												 Mul#(16, l__, data_width),
												 Mul#(32, m__, data_width),
												 Mul#(64, n__, data_width),
												 Add#(c__, 3, TLog#(data_width)),
												 Mul#(num_hor_banks,TDiv#(data_width,num_hor_banks),data_width)
												);

		Ifc_mailbox#(addr_width,data_width,num_ver_banks,num_hor_banks,index_size) mailbox <- mkmailbox(modulename, base_address `ifdef testmode, test_mode `endif );
		AXI4_Slave_Xactor_IFC#(addr_width,id_width,data_width,user_width) s_xactor <- mkAXI4_Slave_Xactor;

		Reg#(AXI4_Wr_Addr#(addr_width,id_width,user_width)) rg_write_burst_address <- mkRegA(?);
		Reg#(AXI4_Rd_Addr#(addr_width,id_width,user_width)) rg_read_burst_address  <- mkRegA(?);
		Reg#(Transfer_State) rg_write_state <- mkRegA(Idle);
		Reg#(Transfer_State) rg_read_state  <- mkRegA(Idle);
		Reg#(Bit#(1)) rg_burst_next_read <- mkDRegA(0);
		Reg#(Bit#(8)) rg_read_burst_counter <- mkRegA(0);

		rule rl_write_request(rg_write_state == Idle && rg_read_state == Idle && s_xactor.o_wr_data.first.wlast );
			let wa <- pop_o(s_xactor.o_wr_addr);
			let wd <- pop_o(s_xactor.o_wr_data);
			rg_write_burst_address <= wa;
			mailbox.write_request(wa.awaddr,wd.wdata,wa.awsize);
			`logLevel(mail,0,$format("MAILBOX : write request at %x data %x size %x \n",wa.awaddr,wd.wdata,wa.awsize))
		endrule

		rule rl_write_request_first_burst(rg_write_state == Idle && rg_read_state == Idle && !s_xactor.o_wr_data.first.wlast);
			let wa <- pop_o(s_xactor.o_wr_addr);
			let wd <- pop_o(s_xactor.o_wr_data);
			mailbox.write_request(wa.awaddr,wd.wdata,wa.awsize);
			rg_write_burst_address <= wa;
			rg_write_state <= Burst;
			`logLevel(mail,0,$format("MAILBOX : write request at %x d ata %x size %x \n",wa.awaddr,wd.wdata,wa.awsize))
		endrule

		rule rl_write_request_burst(rg_write_state == Burst);
			let wd <- pop_o(s_xactor.o_wr_data);
			let address = axi4burst_addrgen(rg_write_burst_address.awlen, rg_write_burst_address.awsize, 
																			rg_write_burst_address.awburst, rg_write_burst_address.awaddr);
			mailbox.write_request(address,wd.wdata,rg_write_burst_address.awsize);
			rg_write_burst_address.awaddr <= address;
			if(wd.wlast)
				rg_write_state <= Idle;
			`logLevel(mail,0,$format("MAILBOX : burst write request at %x data %x size %x \n",address,wd.wdata,rg_write_burst_address.awsize))
		endrule

		rule rl_write_response(rg_write_state == Idle);
			let success = mailbox.write_response;
			`logLevel(mail,0,$format("MAILBOX : write response success %b \n",success))
			let resp = AXI4_Wr_Resp{bresp : success?AXI4_OKAY:AXI4_SLVERR, buser : rg_write_burst_address.awuser, bid : rg_write_burst_address.awid};
			s_xactor.i_wr_resp.enq(resp);
		endrule

		rule rl_read_request(rg_read_state == Idle && rg_write_state == Idle);
			let ra <- pop_o(s_xactor.o_rd_addr);
			mailbox.read_request(ra.araddr,ra.arsize);
			if(ra.arlen != 0)
				rg_read_state <= Burst;
			rg_read_burst_address <= ra;
			`logLevel(mail,0,$format("MAILBOX : read request at %x size %x \n",ra.araddr,ra.arsize))
		endrule

		rule rl_read_request_burst(rg_read_state == Burst && rg_burst_next_read == 1);
			if(rg_read_burst_counter == rg_read_burst_address.arlen) begin
				rg_read_state <= Idle;
				rg_read_burst_counter <= 0;
			end
			else begin
				rg_read_burst_counter <= rg_read_burst_counter + 1;	
				let address = axi4burst_addrgen(rg_read_burst_address.arlen,rg_read_burst_address.arsize,rg_read_burst_address.arburst,rg_read_burst_address.araddr);
				rg_read_burst_address.araddr <= address;
				mailbox.read_request(address,rg_read_burst_address.arsize);
				`logLevel(mail,0,$format("MAILBOX : burst read request %d  at %x size %x \n",address,rg_read_burst_counter,rg_read_burst_address.arsize))
			end
		endrule

		rule rl_read_response;
			rg_burst_next_read <= 1;
			let {success, data} = mailbox.read_response;
			Bit#(data_width) temp = data;
			Bit#(TLog#(TDiv#(data_width, 8))) offset = truncate(rg_read_burst_address.araddr);
			Bit#(data_width) shifted_data = data >> {offset, 3'b0};
			case (rg_read_burst_address.arsize)
				3'b000: temp = duplicate(shifted_data[7:0]);
				3'b001: temp = duplicate(shifted_data[15:0]);
				3'b010: temp = duplicate(shifted_data[31:0]);
				3'b011: temp = duplicate(shifted_data[63:0]);  
				default: temp = data;                        
			endcase
			`logLevel(mail, 0, $format("MAILBOX : read response original: %h mirrored: %h success %b \n", data, temp, success))
			
		let resp = AXI4_Rd_Data{
				rresp: success?AXI4_OKAY:AXI4_SLVERR, 
				rdata:temp, 
				rlast:rg_read_burst_counter==rg_read_burst_address.arlen, 
				ruser:0, 
				rid:rg_read_burst_address.arid
			};

			`logLevel(mail, 0, $format("MAILBOX : read response original: %h mirrored: %h success %b \n", data, temp, success))
			

			s_xactor.i_rd_data.enq(resp);
		endrule


		interface slave = s_xactor.axi_side;
		method   return_mail_box_interrupt = mailbox.return_mail_box_interrupt;
	endmodule : mkmailbox_axi4

endpackage : mailbox
