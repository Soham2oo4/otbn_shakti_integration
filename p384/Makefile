# Makefile for P-384 on Shakti (RISC-V 64-bit)
#
# Prerequisites:
#   1. Build the P-384 OTBN binary from OpenTitan:
#        cd /home/soham/shakti/opentitan
#        ./bazelisk.sh build //sw/otbn/crypto:run_p384
#      Locate the ELF (typically under bazel-out/):
#        ELF=$(find bazel-out -name "run_p384.elf" 2>/dev/null | head -1)
#
#   2. Extract the binary + defs:
#        cd /home/soham/shakti/p384
#        pip3 install pyelftools   # one-time
#        python3 scripts/extract_otbn_binary.py run_p384 $$ELF gen/
#      Produces: gen/run_p384_app.c  gen/run_p384_defs.h
#
#   3. make
#      Output: p384_test.elf

# ----------------------------------------------------------------
# Toolchain
# ----------------------------------------------------------------
CROSS   ?= riscv64-unknown-elf
CC      := $(CROSS)-gcc
LD      := $(CROSS)-ld
OBJDUMP := $(CROSS)-objdump

# ----------------------------------------------------------------
# Directories
# ----------------------------------------------------------------
ROOT   := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
GENDIR := $(ROOT)gen
OBJDIR := $(ROOT)build

# ----------------------------------------------------------------
# Include paths — root is p384/ so all sw/device/lib/... paths resolve
# ----------------------------------------------------------------
INCDIRS := -I$(ROOT)

# Defs header (generated): provides _OTBN_REM_run_p384_* as #defines
DEFS_HDR := $(GENDIR)/run_p384_defs.h

# ----------------------------------------------------------------
# Compiler flags
# ----------------------------------------------------------------
CFLAGS := \
  -march=rv64imac \
  -mabi=lp64 \
  -mcmodel=medany \
  -Os \
  -g \
  -ffreestanding \
  -fno-builtin \
  -Wall \
  -Wno-unused-parameter \
  -Wno-unused-value \
  $(INCDIRS) \
  -include $(DEFS_HDR)

# ----------------------------------------------------------------
# Sources
# ----------------------------------------------------------------
C_SRCS := \
  impl/p384.c \
  sw/device/lib/crypto/drivers/otbn.c \
  sw/device/lib/base/crc32.c \
  test/main.c \
  test/utils.c \
  $(GENDIR)/run_p384_app.c

ASM_SRCS := \
  test/crt0.S

OBJS := \
  $(addprefix $(OBJDIR)/, $(patsubst %.c, %.o, $(C_SRCS))) \
  $(addprefix $(OBJDIR)/, $(patsubst %.S, %.o, $(ASM_SRCS)))

# ----------------------------------------------------------------
TARGET  := p384_test.elf
LIBGCC  := $(shell $(CC) -march=rv64imac -mabi=lp64 -mcmodel=medany -print-libgcc-file-name)
LDFLAGS := -T $(ROOT)shakti.ld -static -nostdlib

# ----------------------------------------------------------------
.PHONY: all clean gen_check

all: gen_check $(TARGET)

gen_check:
	@if [ ! -f $(GENDIR)/run_p384_app.c ] || [ ! -f $(DEFS_HDR) ]; then \
	  echo ""; \
	  echo "ERROR: gen/ files missing. Generate them first:"; \
	  echo ""; \
	  echo "  # 1. Build the OTBN P-384 binary in OpenTitan:"; \
	  echo "  cd /home/soham/shakti/opentitan"; \
	  echo "  ./bazelisk.sh build //sw/otbn/crypto:run_p384"; \
	  echo "  ELF=\$$(find bazel-out -name 'run_p384.elf' 2>/dev/null | head -1)"; \
	  echo "  echo \"ELF is: \$$ELF\""; \
	  echo ""; \
	  echo "  # 2. Extract to C:"; \
	  echo "  cd /home/soham/shakti/p384"; \
	  echo "  pip3 install pyelftools   # if needed"; \
	  echo "  python3 scripts/extract_otbn_binary.py run_p384 \$$ELF gen/"; \
	  echo ""; \
	  exit 1; \
	fi

$(TARGET): $(OBJS) $(ROOT)shakti.ld
	$(CC) -march=rv64imac -mabi=lp64 -mcmodel=medany $(LDFLAGS) $(OBJS) $(LIBGCC) -o $@
	$(OBJDUMP) -d $@ > $(TARGET:.elf=.dis)
	@echo ""
	@echo "  Built: $@"
	@echo "  Disasm: $(TARGET:.elf=.dis)"

$(OBJDIR)/%.o: $(ROOT)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(ROOT)%.S
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)/$(GENDIR)/%.o: $(GENDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(TARGET) $(TARGET:.elf=.dis)
