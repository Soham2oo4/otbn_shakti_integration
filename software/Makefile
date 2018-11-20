# Setup user input parameters
XLEN ?= 64
ISA ?= gc
ABI ?= lp64

# Setup the constants require for build
RISCV_PREFIX = riscv$(XLEN)-unknown-elf-

CFLAGS = -mcmodel=medany -ffunction-sections -fdata-sections

LDFLAGS = -nostartfiles -nostdlib -nostdinc -static -lgcc \
		  -Wl,--nmagic -Wl,--gc-sections

INCLUDES = -Ilibfemto/include

ARCH = rv$(XLEN)$(ISA)

# Setup the source dirs
libfemto_dirs = libfemto/std limfemto/drivers libfemto/arch/riscv
libfemto_src  = $(sort $(foreach d,$(libfemto_dirs),$(wildcard $(d)/*.c)))
libfemto_asm  = $(sort $(foreach d,$(libfemto_dirs),$(wildcard $(d)/*.s)))
libfemto_objs = $(patsubst %.s,%.o,$(libfemto_asm)) \
                $(patsubst %.c,%.o,$(libfemto_src))

all: build/libfemto.a
	@echo "Creating build directory"
	@mkdir -p build

build/libfemto.a : $(libfemto_objs)
	$(RISCV_PREFIX)ar rvs libfemto.a $(libfemto_objs)

%.o : %.c
	$(RISCV_PREFIX)gcc $(CFLAGS) $(LDFLAGS) $(INCLUDES) $< -o $@
	
.PHONY : clean
clean: 
	@echo "Clearing build directory"
	@rm -rf build
