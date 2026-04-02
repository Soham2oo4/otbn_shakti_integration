#include "Vadd_64_test.h"
#include "verilated.h"
#include "verilated_fst_c.h"

#include <cstdio>

vluint64_t sim_time = 0;
double sc_time_stamp() { return sim_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vadd_64_test* top = new Vadd_64_test;
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("add_64_test.fst");

    // Hold both resets active
    top->rst_ni = 0;
    top->rst_otp_ni = 0;

    const vluint64_t MAX_SIM_TIME = 100000000ULL;  // 100ms
    const vluint64_t RESET_RELEASE_TIME = 100;
    bool reset_released = false;

    while (!Verilated::gotFinish() && sim_time < MAX_SIM_TIME) {
        top->eval();
        tfp->dump(sim_time);

        // Release reset
        if (!reset_released && sim_time >= RESET_RELEASE_TIME) {
            top->rst_ni = 1;
            top->rst_otp_ni = 1;
            reset_released = true;
            printf("C++: Reset released at time %lu\n", (unsigned long)sim_time);
        }

        // Advance to next event
        if (top->eventsPending()) {
            sim_time = top->nextTimeSlot();
        } else {
            break;
        }
    }

    if (sim_time >= MAX_SIM_TIME) {
        printf("Warning: Simulation hit max time limit\n");
    }

    top->final();
    tfp->close();
    delete top;
    delete tfp;

    printf("Simulation finished at time %lu\n", (unsigned long)sim_time);
    return 0;
}
