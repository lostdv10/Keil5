#include "Derail.h"
//右下角的4个独立按键

//文档办法
bit Int_KeyBoard_IsSW1Pressed()
{
    // 如果没有按下按键，返回0
    if (SW1) return 0;

    // 如果按下按键，首先消除按键抖动
    Util_Delay1MS(10);

    // 再次判断是否按下按键，如果没有，说明是抖动，返回0
    if (SW1) return 0;

    // while循环等待按键被释放
    while (1) {
        // 如果按键抬起，等待10ms后再次检查
        if (SW1)
        {
            Util_Delay1MS(10);
            // 如果10ms后按键仍然是被释放的状态，说明按键被释放了
            if (SW1)
                break;
        }
        
    }
    return 1;
}

bit Int_KeyBoard_IsSW2Pressed()
{
    if (SW2) return 0;
    Util_Delay1MS(10);
    if (SW2) return 0;
    while (1) {
        if (SW2)
        {
            Util_Delay1MS(10);
            if (SW2)
                break;
        }
    }
    return 1;
}

bit Int_KeyBoard_IsSW3Pressed()
{
    if (SW3) return 0;
    Util_Delay1MS(10);
    if (SW3) return 0;

    while (1) 
    {
        if (SW3)
        {
            Util_Delay1MS(10);
            if (SW3)
                break;
        }
    }
    return 1;
}

bit Int_KeyBoard_IsSW4Pressed()
{
    if (SW4) return 0;
    Util_Delay1MS(10);
    if (SW4) return 0;

    while (1) 
    {
        if (SW4)
        {
            Util_Delay1MS(10);
            if (SW4)
                break;
        }
    }
    return 1;
}
