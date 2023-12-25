#include "Dri_Timer0.h"
#include <STDIO.H>

#define T1MS (65536 - FOSC / NT / 1000)

static u16 s_timer0_counter = 0;
static Timer0_Callback s_timer0_callbacks[MAX_CALLBACK_COUNT];

void Dri_Timer0_Init()
{
    u8 i;
    // 总中断开关
    EA = 1;

    // 定时器中断开关
    ET0 = 1;

    // 设置定时器0的工作模式：16位定时器
    TMOD &= 0xF0;
    TMOD |= 0x01;

    // 设置定时器的初始值
    TL0 = T1MS;
    TH0 = T1MS >> 8;

    // 定时器0的开关
    TR0 = 1;

    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        s_timer0_callbacks[i] = NULL;
    }
}

bit Dri_Timer0_RegisterCallback(Timer0_Callback callback)
{
    // 判断这个函数有没有被注册过
    u8 i;
    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        if (s_timer0_callbacks[i] == callback)
        {
            // 如果该函数被注册过，直接返回
            return 1;
        }
    }

    // 注册该函数
    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        if (s_timer0_callbacks[i] == NULL)
        {
            s_timer0_callbacks[i] = callback;
            return 1;
        }
    }

    return 0;
}

bit Dri_Timer0_DeregisterCallback(Timer0_Callback callback)
{
    u8 i;
    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        if (s_timer0_callbacks[i] == callback)
        {
            s_timer0_callbacks[i] = NULL;
            return 1;
        }
    }
    return 0;
}

/**
 * @brief 1ms调用一次这个函数
 *
 */
void Dri_Timer0_Func() interrupt 1
{
    u8 i;
    // 定义下次进入时钟中断的时间
    TL0 = T1MS;
    TH0 = T1MS >> 8;

    // 调用所有的回调函数
    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        if (s_timer0_callbacks[i])
        {
            s_timer0_callbacks[i]();
        }
    }
}