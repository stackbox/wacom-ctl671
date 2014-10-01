wacom-ctl671
============

This is wacom ctl671 's driver for ubuntu14, the code is based [@mariotaku](http://www.v2ex.com/t/77630)'s code.And I made some fixes because some apis in `linux/input/mt.h` had changed since 3.x kernel.

You can use dkms to install this driver

```bash
#git clone https://github.com/superalsrk/wacom-ctl671.git /usr/src/wacom-2.0

#dkms add -m wacom -v 2.0
#dkms build -m wacom -v 2.0
#dkms install -m wacom -v 2.0
```

Notice that you have to change wacam's mode to __screen__ in __Edit->Input devices__ when you are using gimp.
