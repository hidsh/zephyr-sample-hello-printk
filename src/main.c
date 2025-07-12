#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/usb/usb_device.h>

int main(void)
{
    usb_enable(NULL);

    k_sleep(K_SECONDS(3));

    printk("Hello from printk over USB CDC!\n");

    return 0;
}
