/* Minimal bare-metal linker script for Shakti C-class.
 * Memory map matches the Shakti SoC simulation defaults.
 *   ROM/IMEM at 0x00000000 — not used here (firmware loads to RAM)
 *   RAM       at 0x80000000 — main memory
 *
 * Adjust BASE_ADDR if your Shakti SoC uses a different RAM base.
 */

OUTPUT_ARCH(riscv)
ENTRY(_start)

BASE_ADDR = 0x80000000;

MEMORY {
  ram (rwx) : ORIGIN = BASE_ADDR, LENGTH = 64M
}

SECTIONS {
  . = BASE_ADDR;

  .text : {
    *(.text.init)
    *(.text*)
    /* OTBN app sections: ordering is critical for _imem_end / _dmem_data_end
     * symbol placement.  Each *_end section must immediately follow its
     * corresponding data section so that  end - start == array length. */
    *(.rodata.otbn.*.imem_data)
    *(.rodata.otbn.*.imem_end)
    *(.rodata.otbn.*.dmem_data)
    *(.rodata.otbn.*.dmem_end)
    *(.rodata*)
  } > ram

  .data : {
    *(.data*)
    *(.sdata*)
  } > ram

  .bss : {
    __bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(COMMON)
    __bss_end = .;
  } > ram

  /* tohost/fromhost for HTIF (test pass/fail) */
  .htif (NOLOAD) : {
    tohost  = .;
    . += 8;
    fromhost = .;
    . += 8;
  } > ram

  _stack_top = ORIGIN(ram) + LENGTH(ram);
}
