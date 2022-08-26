############ DO NOT CHANGE THESE #################
SUPPORTED:=./uart:./pwm:./bootrom:./clint:./common_bsv:./fabrics/axi4:./fabrics/axi4lite:./bram:./gpio:./sdram/32-bit:./jtagdtm:./onfi:./plic:./i2c:./qspi:./riscvDebug013:./spi:./watchdog:./spi_v2:./gptimer
TOP_MODULE?=mkdummy

############# User changes to be done below #################
TOP_DIR?= spi_v2
TOP_FILE?= sspi_template.bsv

