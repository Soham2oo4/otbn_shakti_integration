package Data_Encoder;

// parameter dsize_width_p=2;
// parameter data_width_p=2**dsize_width_p;
// parameter lrid_width_p=
// parameter daddress_width_p=32;

typedef enum{
	NIL,EXCEPTION,
	INTERRUPT,
	EXCEPTION_OR_INTERRUPT_RETURN,
	NON_TAKEN_BRANCH,
	TAKEN_BRANCH,
	UNINFERABLE_JUMP,
	RESERVED,
	UNINFERABLE_CALL,
	INFERABLE_CALL,
	UNINFERABLE_TAIL_CALL,
	INFERABLE_TAIL_CALL,
	CO_ROUTINE_SWAP,
	RETURN,
	OTHER_UNINFERABLE_JUMP,
	OTHER_INFERABLE_JUMP
}I_TYPE deriving(Bits,Eq);

typedef enum{
	LOAD=0,
	STORE=1,
	CSR_READ_WRITE=4,
    	CSR_READ_SET=5,
    	CSR_READ_CLEAR=6,
    	ATOMIC_SWAP=8,
    	ATOMIC_ADD=9,
    	ATOMIC_AND=10,
    	ATOMIC_OR=11,
    	ATOMIC_XOR=12,
    	ATOMIC_MAX=13,
    	ATOMIC_MIN=14,
    	CONDITIONAL_STORE_FAILURE=15
}D_TYPE deriving(Bits,Eq);
	
typedef enum{
   	UNREPORTED_CONTEXT,
   	IMPRECISE_CONTEXT, 
   	PRECISE_CONTEXT, 
	ASYNC_DISCON
}C_TYPE deriving(Bits,Eq);
    
typedef enum{
   	EXT,
   	BRANCH, 
   	ADDR,     
   	SYNC
}FORMAT_T deriving(Bits,Eq);

typedef enum{
   	START,
	TRAP, 
   	CONTEXT,
   	SUPPORT
}SYNC_T deriving(Bits,Eq); 

typedef enum{
    	NO_CHANGE,
    	ENDED_REP, 
    	TRACE_LOST,
    	ENDED_NTR 
}QUAL_STATUS_T deriving(Bits,Eq);

typedef enum{
	U,
	S_HS,
	RESERVED_1,
	M,
	D,
	VU,
	VS,
	RESERVED_2
}PRIV_T deriving(Bits,Eq);

typedef enum{
	FULL,
	DIFFERENTIAL
}ADDRESS_T deriving(Bits,Eq);

typedef enum{
	COMP,
	NO_COMP
}LSB_WIDTH_T deriving(Bits,Eq);

typedef enum{
	FULL_ADDR_DATA,
	DIFF_ADDR_XOR_DATA,
	DIFF_ADDR_FULL_DATA,
	DIFF_ADDR_DATA
}DIFF_T deriving(Bits,Eq);

typedef enum{
	LOAD_ALIGNED=0,
	LOAD_UNALIGNED=1,
	STORE_ALIGNED=2,
	STORE_UNALIGNED=3,
	CSR=5,
	ATOMIC=6
}D_FORMAT_T deriving(Bits,Eq);	

typedef enum{
	FULL,
	DIFFERENTIAL
}DIFF_ADDRESS_T deriving(Bits,Eq);

typedef enum{
	FULL,
	COMPRESSED,
	DIFFERENTIAL
}DIFF_DATA_T deriving(Bits,Eq);

typedef enum{
	START,
	TRACE,
	END,
	NONE
}PACKET_TYPE deriving(Bits,Eq);


typedef Bit#(100) TE_DATA;				// Maximum size of Encoder output packet is 512 bits, as per TISC-V Trace spec for Instruction Trace
typedef struct{	
	Bit#(1) dretire;				// Number of instructions retired per cycle
	D_TYPE dtype;					// Encoding in TypeEnums.bsv
	Bit#(32) daddress;				// Note that only daddress is given and not daddress_size. So it can be assumed constant
	Bit#(2) dsize;					// dsize, Maximum bit width assumed to be 2, pertaining to single byte, 16-bit access, 32-bit access and 64-bit access
	Bit#(32) data;					// Value of accessed data
}Hart_to_encoder_Unified deriving(Bits,Eq);
	
