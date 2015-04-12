#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "boards.h"

int main(void)
{
    // Configure LED-pins as outputs
    nrf_gpio_cfg_output(LED_0);
    nrf_gpio_cfg_output(LED_1);

    // LED 0 and LED 1 blink alternately.
    while (true)
    {
        nrf_gpio_pin_clear(LED_0);
        nrf_gpio_pin_set(LED_1);

        nrf_delay_ms(500);

        nrf_gpio_pin_clear(LED_1);
        nrf_gpio_pin_set(LED_0);

        nrf_delay_ms(500);
    }
}
