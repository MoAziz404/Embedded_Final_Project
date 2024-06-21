/*
    FINAL PROJECT
    MAHMOUD EMAD                SEC: 2      BN: 22
    MOHAMED AZIZ                SEC: 2      BN: 18
    OMAR MOHAMED MAHMOUD        SEC: 1      BN: 47

    TEAM NUMBER: 24

*/
#include "Std_Types.h"
#include "WDGM.h"

static WDGM_StatusType WDGM_Status = NOK;
volatile unsigned char LEDM_CallCount = 0;

void WDGM_Init(void)
{
 LEDM_CallCount = 0;
}

void WDGM_MainFunction(void)
{

}

void  WDGM_AlivenessIndication(void)
{
 LEDM_CallCount++;
}


