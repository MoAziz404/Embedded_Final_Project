/*
    FINAL PROJECT

    MAHMOUD EMAD                SEC: 2      BN: 22
    MOHAMED AZIZ                SEC: 2      BN: 18
    OMAR MOHAMED MAHMOUD        SEC: 1      BN: 47

    TEAM NUMBER: 

*/

#include "Std_Types.h"
#include "GPIO.h"
#define LED_PIN1 PA0   // the pin that we will use 

void GPIO_Init(void) {
    
    DDRA |= (1 << LED_PIN1); // Set pin 0 port A as output
}

void GPIO_Write(unsigned char PinId, unsigned char PinData) {
    if (PinData) {
        PORTA |= (1 << PinId); // write high on the pin 
    } else {
        PORTA &= ~(1 << PinId); //write low on the pin
    }
}
