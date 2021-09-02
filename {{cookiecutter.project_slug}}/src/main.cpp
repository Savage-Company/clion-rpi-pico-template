#include <cstdio>
#include "pico/stdlib.h"

const uint LED_PIN = 25;

static inline void toggleLed()
{
    gpio_put(LED_PIN, !gpio_get(LED_PIN));
}

bool alive(repeating_timer_t *rt)
{
    toggleLed();
    return true;
}


void setup()
{
    setup_default_uart();

    printf("Setup LED\n");
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
}

void loop() 
{

}

int main() {
    setup();

    // Add a 500ms timer to flash the onboard LED
    repeating_timer_t alive_timer;
    add_repeating_timer_ms(500, &alive, NULL, &alive_timer);

    while (1) {
        loop()
    }

    return 0;
}
