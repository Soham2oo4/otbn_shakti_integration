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

set(CMAKE_C_FLAGS "-mcmodel=medany -ffunction-sections -fdata-sections -nostartfiles -nostdlib -nostdinc -static -lgcc -Wl,--nmagic -Wl,--gc-sections")

file(GLOB C_FILES libfemto/*/*.c libfemto/*/*/*.c libfemto/include/*.h)
file(GLOB HEADER_FILES libfemto/include/*.h libfemto/*/*/*/*.h)
message(${HEADER_FILES})
set(SRC_FILES ${C_FILES} ${HEADER_FILES})
add_library(femto STATIC ${SRC_FILES})
target_include_directories(femto PUBLIC libfemto/include)

install(TARGETS femto DESTINATION lib)
install(FILES ${HEADER_FILES} DESTINATION include)
