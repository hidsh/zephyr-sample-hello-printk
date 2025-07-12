This zephyr example is to "hello world" from `printk` to the usb-serial.

for zmk firmware, I needed to prepare this example prior to working on its device driver.


## setup
```
cd /PATH/TO/zmk/zephyr/samples/                 # for zmk
cp -r ~/Downloads/zephyr-sample-hello-printk ./hello-printk
```

## build
```
cd /PATH/TO/zmk/zephyr/samples/hello-printk     # for zmk
west build -p always -b seeeduino_xiao_ble -- -DDTC_OVERLAY_FILE=usb.overlay
```

## flash
Double click the reset button on XIAO-BLE to put it in to the boot-mode.
and then:

```
west flash
```

## check output
Using `tio` as below:
```
tio /dev/ttyACM0
[02:02:59.439] tio c43d2f6
[02:02:59.439] Press ctrl-t q to quit
[02:02:59.440] Connected to /dev/ttyACM0
[02:03:02.127] Disconnected
[02:03:03.128] Warning: Could not open /dev/ttyACM0 (No such file or directory)
[02:03:03.128] Waiting for tty device..
[02:03:04.130] Connected to /dev/ttyACM0
Hello from printk over USB CDC!
```
