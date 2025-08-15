package TypeEnums;

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

endpackage 
