#
# Makefile for the Tulip ethernet driver
#
# Note! Dependencies are done automagically by 'make dep', which also
# removes any old dependencies. DON'T put your own dependencies here
# unless it's something special (ie not a .c file).
#
# Note 2! The CFLAGS definitions are now in the main makefile...
#Add mips16 Support

DIR_RTLASIC = $(DIR_LINUX)/drivers/net/rtl819x/
ifdef CONFIG_RTL865X_KERNEL_MIPS16_LAYERDRIVER
	CFLAGS_rtl865x_arp.o 		= -mips16
	CFLAGS_rtl865x_ip.o		= -mips16
	CFLAGS_rtl865x_ppp.o 		= -mips16
	CFLAGS_rtl865x_nexthop.o 	= -mips16
	CFLAGS_rtl865x_route.o		= -mips16
	CFLAGS_rtl865x_multicast.o	= -mips16
endif
	
	obj-$(CONFIG_RTL_HARDWARE_MULTICAST) := rtl865x_multicast.o

	ifdef CONFIG_RTL_LAYERED_DRIVER_L3
		obj-y += rtl865x_arp.o rtl865x_ip.o rtl865x_ppp.o rtl865x_nexthop.o rtl865x_route.o 
	endif
ifdef CONFIG_RTL_MULTIPLE_WAN
		obj-y += rtl865x_multipleWan.o
endif
ifdef CONFIG_RTL_LOCAL_PUBLIC
		obj-y += rtl865x_localPublic.o
endif

EXTRA_CFLAGS += -O1 -DRTL_TBLDRV -D__linux__  -mno-memcpy -DRTL865X_OVER_KERNEL -DRTL865X_OVER_LINUX -Werror
#EXTRA_CFLAGS += -I$(DIR_LINUX)
#EXTRA_CFLAGS += -I$(DIR_RTLASIC)/AsicDriver
#EXTRA_CFLAGS += -I$(DIR_RTLASIC)/common
#EXTRA_CFLAGS += -I$(DIR_RTLASIC)/l2Driver
#EXTRA_CFLAGS += -I$(DIR_RTLASIC)/igmpsnooping
EXTRA_CFLAGS += -I$(DIR_RTLASIC)

ifeq ($(CONFIG_RTL865X_MODULE_ROMEDRV),y)
	EXTRA_CFLAGS += -D__KERNEL__ 
	EXTRA_CFLAGS += -G 0
	EXTRA_CFLAGS += -DMODULE
	EXTRA_CFLAGS += -mlong-calls
	EXTRA_CFLAGS += -DEXPORT_SYMTAB 
	EXTRA_CFLAGS += -DCONFIG_RTL865X_MODULE_INTERNAL
#	EXTRA_CFLAGS += -DMODVERSIONS 
#	EXTRA_CFLAGS += -include $(DIR_LINUX)/include/linux/modversions.h
endif

EXTRA_AFLAGS += $(EXTRA_CFLAGS)
