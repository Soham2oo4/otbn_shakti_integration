cmake_minimum_required(VERSION 3.6)
set(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_C_COMPILER riscv64-unknown-elf-gcc)


set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

project(libfemto
        VERSION 1.0
        DESCRIPTION "Bare metal library for RISC-V"
        LANGUAGES C)

message("Cross compiling libfemto for RISC-V")
message(${CMAKE_C_ARCHIVE_CREATE})
message(${CMAKE_AR})


set(CMAKE_C_FLAGS "-mcmodel=medany -ffunction-sections -fdata-sections -nostartfiles -nostdlib -nostdinc -static -lgcc -Wl,--nmagic -Wl,--gc-sections")

file(GLOB SRC_FILES libfemto/*/*.c libfemto/*/*/*.c libfemto/include/*.h)
add_library(femto STATIC ${SRC_FILES})
target_include_directories(femto PUBLIC ./libfemto/include)
