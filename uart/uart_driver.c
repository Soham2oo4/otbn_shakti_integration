int putchar(int ch)
{
  register char a0 asm("a0") = ch;
  asm volatile ("li t1, 0x11300" "\n\t"	//The base address of UART config registers
				"sb a0, 4(t1)"  "\n\t"
				:
				:
				:"a0","t1","cc","memory");
  return 0;
}

