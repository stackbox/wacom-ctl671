wacom-objs	:= wacom_wac.o wacom_sys.o
obj-m 		:= wacom.o

ifndef KVERSION
KVERSION := $(shell uname -r)
endif

all:
	$(MAKE) -C /lib/modules/$(KVERSION)/build M=$(PWD) modules

clean:
	$(MAKE) -C /lib/modules/$(KVERSION)/build M=$(PWD) clean
