// See LICENSE for license details.
// Device driver for the Shakti UART

#include "femto.h"

enum {
    /* UART Registers */
    UART_REG_TXFIFO = 0,
    UART_REG_RXFIFO = 1,
    UART_REG_TXCTRL = 2,
    UART_REG_RXCTRL = 3,
    UART_REG_IE     = 4,
    UART_REG_IP     = 5,
    UART_REG_DIV    = 6,

    /* TXCTRL register */
    UART_TXEN       = 1,
    UART_TXSTOP     = 2,

    /* RXCTRL register */
    UART_RXEN       = 1,

    /* IP register */
    UART_IP_TXWM    = 1,
    UART_IP_RXWM    = 2
};

static volatile int *uart;

static void shakti_uart_init()
{
	uart = (int *)(void *)getauxval(SHAKTI_UART0_CTRL_ADDR);
    /* TODO: Include once skeleton complete
	uint32_t uart_freq = getauxval(UART0_CLOCK_FREQ);
	uint32_t baud_rate = getauxval(UART0_BAUD_RATE);
    uint32_t divisor = uart_freq / baud_rate - 1;
    uart[UART_REG_DIV] = divisor;
    uart[UART_REG_TXCTRL] = UART_TXEN;
    uart[UART_REG_RXCTRL] = UART_RXEN;
    uart[UART_REG_IE] = 0;
    */
}

static int shakti_uart_getchar()
{
    return 0;
}

static int shakti_uart_putchar(int ch)
{
    register char a0 asm("a0") = ch;
  asm volatile ("li t1, 0x11300" "\n\t"	//The base address of UART config registers
        "uart_status_simple: lb a1, 12(t1)" "\n\t"
        "andi a1,a1,0x2" "\n\t"
        "beqz a1, uart_status_simple" "\n\t"
				"sb a0, 4(t1)"  "\n\t"
				:
				:
				:"a0","t1","cc","memory");
  return 0;

}

console_device_t console_shakti_uart = {
    shakti_uart_init,
    shakti_uart_getchar,
    shakti_uart_putchar
};
