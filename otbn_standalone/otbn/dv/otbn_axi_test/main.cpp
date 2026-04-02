#include "Vtb_otbn_axi.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <cstdio>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtb_otbn_axi* top = new Vtb_otbn_axi;

    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("tb_otbn_axi.fst");

    vluint64_t sim_time = 0;
    vluint64_t max_time = 200000000ULL; // 200M

    top->clk_i  = 0;
    top->rst_ni = 0;

    while (!Verilated::gotFinish() && sim_time < max_time) {
        if (sim_time >= 100) top->rst_ni = 1;
        if ((sim_time % 5) == 0) top->clk_i = !top->clk_i;

        top->eval();
        if (Verilated::gotFinish()) break;
        tfp->dump(sim_time);
        sim_time++;

        if (sim_time % 20000000 == 0)
            fprintf(stderr, "[sim] time = %lu\n", (unsigned long)sim_time);
    }

    top->final();
    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
