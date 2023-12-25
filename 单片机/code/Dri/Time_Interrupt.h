
#ifndef TIME_INTERRUPT_H_
#define TIME_INTERRUPT_H_

#include "STC89C5xRC.H"
#include "Util.h"

#define FOCS 11059200
#define T1MS (65536-FOCS /12/1000) //1ms倒计时

#define LED P00


void Timer0_Init();


#endif