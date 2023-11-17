#include "systemc.h" //TestbenchAdder.h
SC_MODULE(TestbenchAdder){
	sc_out<sc_logic> TA, TB, TCin;
	void testprocess(){
		TA.write(SC_LOGIC_0);
		TB.write(SC_LOGIC_0);
		TCin.write(SC_LOGIC_0);
		wait(10, SC_NS);

		TA.write(SC_LOGIC_0);
		TB.write(SC_LOGIC_0);
		TCin.write(SC_LOGIC_1);
		wait(10, SC_NS);

		TA.write(SC_LOGIC_0);
		TB.write(SC_LOGIC_1);
		TCin.write(SC_LOGIC_0);
		wait(10, SC_NS);

		TA.write(SC_LOGIC_0);
		TB.write(SC_LOGIC_1);
		TCin.write(SC_LOGIC_1);
		wait(10, SC_NS);

		TA.write(SC_LOGIC_1);
		TB.write(SC_LOGIC_0);
		TCin.write(SC_LOGIC_0);
		wait(10, SC_NS);

		TA.write(SC_LOGIC_1);
		TB.write(SC_LOGIC_0);
		TCin.write(SC_LOGIC_1);
		wait(10, SC_NS);

		TA.write(SC_LOGIC_1);
		TB.write(SC_LOGIC_1);
		TCin.write(SC_LOGIC_0);
		wait(10, SC_NS);

		TA.write(SC_LOGIC_1);
		TB.write(SC_LOGIC_1);
		TCin.write(SC_LOGIC_1);
		wait(10, SC_NS);
	}
	SC_CTOR(TestbenchAdder){
		SC_THREAD(testprocess);
	}
};