interface Data_Encoder;
	// Method to constantly send configuration, ingress port and PACKET_TYPE to the encoder
	(*always_ready,always_enabled*) method Action send_inst(Hart_to_encoder_Unified ins,PACKET_TYPE t,Bool no_address,Bool no_data,Bool full_daddress,Bool full_data);
	// Method to view the output of the te_data packet register at the present clock cycle
	method TE_DATA output_packet();
endinterface

(*synthesize*)
	module mkData_Encoder(Data_Encoder);
		// Configuration Registers (Updated only during START condition)
		Reg#(Bool) exclude_address<-mkReg(False);
		Reg#(Bool) exclude_data<-mkReg(False);
		Reg#(Bool) full_addr<-mkReg(False);
		Reg#(Bool) full_data<-mkReg(False);
		
		// Configuration wires
		Wire#(Bool) exclude_address_w<-mkDWire(False);
		Wire#(Bool) exclude_data_w<-mkDWire(False);
		Wire#(Bool) full_addr_w<-mkDWire(False);
		Wire#(Bool) full_data_w<-mkDWire(False);
		
		Wire#(DIFF_T) diff_mode<-mkReg(FULL_ADDR_DATA);		// Data and Address compression mode, for Load-store packets for which both address and data are to be included 
		
		Reg#(Bool) func<-mkReg(False);				// Indicates that the encoder has already executed a START condition for which END condition has not yet been executed
		Reg#(TE_DATA) te_data<-mkReg(0);			// Data Trace Encoder output packet register 
		Reg#(Bool) packet_en<-mkReg(False);			// Indicates that a packet can be serially clocked out during the current clock cycle (maybe used as an enable signal for an external serial data transfer unit, connected to the "te_data" register)
		
		Wire#(PACKET_TYPE) typ<-mkDWire(NONE);			// Encoding given in TypeEnums.bsv, not included in RISC-V Trace spec
		
		// Address compression
		// Last sent address and data, updated during the sending of every te_data packet
		Reg#(Bit#(32)) last_sent_addr<-mkReg(0);		
		
		Reg#(Bit#(32)) last_sent_data<-mkReg(0);
		
		Wire#(Bit#(32)) intermediate_addr<-mkDWire(0);		// Intermediate address before right shifting to remove redundant bits
		Wire#(Bit#(32)) final_addr<-mkDWire(0);
		Wire#(Bit#(32)) final_data<-mkDWire(0); 
		Wire#(Bit#(32)) mask<-mkDWire(0);			// Mask for checking alignment of address
		
		Wire#(Bool) cond_w<-mkDWire(False);			// Condition for Trace operation
		
		// Trace classification wires
		Wire#(Bool) is_load_store<-mkDWire(False);			 
		Wire#(Bool) is_load<-mkDWire(False);
		Wire#(Bool) is_csr<-mkDWire(False);
		Wire#(Bool) is_atomic<-mkDWire(False);
		
		Wire#(Bool) is_aligned<-mkDWire(False);			// Indicates whether the address sent through the ingress port is aligned to data access width
		Wire#(Bool) is_valid<-mkDWire(False);			// Indicates whether the configuration and/or the order of packets requested by user is valid
		
		// Ingress port sent by RISC-V HART every clock cycle
		Wire#(Hart_to_encoder_Unified) curr<-mkWire; 
		
		Wire#(D_FORMAT_T) format<-mkDWire(LOAD_ALIGNED);	// Packet format for LOAD-STORE Data Trace
		Wire#(DIFF_ADDRESS_T) address_mode<-mkDWire(FULL);	// Mode of address compression, as specified in configuration
		Wire#(DIFF_DATA_T) data_mode<-mkDWire(FULL);		// Mode of data compression, as specified in configuration
		
		function TE_DATA support_packet(Bit#(1) en);		// Value Function to return a support packet, packet format given under Instruction Trace Encoder output packets, in RISC-V Trace spec. Packets generated using the principle that during serial transmission, the topmost field in the packet format hould be transmitted first, which its LSB being clocked out first
									// enable "en" = 1 corresponds to start of trace and 0 corresponds to end of trace 
			// last_sent_addr<=curr.daddress;
			return extend({2'b0,1'b0,en,2'b11,2'b11});	// Fornat = 3 (sync), Subformat = 3 (Support), 'doptions' not included
		endfunction
		
		function Bit#(32) compress_Data();			// Function to return compressed data, Note: The final number of bits of data after compression is not reduced, by removing the redundant bits, hence the function performs only the operation involved in compression and not the final compression
				if(data_mode==FULL)			// Function returns the data as such for "FULL" mode and performs XOR compression relative to the "last_sent_data" for "XOR" compression. Differential data compression not used in "data_encoder_model.py"
					return curr.data;
				else
					return curr.data^last_sent_data;
		endfunction
					
		rule compress_Address(cond_w && is_load_store);		// Performs address compression
			if(address_mode==FULL)				// Redundant address bits not removed
				intermediate_addr<=curr.daddress;	// Returns full address for "FULL" address mode and differential address (relative to "last_sent_addr" register) 
			else
				intermediate_addr<=curr.daddress-last_sent_addr;	// Intermediate address is produced, which is in turn used in packet generation, after removing the redundant LSBs (zeros) according to the data access size, in case of aligned accesses
				
		endrule 
		
		function TE_DATA encode_load_store(); // (func && is_load_store);	// This function is to be defined before the rule "encode", where it is being used
			// compress_Address();			
			if(exclude_address)						// Packet generation for "only data" configuration 
				return extend({curr.data,pack(diff_mode),curr.dsize,pack(format)});
			else if(exclude_data)						// Packet generation for "only address" configuration 
				return extend({final_addr,pack(diff_mode),curr.dsize,pack(format)});
			else begin							// Packet deneration for "address and data" configuration
				if(curr.dsize==0)					// Insert data bits based on dsize value, as the actual "Compress_data" return value is of size 32 bits which corresponds to maximum data width
					return extend({final_addr,(compress_Data())[7:0],pack(diff_mode),curr.dsize,pack(format)});
				else if(curr.dsize==1)	
					return extend({final_addr,(compress_Data())[15:0],1'b1,pack(diff_mode),curr.dsize,pack(format)});
				else if(curr.dsize==2)
					return extend({final_addr,(compress_Data())[23:0],2'b11,pack(diff_mode),curr.dsize,pack(format)});
				else		// dsize==3
					return extend({final_addr,(compress_Data())[31:0],3'b111,pack(diff_mode),curr.dsize,pack(format)});
			end
		endfunction
		
		// Wires are updated every clock cycle, or else it may cause floating values (DWires are used mostly for eliminating the problem of whas() function being  
		rule encode(cond_w && is_load_store);					
			// let pkt<-encode_load_store();
			format<=(is_aligned)?(is_load)?LOAD_ALIGNED:STORE_ALIGNED:(is_load)?LOAD_UNALIGNED:STORE_UNALIGNED;	// Encoding given in TypeEnums.bsv
			data_mode<=(full_addr)?FULL:(full_data)?FULL:COMPRESSED;						// Encoding given in TypeEnums.bsv
			address_mode<=(full_addr)?FULL:DIFFERENTIAL;								// Encoding given in TypeEnums.bsv
			// else if(is_load_store) begin
			//	let pkt<-encode_csr();
			//	te_data<=pkt;
			//	format<=CSR;
			// end						
			// else begin
			//	let pkt<-encode_atomic();
			//	te_data<=pkt;
			//	format<=ATOMIC;
			// end
		endrule
		
		rule update_addr(func && is_load_store && typ==TRACE);	// Final address obtained after removing the redundant LSBs (zeros) of address based on data access size (2^dsize bytes) in case of aligned data access
			if(is_aligned) begin
				case(curr.dsize)				
					0: final_addr<=intermediate_addr;
					1: final_addr<={1'b0,intermediate_addr[31:1]};
					2: final_addr<={2'b0,intermediate_addr[31:2]};
					default: final_addr<={3'b0,intermediate_addr[31:3]};
				endcase
			end
			else
				final_addr<=intermediate_addr;
		endrule
		
		rule update_mask;					// Rule to determine the mask with which the address is to be performed Bitwise-AND to check alignment
			if(cond_w && is_load_store) begin		
				case(curr.dsize)
					0: mask<=0;			// Single byte access, so address increments by 1
					1: mask<=1;			// 2-Byte access, so address increments by 2 ( 0b10 ), hence last LSB of address is zero 
					2: mask<=3;			// 4-Byte (32-bit) access, so address increments by 4 ( 0b100 )
					3: mask<=7;			// 8-Byte (64-bit) access, so address increments by 8 ( 0b1000 ) 
				endcase
			end
			else
				mask<=0;				// Just for idle condition
		endrule	
		
		rule update_cond;					// Condition for functioning of trace and ingress port indicates data access instrcution retirement
			cond_w<=(func && typ==TRACE && curr.dretire!=0);
		endrule
		
		rule set_status_fields;					// Status fields specific to packet classification
			is_load<=(cond_w && curr.dtype==LOAD);
			is_load_store<=(cond_w && (curr.dtype==LOAD || curr.dtype==STORE));
			is_csr<=(cond_w && (curr.dtype==CSR_READ_WRITE || curr.dtype==CSR_READ_SET || curr.dtype==CSR_READ_CLEAR));
			is_atomic<=(cond_w && (curr.dtype==ATOMIC_SWAP || curr.dtype==ATOMIC_ADD || curr.dtype==ATOMIC_AND || curr.dtype==ATOMIC_OR || curr.dtype==ATOMIC_XOR || curr.dtype==ATOMIC_MAX || curr.dtype==ATOMIC_MIN));
			// is_aligned<=(cond_w && ((curr.daddress&mask)==0));
		endrule	
		
		rule status_load_store;					// Condition for alignment of data access addresses to dsize
		 	is_aligned<=(cond_w && ((curr.daddress&mask)==0));
		endrule
		
		(*mutually_exclusive="start_trace,trace,end_trace,drive_other_signals"*)
		rule start_trace(typ==START);				// Fires when there is a START condition, "typ" input by user
			if(!func) begin					// Start condition valid only if the encoder wasn't functioning initially
				func<=True;				// Update func register 
				exclude_address<=exclude_address_w;	// Update configuration registers from user configuration
				exclude_data<=exclude_data_w;
				full_addr<=full_addr_w;
				full_data<=full_data_w;
				// Address and Data compression mode for Both Address and Data configuration
				// Full Address and Differential Data not allowed
				diff_mode<=(full_addr_w)?FULL_ADDR_DATA:(full_data_w)?DIFF_ADDR_FULL_DATA:DIFF_ADDR_XOR_DATA;
				// Excluding both Address and Data or configuring Full Address and Differential Data are invalid, so packet cannot be latched and transmitted in the following cycle
				is_valid<=((!exclude_address_w)||!(exclude_data_w))&&(!(full_addr_w)||full_data_w);
				// Support packet with Encoder Enable (1'b1) is latched into packet register
				te_data<=support_packet(1'b1);
			end
			else begin
				is_valid<=False;
				te_data<=0;
			end
		endrule
		
		rule trace(typ==TRACE);					// Data Trace 
			if(func) begin					// Trace can function only if func is True 
				last_sent_data<=curr.data;		// Address and Data are latched for future use for compression
				last_sent_addr<=curr.daddress;
				te_data<=encode_load_store();		// Load Store encoding, CSR and Atomic are to be designed
				is_valid<=(curr.dretire!=0);		// Only if data access instruction retirement is indicated by ingress port. paclet has to be latched and transmitted
			end
			else
				is_valid<=False;
		endrule
		
		rule end_trace(typ==END);				// End condition indicated by user
			if(func) begin					// Valid only if trace encoder was functioning already
				func<=False;				// Update func register
				te_data<=support_packet(1'b0);		// Latch support packet with encoder disable
				is_valid<=True;
			end
			else
				is_valid<=False;
		endrule
		
		rule drive_other_signals(typ==NONE);
			is_valid<=False;				// Drive is_valid signal in order to prevent floating
		endrule
		
		rule transmit_packet;
			packet_en<=is_valid;				// Write is_valid in register to transmit packet in the following cycle (may be the enable signal of a serial transmitter circuit (not modelled in the program)
		endrule
		
		// Receive input from user every clock cycle
		method Action send_inst(Hart_to_encoder_Unified ins,PACKET_TYPE t,Bool no_address,Bool no_data,Bool full_daddress,Bool full_data_pkt);
			action
				curr<=ins;				// Current Ingress port
				typ<=t;					// Packet type specified by suer
				exclude_address_w<=no_address;		// Configuration wire updated every cycle, transferred to corresponding register only during START condition
				exclude_data_w<=no_data;
				full_addr_w<=full_daddress;
				full_data_w<=full_data_pkt;
			endaction
		endmethod
		
		// Return packet register value during the present clock cycle
		method TE_DATA output_packet(); // if(func); This implicit condition didn't cause any conflict!!!
			return te_data;
		endmethod
	endmodule

endpackage		
			
	
