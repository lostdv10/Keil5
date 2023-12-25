#include "DigitalTube.h"
#include "Dri_Timer0.h"

static u8 s_digit_codes[10] = {
    0x3F, // 0
    0x06, // 1
    0x5B, // 2
    0x4F, // 3
    0x66, // 4
    0x6D, // 5
    0x7D, // 6
    0x07, // 7
    0x7F, // 8
    0x6F  // 9
};

// 数码管显示缓存
static u8 s_buf[8];

// 记录数码管刷新到哪一位了
static u8 s_digital_postion;

// 刷新位置计数
static u8 s_pos = 0;

// 数字0-9的编码
void Digital_Init()
{
    u8 i;
    for (i = 0; i < 8; i++)
    {
        s_digit_codes[i] = 0;
    }
    s_digital_postion = 0;
    Dri_Timer0_RegisterCallback(DigitalTube_Refresh);
}

/**
 * @brief 内部方法，让数码管某一位显示特定数字
 *
 * @param dig 片选, 从左到右[0-7]
 * @param num 显示想要的数字[0-9]
 */
static void DigitalTube_DisplaySingle(u8 dig, u8 num)
{
    // 清理上一次显示
    P0 = 0;

    // 首先片选dig
    P1 &= 0xC7;
    dig <<= 3;
    P1 |= dig;

    P0 = num;
}

void DigitalTube_DisplayNum(u16 num)
{
    char j = 7;
    for (j = 7; j >= 0; j--)
    {
        s_buf[j] = s_digit_codes[num % 10];
        num /= 10;
    }
}

void DigitalTube_Refresh()
{
    DigitalTube_DisplaySingle(s_digital_postion, s_digit_codes[s_digital_postion]);
    if (s_digital_postion = 8)
    {
        s_digital_postion = 0;
    }
}
