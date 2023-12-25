#include "app.h"

static u8 s_digital_buffer[8];

void Dssplay_Series_Num()
{
    int i = 100,j=0;
    int bits=1;
    // 让显存存上数字

    for (i = 100; i >= 0; i--)
    {
        // bits = getBits(i);
        // printf("bits(%d)=%d", i, bits);
        DigitalTube_DisplayNum(i);
        for(j=0;j<10;j--){
        DigitalTube_Refresh();
        }
    }

    // 结束时
    DigitalTube_DisplayNum(0);
    while (1)
    {
        DigitalTube_Refresh();
    }
}


void Display_Regular_Num()
{
    // 让数码管显示12345
    DigitalTube_DisplayNum(12345);
    // 不断刷新数码管
    while (1)
    {
        DigitalTube_Refresh();
    }
}
