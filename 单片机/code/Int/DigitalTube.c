#include "DigitalTube.h"

// 数码管显示缓存
static u8 s_buf[8];

// 数码管显示标记位，当flag为0时当前位不显示
static bit s_should_display = 0;

// 刷新位置计数
static u8 s_pos = 0;

// 数字0-9的编码
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
    // // 判断当前位是否需要显示
    // if (!s_should_display)
    // {
    //     s_should_display = (s_buf[s_pos] != s_digit_codes[0]);
    // }

    // // 如果当前位需要显示，或者是最后一位
    // if (s_should_display || s_pos == 7)
    // {
    //     DigitalTube_DisplaySingle(s_pos, s_buf[s_pos]);

    //     // 延时提高占空比，提高亮度
    //     Util_Delay1MS(1);
    // }

    // // pos累加，如果pos等于8，说明显示完成一轮，重置pos和flag
    // s_pos++;
    // if (s_pos == 8)
    // {
    //     s_pos            = 0;
    //     s_should_display = 0;
    // }

    // 另一种实现
    u8 i;
    u8 count=1;
    while (--count)
    {

        for (i = 0; i < 8; i++)
        {
            DigitalTube_DisplaySingle(i, s_digit_codes[i]);
            Util_Delay1MS(1);
        }
    }
}
