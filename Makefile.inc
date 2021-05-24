############ DO NOT CHANGE THESE #################
INCDIR:=./uart:./pwm:./bootrom:./clint:./common_bsv:./fabrics/axi4:./fabrics/axi4lite:./bram:./gpio:./sdram/32-bit:./jtagdtm:./onfi:./plic:./i2c:./qspi:./riscvdebug100:./spi:./watchdog
TOP_MODULE?=mkdummy

############# User changes to be done below #################
TOP_DIR?= riscvdebug100
TOP_FILE?= debug.bsv

