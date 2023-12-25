#include "app.h"

//这里使用延时来处理抖动
void Button_with_Delay(){
        //按键控制0-4流水灯
    while (1)
    {

        if (Int_KeyBoard_IsSW1Pressed())
            P00 = ~P00;
        if (Int_KeyBoard_IsSW2Pressed())
            P01 = ~P01;
        if (Int_KeyBoard_IsSW3Pressed())
            P02 = ~P02;
        if (Int_KeyBoard_IsSW4Pressed())
            P03 = ~P03;
    }


    
}