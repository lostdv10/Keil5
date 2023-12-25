#include "app.h"
typedef void (*Func)(void);

void Init_Int0()
{
    /**
     * @brief 外部中断0开启，即P32
     *
     */
    EA  = 1;
    EX0 = 1;
    IT0 = 0;
}



void Button_Pressed_LED()
{
    Init_Int0();
    while (1)
    {
        //led默认为1，即灭,除非按下按键，否则为灭
        LED = 1;
    }
    while(1);
}




void Func_Int0() interrupt 0
{
    /**
 * @brief 中断函数中打开led，代表当触发中断时，led会打开。
 *        根据我们之前的设置，当按下sw3时，P32为低电平，此时led打开。
 *
 *        interrupt 0表示0号中断触发时执行该函数的逻辑
 *        如果用C语言编程，中断查询次序就是中断号
 */
    LED = 0;
}