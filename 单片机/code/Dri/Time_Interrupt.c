#include "Time_Interrupt.h"


unsigned int counter;

void Timer0_Init(){
    EA=1;//中断开关
    ET0=1;//timer0开启
    TMOD=0x1;// 将定时器0的GATE这C/T(——)置为0，并将定时器0调节为16位定时器/计数器模式
    TL0=T1MS;// timer0设置为1ms中断
    TH0=T1MS>>8;

    TR0=1;//定时器0开始计时
    counter = 0;
}



void Timer0_Func() interrupt 1{
    TL0 = T1MS;
    TH0 = T1MS>>8;
    counter++;
    if(counter>=500){
        counter=0;
        LED=~LED;
    }
}