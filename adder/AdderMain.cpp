#include "Adder.h"
#include "TestbenchAdder.h"

SC_MODULE(AdderMain){
	//Declare signals to be tied to the modules
	sc_signal<sc_logic> A_s,B_s,CIN_s;
	sc_signal<sc_logic> SUM_s,COUT_s;
	
	Adder adder1;
	TestbenchAdder test1;

	//Instantiate Adder and Bind Ports
	SC_CTOR(AdderMain): adder1("1BitAdder"), test1("TestBenchAdder"){
	  adder1.A(A_s);
	  adder1.B(B_s);
	  adder1.Cin(CIN_s);
	  adder1.sum(SUM_s);
	  adder1.Cout(COUT_s);
	  
	  //Instantiate Testbench And Bind Ports
	  test1.TA(A_s);
	  test1.TB(B_s);
	  test1.TCin(CIN_s);
	}
};

SC_MODULE_EXPORT(AdderMain);