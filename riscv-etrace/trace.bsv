
import ConcatReg ::*;
 import RegFile :: * ;     

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

/*typedef enum{
	COMP,
	NO_COMP
}LSB_WIDTH_T deriving(Bits,Eq);*/


typedef struct{
	I_TYPE i_type;
	Bit#(4) cause;
	Bit#(32) tval;
	PRIV_T  priv;
	Bit#(32) iaddr;
	Bit#(2) iretire;				//sijump// If an interrupt occurs, all the stages of pipeline (say five) 
	Bit#(1) ilastsize;					// that are doing some work will finish theirs and then only the Interrupt Service Routine starts.ADDR
        Bit#(1) qual;
										// But, for an exception, all pipeline stages are flushed
										// Retirement of an instruction means that all stages of the instruction are over
}Hart_to_encoder_interface deriving(Bits,Eq);
  
  interface IFC_trace_engine;            
     method ActionValue#(Bool) write_req (Bit#(32) addr,Bit#(32) data);
     method ActionValue#(Tuple2#(Bool,Bit#(32))) read_req(Bit#(32) addr);         	      
   endinterface 

module mktrace_engine(Bit#(4) itype ,Bit#(4) cause, Bit#(32) tval, Bit#(3) priv,Bit#(32) iaddr, Bit#(2) iretire, Bit#(1) ilastsize , IFC_trace_engine  axi_ifc);
            
        Reg#(Bit#(1)) rg_Active <- mkRegA(0);
	Reg#(Bit#(1)) rg_teEnable <- mkRegA(0);
	Reg#(Bit#(1)) rg_iTracing <- mkRegA(0);
	Reg#(Bit#(2)) rg_ResyncMode	<- mkRegA(0);
	Reg#(Bit#(4)) rg_ResyncMax	<- mkRegA(0);
	Reg#(Bit#(1)) rg_comp_ext	<- mkRegA(0);
        Reg#(Bit#(10)) rg_trace_control = concatReg6(rg_comp_ext,rg_ResyncMax,rg_ResyncMode,rg_iTracing,rg_teEnable,rg_Active);
 	
	Reg#(Hart_to_encoder_interface) rg_prev <- mkRegU; 
        Reg#(Hart_to_encoder_interface) rg_curr <- mkRegU;
        Reg#(Hart_to_encoder_interface) rg_next <- mkRegU;
    
        
        Reg#(Bit#(5)) rg_branches <- mkRegA(0); 
        Reg#(Bit#(32)) rg_branch_map <- mkRegA(0); 
        Reg#(Bit#(10)) rg_prev_trace_control	<- mkRegA(0);
        Reg#(Bit#(9)) rg_resync_count <- mkRegA(0); 
        Reg#(Bit#(1)) rg_reported <- mkRegA(0); 
                Reg#(Bit#(512)) rg_packet <- mkRegA(0); 
         
         Reg#(Bit#(1)) rg_pac_gen <- mkRegA(0);
         Reg#(Bit#(31)) rg_test_count <- mkRegA(0); 
         Reg#(Bit#(32)) rg_iaddr_last_reported <- mkReg(0); 
         
                 
           
              function Bool is_exceptions(Hart_to_encoder_interface ifc);	// Checks whether the given instruction description is an exception or interrupt
			return (ifc.i_type==EXCEPTION || ifc.i_type==INTERRUPT);
		endfunction

		function Bool is_updiscons(Hart_to_encoder_interface ifc); // Since implicit_return_mode is optional, returns are also considered to be uninferable
			return (ifc.i_type==UNINFERABLE_JUMP || ifc.i_type==UNINFERABLE_CALL || ifc.i_type==UNINFERABLE_TAIL_CALL || ifc.i_type==OTHER_UNINFERABLE_JUMP || ifc.i_type==RETURN || ifc.i_type==EXCEPTION_OR_INTERRUPT_RETURN);
		endfunction
                      
                                   
                function Bit#(31) address_handler_nc(Hart_to_encoder_interface ifc,ADDRESS_T t);	// Function to return full of differential address if compressed instruction are not allowed
			if(t==FULL) return ifc.iaddr[31:1];
			else return ifc.iaddr[31:1]-rg_iaddr_last_reported[31:1];
		endfunction                   
                                   
             
		         
       
       rule pipleine(rg_Active == 1);  
                
             if(rg_teEnable == 1 ) begin    
                rg_prev <= rg_curr ;   
                rg_curr <= rg_next ;     
                rg_next <=  unpack({itype, cause, tval, priv , iaddr ,iretire , ilastsize,    rg_iTracing }); end
               // rg_next <=  unpack({ rg_iTracing, ilastsize,iretire, iaddr , priv , tval , cause, itype   }); end
                //                                                
               else begin  
                  rg_prev <= unpack(0) ;   
                  rg_curr <= unpack(0);     
                  rg_next <=  unpack(0) ;
                end 
                
             rg_prev_trace_control <= rg_trace_control; 
              if (rg_prev_trace_control != rg_trace_control ) begin
                   // wr_pac_gen <= 1; 
                      //      wr_format<= SUPPORT;
                      //     wr_qual <= NO_CHANGE; 
                       //     wr_which_packet <= 1; 
                    
                  $display("format 3,subformat 3 \n" ); 
                end
                          
                //$display(" rg_prev_instr \n" , rg_prev_instr);
                //$display(" rg_curr_instr \n" , rg_curr_instr);
                //$display(" rg_next_instr \n" , rg_next_instr);                                             
        endrule 
                       
             
            
     rule encode(rg_Active == 1 && rg_curr.qual ==1 ) ;  // for refrence check page 69 of riscv trace spec
           
            //$display("inside encode \n" );
           // $display(" rg_prev.iadd %h \n" , rg_prev.iaddr);
          //  $display(" rg_curr.iadd %h  \n" , rg_curr.iaddr);
           // $display(" rg_curr.i_type %h  \n" , rg_curr.i_type);
           // $display(" rg_iaddr_last_reported %h  \n" , rg_iaddr_last_reported);
           // $display(" rg_next.iadd %h  \n" , rg_next.iaddr);
           // $display(" rg_branches \n" , rg_branches);
          //  $display(" rg_branch_map \n" , rg_branch_map);
             
               
                       
         let lv_resyncmax = 1 << (rg_ResyncMax + 4); 
         let lv_branch = rg_curr.i_type == NON_TAKEN_BRANCH || rg_curr.i_type == TAKEN_BRANCH; //4,5  
         let lv_ppccd =  rg_curr.priv != rg_prev.priv;  
         let lv_ppccd_br = rg_next.priv !=rg_curr.priv; 
         let lv_is_branch=pack(rg_curr.i_type ==  NON_TAKEN_BRANCH);
         let lv_notify =  rg_curr.iaddr[31];
         let lv_updiscon =pack((is_updiscons(rg_prev))&&(is_exceptions(rg_curr)||(rg_curr.priv!=rg_prev.priv)))^rg_curr.iaddr[31];
         let lv_irreport =pack(rg_prev.i_type==RETURN || rg_prev.i_type==EXCEPTION_OR_INTERRUPT_RETURN);
	 let lv_addr_full = (rg_comp_ext== 0 ) ? zeroExtend(address_handler_nc(rg_curr,FULL)[30:1]) : address_handler_nc(rg_curr,FULL);
	 let lv_addr_diff_case_1 = (rg_comp_ext== 0 ) ? zeroExtend(address_handler_nc(rg_curr,DIFFERENTIAL)[30:1]) : address_handler_nc(rg_curr,DIFFERENTIAL);
	 let lv_addr_diff_case_2 = (rg_comp_ext== 0 ) ? zeroExtend(address_handler_nc(rg_prev,DIFFERENTIAL)[30:1]) : address_handler_nc(rg_prev,DIFFERENTIAL);
	 
	  
	  SYNC_T lv_format = START; //SYNC_T sf   ,QUAL_STATUS_T qual,Bit#(1) thaddr,Bit#(1) en
         QUAL_STATUS_T  lv_qual = NO_CHANGE;
         Bit#(1) lv_thaddr =  0 ;
         Bit#(1) lv_en  = 0 ;
         Bit#(1) lv_with_address = 0 ; //rg_pac_gen
         Bit#(1) lv_pac_gen = 0 ;  
         Bit#(1) lv_which_packet  = 0;
         Bit#(1) lv_address_updiscon  = 0;
         Bit#(1) lv_sel_diff_addr  = 0;
	  
             
        if(lv_branch)begin  
                rg_branches <= rg_branches + 1;   
                 lv_pac_gen = 0;            
                   if (/*rg_curr.i_type ==  NON_TAKEN_BRANCH*/ lv_is_branch == 1) begin  
                      rg_branch_map <= rg_branch_map | 1 << rg_branches; end
                       
               end   
               
           else if(is_exceptions(rg_prev)) begin                      
                    if (is_exceptions(rg_curr)&& rg_curr.iretire == 0) begin  
                            rg_reported <= 1;  
        		    lv_pac_gen = 1; 
                            lv_format= TRAP;
                            lv_qual = NO_CHANGE;
                            lv_thaddr= 0 ; 
                            lv_which_packet = 1;  
                          end
                            
                       else begin
                         
                          if (rg_reported == 1) begin 
                              rg_reported <= 0; 
                              lv_pac_gen = 1;
                              lv_format= START ;
                            lv_qual = NO_CHANGE ; 
                            lv_which_packet = 1;
                            end 
                              
                          else begin
                             lv_pac_gen = 1;
                              lv_format= TRAP ;
                            lv_qual = NO_CHANGE ; 
                            lv_thaddr= 1; 
                            lv_which_packet = 1; 
                             end        
                          end                                
                        end
                        
             else if ( lv_ppccd || rg_resync_count > lv_resyncmax || (rg_curr.qual == 1  && rg_prev.qual ==0)  ) begin                    
          
                          lv_pac_gen = 1;
                          lv_format= START ; 
                            lv_qual = NO_CHANGE;
                            lv_which_packet = 1;
                           end                         
              else if (is_updiscons(rg_prev)) begin                            
                      if (is_exceptions(rg_curr) && rg_curr.iretire == 0  ) begin                     
                            rg_reported <= 1;
                              lv_pac_gen = 1;
                              lv_format= TRAP ; 
                             lv_qual = NO_CHANGE ;
                             lv_thaddr= 0 ; 
                             lv_which_packet = 1; 
                            end
                         else begin 
                           lv_pac_gen = 1; 
                            lv_with_address=1;  
                            lv_which_packet = 0; 
                            lv_sel_diff_addr = 1 ; 
                            //$display("case 1");  // addr will be jump addr because we are checking previous address                         
                          end  
                         end                  
                else if ((rg_resync_count == lv_resyncmax && rg_branches !=0  ) || (rg_curr.iretire > 0  &&(is_exceptions(rg_curr) ) ) ) begin                                  
		           lv_pac_gen = 1;
		           lv_with_address=1;
		           lv_which_packet = 0;
		           //$display("case 2");   // here it has some twist     // got it its happening because of rg_branch update delay            
                          end 
                else if  ( (is_exceptions(rg_next) && rg_next.iretire == 0 )|| lv_ppccd_br ) begin
                          lv_pac_gen = 1;                     
                         lv_with_address=1; 
                         lv_which_packet = 0;
                        // $display("case 3"); // t
                         end                                                     
                   else if  ( rg_branches == 31 ) begin   
         		lv_pac_gen = 1;
         		lv_with_address=0; 
         		lv_which_packet = 0;    // no addr so dont care                                          
                      end   
                      
          if (lv_pac_gen == 1) begin 
                     
                      if ( lv_which_packet == 1 && (lv_format == START || lv_format == TRAP)) begin 
                           rg_resync_count<=0; end 
                           else begin rg_resync_count <= rg_resync_count+1; end 
                           // $display("resync count %d", rg_resync_count);                             
		  if (lv_which_packet == 1 ) begin 
			 
			case(lv_format)
				START: begin
					  rg_packet <= extend({lv_addr_full,pack(rg_curr.priv),lv_is_branch,pack(lv_format),2'b11});
					   //$display("%d",rg_test_count +3," rg_packet:- %h", rg_packet);
					   $display("%d,%d,%h,%d,--,--,--,--,0,--,--,--,--,--,--,--,--,%d,--,--,--,--,--,--,--,--",2'b11,pack(lv_format),lv_addr_full,lv_is_branch,pack(rg_curr.priv));
					   //$display("%d",rg_test_count +3," format3, subformat 0 ");
					     rg_test_count <= rg_test_count + 1;
					     rg_iaddr_last_reported<=rg_curr.iaddr;
				end
			
				TRAP: begin  
			 rg_packet <= extend({pack(rg_curr.tval),lv_addr_full,lv_thaddr,pack(rg_curr.i_type==INTERRUPT),pack(rg_curr.cause),pack(rg_curr.priv),lv_is_branch,pack(lv_format),2'b11}); 
			                    $display("%d",rg_test_count+3," format3,, subformat 1 ");
			                   // $display("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",2'b11,pack(lv_format),lv_addr_full,lv_is_branch,);
			                    rg_test_count <= rg_test_count + 1;
				end	
				CONTEXT: begin	
					rg_packet <= extend({pack(rg_curr.priv),pack(lv_format),2'b11});
					 $display("%d",rg_test_count+3," format3, , subformat 2 ");
					 //$display("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",2'b11,pack(lv_format),lv_addr_full,lv_is_branch,);
					 rg_test_count <= rg_test_count + 1;
				end
				SUPPORT: begin
					rg_packet <= extend({pack(lv_qual),1'b0,rg_teEnable,pack(lv_format),2'b11});
					 $display("%d",rg_test_count+3," format3, , subformat 3 ");
					// $display("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",2'b11,pack(lv_format),lv_addr_full,lv_is_branch,);
					 rg_test_count <= rg_test_count + 1;
				end
		
			endcase
		       end 
		   else   begin 
                            //  $display("rg_branches           %d" ,rg_branches );
                            //  $display("rg_branch_map %d" ,rg_branch_map );                                 
			if(lv_with_address ==1) begin   
			    rg_iaddr_last_reported<=rg_curr.iaddr;
			   if ( rg_branches != 0 ) begin // Create branch packet WITH address 
			         //$display("%d",rg_test_count+3," format1, Create branch packet WITH address");
			          rg_test_count <= rg_test_count + 1;
			          rg_branches <=0;
         		          rg_branch_map <=0;
				if(rg_branches[4]==1) begin	
						//rg_packet <= extend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,rg_branch_map,rg_branches,2'b1});
						if (lv_sel_diff_addr == 1)begin  	
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_1,rg_branches,rg_branch_map,lv_irreport,lv_notify,lv_updiscon);end 
						else begin  	
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_2,rg_branches,rg_branch_map,lv_irreport,lv_notify,lv_updiscon);end
				  end
				  else if(rg_branches[3]==1) begin
						//rg_packet <=  extend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,rg_branch_map[14:0],rg_branches[3:0],2'b1});
						if (lv_sel_diff_addr == 1)begin 
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_1,rg_branches[3:0],rg_branch_map[14:0],lv_irreport,lv_notify,lv_updiscon);end 
						else begin 
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_2,rg_branches[3:0],rg_branch_map[14:0],lv_irreport,lv_notify,lv_updiscon);end
				  end
				  else if(rg_branches[2]==1) begin
						//rg_packet <= extend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,rg_branch_map[6:0],rg_branches[2:0],2'b1});
						if (lv_sel_diff_addr == 1)begin 
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_1,rg_branches[2:0],rg_branch_map[6:0],lv_irreport,lv_notify,lv_updiscon);end 
						else begin 
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_2,rg_branches[2:0],rg_branch_map[6:0],lv_irreport,lv_notify,lv_updiscon);end
				  end	
				  else if(rg_branches[1]==1) begin
					 	//rg_packet <= extend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,rg_branch_map[2:0],rg_branches[1:0],2'b1});
					 	if (lv_sel_diff_addr == 1)begin 
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_1,rg_branches[1:0],rg_branch_map[2:0],lv_irreport,lv_notify,lv_updiscon);end 
						else begin 
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_2,rg_branches[1:0],rg_branch_map[2:0],lv_irreport,lv_notify,lv_updiscon);end
				  end
				  else begin
						//rg_packet <= extend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,rg_branch_map[0],rg_branches[0],2'b1});
						if (lv_sel_diff_addr == 1)begin 
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_1,rg_branches[0],rg_branch_map[0],lv_irreport,lv_notify,lv_updiscon);end 
						else begin 
						$display("%d,--,%h,--,%d,%d,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b1,lv_addr_diff_case_2,rg_branches[0],rg_branch_map[0],lv_irreport,lv_notify,lv_updiscon);end
				  end
		         	end
		              else begin  // Address, without a branch-map	
		                  	//rg_packet <=extend({lv_irreport,lv_updiscon,lv_notify,lv_addr_diff,2'b10});
		                  	        $display("%d,--,%h,--,--,--,--,--,--,--,--,--,--,%d,--,%d,--,--,--,--,--,--,%d,--,--,--",2'b10,lv_addr_diff_case_2,lv_irreport,lv_notify,lv_updiscon); 
		                  	 //$display("%d",rg_test_count+3," format2,Address, without a branch-map");
		                  	 rg_test_count <= rg_test_count + 1;
		              end 
		        end  	 
			else begin //Create branch packet WITHOUT address
				 //$display("%d",rg_test_count+3," format1, Create branch packet WITHOUT address");
				    rg_test_count <= rg_test_count + 1;
				    rg_branches <=0;
         		           rg_branch_map <=0;
				if(rg_branches[4]==1)	begin rg_packet <=  extend({2'b1,rg_branches,rg_branches});
				    $display("%d,--,--,--,%d,%d,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--",2'b1,rg_branches,rg_branch_map);
				 end 
				else if(rg_branches[3]==1)begin	rg_packet <=  extend({2'b1,rg_branches[3:0],rg_branch_map[14:0]});
				 $display("%d,--,--,--,%d,%d,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--",2'b1,rg_branches[3:0],rg_branch_map[14:0]);
				 end 
				else if(rg_branches[2]==1)begin	rg_packet <=  extend({2'b1,rg_branches[2:0],rg_branch_map[6:0]});
				 $display("%d,--,--,--,%d,%d,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--",2'b1,rg_branches[2:0],rg_branch_map[6:0]);
				 end
				else if(rg_branches[1]==1)begin	rg_packet <=  extend({2'b1,rg_branches[1:0],rg_branch_map[2:0]});
				 $display("%d,--,--,--,%d,%d,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--",2'b1,rg_branches[1:0],rg_branch_map[2:0]);
				 end 
				else begin 	rg_packet <=  extend({2'b1,rg_branches[0],rg_branch_map[0]});
				$display("%d,--,--,--,%d,%d,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--,--",2'b1,rg_branches[0],rg_branch_map[0]);
				end
			end
	              end 
	             
	             end 
                      
                      // now figure out problem   
                      // first check python code                                          
     endrule 
    
    // to do add resynccount
    method ActionValue#(Bool) write_req (Bit#(32) addr,Bit#(32) data);
        Bool success = True;    
      
        if(addr[7:0] =='h00) begin                             
        	rg_trace_control <= truncate(data)  ; end  	       
        else  begin                             
        	 Bool success = False  ; end 
        	 
        	 return success;
     endmethod 
     
     method ActionValue#(Tuple2#(Bool,Bit#(32))) read_req(Bit#(32) addr);       
      Bool success = True;
      Bit#(32) result = 0;
      
        if(addr[7:0] =='h00) begin                             
        	result = zeroExtend(rg_trace_control) ; end        
        else  begin                             
        	 Bool success = False  ; end 
        	 
        	return tuple2(success, result);     
     endmethod 

endmodule


   module tbmktrace();      
                     
          Reg#(Bit#(32)) rg_state <- mkReg(0);
          Reg#(Bit#(14)) count <- mkReg(0);
          RegFile#(Bit#(14),Bit#(4)) registers_itype <- mkRegFileLoad("itype_Input.txt",0,10017);
          RegFile#(Bit#(14),Bit#(4)) registers_cause <- mkRegFileLoad("cause_Input.txt",0,10017);
          RegFile#(Bit#(14),Bit#(32)) registers_tval <- mkRegFileLoad("tval_Input.txt",0,10017);
          RegFile#(Bit#(14),Bit#(3)) registers_priv <- mkRegFileLoad("priv_Input.txt",0,10017);
          RegFile#(Bit#(14),Bit#(32)) registers_iaddr <- mkRegFileLoad("iaddr_Input.txt",0,10017);
          RegFile#(Bit#(14),Bit#(2)) registers_iretire <- mkRegFileLoad("iretire_Input.txt",0,10017);
          RegFile#(Bit#(14),Bit#(1)) registers_ilast <- mkRegFileLoad("ilast_Input.txt",0,10017); 
          
           IFC_trace_engine trace <- mktrace_engine(
           registers_itype.sub(count),
           registers_cause.sub(count),
           registers_tval.sub(count),
           registers_priv.sub(count),
           registers_iaddr.sub(count),
           registers_iretire.sub(count),
           registers_ilast.sub(count));
               
            rule step1(rg_state == 0);
                 let resp  <- trace.write_req(32'h0000_0000 ,32'h0000_021f);
                 $display("config done = %h", resp); 
                 $display("\n");
                 rg_state <= 1 ; 
            endrule
            
            rule step2(rg_state == 1);
                 let {resp,data}  <- trace.read_req(32'h0000_0000);
                 $display("config read= %h", data); 
                 $display("\n");
                 rg_state <= 2 ; 
            endrule
            
            rule step3(rg_state == 2);
                 //let data= registers.sub(count);
                  if(count ==10016)
                  $finish(0);
                    //$display("count = %d \n", count+2 );
                   // registers_itype.sub(count);
                   // $display("itype = %d \n", registers_itype.sub(count));
                    //$display("cause = %d \n", registers_cause.sub(count));
                    //$display("tval = %d \n", registers_tval.sub(count));
                   // $display("priv = %d \n", registers_priv.sub(count));
                   // $display("iaddr = %h \n", registers_iaddr.sub(count));
                   // $display("iretire = %d \n", registers_iretire.sub(count));
                  //  $display("ilast = %d \n", registers_ilast.sub(count));
                   // registers_cause.sub(count); 
                   // registers_tval.sub(count); 
                    //registers_priv.sub(count); 
                    //registers_iaddr.sub(count); 
                    //registers_iretire.sub(count); 
                    //registers_ilast.sub(count);   
               //  $display("--------------------------------------------------------------");
                 //$display("\n"); 
                 //rg_state <= 2 ;
                 count<= count + 1; 
            endrule

            //rule step3(rg_state >=2 && rg_state <= 40);
            //     rg_state <= rg_state + 1;           
            //endrule
              
	   /* rule step5(rg_state == 41);
		 $display("Output Value = %h",cordic_user.mv_read_req(64'h0000_0000_0000_0018));
		 fxptWrite(10,cordic_user.mv_read_req(64'h0000_0000_0000_0018));
                 $display("\n"); 
                 $display("--------------------------------------------------------------");
                if (count == 63)        
                    $finish();
                 else rg_state <= 0 ;    
             endrule*/
             
 
          endmodule
  

 
 
