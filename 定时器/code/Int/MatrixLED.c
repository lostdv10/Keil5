#include "MatrixLED.h"
#include "Dri_Timer0.h"

static u8 s_led_buffer[8];
static u8 line_position;

void Matrix_Init()
{
    u8 i;
    for (i = 0; i < 8; i++)
    {
        s_led_buffer[i] = 0;
    }
    line_position=0;
    Dri_Timer0_RegisterCallback(Martrix_Refresh);
    

}

void Matrix_SetPic(u8 *pic)
{
    u8 i;
    for (i = 0; i < 8; i++)
    {
        s_led_buffer[i] = pic[i];
        
    }
}

void Martrix_Refresh()
{
    // u8 i;

    // SER = 1;

    // SCK = 1;
    // SCK = 0;

    // SER = 0;
    // for (i = 0; i < 8; i++)
    // {
    //     // 展示下一行之前，关闭
    //     P0  = 0xFF;
    //     RCK = 1;
    //     RCK = 0;
    //     // 当前行展示想展示的数据
    //     P0  = ~s_led_buffer[i];
    //     SCK = 1;
    //     SCK = 0;
    // }
    if ( line_position == 0)
    {
        SER = 1;

        SCK = 1;
        SCK = 0;
    }

    SER = 0;

    // 展示下一行之前，关闭
    P0  = 0xFF;
    RCK = 1;
    RCK = 0;
    // 当前行展示想展示的数据
    P0  = ~s_led_buffer[line_position];
    SCK = 1;
    SCK = 0;
     line_position++;
    if ( line_position == 8)
    {
         line_position = 0;
    }
}

/**
 * @brief 图案滚动
 * 
 */
void Martrix_Refresh_Dynamic(u8 *picture,u8 len){
    u8 i=0,j=0;
    for(i=0;i<len;){
        for(j=0;j<8;i++,j++){
            
        }
    }
}