/*
    FINAL PROJECT
    MAHMOUD EMAD                SEC: 2      BN: 22
    MOHAMED AZIZ                SEC: 2      BN: 18
    OMAR MOHAMED MAHMOUD        SEC: 1      BN: 47

    TEAM NUMBER: 

*/
 
#include <util/delay.h>
#include "LEDMgr.h"
#include "GPIO.h"
#include "WDGM.h"

static unsigned int Counter = 0;
static unsigned char led_State = 0;

void LED_Init(void) {
    GPIO_Init();
    Counter = 0;
    led_State = 0;
}

void LED_Manage(void) {
    WDGM_AlivenessIndication();

    Counter += 10; 

    if (Counter >= 500) {                //if statement toggle the led state every 500 ms
       led_State = !led_State
        GPIO_Write(LED_PIN, led_State);
        Counter = 0;
    }

    _delay_ms(10);                          //  delay function  for 10 ms
}
