//Include the Module header files
#include "counter8bit.h"
#include "TestbenchCounter.h"

SC_MODULE(CounterMain){
	sc_clock     clock ;
  	//Declare the clock, named 'clock' (without constructor)
	sc_signal<bool> reset_s,enable_s;
  	//Declare signals necessary for interconnecting 'reset', 'enable' of the testbench and counter8bit module
	sc_signal <sc_uint<8> > counter_out_s;
	//Declare signal for connecting the 'counter_out' of counter8bit module
	
	counter8bit counter;
	TestbenchCounter test1;
	//Declare an instance of counter8bit, named 'counter' (without constructor)
	//Declare an instance of Testbench, named 'test1' (without constructor)
       
    	// Counter1 Test1
	//Notice how Modelsim expects the constructor of Top-level Module
	SC_CTOR(CounterMain): clock("SystemClock", 2, 0.5, true), counter("incr_counter"), test1("testprocess"){
		//Interconnect 'reset', 'enable', 'clock', 'counter_out' of 'counter' with the signals necessary
		counter.reset(reset_s);
		counter.enable(enable_s);
		counter.clock(clock);
		counter.counter_out(counter_out_s);
        
		//Interconnect 'reset', 'enable' of 'test1' with the signals necessary
		test1.reset(reset_s);
		test1.enable(enable_s);
	}
 };

//Notice this is most crucial part in making Top-Level Module of Modelsim
SC_MODULE_EXPORT(CounterMain);
