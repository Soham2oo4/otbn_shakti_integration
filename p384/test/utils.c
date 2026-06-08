// Minimal bare-metal runtime stubs for Shakti P-384 test.
#include <stddef.h>
#include <stdint.h>

// Shakti UART (ns16550-compatible at 0x11300)
#define UART_BASE    0x00011300UL
#define UART_TX_DATA (UART_BASE + 4)
#define UART_STATUS  (UART_BASE + 12)

// SIGN_FINISH: writing to 0x2000C triggers $finish(0) in TbSoc
#define SIGN_FINISH (*(volatile uint32_t *)0x2000CUL)

static void uart_putc(char c) {
    // Wait while TX busy (bit 1 of status register)
    while (*(volatile uint16_t *)UART_STATUS & 0x2)
        ;
    *(volatile uint8_t *)UART_TX_DATA = (uint8_t)c;
}

void uart_puts(const char *s) {
    while (*s) uart_putc(*s++);
}

// Print unsigned decimal
void uart_putdec(unsigned long n) {
    char buf[22];
    int i = 0;
    if (n == 0) { uart_putc('0'); return; }
    while (n > 0) { buf[i++] = '0' + (n % 10); n /= 10; }
    while (i > 0) uart_putc(buf[--i]);
}

void uart_puthex32(uint32_t v) {
    static const char hex[] = "0123456789abcdef";
    uart_putc('0'); uart_putc('x');
    for (int i = 28; i >= 0; i -= 4)
        uart_putc(hex[(v >> i) & 0xF]);
}

void sim_finish(void) {
    SIGN_FINISH = 1;
    while (1);
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p = s;
  while (n--) *p++ = (unsigned char)c;
  return s;
}

void *memcpy(void *dst, const void *src, size_t n) {
  unsigned char *d = dst;
  const unsigned char *s = src;
  while (n--) *d++ = *s++;
  return dst;
}
