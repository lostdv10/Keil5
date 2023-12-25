#include "app.h"

void Display_Bias()
{
    u8 pic[8] = {0x11,
                 0x2,
                 0x42,
                 0x8,
                 0x16,
                 0x20,
                 0x40,
                 0x80};
    Matrix_Init();
    Matrix_SetPic(pic);
    // Dri_Timer0_RegisterCallback(Martrix_Refresh);
    while (1)
    {
        // Martrix_Refresh();
        ;
        
    }
    
}

void shangguigu(){
    // "尚硅谷"编码数组
u8 picture[26] = {0xF8, 0x0A, 0xEC, 0xAF, 0xEC, 0x8A, 0xF8, 0x00,
                  0x10, 0xF9, 0x97, 0xF1, 0x88, 0xAA, 0xFF, 0xAA,
                  0x88, 0x00, 0x14, 0x0A, 0xF5, 0x92, 0x92, 0xF5,
                  0x0A, 0x14};
    





}

