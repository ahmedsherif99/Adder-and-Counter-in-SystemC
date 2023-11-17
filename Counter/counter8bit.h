#include "systemc.h"//Include SystemC header file

SC_MODULE (counter8bit) {
	sc_in    <bool> clock;
	sc_in    <bool> reset;
	sc_in    <bool> enable;
	sc_out   <sc_uint<8> > counter_out;
	//Define a clock inlet for the Counter, named 'clock'
	//Define an input port of bool type, named 'reset'	
	//Define an input port of bool type, named 'enable'
	//Define an output port of 8-bit SystemC unsigned integer type, named 'counter_out'

	sc_uint<8>  count;
	//Define a local register variable of 8-bit SystemC unsigned integer type, named 'count'
	void incr_counter () {
	
	//Define a void function with no parameters and body, named 'incr_count', - start of 'incr_count'
	    while(true){
		if(enable.read()){
            //If enable is true, then, - start If
			if(reset.read()){
                //If reset is true, - start If
				count = 0 ;
				counter_out.write(count);
				//count is set to zero
                    	//counter_out is written with value count
			} // - end if
			else{
		    //else - start else
				count = count + 1;
        			//Increment count by 1
				counter_out.write(count);
        			//counter_out is written with value count
                }//end else
            }// - end if
            wait();// wait for next change of sensitivity variable/signal
 	    }
	}	// - end of 'incr_count'

	SC_CTOR(counter8bit) {
	//Start Constructor
		SC_THREAD (incr_counter);
		//Register 'incr_count' as SC_THREAD process
		sensitive << clock.pos();
		//Make 'incr_count' sensitive to clock's positive edge
		count=0;
		// Initialize count as ZERO
	}//End Constructor
};
