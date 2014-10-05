#include "systemc.h"
using namespace std;


int sc_main(int argc, char* argv[]){
  sc_trace_file *tf = sc_create_vcd_trace_file("wave");
 // sc_clock clock_name(name, period, period_time_unit, duty_cycle, time_to_first_dege, time_to_first_dege_time_unit, first_edge_positive);
  sc_clock clk1("Clock1", 20, SC_NS, 0.2, 7, SC_NS, true);
  sc_clock clk2("Clock2", 20, SC_NS, 0.2, 7, SC_NS, false);
  sc_clock clk3("Clock3", 30, SC_NS, 0.5, 5, SC_NS);
  sc_clock clk4("Clock4", 30, SC_NS);
  sc_clock clk5("Clock5", 10, SC_NS, 0.5, 20, SC_NS, false);
  sc_clock clk6("Clock6", 50, SC_NS, 0.3, 140, SC_NS, false);
  //kind(), name(), period(), duty_cycle()
  
  cout<<clk1.kind()<<" "<<clk1.name()<<" "<<clk1.period()<<" clk1 "<<clk1.duty_cycle()<<endl;
  cout<<clk2.kind()<<" "<<clk2.name()<<" "<<clk2.period()<<" clk2 "<<clk2.duty_cycle()<<endl;
  cout<<clk3.kind()<<" "<<clk3.name()<<" "<<clk3.period()<<" clk3 "<<clk3.duty_cycle()<<endl;
  cout<<clk4.kind()<<" "<<clk4.name()<<" "<<clk4.period()<<" clk4 "<<clk4.duty_cycle()<<endl;
  cout<<clk5.kind()<<" "<<clk5.name()<<" "<<clk5.period()<<" clk5 "<<clk5.duty_cycle()<<endl;

  cout<<clk6.kind()<<" "<<clk6.name()<<" "<<clk6.period()<<" clk6 "<<clk6.duty_cycle()<<endl;
  
  sc_trace(tf, clk1, "Clock1");
  sc_trace(tf, clk2, "Clock2");
  sc_trace(tf, clk3, "Clock3");
  sc_trace(tf, clk4, "Clock4");
  sc_trace(tf, clk5, "Clock5");
  sc_trace(tf, clk6, "Clock6");
  sc_start(300, SC_NS);
  sc_close_vcd_trace_file(tf);
  return(0);
}


