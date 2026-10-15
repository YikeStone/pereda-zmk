#include <errno.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/init.h>
#include <zephyr/devicetree.h>

static int xiao_charge_current_init(void)
{
    const struct device *gpio0 = DEVICE_DT_GET(DT_NODELABEL(gpio0));

    if (!device_is_ready(gpio0)) {
        return -ENODEV;
    }

    return gpio_pin_configure(gpio0, 13, GPIO_OUTPUT_LOW);
}

SYS_INIT(xiao_charge_current_init, APPLICATION, 90);
