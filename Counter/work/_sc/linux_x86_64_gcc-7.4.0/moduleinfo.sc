@0;moduleinfo.sc;6;21;0;gnuc;7;4;0

F5;/home/as8u22/mydocuments/Digital System Synthesis/Coursework 1/Counter/CounterMain.cpp
F4;/home/as8u22/mydocuments/Digital System Synthesis/Coursework 1/Counter/counter8bit.h
F3;/home/as8u22/mydocuments/Digital System Synthesis/Coursework 1/Counter/TestbenchCounter.h
F2;/home/as8u22/mydocuments/Counter/CounterMain.cpp
F1;/home/as8u22/mydocuments/Counter/TestbenchCounter.h
F0;/home/as8u22/mydocuments/Counter/counter8bit.h


M6;CounterMain;19;12416;4088;4088;0;0;CounterMain.dbs;F2;L5
B0;sc_core::sc_module;256;0;<NONE>;M1
S0;clock;2;288;CounterMain.dbs;T2;F2;L6
S0;reset_s;2;992;CounterMain.dbs;T4;F2;L8
S0;enable_s;2;1288;CounterMain.dbs;T4;F2;L8
S0;counter_out_s;2;1584;CounterMain.dbs;T0;F2;L10
C0;counter;1;1976;CounterMain.dbs;M3;F2;L13
C0;test1;1;3288;CounterMain.dbs;M5;F2;L14
N0;CounterMain;(sc_core::sc_module_name);CounterMain.dbs;F2;L20

M5;TestbenchCounter;19;12288;800;800;0;0;CounterMain.dbs;F1;L2
B0;sc_core::sc_module;256;0;<NONE>;M1
P0;reset;20;288;CounterMain.dbs;T4;F1;L4
P0;enable;20;544;CounterMain.dbs;T4;F1;L4
N0;TestbenchCounter;(sc_core::sc_module_name);CounterMain.dbs;F1;L45
N0;testprocess;();CounterMain.dbs;F1;L7

T4;bool;12;0;1;1;0;0;<NONE>

M3;counter8bit;19;12288;1312;1312;0;0;CounterMain.dbs;F0;L3
B0;sc_core::sc_module;256;0;<NONE>;M1
P0;clock;12;288;CounterMain.dbs;T4;F0;L4
P0;reset;12;536;CounterMain.dbs;T4;F0;L5
P0;enable;12;784;CounterMain.dbs;T4;F0;L6
P0;counter_out;20;1032;CounterMain.dbs;T0;F0;L7
V0;count;0;1272;CounterMain.dbs;T0;F0;L13
N0;counter8bit;(sc_core::sc_module_name);CounterMain.dbs;F0;L40
N0;incr_counter;();CounterMain.dbs;F0;L15

T2;sc_clock;30;0;0;0;0;0;<NONE>

M1;sc_module;19;4352;0;0;0;0;<NONE>

T0;sc_uint<8>;17;4608;8;40;0;0;<NONE>

