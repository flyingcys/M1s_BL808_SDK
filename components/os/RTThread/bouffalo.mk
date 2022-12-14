# Component Makefile
#
## These include paths would be exported to project level
#COMPONENT_ADD_INCLUDEDIRS += include

## not be exported to project level
#COMPONENT_PRIV_INCLUDEDIRS :=

## This component's src
#COMPONENT_SRCS := clock.c components.c cpu.c idle.c ipc.c irq.c kservice.c mem.c memheap.c mempool.c object.c scheduler.c slab.c thread.c timer.c

#COMPONENT_OBJS := $(patsubst %.c,%.o, $(COMPONENT_SRCS))

#COMPONENT_SRCDIRS := .



# Component Makefile
#
## These include paths would be exported to project level
COMPONENT_ADD_INCLUDEDIRS += include libcpu/risc-v/e907

## not be exported to project level
COMPONENT_PRIV_INCLUDEDIRS :=

## This component's src
COMPONENT_SRCS1 := libcpu/risc-v/e907/cpuport.c \
					libcpu/risc-v/e907/context_gcc.S \
					src/clock.c \
					src/components.c \
					src/cpu.c \
					src/idle.c \
					src/ipc.c \
					src/irq.c \
					src/kservice.c \
					src/mem.c \
					src/memheap.c \
					src/mempool.c \
					src/object.c \
					src/scheduler.c \
					src/slab.c \
					src/thread.c \
					src/timer.c

COMPONENT_OBJS := $(patsubst %.c,%.o, $(COMPONENT_SRCS1))
COMPONENT_OBJS := $(patsubst %.S,%.o, $(COMPONENT_OBJS))
COMPONENT_SRCS := $(COMPONENT_SRCS1)
COMPONENT_SRCDIRS := src libcpu/risc-v/e907

# ASMFLAGS += -x assembler-with-cpp