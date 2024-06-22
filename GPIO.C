/*
    FINAL PROJECT

    MAHMOUD EMAD                SEC: 2      BN: 22
    MOHAMED AZIZ                SEC: 2      BN: 18
    OMAR MOHAMED MAHMOUD        SEC: 1      BN: 47

    TEAM NUMBER: 

*/

#include "Std_Types.h"
#include "GPIO.h"
#define LED_PIN1 PA1   // the pins that we will use 
#define LED_PIN2 PA2
#define LED_PIN3 PA3
#define LED_PIN4 PA4
void GPIO_Init(void) {
    
    DDRA |= (1 << LED_PIN1)|(1 << LED_PIN2)|(1 << LED_PIN3)|(1 << LED_PIN4); 
// Set pins 1,2,3and 4 port A as output
}

void GPIO_Write(unsigned char PinId, unsigned char PinData) {
    if (PinData) {
        PORTA |= (1 << PinId); // write high on the pin 
    } else {
        PORTA &= ~(1 << PinId); //write low on the pin
    }
}
