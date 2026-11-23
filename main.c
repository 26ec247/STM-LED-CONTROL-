/* STM32 LED Blinking Project
   Example using STM32 HAL Library */

#include "main.h"

int main(void)
{
    // Initialize HAL library
    HAL_Init();

    // Initialize system clock
    SystemClock_Config();

    // Initialize GPIO pins
    MX_GPIO_Init();

    while (1)
    {
        // Turn LED ON/OFF
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);

        // Wait for 500 milliseconds
        HAL_Delay(500);
    }
}
