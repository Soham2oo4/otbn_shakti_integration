// Top-level driver for "verilated" objects (Verilog compiled with verilator)

#include <verilated.h>

#include "Vmkdummy.h"

vluint64_t main_time = 0;    // Current simulation time

double sc_time_stamp () {    // Called by $time in Verilog
    return main_time;
}

int main (int argc, char **argv, char **env) {
    Verilated::commandArgs (argc, argv);    // remember args

    Vmkdummy* mkdummy = new Vmkdummy;    // create instance of model

    mkdummy->RST_N = 0;    // assert reset
    mkdummy->CLK = 0;

    while (! Verilated::gotFinish ()) {
		if (main_time == 1) {
		    mkdummy->CLK = 1;
		}
		else if (main_time == 2) {
		    mkdummy->RST_N = 1;    // Deassert reset
		}
		// Toggle clock
		if ((main_time % 10) == 5) {
		    mkdummy->CLK = 0;
		}
		else if ((main_time % 10) == 0) {
		    mkdummy->CLK = 1;
		}
		
		mkdummy->eval ();
		main_time++;
    }

    mkdummy->final ();    // Done simulating

    delete mkdummy;
    mkdummy = NULL;

    exit (0);
}
