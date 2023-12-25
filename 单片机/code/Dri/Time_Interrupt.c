#include "Time_Interrupt.h"


unsigned int counter;

void Timer0_Init(){
    EA=1;//�жϿ���
    ET0=1;//timer0����
    TMOD=0x1;// ����ʱ��0��GATE��C/T(����)��Ϊ0��������ʱ��0����Ϊ16λ��ʱ��/������ģʽ
    TL0=T1MS;// timer0����Ϊ1ms�ж�
    TH0=T1MS>>8;

    TR0=1;//��ʱ��0��ʼ��ʱ
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