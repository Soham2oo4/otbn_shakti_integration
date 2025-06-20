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

Author: Neel Gala,Aditya Mathur
Email id: aditya.mathur96@outlook.com
Details:

--------------------------------------------------------------------------------------------------
*/

package encoder_pipeline;
  import BUtils::*;
  import Vector::*;
  import LFSR::*;
  function Tuple2#(Bit#(8),Bit#(11)) encoder (Vector#(n, Bit#(8)) inp, Bit#(11) left, Bit#(11) right);
    if (left==right-1)
      return tuple2(inp[left],left);
    else
	begin	
      let {max1,index1}= encoder(inp,left,(left+right)/2);
      let {max2,index2}= encoder(inp,(left+right)/2,right);
	  if(max1>max2)
		  return tuple2(max1,index1);
	  else
		  return tuple2(max2,index2);
	  end	  
  endfunction

  interface Ifc_enc#(numeric type number_of_interrupt);
    method Action inp(Vector#(number_of_interrupt,Bit#(8)) inpt);
    method ActionValue#(Tuple2#(Bit#(8),Bit#(11))) out;
  endinterface

 
  module mkmain(Ifc_enc#(number_of_interrupt));
	Integer limit = valueOf(number_of_interrupt);
    Vector#(number_of_interrupt,Reg#(Bit#(8))) rg <- replicateM(mkRegA(0));
	Reg#(Bit#(8)) rg_final <- mkRegA(0);
    Reg#(Bit#(8)) rg_out1 <- mkRegA(0);
//	Reg#(Bit#(8)) rg_out2 <- mkRegA(0);
	Reg#(Bit#(11)) rg_index <- mkRegA(0);
	Reg#(Bit#(11)) rg_index1 <- mkRegA(0);
//	Reg#(Bit#(11)) rg_index2 <- mkRegA(0);
	Reg#(Bool) start <- mkRegA(True);
	Integer half=limit/2;
    rule start_enc(start);
      Vector#(number_of_interrupt,Bit#(8)) t=replicate(0);
      for(Integer i=0;i<limit/2;i=i+1)
        t[i]=rg[i];	
      let {o,in}=encoder(t,0,fromInteger(valueOf(number_of_interrupt)));
	  rg_out1<=o;
	  rg_index1<=in;
	  start<=False;
    endrule
	rule start_enc2(!start);
		Vector#(number_of_interrupt,Bit#(8)) t1=replicate(0);
		for(Integer i=limit/2;i<=limit-1;i=i+1)
			t1[i]=rg[i];
		let {out,index}=encoder(t1,0,fromInteger(valueOf(number_of_interrupt)));
	//	rg_out2<=out;
	//	rg_index2<=index;
		start<=True;
		rg_final<=max(rg_out1,out);	
		rg_index<=(rg_index1>index)?rg_index1:index;
	endrule
    method Action inp(Vector#(number_of_interrupt,Bit#(8)) inpt);
      for(Integer i=0;i<limit;i=i+1)
        rg[i]<=inpt[i];
    endmethod
    method ActionValue#(Tuple2#(Bit#(8),Bit#(11))) out;
	        return tuple2(rg_final,rg_index);
    endmethod
  endmodule
	
//  (*synthesize*)
//  module mkencoder(Ifc_enc#(1024));
//  	Ifc_enc#(1024) enc <- mkmain;
//	method inp= enc.inp;
//	method out= enc.out;
//  endmodule
//
//test bench
//	module mkTest(Empty);
//		Ifc_enc#(1024) tb1 <-mkencoder;//instantiating the module
//		LFSR#(Bit#(8)) lfsr [1024];// creating the lfsr
//		for(Integer i=0; i<1024; i=i+1)
//			lfsr[i]<- mkLFSR_8 ;
//		Reg#(Bool)	done<- mkRegA(False)	;
//		Reg#(Bit#(8)) test_vec<-mkRegA(15);//test vec
//		rule rl1(!done);
//			Vector#(1024,Bit#(8))	input_vec=replicate(0);//instantiating the input vector
////			input_vec[15]=8'b11111111;//fixed for testing purpose
//			input_vec[1023]=test_vec;
//			for(Integer i=0;i<1023;i=i+1)
//			begin
//				let temp=lfsr[i].value();//new random value is being generated
//				input_vec[i]=temp;//entering the random values
//				lfsr[i].next;//requesting the new random value
//			end
//			tb1.inp(input_vec);
//				endrule
//		rule out_rl(done);
//				let {enc_out,index}=tb1.out;
//			if(test_vec!=enc_out)
//				$display("fail");
//			else
//				$display("Pass");
//		endrule
//	endmodule
endpackage


