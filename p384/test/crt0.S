// Minimal bare-metal startup for Shakti P-384 test.
// Clears .bss, sets up stack, calls main().

  .section .text.init
  .globl _start
_start:
  // Set stack pointer to top of RAM
  la   sp, _stack_top

  // Zero .bss
  la   a0, __bss_start
  la   a1, __bss_end
1:
  bge  a0, a1, 2f
  sd   zero, 0(a0)
  addi a0, a0, 8
  j    1b
2:

  // Jump to C main()
  call main

  // If main returns (it shouldn't), hang
3:
  j    3b
