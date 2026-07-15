#include "Vtb_p384.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <cstdio>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtb_p384* top = new Vtb_p384;

    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("tb_p384.fst");

    vluint64_t sim_time = 0;
    // 2B time units = 200M clock cycles at 10 ns/cycle.
    // P-384 keygen takes ~2-4M OTBN cycles; this gives ~50x headroom.
    vluint64_t max_time = 2000000000ULL;

    top->clk_i  = 0;
    top->rst_ni = 0;

    while (!Verilated::gotFinish() && sim_time < max_time) {
        if (sim_time >= 100) top->rst_ni = 1;
        if ((sim_time % 5) == 0) top->clk_i = !top->clk_i;

        top->eval();
        if (Verilated::gotFinish()) break;
        tfp->dump(sim_time);
        sim_time++;

        if (sim_time % 50000000 == 0)
            fprintf(stderr, "[sim] time=%lu / %lu (%.0f%%)\n",
                    (unsigned long)sim_time, (unsigned long)max_time,
                    100.0 * sim_time / max_time);
    }

    if (!Verilated::gotFinish())
        fprintf(stderr, "[sim] TIMEOUT at time=%lu\n", (unsigned long)sim_time);

    top->final();
    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
