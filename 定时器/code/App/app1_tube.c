#include "app.h"

static u8 s_digital_buffer[8];

void Display_Series_Num()
{

    int i = 0;
    // 让显存存上数字

    Digital_Init();
    for (i = 100; i >= 0; i--)
    {
        DigitalTube_DisplayNum(i);
        Delay1ms(100);
    }
}

void Display_Regular_Num()
{
    Digital_Init();
    // 让数码管显示12345
    DigitalTube_DisplayNum(12345);

}
