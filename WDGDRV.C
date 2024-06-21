/*
    FINAL PROJECT
    MAHMOUD EMAD                SEC: 2      BN: 22
    MOHAMED AZIZ                SEC: 2      BN: 18
    OMAR MOHAMED MAHMOUD        SEC: 1      BN: 47

    TEAM NUMBER: MAHMOUD EMAD

*/
#include "Std_Types.h"
#include <avr/io.h>
#include <avr/wdt.h>
#include "WDGDRV.h"
#include "WDGM.h"


void WDGDrv_Init(void)
{
WDTCSR |= (1 << WDCE) | (1 << WDE);  // Enable modifications
WDTCSR = (1 << WDIE) | (1 << WDP1); // 64ms timeout
    
}
void WDGDrv_IsrNotification(void){
 if (WDGM_PovideSuppervisionStatus() == OK && !WDGM_MainFunction()){
     
         wdt_reset(); 
    }

}
