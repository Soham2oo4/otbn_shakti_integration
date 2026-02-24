
 import ConcatReg ::*;
 import RegFile :: * ;     
 import BUtils::*;
 import MIMO_TRACE_MODIFY::*;
 import DefaultValue::*;
 import Vector :: * ;
 import AXI4_Lite_Types   :: *;
 import AXI4_Lite_Fabric  :: *;
 import AXI4_Types::*;
 import AXI4_Fabric::*;
 import Semi_FIFOF::*;
 import FIFOF        :: * ;
 import SpecialFIFOs :: * ;

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
}QUAL_STATUS_T deriving(Bits,Eq);  //not needed for nows

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

/*typedef enum{
	COMP,
	NO_COMP
}LSB_WIDTH_T deriving(Bits,Eq);*/

typedef enum{
	IPREV,
	ICURR
}IEXCEPTION deriving(Bits,Eq);

typedef struct{
	I_TYPE i_type;
	Bit#(4) cause;
	Bit#(64) tval;
	PRIV_T  priv;
	Bit#(64) iaddr;
	Bit#(2) iretire;				
	Bit#(1) ilastsize;			
        Bit#(1) qual;
					
}Hart_to_encoder_interface deriving(Bits,Eq);
  
interface IFC_trace_engine#(numeric type addr_width,numeric type id_width, numeric type data_width , numeric type user_width);            
    method ActionValue#(Bool) write_req (Bit#(addr_width) addr,Bit#(data_width) data);
    method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr ); 
    method Action trace_interface(Bit#(4) itype ,Bit#(4) cause, Bit#(64) tval, Bit#(3) priv, Bit#(64) iaddr, Bit#(2) iretire, Bit#(1) ilastsize); 
    method Bit#(1) trace_interrupt;    
    interface AXI4_Master_IFC#(addr_width,id_width,data_width, user_width) master;   	      
endinterface 
  

module mktrace_engine#(parameter Integer memtrace_base, parameter Integer memtrace_end)(IFC_trace_engine#(addr_width,id_width,data_width,user_width))

      provisos(Add#(a__, 16, data_width),         
              Mul#(64, c__, data_width),
              Mul#(32, d__, data_width),
              Mul#(16, b__, data_width),
              Mul#(8, e__, data_width),
              Add#(f__, TLog#(TDiv#(data_width, 8)), addr_width),
              Add#(g__, 4, addr_width),
               Add#(h__, TLog#(TDiv#(data_width, 8)), 32),
               Add#(i__, addr_width, 32),
               Add#(j__, 32, data_width)

          );
                
      Reg#(Bit#(1))  rg_Active <- mkRegA(0);  //021f
      Reg#(Bit#(1))  rg_teEnable <- mkRegA(0);
      Reg#(Bit#(1))  rg_iTracing <- mkRegA(0);
      Reg#(Bit#(2))  rg_ResyncMode	<- mkRegA(0);
      Reg#(Bit#(4))  rg_ResyncMax	<- mkRegA(0);
      Reg#(Bit#(1))  rg_comp_ext	<- mkRegA(0);
      Reg#(Bit#(16)) rg_trace_control = concatReg7(readOnlyReg(6'd0),rg_comp_ext,rg_ResyncMax,rg_ResyncMode,rg_iTracing,rg_teEnable,rg_Active);
      
      Reg#(Hart_to_encoder_interface) rg_prev <- mkRegA(unpack(0)); 
      Reg#(Hart_to_encoder_interface) rg_curr <- mkRegA(unpack(0));
      Reg#(Hart_to_encoder_interface) rg_next <- mkRegA(unpack(0));
  
      Reg#(Bit#(1)) re_support_gen <- mkRegA(0);

      Reg#(Bit#(5))  rg_branches <- mkRegA(0); 
      Reg#(Bit#(31)) rg_branch_map <- mkRegA(0); 
      Reg#(Bit#(16)) rg_prev_trace_control	<- mkRegA(0);
      Reg#(Bit#(9))  rg_resync_count <- mkRegA(0); 
      Reg#(Bit#(1))  rg_reported <- mkRegA(0); 
      //Reg#(Bit#(256))rg_packet <- mkRegA(0); 
      FIFOF#(Bit#(256)) fifo_packet <- mkSizedBypassFIFOF(2);
      
      Reg#(Bit#(1))  rg_pac_gen <- mkRegA(0);
      Reg#(Bit#(31)) rg_test_count <- mkRegA(0); 
      Reg#(Bit#(64)) rg_iaddr_last_reported <- mkReg(0); 
      Reg#(Bit#(1))  rg_resync_br_prev_val_sel <- mkRegA(0);
      Reg#(Bit#(1))  rg_notify <- mkRegA(0);
      Reg#(Bit#(1))  rg_updiscon <- mkRegA(0);
      Reg#(Bit#(1))  rg_irreport <- mkRegA(0);
      
      Reg#(Bit#(1))  rg_waiting_resp <- mkRegA(0);
      Reg#(Bit#(2))  rg_size <- mkRegA(0);
     // Reg#(Bit#(addr_width))  rg_address <- mkRegU();
      Reg#(Bit#(32))  rg_address <- mkRegU(); //hard coded to 32 

      
      Wire#(Hart_to_encoder_interface) wr_trace_in    <- mkDWire(unpack(0));
      Wire#(Bit#(1))                   wr_compress_en <- mkDWire(0);
      
      Reg#(Bit#(1))  rg_last_was_updiscon <- mkRegA(0);
      Reg#(Bit#(1))  rg_flush_pipeline <- mkRegA(0);
            
          AXI4_Master_Xactor_IFC#(addr_width, id_width, data_width, user_width) master_xactor <- mkAXI4_Master_Xactor(); 
            
          
        MIMOConfiguration cfg = defaultValue;
      cfg.unguarded=False;
      MIMO#(32,8,2048,Bit#(8)) trace_sink_buffer <- mkMIMO(cfg);
            
              
                  function Bool is_exceptions(Hart_to_encoder_interface ifc);
          return (ifc.i_type==EXCEPTION || ifc.i_type==INTERRUPT);
        endfunction

        function Bool is_updiscons(Hart_to_encoder_interface ifc); 
          return (ifc.i_type==UNINFERABLE_JUMP || ifc.i_type==UNINFERABLE_CALL || ifc.i_type==UNINFERABLE_TAIL_CALL || ifc.i_type==OTHER_UNINFERABLE_JUMP || ifc.i_type==RETURN || ifc.i_type==EXCEPTION_OR_INTERRUPT_RETURN);
        endfunction
                          
        
                
          
        rule compress( wr_compress_en == 1 || rg_Active == 0  ) ; 
        
          //$display("rule compress fired");
        
          //  wr_ingress_in_ready <= 1; 
              // $display("trace_interface_firing");                   
            if(rg_teEnable == 1 && wr_trace_in.qual == 1 ) begin    
              rg_prev <=  rg_curr ;   
              rg_curr <=  rg_next ;     
              rg_next <=  wr_trace_in ;   end  
              //$display("inside_rule_wr_trace_in:-  %d,%d,%d,%d,%h,0,0,%d,%d" , wr_trace_in.i_type, wr_trace_in.cause, wr_trace_in.tval, wr_trace_in.priv , wr_trace_in.iaddr ,wr_trace_in.iretire ,wr_trace_in.ilastsize); end
              // $display("%d,%d,%d,%d,%h,%d,%d,%d" , itype, cause, tval, priv , iaddr ,iretire ,ilastsize, rg_iTracing);end
              // rg_next <=  unpack({ rg_iTracing, ilastsize,iretire, iaddr , priv , tval , cause, itype   }); end                                              
              else if (rg_flush_pipeline == 1) begin  
                rg_prev <= unpack(0);   
                rg_curr <= unpack(0);     
                rg_next <= unpack(0);
              end 
                                
            rg_prev_trace_control <= rg_trace_control; 
          
              SYNC_T lv_format = START; 
        
        IEXCEPTION lv_iexception = IPREV ;
        Bit#(1) lv_thaddr =  0 ;
        Bit#(1) lv_en  = 0 ;
        Bit#(1) lv_with_address = 0 ; //rg_pac_gen
        Bit#(1) lv_pac_gen = 0 ;  
        Bit#(1) lv_which_packet  = 0;
        let lv_qual_status  = NO_CHANGE;
                                
        let lv_resyncmax = 1 << (rg_ResyncMax + 4); 
        let lv_branch = rg_curr.i_type == NON_TAKEN_BRANCH || rg_curr.i_type == TAKEN_BRANCH; //4,5           
        let lv_ppccd =  rg_curr.priv != rg_prev.priv;  
        let lv_ppccd_br = rg_next.priv !=rg_curr.priv; 
        let lv_is_branch=rg_curr.i_type ==  TAKEN_BRANCH;         
        let lv_resync_count_max = rg_resync_count == lv_resyncmax;  
        let lv_fast_branches = (lv_branch)? rg_branches +1 : rg_branches;  
        let lv_fast_branch_map = (!lv_is_branch && lv_branch)? rg_branch_map | 1 << rg_branches : rg_branch_map;  
          
        let lv_address_handler_nc_full = rg_curr.iaddr[63 :1];
        let lv_address_handler_nc_diff = (rg_curr.iaddr [63 :1] - rg_iaddr_last_reported[63 :1]);  
        let lv_addr_full = (rg_comp_ext== 0 ) ? signExtend(lv_address_handler_nc_full[62:1]) : lv_address_handler_nc_full;
        let lv_addr_diff = (rg_comp_ext== 0) ? signExtend(lv_address_handler_nc_diff[62:1]): lv_address_handler_nc_diff; 
        
        let lv_notify = lv_address_handler_nc_diff[62] ;            
        let lv_updiscon =pack((is_updiscons(rg_prev))&&(is_exceptions(rg_next)||(lv_ppccd)|| lv_resync_count_max ))^ lv_notify;
        let lv_irreport = lv_updiscon ; 
          
        
        
        //$display("rg_trace_control %h \n", rg_trace_control);
          //$display("rg_prev_trace_control %h \n", rg_prev_trace_control);
        if(re_support_gen==1) begin
        lv_pac_gen=1;
        lv_format=SUPPORT;
        lv_which_packet=1;
        lv_qual_status=ENDED_REP;
        re_support_gen<=1'b0;  
        rg_flush_pipeline<=0;      
        end

        else if (rg_prev_trace_control != rg_trace_control) begin                     
        if (rg_prev_trace_control[1]==1'b0 /*|| rg_last_was_updiscon == 1'b1*/ ) begin    // for start 
          lv_pac_gen = 1; 
          lv_format= SUPPORT;                  
          lv_which_packet = 1;
          lv_qual_status=(rg_prev_trace_control[1]==1'b0)?NO_CHANGE:ENDED_NTR;  // for alreasy udiscon report 
        end                     
      else begin   // for end 
          lv_pac_gen = 1;
          lv_with_address=1;
          lv_which_packet = 0;
          re_support_gen <=1; 
          rg_flush_pipeline <= 1;                    
            end  
                        
          //   lv_qual_status = { rg_last_was_updiscon,rg_prev_trace_control[1]};    /**/
                
          //   $display("format 3,subformat 3 \n");
            /*$display("rg_trace_control %h \n", rg_trace_control);
            $display("rg_prev_trace_control %h \n", rg_prev_trace_control);
            $display("lv_pac_gen %h \n", lv_pac_gen); 
            $display("lv_format %h \n", lv_format); 
            $display("lv_which_packet %h \n", lv_which_packet);*/
          end

          // else if ( re_support_gen == 1'b1 ) begin
          //     lv_
                                              
          else if ( rg_curr.qual == 1 && rg_teEnable==1 ) begin   
          
          /*$display(" rg_curr.iadd %h  \n" , rg_curr.iaddr);
            $display(" rg_prev.iadd %h \n" , rg_prev.iaddr);
            $display(" rg_curr.i_type %h  \n" , rg_curr.i_type);
            $display(" rg_prev.i_type %h  \n" , rg_prev.i_type);
            $display(" rg_curr.cause %h  \n" , rg_curr.cause);
            $display(" rg_prev.cause %h  \n" , rg_prev.cause);
            $display(" rg_iaddr_last_reported %h  \n" , rg_iaddr_last_reported);
            $display(" rg_branches \n" , rg_branches);  
            $display(" rg_branch_map \n" , rg_branch_map);*/
                          
            if(is_exceptions(rg_prev)) begin                      
              if (is_exceptions(rg_curr)&& rg_curr.iretire == 0) begin  
                rg_reported <= 1;  
                lv_pac_gen = 1; 
                lv_format= TRAP;
                lv_thaddr= 0 ; 
                lv_which_packet = 1;  
                lv_iexception = IPREV;
              end
                                
              else begin
                if (rg_reported == 1) begin 
                  rg_reported <= 0; 
                  lv_pac_gen = 1;
                  lv_format= START ;
                  lv_which_packet = 1;
                end 
                                  
                else begin
                  lv_pac_gen = 1;
                  lv_format= TRAP ;
                  lv_thaddr= 1; 
                  lv_which_packet = 1; 
                  lv_iexception = IPREV;
                end        
              end                                
            end
                            
            else if (lv_ppccd || rg_resync_count > lv_resyncmax || ((rg_curr.qual == 1  && rg_prev.qual ==0) && (rg_iaddr_last_reported != rg_curr.iaddr))  ) begin                    
              
              lv_pac_gen = 1;
              lv_format= START ;
              lv_which_packet = 1;                                                                 
            end
                                                        
            else if (is_updiscons(rg_prev)) begin                            
              if (is_exceptions(rg_curr) && rg_curr.iretire == 0  ) begin                     
                rg_reported <= 1;
                lv_pac_gen = 1;
                lv_format= TRAP ; 
                lv_thaddr= 0 ; 
                lv_which_packet = 1; 
                lv_iexception = ICURR;
              end
              else begin 
                lv_pac_gen = 1; 
                lv_with_address=1;  
                lv_which_packet = 0;                                       
              end  
            end                  
            
            else if ((lv_resync_count_max && (lv_fast_branches !=0)) || (rg_curr.iretire > 0  &&(is_exceptions(rg_curr)))) begin                                  
              lv_pac_gen = 1;
              lv_with_address=1;
              lv_which_packet = 0;
                            
            end 
            else if  ((is_exceptions(rg_next) && rg_next.iretire == 0)|| lv_ppccd_br) begin
              lv_pac_gen = 1;                     
              lv_with_address=1; 
              lv_which_packet = 0;
                            
            end                                                     
            else if (lv_fast_branches == 31 ) begin   
              lv_pac_gen = 1;
              lv_with_address=0; 
              lv_which_packet = 0;                                              
            end   
          end 
                          
                                          
            if (lv_pac_gen == 1) begin 
                        
                                              
              if ( lv_which_packet == 1 && (lv_format == START || lv_format == TRAP)) begin 
                rg_resync_count<=0; 
                rg_iaddr_last_reported<=rg_curr.iaddr; 
              end 
              else begin rg_resync_count <= rg_resync_count+1; 
                //$display("resync count %d", rg_resync_count);    
              end                           
                                              
              if (lv_which_packet == 1 ) begin  
                    
                Bit#(1) lv_br_pac = (lv_branch && lv_is_branch)? 0 : 1;                                      
                                                      
                case(lv_format)
                  START: begin				    				              
                      fifo_packet.enq(signExtend({lv_addr_full,32'b0,pack(rg_curr.priv)[1:0],lv_br_pac,pack(lv_format),2'b11}));
                      //$display("%d",rg_test_count +3," rg_packet:- %h", rg_packet);
                      //$display("%d",rg_test_count," format3, subformat 0 ");
                      //$display("%d,%d,%h,%d,_,_,_,_,0,_,_,_,_,_,_,_,_,%d,_,_,_,_,_,_,_,_",2'b11,pack(lv_format),lv_addr_full,lv_br_pac,pack(rg_curr.priv));					   
                        rg_test_count <= rg_test_count + 1;				    
                  end
                
                  TRAP: begin  
                      // $display("%d",rg_test_count," format3,, subformat 1 ");
                      let lv_iexception_reg = (lv_iexception == IPREV)? rg_prev : rg_curr;       
                      if (lv_iexception_reg.i_type==INTERRUPT)begin
                        // $display("%d,%d,%h,%d,_,_,_,_,0,%d,_,_,%d,_,_,_,_,%d,_,_,%d,_,_,_,_,_",2'b11,pack(lv_format),lv_addr_full,lv_br_pac ,pack(lv_iexception_reg.cause),1'b1,pack(rg_curr.priv)[1:0],lv_thaddr);
                        fifo_packet.enq(signExtend({lv_addr_full,lv_thaddr,1'b1,{1'b0,pack(lv_iexception_reg.cause)},32'b0,pack(rg_curr.priv)[1:0],lv_br_pac,pack(lv_format),2'b11}));
                      end 		                 
                      else  begin 
                        //$display("%d,%d,%h,%d,_,_,_,_,0,%d,_,_,%d,_,_,_,_,%d,_,_,%d,%h,_,_,_,_",2'b11,pack(lv_format),lv_addr_full,lv_br_pac ,pack(lv_iexception_reg.cause),1'b0,pack(rg_curr.priv)[1:0],lv_thaddr,pack(rg_curr.tval));
                        fifo_packet.enq(signExtend({pack(rg_curr.tval),lv_addr_full,lv_thaddr,1'b0,{1'b0,pack(lv_iexception_reg.cause)},32'b0,pack(rg_curr.priv)[1:0],lv_br_pac,pack(lv_format),2'b11}));
                      end  
                      rg_test_count <= rg_test_count + 1;
                  end
                    
                  CONTEXT: begin	 // unusable right now
                      fifo_packet.enq(signExtend({pack(rg_curr.priv)[1:0],pack(lv_format),2'b11}));
                    //  $display("%d",rg_test_count+3," format3, , subformat 2 ");
                    //$display("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",2'b11,pack(lv_format),lv_addr_full,lv_is_branch);
                      rg_test_count <= rg_test_count + 1;
                  end
                  
                  SUPPORT: begin
                    fifo_packet.enq(signExtend({1'b0,pack(lv_qual_status),1'b0,rg_teEnable,pack(lv_format),2'b11}));
                  // $display("%d",rg_test_count," format3, , subformat 3 ");
                    // $display("%d,%d,_,_,_,_,_,_,_,_,%d,%d,_,_,_,_,%d,_,%d,_,_,_,_,_,_,_",2'b11,pack(lv_format),rg_teEnable,1'b0,1'b0,pack(lv_qual_status));//pack(rg_curr.qual));
                    rg_test_count <= rg_test_count + 1;
                  end
          
                endcase
              end 
              else   begin                                
                                    // $display("rg_branches           %d" ,rg_branches );
                                      //$display("rg_branch_map %d" ,rg_branch_map );                                 
                if(lv_with_address ==1) begin   
                  rg_iaddr_last_reported<=rg_curr.iaddr;
                  if (lv_fast_branches !=0 ) begin // Create branch packet WITH address 
                    //$display("%d",rg_test_count," format1, Create branch packet WITH address");
                    rg_test_count <= rg_test_count + 1;
                    rg_branches <=0;
                    rg_branch_map <=0;         	
                    if(lv_fast_branches[4]==1) begin	
                      fifo_packet.enq(signExtend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,lv_fast_branch_map,lv_fast_branches,2'b1}));	
                    //$display("%d,_,%h,_,%d,%d,_,_,_,_,_,_,_,%d,_,%d,_,_,_,_,_,_,%d,_,_,_",2'b1,lv_addr_diff,lv_fast_branches,lv_fast_branch_map,lv_irreport,lv_notify,lv_updiscon);
                    end
                    else if(lv_fast_branches[3]==1) begin
                      fifo_packet.enq(signExtend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,lv_fast_branch_map[14:0],lv_fast_branches,2'b1}));						
                    // $display("%d,_,%h,_,%d,%d,_,_,_,_,_,_,_,%d,_,%d,_,_,_,_,_,_,%d,_,_,_",2'b1,lv_addr_diff,lv_fast_branches[3:0],lv_fast_branch_map[14:0],lv_irreport,lv_notify,lv_updiscon);
                    end
                    else if(lv_fast_branches[2]==1) begin
                      fifo_packet.enq(signExtend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,lv_fast_branch_map[6:0],lv_fast_branches,2'b1}));						
                      //   $display("%d,_,%h,_,%d,%d,_,_,_,_,_,_,_,%d,_,%d,_,_,_,_,_,_,%d,_,_,_",2'b1,lv_addr_diff,lv_fast_branches[2:0],lv_fast_branch_map[6:0],lv_irreport,lv_notify,lv_updiscon);
                    end	
                    else if(lv_fast_branches[1]==1) begin
                      fifo_packet.enq(signExtend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,lv_fast_branch_map[2:0],lv_fast_branches,2'b1})); 
                    //$display("%d,_,%h,_,%d,%d,_,_,_,_,_,_,_,%d,_,%d,_,_,_,_,_,_,%d,_,_,_",2'b1,lv_addr_diff,lv_fast_branches[1:0],lv_fast_branch_map[2:0],lv_irreport,lv_notify,lv_updiscon);
                    end
                    else begin
                      fifo_packet.enq(signExtend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,lv_fast_branch_map[0],lv_fast_branches,2'b1})); 
                    //$display("%d,_,%h,_,%d,%d,_,_,_,_,_,_,_,%d,_,%d,_,_,_,_,_,_,%d,_,_,_",2'b1,lv_addr_diff,lv_fast_branches[0],lv_fast_branch_map[0],lv_irreport,lv_notify,lv_updiscon);
                      
                    /*for (Integer i = 0; i<5; i = i + 1) begin	  
                    if(lv_fast_branches[i]==1) begin	
                      rg_packet <= signExtend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,lv_fast_branch_map[(ei-1):0],lv_fast_branches,2'b1});	
                      $display("%d,_,%h,_,%d,%d,_,_,_,_,_,_,_,%d,_,%d,_,_,_,_,_,_,%d,_,_,_",2'b1,lv_addr_diff,lv_fast_branches,lv_fast_branch_map,lv_irreport,lv_notify,lv_updiscon);
                    
                    end*/
                    end
                  end
                  else begin  // Address, without a branch-map
                    //  $display("%d",rg_test_count," format2, Create address packet");	
                    fifo_packet.enq(signExtend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,2'b10}));
                  // $display("%d,_,%h,_,_,_,_,_,_,_,_,_,_,%d,_,%d,_,_,_,_,_,_,%d,_,_,_",2'b10,lv_addr_diff,lv_irreport,lv_notify,lv_updiscon); 		                  	
                    rg_test_count <= rg_test_count + 1;
                  end 
                end  	 
            
                else begin //Create branch packet WITHOUT address
                  //$display("%d",rg_test_count," format1, Create branch packet WITHOUT address");
                      rg_test_count <= rg_test_count + 1;
                      rg_branches <=0;
                      rg_branch_map <=0;
                      fifo_packet.enq(signExtend({lv_fast_branch_map,5'b0,2'b1}));
                    //$display("%d,_,_,_,0,%d,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_",2'b1,lv_fast_branch_map);
                end
              end 
                                                      
            end 
            else if(lv_branch && rg_curr.qual == 1 )begin   
              rg_branches <= rg_branches + 1;               
              if (!lv_is_branch) begin  
                rg_branch_map <= rg_branch_map | 1 << rg_branches; 
              end                                             
            end                  
                
          endrule 
          
            rule extra_compress_sinkenq  (fifo_packet.notEmpty) ;
          
          let rg_packet = fifo_packet.first;
            fifo_packet.deq();
            
          if(rg_packet[1:0] == 2'b10)begin  
              rg_last_was_updiscon <= 1;  
            end
            else begin
                rg_last_was_updiscon <= 0;
              end   

          let lv_comp_var = rg_packet[255:248];
          Vector#(32, Bit#(8)) lv_payload = newVector();
            
                    if ( rg_packet[247:240] != lv_comp_var ||  rg_packet[240] != rg_packet[239] )begin 
                              let lv_size = 5'h1f ;
                            Bit#(8) lv_header =  {3'h2,lv_size};                                lv_payload[31]=lv_header;lv_payload[30]=rg_packet[7:0];lv_payload[29]=rg_packet[15:8];lv_payload[28]=rg_packet[23:16];lv_payload[27]=rg_packet[31:24];lv_payload[26]=rg_packet[39:32];lv_payload[25]=rg_packet[47:40];lv_payload[24]=rg_packet[55:48];lv_payload[23]=rg_packet[63:56];lv_payload[22]=rg_packet[71:64];lv_payload[21]=rg_packet[79:72];
                            lv_payload[20]=rg_packet[87:80];lv_payload[19]=rg_packet[95:88];lv_payload[18]=rg_packet[103:96];lv_payload[17]=rg_packet[111:104];lv_payload[16]=rg_packet[119:112];lv_payload[15]=rg_packet[127:120];lv_payload[14]=rg_packet[135:128];lv_payload[13]=rg_packet[143:136];lv_payload[12]=rg_packet[151:144];	                      lv_payload[11]=rg_packet[159:152];lv_payload[10]=rg_packet[167:160];lv_payload[9]=rg_packet[175:168];lv_payload[8]=rg_packet[183:176];lv_payload[7]=rg_packet[191:184];lv_payload[6]=rg_packet[199:192];lv_payload[5]=rg_packet[207:200];lv_payload[4]=rg_packet[215:208];lv_payload[3]=rg_packet[223:216];
                            lv_payload[2]=rg_packet[231:224];lv_payload[1]=rg_packet[239:232]; lv_payload[0]=rg_packet[247:240];
                              trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                              
                                $display("0x%h",lv_payload);
                      end  //1
                                
                else if ( rg_packet[239:232] != lv_comp_var ||  rg_packet[232] != rg_packet[231] )begin
                                    let lv_size = 5'h1e ;
                                  let lv_header =  {3'h2,lv_size};
                                lv_payload[30]=lv_header;lv_payload[29]=rg_packet[7:0];lv_payload[28]=rg_packet[15:8];lv_payload[27]=rg_packet[23:16];lv_payload[26]=rg_packet[31:24];lv_payload[25]=rg_packet[39:32];lv_payload[24]=rg_packet[47:40];lv_payload[23]=rg_packet[55:48];lv_payload[22]=rg_packet[63:56];lv_payload[21]=rg_packet[71:64];lv_payload[20]=rg_packet[79:72];
                                lv_payload[19]=rg_packet[87:80];lv_payload[18]=rg_packet[95:88];lv_payload[17]=rg_packet[103:96];lv_payload[16]=rg_packet[111:104];lv_payload[15]=rg_packet[119:112];lv_payload[14]=rg_packet[127:120];lv_payload[13]=rg_packet[135:128];lv_payload[12]=rg_packet[143:136];lv_payload[11]=rg_packet[151:144];	                      lv_payload[10]=rg_packet[159:152];lv_payload[9]=rg_packet[167:160];lv_payload[8]=rg_packet[175:168];lv_payload[7]=rg_packet[183:176];lv_payload[6]=rg_packet[191:184];lv_payload[5]=rg_packet[199:192];lv_payload[4]=rg_packet[207:200];lv_payload[3]=rg_packet[215:208];lv_payload[2]=rg_packet[223:216];
                                lv_payload[1]=rg_packet[231:224];lv_payload[0]=rg_packet[239:232]; 
                                
                                  trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                  $display("0x%h",{lv_payload[30],lv_payload[29],lv_payload[28],lv_payload[27],lv_payload[26],lv_payload[25],lv_payload[24],lv_payload[23],lv_payload[22],lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                  ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                  end   //2
                                
                else if ( rg_packet[231:224] !=lv_comp_var ||  rg_packet[224] != rg_packet[223] )begin 
                                    let lv_size = 5'h1d ;
                                    let lv_header =  {3'h2,lv_size};
                                
                                    lv_payload[29]=lv_header;lv_payload[28]=rg_packet[7:0];lv_payload[27]=rg_packet[15:8];lv_payload[26]=rg_packet[23:16];lv_payload[25]=rg_packet[31:24];lv_payload[24]=rg_packet[39:32];lv_payload[23]=rg_packet[47:40];lv_payload[22]=rg_packet[55:48];lv_payload[21]=rg_packet[63:56];lv_payload[20]=rg_packet[71:64];lv_payload[19]=rg_packet[79:72];
                                    lv_payload[18]=rg_packet[87:80];lv_payload[17]=rg_packet[95:88];lv_payload[16]=rg_packet[103:96];lv_payload[15]=rg_packet[111:104];lv_payload[14]=rg_packet[119:112];lv_payload[13]=rg_packet[127:120];lv_payload[12]=rg_packet[135:128];lv_payload[11]=rg_packet[143:136];lv_payload[10]=rg_packet[151:144];	                      lv_payload[9]=rg_packet[159:152];lv_payload[8]=rg_packet[167:160];lv_payload[7]=rg_packet[175:168];lv_payload[6]=rg_packet[183:176];lv_payload[5]=rg_packet[191:184];lv_payload[4]=rg_packet[199:192];lv_payload[3]=rg_packet[207:200];lv_payload[2]=rg_packet[215:208];lv_payload[1]=rg_packet[223:216];
                                    lv_payload[0]=rg_packet[231:224];
                                    trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                    $display("0x%h",{lv_payload[29],lv_payload[28],lv_payload[27],lv_payload[26],lv_payload[25],lv_payload[24],lv_payload[23],lv_payload[22],lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                  ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                  end  //3
                                
                  else if ( rg_packet[223:216] != lv_comp_var ||  rg_packet[216] != rg_packet[215]  )  begin 
                                  let lv_size = 5'h1c ;
                                  let lv_header =  {3'h2,lv_size};
                                  
                                lv_payload[28]=lv_header;lv_payload[27]=rg_packet[7:0];lv_payload[26]=rg_packet[15:8];lv_payload[25]=rg_packet[23:16];lv_payload[24]=rg_packet[31:24];lv_payload[23]=rg_packet[39:32];lv_payload[22]=rg_packet[47:40];lv_payload[21]=rg_packet[55:48];lv_payload[20]=rg_packet[63:56];lv_payload[19]=rg_packet[71:64];lv_payload[18]=rg_packet[79:72];
                                lv_payload[17]=rg_packet[87:80];lv_payload[16]=rg_packet[95:88];lv_payload[15]=rg_packet[103:96];lv_payload[14]=rg_packet[111:104];lv_payload[13]=rg_packet[119:112];lv_payload[12]=rg_packet[127:120];lv_payload[11]=rg_packet[135:128];lv_payload[10]=rg_packet[143:136];lv_payload[9]=rg_packet[151:144];	                      lv_payload[8]=rg_packet[159:152];lv_payload[7]=rg_packet[167:160];lv_payload[6]=rg_packet[175:168];lv_payload[5]=rg_packet[183:176];lv_payload[4]=rg_packet[191:184];lv_payload[3]=rg_packet[199:192];lv_payload[2]=rg_packet[207:200];lv_payload[1]=rg_packet[215:208];lv_payload[0]=rg_packet[223:216];

                                    trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                      $display("0x%h",{lv_payload[28],lv_payload[27],lv_payload[26],lv_payload[25],lv_payload[24],lv_payload[23],lv_payload[22],lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                  ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                  end    //4                                
          
                  else if ( rg_packet[215:208] != lv_comp_var ||  rg_packet[208] != rg_packet[207]   )begin 
                                let lv_size = 5'h1b ;
                                let lv_header =  {3'h2,lv_size};
                                  lv_payload[27]=lv_header;lv_payload[26]=rg_packet[7:0];lv_payload[25]=rg_packet[15:8];lv_payload[24]=rg_packet[23:16];lv_payload[23]=rg_packet[31:24];lv_payload[22]=rg_packet[39:32];lv_payload[21]=rg_packet[47:40];lv_payload[20]=rg_packet[55:48];lv_payload[19]=rg_packet[63:56];lv_payload[18]=rg_packet[71:64];lv_payload[17]=rg_packet[79:72];
                                  lv_payload[16]=rg_packet[87:80];lv_payload[15]=rg_packet[95:88];lv_payload[14]=rg_packet[103:96];lv_payload[13]=rg_packet[111:104];lv_payload[12]=rg_packet[119:112];lv_payload[11]=rg_packet[127:120];lv_payload[10]=rg_packet[135:128];lv_payload[9]=rg_packet[143:136];lv_payload[8]=rg_packet[151:144];	                      lv_payload[7]=rg_packet[159:152];lv_payload[6]=rg_packet[167:160];lv_payload[5]=rg_packet[175:168];lv_payload[4]=rg_packet[183:176];lv_payload[3]=rg_packet[191:184];lv_payload[2]=rg_packet[199:192];lv_payload[1]=rg_packet[207:200];lv_payload[0]=rg_packet[215:208];

                                  trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                    $display("0x%h",{lv_payload[27],lv_payload[26],lv_payload[25],lv_payload[24],lv_payload[23],lv_payload[22],lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                  ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                  end    //5
                    
                  else if ( rg_packet[207:200] != lv_comp_var  ||  rg_packet[200] != rg_packet[199] )begin 
                                  let lv_size = 5'h1a ;
                                  let lv_header =  {3'h2,lv_size};
                                  lv_payload[26]=lv_header;lv_payload[25]=rg_packet[7:0];lv_payload[24]=rg_packet[15:8];lv_payload[23]=rg_packet[23:16];lv_payload[22]=rg_packet[31:24];lv_payload[21]=rg_packet[39:32];lv_payload[20]=rg_packet[47:40];lv_payload[19]=rg_packet[55:48];lv_payload[18]=rg_packet[63:56];lv_payload[17]=rg_packet[71:64];lv_payload[16]=rg_packet[79:72];
        lv_payload[15]=rg_packet[87:80];lv_payload[14]=rg_packet[95:88];lv_payload[13]=rg_packet[103:96];lv_payload[12]=rg_packet[111:104];lv_payload[11]=rg_packet[119:112];lv_payload[10]=rg_packet[127:120];lv_payload[9]=rg_packet[135:128];lv_payload[8]=rg_packet[143:136];lv_payload[7]=rg_packet[151:144];	                      lv_payload[6]=rg_packet[159:152];lv_payload[5]=rg_packet[167:160];lv_payload[4]=rg_packet[175:168];lv_payload[3]=rg_packet[183:176];lv_payload[2]=rg_packet[191:184];lv_payload[1]=rg_packet[199:192];lv_payload[0]=rg_packet[207:200];

                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                          $display("0x%h",{lv_payload[26],lv_payload[25],lv_payload[24],lv_payload[23],lv_payload[22],lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end  //6
                                    
                    else if ( rg_packet[199:192] != lv_comp_var  ||  rg_packet[192] != rg_packet[191]   )begin 
                                      let lv_size = 5'h19 ;
                                      let lv_header =  {3'h2,lv_size};
                                      lv_payload[25]=lv_header;lv_payload[24]=rg_packet[7:0];lv_payload[23]=rg_packet[15:8];lv_payload[22]=rg_packet[23:16];lv_payload[21]=rg_packet[31:24];lv_payload[20]=rg_packet[39:32];lv_payload[19]=rg_packet[47:40];lv_payload[18]=rg_packet[55:48];lv_payload[17]=rg_packet[63:56];lv_payload[16]=rg_packet[71:64];lv_payload[15]=rg_packet[79:72];
        lv_payload[14]=rg_packet[87:80];lv_payload[13]=rg_packet[95:88];lv_payload[12]=rg_packet[103:96];lv_payload[11]=rg_packet[111:104];lv_payload[10]=rg_packet[119:112];lv_payload[9]=rg_packet[127:120];lv_payload[8]=rg_packet[135:128];lv_payload[7]=rg_packet[143:136];lv_payload[6]=rg_packet[151:144];	                      lv_payload[5]=rg_packet[159:152];lv_payload[4]=rg_packet[167:160];lv_payload[3]=rg_packet[175:168];lv_payload[2]=rg_packet[183:176];lv_payload[1]=rg_packet[191:184];lv_payload[0]=rg_packet[199:192];

                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[25],lv_payload[24],lv_payload[23],lv_payload[22],lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end   //7
                                    
                      else if ( rg_packet[191:184] != lv_comp_var ||  rg_packet[184] != rg_packet[183]   )begin 
                                    let lv_size = 5'h18 ;
                                    let lv_header =  {3'h2,lv_size};
                                      lv_payload[24]=lv_header;lv_payload[23]=rg_packet[7:0];lv_payload[22]=rg_packet[15:8];lv_payload[21]=rg_packet[23:16];lv_payload[20]=rg_packet[31:24];lv_payload[19]=rg_packet[39:32];lv_payload[18]=rg_packet[47:40];lv_payload[17]=rg_packet[55:48];lv_payload[16]=rg_packet[63:56];lv_payload[15]=rg_packet[71:64];lv_payload[14]=rg_packet[79:72];
        lv_payload[13]=rg_packet[87:80];lv_payload[12]=rg_packet[95:88];lv_payload[11]=rg_packet[103:96];lv_payload[10]=rg_packet[111:104];lv_payload[9]=rg_packet[119:112];lv_payload[8]=rg_packet[127:120];lv_payload[7]=rg_packet[135:128];lv_payload[6]=rg_packet[143:136];lv_payload[5]=rg_packet[151:144];	                      lv_payload[4]=rg_packet[159:152];lv_payload[3]=rg_packet[167:160];lv_payload[2]=rg_packet[175:168];lv_payload[1]=rg_packet[183:176];lv_payload[0]=rg_packet[191:184];

                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[24],lv_payload[23],lv_payload[22],lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end     //8                                
              
                      else if ( rg_packet[183:176] != lv_comp_var  ||  rg_packet[176] != rg_packet[175]   )begin 
                                  let lv_size = 5'h17 ;
                                  let lv_header =  {3'h2,lv_size};
                                      lv_payload[23]=lv_header;lv_payload[22]=rg_packet[7:0];lv_payload[21]=rg_packet[15:8];lv_payload[20]=rg_packet[23:16];lv_payload[19]=rg_packet[31:24];lv_payload[18]=rg_packet[39:32];lv_payload[17]=rg_packet[47:40];lv_payload[16]=rg_packet[55:48];lv_payload[15]=rg_packet[63:56];lv_payload[14]=rg_packet[71:64];lv_payload[13]=rg_packet[79:72];
        lv_payload[12]=rg_packet[87:80];lv_payload[11]=rg_packet[95:88];lv_payload[10]=rg_packet[103:96];lv_payload[9]=rg_packet[111:104];lv_payload[8]=rg_packet[119:112];lv_payload[7]=rg_packet[127:120];lv_payload[6]=rg_packet[135:128];lv_payload[5]=rg_packet[143:136];lv_payload[4]=rg_packet[151:144];	                      lv_payload[3]=rg_packet[159:152];lv_payload[2]=rg_packet[167:160];lv_payload[1]=rg_packet[175:168];lv_payload[0]=rg_packet[183:176];
                                    
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[23],lv_payload[22],lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end     //9
                      
                      else if ( rg_packet[175:168] != lv_comp_var ||  rg_packet[168] != rg_packet[167]  )begin 
                                    let lv_size = 5'h16 ;
                                    let lv_header =  {3'h2,lv_size};
                                    lv_payload[22]=lv_header;lv_payload[21]=rg_packet[7:0];lv_payload[20]=rg_packet[15:8];lv_payload[19]=rg_packet[23:16];lv_payload[18]=rg_packet[31:24];lv_payload[17]=rg_packet[39:32];lv_payload[16]=rg_packet[47:40];lv_payload[15]=rg_packet[55:48];lv_payload[14]=rg_packet[63:56];lv_payload[13]=rg_packet[71:64];lv_payload[12]=rg_packet[79:72];
        lv_payload[11]=rg_packet[87:80];lv_payload[10]=rg_packet[95:88];lv_payload[9]=rg_packet[103:96];lv_payload[8]=rg_packet[111:104];lv_payload[7]=rg_packet[119:112];lv_payload[6]=rg_packet[127:120];lv_payload[5]=rg_packet[135:128];lv_payload[4]=rg_packet[143:136];lv_payload[3]=rg_packet[151:144];	                      lv_payload[2]=rg_packet[159:152];lv_payload[1]=rg_packet[167:160];lv_payload[0]=rg_packet[175:168];
                                    
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[22],lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end  //10
                                    
                    else if ( rg_packet[167:160] != lv_comp_var ||  rg_packet[160] != rg_packet[159] )begin 
                                    let lv_size = 5'h15 ;
                                    let lv_header =  {3'h2,lv_size};
                                      lv_payload[21]=lv_header;lv_payload[20]=rg_packet[7:0];lv_payload[19]=rg_packet[15:8];lv_payload[18]=rg_packet[23:16];lv_payload[17]=rg_packet[31:24];lv_payload[16]=rg_packet[39:32];lv_payload[15]=rg_packet[47:40];lv_payload[14]=rg_packet[55:48];lv_payload[13]=rg_packet[63:56];lv_payload[12]=rg_packet[71:64];lv_payload[11]=rg_packet[79:72];
        lv_payload[10]=rg_packet[87:80];lv_payload[9]=rg_packet[95:88];lv_payload[8]=rg_packet[103:96];lv_payload[7]=rg_packet[111:104];lv_payload[6]=rg_packet[119:112];lv_payload[5]=rg_packet[127:120];lv_payload[4]=rg_packet[135:128];lv_payload[3]=rg_packet[143:136];lv_payload[2]=rg_packet[151:144];	                      lv_payload[1]=rg_packet[159:152];lv_payload[0]=rg_packet[167:160];
                                      
                                      trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                      $display("0x%h",{lv_payload[21],lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]}); 
                                  end    //11
                                    
                      else if ( rg_packet[159:152] != lv_comp_var  ||  rg_packet[152] != rg_packet[151] )begin 
                                    let lv_size = 5'h14 ;
                                    let lv_header =  {3'h2,lv_size};
                                    lv_payload[20]=lv_header;lv_payload[19]=rg_packet[7:0];lv_payload[18]=rg_packet[15:8];lv_payload[17]=rg_packet[23:16];lv_payload[16]=rg_packet[31:24];lv_payload[15]=rg_packet[39:32];lv_payload[14]=rg_packet[47:40];lv_payload[13]=rg_packet[55:48];lv_payload[12]=rg_packet[63:56];lv_payload[11]=rg_packet[71:64];lv_payload[10]=rg_packet[79:72];
        lv_payload[9]=rg_packet[87:80];lv_payload[8]=rg_packet[95:88];lv_payload[7]=rg_packet[103:96];lv_payload[6]=rg_packet[111:104];lv_payload[5]=rg_packet[119:112];lv_payload[4]=rg_packet[127:120];lv_payload[3]=rg_packet[135:128];lv_payload[2]=rg_packet[143:136];lv_payload[1]=rg_packet[151:144];lv_payload[0]=rg_packet[159:152];
                                    
                                      trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[20],lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end     //12                               
              
                      else if ( rg_packet[151:144] != lv_comp_var ||  rg_packet[144] != rg_packet[143]   )begin 
                                    let lv_size = 5'h13 ;
                                    let lv_header =  {3'h2,lv_size};
                                      lv_payload[19]=lv_header;lv_payload[18]=rg_packet[7:0];lv_payload[17]=rg_packet[15:8];lv_payload[16]=rg_packet[23:16];lv_payload[15]=rg_packet[31:24];lv_payload[14]=rg_packet[39:32];lv_payload[13]=rg_packet[47:40];lv_payload[12]=rg_packet[55:48];lv_payload[11]=rg_packet[63:56];lv_payload[10]=rg_packet[71:64];lv_payload[9]=rg_packet[79:72];
        lv_payload[8]=rg_packet[87:80];lv_payload[7]=rg_packet[95:88];lv_payload[6]=rg_packet[103:96];lv_payload[5]=rg_packet[111:104];lv_payload[4]=rg_packet[119:112];lv_payload[3]=rg_packet[127:120];lv_payload[2]=rg_packet[135:128];lv_payload[1]=rg_packet[143:136];lv_payload[0]=rg_packet[151:144];	                      
                                  
                                    trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                    $display("0x%h",{lv_payload[19],lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end      //13
                      
                      else if ( rg_packet[143:136] != lv_comp_var ||  rg_packet[136] != rg_packet[135]   )begin 
                                    let lv_size = 5'h12 ;
                                    let lv_header =  {3'h2,lv_size};
                                      lv_payload[18]=lv_header;lv_payload[17]=rg_packet[7:0];lv_payload[16]=rg_packet[15:8];lv_payload[15]=rg_packet[23:16];lv_payload[14]=rg_packet[31:24];lv_payload[13]=rg_packet[39:32];lv_payload[12]=rg_packet[47:40];lv_payload[11]=rg_packet[55:48];lv_payload[10]=rg_packet[63:56];lv_payload[9]=rg_packet[71:64];lv_payload[8]=rg_packet[79:72];
        lv_payload[7]=rg_packet[87:80];lv_payload[6]=rg_packet[95:88];lv_payload[5]=rg_packet[103:96];lv_payload[4]=rg_packet[111:104];lv_payload[3]=rg_packet[119:112];lv_payload[2]=rg_packet[127:120];lv_payload[1]=rg_packet[135:128];lv_payload[0]=rg_packet[143:136];
                                      
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[18],lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end      //14
                                    
                    else if ( rg_packet[135:128] != lv_comp_var  ||  rg_packet[128] != rg_packet[127]  )begin 
                                      let lv_size = 5'h11 ;
                                      let lv_header =  {3'h2,lv_size};
                                      lv_payload[17]=lv_header;lv_payload[16]=rg_packet[7:0];lv_payload[15]=rg_packet[15:8];lv_payload[14]=rg_packet[23:16];lv_payload[13]=rg_packet[31:24];lv_payload[12]=rg_packet[39:32];lv_payload[11]=rg_packet[47:40];lv_payload[10]=rg_packet[55:48];lv_payload[9]=rg_packet[63:56];lv_payload[8]=rg_packet[71:64];lv_payload[7]=rg_packet[79:72];
        lv_payload[6]=rg_packet[87:80];lv_payload[5]=rg_packet[95:88];lv_payload[4]=rg_packet[103:96];lv_payload[3]=rg_packet[111:104];lv_payload[2]=rg_packet[119:112];lv_payload[1]=rg_packet[127:120];lv_payload[0]=rg_packet[135:128];
                                      
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[17],lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end      //15
                                    
                      else if ( rg_packet[127:120] != lv_comp_var  ||  rg_packet[120] != rg_packet[119]  )begin 
                                    let lv_size = 5'h10 ;
                                    let lv_header =  {3'h2,lv_size};
                                      lv_payload[16]=lv_header;lv_payload[15]=rg_packet[7:0];lv_payload[14]=rg_packet[15:8];lv_payload[13]=rg_packet[23:16];lv_payload[12]=rg_packet[31:24];lv_payload[11]=rg_packet[39:32];lv_payload[10]=rg_packet[47:40];lv_payload[9]=rg_packet[55:48];lv_payload[8]=rg_packet[63:56];lv_payload[7]=rg_packet[71:64];lv_payload[6]=rg_packet[79:72];
        lv_payload[5]=rg_packet[87:80];lv_payload[4]=rg_packet[95:88];lv_payload[3]=rg_packet[103:96];lv_payload[2]=rg_packet[111:104];lv_payload[1]=rg_packet[119:112];lv_payload[0]=rg_packet[127:120];
                                    
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[16],lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end      //16                               
              
                      else if ( rg_packet[119:112] != lv_comp_var ||  rg_packet[112] != rg_packet[111]  )begin 
                                      let lv_size = 5'hf ;
                                      let lv_header =  {3'h2,lv_size};
                                      lv_payload[15]=lv_header;lv_payload[14]=rg_packet[7:0];lv_payload[13]=rg_packet[15:8];lv_payload[12]=rg_packet[23:16];lv_payload[11]=rg_packet[31:24];lv_payload[10]=rg_packet[39:32];lv_payload[9]=rg_packet[47:40];lv_payload[8]=rg_packet[55:48];lv_payload[7]=rg_packet[63:56];lv_payload[6]=rg_packet[71:64];lv_payload[5]=rg_packet[79:72];
        lv_payload[4]=rg_packet[87:80];lv_payload[3]=rg_packet[95:88];lv_payload[2]=rg_packet[103:96];lv_payload[1]=rg_packet[111:104];lv_payload[0]=rg_packet[119:112];

                                          trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                          $display("0x%h",{lv_payload[15],lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end      //17
                                    
                        else if ( rg_packet[111:104] != lv_comp_var ||  rg_packet[104] != rg_packet[103] )begin 
                                    let lv_size = 5'he;
                                    let lv_header =  {3'h2,lv_size};
                                      lv_payload[14]=lv_header;lv_payload[13]=rg_packet[7:0];lv_payload[12]=rg_packet[15:8];lv_payload[11]=rg_packet[23:16];lv_payload[10]=rg_packet[31:24];lv_payload[9]=rg_packet[39:32];lv_payload[8]=rg_packet[47:40];lv_payload[7]=rg_packet[55:48];lv_payload[6]=rg_packet[63:56];lv_payload[5]=rg_packet[71:64];lv_payload[4]=rg_packet[79:72];
        lv_payload[3]=rg_packet[87:80];lv_payload[2]=rg_packet[95:88];lv_payload[1]=rg_packet[103:96];lv_payload[0]=rg_packet[111:104];
                                    
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                      $display("0x%h",{lv_payload[14],lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end    //18
                                    
                        else if ( rg_packet[103:96] != lv_comp_var ||  rg_packet[96] != rg_packet[95] )begin 
                                      let lv_size = 5'hd ;
                                      let lv_header =  {3'h2,lv_size};
                                      lv_payload[13]=lv_header;lv_payload[12]=rg_packet[7:0];lv_payload[11]=rg_packet[15:8];lv_payload[10]=rg_packet[23:16];lv_payload[9]=rg_packet[31:24];lv_payload[8]=rg_packet[39:32];lv_payload[7]=rg_packet[47:40];lv_payload[6]=rg_packet[55:48];lv_payload[5]=rg_packet[63:56];lv_payload[4]=rg_packet[71:64];lv_payload[3]=rg_packet[79:72];
        lv_payload[2]=rg_packet[87:80];lv_payload[1]=rg_packet[95:88];lv_payload[0]=rg_packet[103:96];
                                    
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[13],lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end    //19
                                    
                      else if ( rg_packet[95:88] != lv_comp_var  ||  rg_packet[88] != rg_packet[87]   )begin 
                                      let lv_size = 5'hc ;
                                      let lv_header =  {3'h2,lv_size};
                                    lv_payload[12]=lv_header;lv_payload[11]=rg_packet[7:0];lv_payload[10]=rg_packet[15:8];lv_payload[9]=rg_packet[23:16];lv_payload[8]=rg_packet[31:24];lv_payload[7]=rg_packet[39:32];lv_payload[6]=rg_packet[47:40];lv_payload[5]=rg_packet[55:48];lv_payload[4]=rg_packet[63:56];lv_payload[3]=rg_packet[71:64];lv_payload[2]=rg_packet[79:72];
        lv_payload[1]=rg_packet[87:80];lv_payload[0]=rg_packet[95:88];
                                    
                                      trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[12],lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end    //20                                 
              
                      else if ( rg_packet[87:80] != lv_comp_var ||  rg_packet[80] != rg_packet[79])begin 
                                    let lv_size = 5'hb ;
                                    let lv_header =  {3'h2,lv_size};
                                    lv_payload[11]=lv_header;lv_payload[10]=rg_packet[7:0];lv_payload[9]=rg_packet[15:8];lv_payload[8]=rg_packet[23:16];lv_payload[7]=rg_packet[31:24];lv_payload[6]=rg_packet[39:32];lv_payload[5]=rg_packet[47:40];lv_payload[4]=rg_packet[55:48];lv_payload[3]=rg_packet[63:56];lv_payload[2]=rg_packet[71:64];lv_payload[1]=rg_packet[79:72];
        lv_payload[0]=rg_packet[87:80];
                                  
                                      trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                      $display("0x%h",{lv_payload[11],lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end     //21
                        
                      else if ( rg_packet[79:72] != lv_comp_var ||  rg_packet[72] != rg_packet[71]  )begin 
                                      let lv_size = 5'ha ;
                                      let lv_header =  {3'h2,lv_size};
                                      
                  lv_payload[10]=lv_header;lv_payload[9]=rg_packet[7:0];lv_payload[8]=rg_packet[15:8];lv_payload[7]=rg_packet[23:16];lv_payload[6]=rg_packet[31:24];lv_payload[5]=rg_packet[39:32];lv_payload[4]=rg_packet[47:40];lv_payload[3]=rg_packet[55:48];lv_payload[2]=rg_packet[63:56];lv_payload[1]=rg_packet[71:64];lv_payload[0]=rg_packet[79:72];

                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[10],lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end  //22
                                    
                      else if ( rg_packet[71:64] != lv_comp_var   ||  rg_packet[64] != rg_packet[63]   )begin 
                                      let lv_size = 5'h9 ;
                                    let lv_header =  {3'h2,lv_size};
                                  
                                    lv_payload[9]=lv_header;lv_payload[8]=rg_packet[7:0];lv_payload[7]=rg_packet[15:8];lv_payload[6]=rg_packet[23:16];lv_payload[5]=rg_packet[31:24];lv_payload[4]=rg_packet[39:32];lv_payload[3]=rg_packet[47:40];lv_payload[2]=rg_packet[55:48];lv_payload[1]=rg_packet[63:56];lv_payload[0]=rg_packet[71:64];
                                      trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[9],lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end   //23
                                    
                      else if ( rg_packet[63:56] != lv_comp_var  ||  rg_packet[56] != rg_packet[55] )begin 
                                      let lv_size = 5'h8 ;
                                      let lv_header =  {3'h2,lv_size};
                                      
                                    lv_payload[8]=lv_header;lv_payload[7]=rg_packet[7:0];lv_payload[6]=rg_packet[15:8];lv_payload[5]=rg_packet[23:16];lv_payload[4]=rg_packet[31:24];lv_payload[3]=rg_packet[39:32];lv_payload[2]=rg_packet[47:40];lv_payload[1]=rg_packet[55:48];lv_payload[0]=rg_packet[63:56];  
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[8],lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end    //24                                
              
                      else if ( rg_packet[55:48] != lv_comp_var    ||  rg_packet[48] != rg_packet[47]  )begin 
                                      let lv_size = 5'h7 ;
                                      let lv_header =  {3'h2,lv_size};
                                      
                                      lv_payload[7]=lv_header;lv_payload[6]=rg_packet[7:0];lv_payload[5]=rg_packet[15:8];lv_payload[4]=rg_packet[23:16];lv_payload[3]=rg_packet[31:24];lv_payload[2]=rg_packet[39:32];lv_payload[1]=rg_packet[47:40];lv_payload[0]=rg_packet[55:48];
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[7]
                                      ,lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end    //25
                      
                      else if ( rg_packet[47:40] != lv_comp_var  ||  rg_packet[40] != rg_packet[39]  )begin 
                              let lv_size = 5'h6 ;
                              let lv_header =  {3'h2,lv_size};
                              
                                    lv_payload[6]=lv_header;lv_payload[5]=rg_packet[7:0];lv_payload[4]=rg_packet[15:8];lv_payload[3]=rg_packet[23:16];lv_payload[2]=rg_packet[31:24];lv_payload[1]=rg_packet[39:32];lv_payload[0]=rg_packet[47:40];
                                      trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[6],lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end   //26
                                    
                      else if ( rg_packet[39:32] != lv_comp_var  ||  rg_packet[32] != rg_packet[31]   )begin 
                                      let lv_size = 5'h5 ;
                                      let lv_header =  {3'h2,lv_size};
                                      
                                    lv_payload[5]=lv_header;lv_payload[4]=rg_packet[7:0];lv_payload[3]=rg_packet[15:8];lv_payload[2]=rg_packet[23:16];lv_payload[1]=rg_packet[31:24];lv_payload[0]=rg_packet[39:32];
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[5],lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end    //27
                                    
                      else if ( rg_packet[31:24] != lv_comp_var ||  rg_packet[24] != rg_packet[23]  )begin 
                                  let lv_size = 5'h4 ;
                                  let lv_header =  {3'h2,lv_size};
                          
                                    lv_payload[4]=lv_header;lv_payload[3]=rg_packet[7:0];lv_payload[2]=rg_packet[15:8];lv_payload[1]=rg_packet[23:16];lv_payload[0]=rg_packet[31:24];
                                      trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                      $display("0x%h",{lv_payload[4],lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end       //28                               
              
                      else if ( rg_packet[23:16] != lv_comp_var   ||  rg_packet[16] != rg_packet[15]   )begin
                                      let lv_size = 5'h3 ;
                                      let lv_header =  {3'h2,lv_size};
                          
                                    lv_payload[3]=lv_header;lv_payload[2]=rg_packet[7:0];lv_payload[1]=rg_packet[15:8];lv_payload[0]=rg_packet[23:16];
                                      trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                      $display("0x%h",{lv_payload[3],lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end     //29
                      
                      else if ( rg_packet[15:8] != lv_comp_var ||  rg_packet[8] != rg_packet[7]  )begin 
                                    let lv_size = 5'h2 ;
                                    let lv_header =  {3'h2,lv_size};
                          
                                    lv_payload[2]=lv_header;lv_payload[1]=rg_packet[7:0];lv_payload[0]=rg_packet[15:8];
                                        trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                        $display("0x%h",{lv_payload[2],lv_payload[1],lv_payload[0]});
                                  end       //30                             
                    else begin
                          let lv_size = 5'h1 ;
                          let lv_header =  {3'h2,lv_size};
                            
                            lv_payload[1]=lv_header;lv_payload[0]=rg_packet[7:0];
                                trace_sink_buffer.enq(zeroExtend(lv_size + 1),lv_payload); 
                                $display("0x%h",{lv_payload[1],lv_payload[0]});
                                  end      //31                                        
              
              // $display("trace_sink_buffer.count = %d ", trace_sink_buffer.count);
              //$display("lv_payload = %h ", lv_payload);
              
              endrule      
          
              
              rule trace_dma_write(trace_sink_buffer.deqReadyN(1) &&  rg_waiting_resp == 0);
              // $display("dma rule firing");
              //  $display("general first 64bits = %h", {trace_sink_buffer.first[7],trace_sink_buffer.first[6],trace_sink_buffer.first[5],trace_sink_buffer.first[4],trace_sink_buffer.first[3],trace_sink_buffer.first[2],trace_sink_buffer.first[1],trace_sink_buffer.first[0]} );
              
              
              Bit#(data_width) writedata=0;
              Bit#(TDiv#(data_width,8)) writestrb = 0;
              Bit#(TLog#(TDiv#(data_width,8))) shamt = truncate(rg_address);
              Bit#(2) wrsize=0;  
            
              
              if (trace_sink_buffer.deqReadyN(8) && rg_address[2:0] == 0) begin
                              writestrb = 'b11111111;
                              wrsize = 3;            
                            writedata  = duplicate({trace_sink_buffer.first[0],trace_sink_buffer.first[1],trace_sink_buffer.first[2],trace_sink_buffer.first[3],trace_sink_buffer.first[4],trace_sink_buffer.first[5],trace_sink_buffer.first[6],trace_sink_buffer.first[7]});
                              //$display("inside 64 bit= %h",writedata ); 
                                      
                            end                     
              else if (trace_sink_buffer.deqReadyN(4) && rg_address[1:0] == 0) begin
                              writestrb = 'b1111 << shamt ;
                              wrsize = 2;
                              writedata = duplicate({trace_sink_buffer.first[4],trace_sink_buffer.first[5],trace_sink_buffer.first[6],trace_sink_buffer.first[7]});
                              //$display("inside 32 bit= %h",writedata ); 
                            end 
              else if (trace_sink_buffer.deqReadyN(2) && rg_address[0] == 0) begin
                              writestrb = 'b11 << shamt;
                              wrsize = 1;  
                              writedata = duplicate({trace_sink_buffer.first[6],trace_sink_buffer.first[7]});
                              //$display("inside 16 bit= %h",writedata );  
                            end
                else if (trace_sink_buffer.deqReadyN(1)) begin
                              writestrb = 'b1 << shamt;
                              wrsize = 0; 
                              writedata = duplicate(trace_sink_buffer.first[7]);
                              //$display("inside 8 bit= %h",writedata ); 

                            end 

                              rg_waiting_resp <= 1; 
                            rg_size<=wrsize[1:0];      
                          
              
            AXI4_Wr_Addr#(addr_width,id_width,user_width) wr_addr_request = AXI4_Wr_Addr{
                                              awaddr  : truncate(rg_address),
                                              awuser  : 0, 
                                              awlen   : 0, 
                                              awsize  : zeroExtend(wrsize), 
                                              awburst : 0,
                                              awid    : 0, 
                                              awprot  :'d3 };
              //$display("bro i did ma work written into mem :-ct:- %d",trace_sink_buffer.count);                                  
              AXI4_Wr_Data#(id_width,data_width) wr_data_request = AXI4_Wr_Data{ 
                                                          wdata: writedata, 
                                                          wstrb: writestrb, 
                                                          wlast: True};
              
              
                master_xactor.i_wr_addr.enq(wr_addr_request);
                master_xactor.i_wr_data.enq(wr_data_request);  
        
              endrule                         
                              
                              
            rule trace_dma_response( rg_waiting_resp == 1); 
                  //$display("waiting for resp");
              let response <- pop_o(master_xactor.o_wr_resp);
                  if (response.bresp == AXI4_DECERR) begin
                          // sberr <= pack(SbBadAddr);
                          //$display("AXI4_DECERR");
                          rg_waiting_resp <= 0;
                  end
                  else if (response.bresp == AXI4_SLVERR) begin
                            //$display("AXI4_SLVERR");
                          //sberr <= pack(SbOther);
                            rg_waiting_resp <= 0;
                  end

                  else begin
                          //$display("AXI4_Success");
                            rg_waiting_resp <= 0; 
                            //sberr <= pack(SbSuccess);
                            Bit#(4) offset = 'b1 << rg_size;
                          //Added Condition to prevent Overflow
                            if((rg_address + zeroExtend(offset))<= fromInteger(memtrace_end))begin 
                                rg_address <= rg_address + zeroExtend(offset);  
                            end
                            else begin
                                rg_address <= fromInteger(memtrace_base);

                            end 
                        
                            trace_sink_buffer.deq(unpack(zeroExtend(offset)));                                 
                  end               
                    endrule   
                          
                              
            
              method Action trace_interface(Bit#(4) itype ,Bit#(4) cause,Bit#(64) tval,Bit#(3) priv,Bit#(64) iaddr,Bit#(2) iretire,Bit#(1) ilastsize) if(rg_Active == 1);
                Bit#(1) lv_filter = 0;  


                              if ((iaddr >= 64'h00000000000001000 && iaddr <= 64'hFFFFFFFFFFFFFFFF) /*|| (iaddr >= 64'h0000000000001000 && iaddr <= 64'h0000000000001010) */)  begin 
                                  lv_filter = 1 ; 
                                  //wr_trace_in <=  unpack({itype, cause, tval, priv , iaddr ,iretire , ilastsize, (rg_iTracing & lv_filter) });                      
                              end                              
                  wr_trace_in <=  unpack({itype, cause, tval, priv , iaddr ,iretire , ilastsize, (rg_iTracing & lv_filter) }); 
                  // $display("inside trace interface:-  %d,%d,%d,%d,%h,0,0,%d,%d" , itype, cause, tval, priv , iaddr ,iretire ,ilastsize);
                  wr_compress_en <= 1; 
                
            endmethod 
            
        
            method ActionValue#(Bool) write_req (Bit#(addr_width) addr,Bit#(data_width) data);
                Bool success = True;    
              
                if(addr[7:0] =='h00) begin                             
                  rg_trace_control <= truncate(data)  ; 
                  
                  if(data[1]==1'b1)begin
                   rg_address <= fromInteger(memtrace_base);   //povray
                  end
                  
                  end  	       
                else  begin                             
                    success = False  ; end 
                  
                  return success;
            endmethod 
            
            method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr );       
              Bool success = True;
              Bit#(data_width) result = 0;
            Bit#(16) buffer_status = zeroExtend(pack(trace_sink_buffer.count));
                
                if(addr[7:0] == 'h00) begin                             
                  result = duplicate(rg_trace_control) ; end 
                  
                else if(addr[7:0] == 'h08) begin

                result = zeroExtend(rg_address);   //povray-we can read the address even after resetting the board

                end
                else begin                             
                  success = False  ; end   
                    
                  return tuple2(success, result);     
            endmethod 
            
            method trace_interrupt = (trace_sink_buffer.deqReadyN(4))? 1 : 0;
            
              interface master= master_xactor.axi_side;
          

endmodule


interface Ifc_trace_axi4lite#(numeric type addr_width,numeric type id_width, numeric type data_width, numeric type user_width);
  interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave;
  method Action trace_interface(Bit#(4) itype ,Bit#(4) cause, Bit#(64) tval, Bit#(3) priv, Bit#(64) iaddr, Bit#(2) iretire, Bit#(1) ilastsize); 
  //method Bit#(1) trace_interrupt;
endinterface

module mktrace_axi4lite#(parameter Integer memtrace_base, parameter Integer memtrace_end)(Ifc_trace_axi4lite#(addr_width,id_width,data_width,user_width))
    provisos(Add#(a__, 32, data_width),
          Add#(b__,  4, data_width),
          Mul#(32, c__, data_width),
          Mul#( 8, d__, data_width),
          Mul#(16, e__, data_width),
          Mul#( 4, f__, data_width),
          Add#(16, g__, data_width),
          Mul#(64, h__, data_width),
          Add#(i__, TLog#(TDiv#(data_width, 8)), addr_width),
          Add#(j__, 4, addr_width),
           Add#(k__, TLog#(TDiv#(data_width, 8)), 32),
           Add#(l__, addr_width, 32),
           Add#(m__, 32, data_width)

      


        );
  IFC_trace_engine#(addr_width,id_width,data_width,user_width) trace <- mktrace_engine(memtrace_base, memtrace_end);
  AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();

  rule read_request;
      let req <- pop_o (s_xactor.o_rd_addr);
        let {succ,data} <- trace.read_req(req.araddr);
      let resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
                                  rdata:data, ruser: ?};
      s_xactor.i_rd_data.enq(resp);
    endrule

    rule write_request;
        let addreq <- pop_o(s_xactor.o_wr_addr);
        let datareq <- pop_o(s_xactor.o_wr_data);
        let succ <- trace.write_req(addreq.awaddr, datareq.wdata);
        let resp = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: ?};
        s_xactor.i_wr_resp.enq(resp);
    endrule
  
    interface slave = s_xactor.axi_side;
              method Action trace_interface(Bit#(4) itype ,Bit#(4) cause, Bit#(64) tval, Bit#(3) priv, Bit#(64) iaddr, Bit#(2) iretire, Bit#(1) ilastsize); 
                  trace.trace_interface(itype,cause,tval,priv,iaddr,iretire,ilastsize);    
                  endmethod
                // method trace_interrupt = trace.trace_interrupt;
endmodule

//axi4
interface Ifc_trace_axi4#(numeric type addr_width, numeric type id_width, numeric type data_width, numeric type user_width);
  interface AXI4_Master_IFC#(addr_width, id_width, data_width, user_width) master;
  interface AXI4_Slave_IFC#(addr_width,id_width,data_width,user_width)	slave;
  method Action trace_interface(Bit#(4) itype ,Bit#(4) cause, Bit#(64) tval, Bit#(3) priv, Bit#(64) iaddr, Bit#(2) iretire, Bit#(1) ilastsize); 
  //method Bit#(1) trace_interrupt;
endinterface

module mktrace_axi4#(parameter Integer memtrace_base, parameter Integer memtrace_end)(Ifc_trace_axi4#(addr_width,id_width,data_width,user_width))
    provisos(Add#(a__, 32, data_width),
          Add#(b__,  4, data_width),
          Mul#(32, c__, data_width),
          Mul#( 8, d__, data_width),
          Mul#(16, e__, data_width),
          Mul#( 4, f__, data_width),
          Add#(16, g__, data_width),
          Mul#(64, h__, data_width),
          Add#(i__, TLog#(TDiv#(data_width, 8)), addr_width),
          Add#(j__, 4, addr_width),
           Add#(k__, TLog#(TDiv#(data_width, 8)), 32),
           Add#(l__, addr_width, 32),
           Add#(m__, 32, data_width)
           
        );
  IFC_trace_engine#(addr_width,id_width,data_width,user_width) trace <- mktrace_engine(memtrace_base, memtrace_end);
  AXI4_Slave_Xactor_IFC#(addr_width,id_width,data_width,user_width) s_xactor<-mkAXI4_Slave_Xactor();
  Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
  Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);

  Reg#(AXI4_Rd_Addr#(addr_width,id_width,user_width)) rg_rdpacket <- mkRegA(?);
  Reg#(AXI4_Wr_Addr#(addr_width,id_width,user_width)) rg_wrpacket <- mkRegA(?);


  rule read_request(rg_rdburst_count==0);
    let req<-pop_o(s_xactor.o_rd_addr);
    let {succ,data}<-trace.read_req(req.araddr);
    rg_rdpacket<=req;	

    if(req.arlen!=0)
      rg_rdburst_count<=1;
    let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:req.arid,rlast:(req.arlen==0),rdata:data, ruser: ?};
    s_xactor.i_rd_data.enq(resp);
  endrule
  
  rule read_burst(rg_rdburst_count!=0);
    let rd_req=rg_rdpacket;
    let {succ,data}<-trace.read_req(rd_req.araddr);
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
        let succ <- trace.write_req(addreq.awaddr, datareq.wdata);
        if(addreq.awlen!=0)
          rg_wrburst_count<=1;
        
        let resp = AXI4_Wr_Resp {bresp: succ?AXI4_OKAY:AXI4_SLVERR, buser: ?, bid:addreq.awid};
        if(datareq.wlast)
          s_xactor.i_wr_resp.enq(resp);
  endrule
  
  rule write_burst(rg_wrburst_count!=0);
    let addreq=rg_wrpacket;
        let datareq <- pop_o(s_xactor.o_wr_data);
    Bool succ=False;
    let resp = AXI4_Wr_Resp {bresp: succ?AXI4_OKAY:AXI4_SLVERR, buser: ?, bid:addreq.awid};
    if(datareq.wlast)begin
          s_xactor.i_wr_resp.enq(resp);//enqueuing the write response
          rg_wrburst_count<=0;
        end
  endrule
  method Action trace_interface(Bit#(4) itype ,Bit#(4) cause, Bit#(64) tval, Bit#(3) priv, Bit#(64) iaddr, Bit#(2) iretire, Bit#(1) ilastsize); 
                      trace.trace_interface(itype,cause,tval,priv,iaddr,iretire,ilastsize); 
                endmethod
                interface master= trace.master;
  interface slave = s_xactor.axi_side;
  //method trace_interrupt = trace.trace_interrupt;
endmodule