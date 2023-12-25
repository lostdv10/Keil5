#ifndef __INT_BUTTON_H__
#define __INT_BUTTON_H__
#include <STC89C5xRC.h>
#include "Util.h"

/**
 * @brief 按键模块初始化，负责注册回调函数
 *
 */
void Int_Button_Init();

/**
 * @brief 获取SW1的按键状态
 *
 * @return u8 返回按键状态
 *            如果是0xFF，代表按键稳定抬起
 *            如果是0x00, 代表按键稳定按下
 *            如果是其他，代表抖动
 */
u8 Int_Button_GetSW1Status();

#endif