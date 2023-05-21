ifneq ($(KERNELRELEASE),)
# Kbuild part of makefile
obj-m := gl_module.o
CFLAGS_gl_module.o := -DDEBUG
else

export ARCH = arm
export CROSS_COMPILE = arm-linux-gnueabihf-
export KDIR = ~/gl_base_camp/raspberrypi/linux/
# build for current kernel if no specified
#KDIR ?= /lib/modules/`uname -r`/build

PWD := $(CURDIR)

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
endif
