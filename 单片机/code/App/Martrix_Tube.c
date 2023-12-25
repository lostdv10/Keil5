#include "app.h"

void Add_Key_Number()
{
    // +是矩阵中哪个按键所代表的数字
    u8 key_pressed;
    u8 sum = 0;
    DigitalTube_DisplayNum(0);
    while (1)
    {
        key_pressed = Int_MatrixKeyboard_CheckKey();
        if (key_pressed)
        {
            sum += key_pressed;
            DigitalTube_DisplayNum(sum);
        }
        DigitalTube_Refresh();
    }
}