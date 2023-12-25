#ifndef __DRI_TIMER0_H__
#define __DRI_TIMER0_H__
#include <STC89C5xRC.H>
#include "Util.h"

typedef void (*Timer0_Callback)(void);

#define MAX_CALLBACK_COUNT 4

/**
 * @brief 定时器初始化
 *
 */
void Dri_Timer0_Init();

/**
 * @brief 提供注册入口，用这个函数注册完成的函数，会以1000Hz的频率被调用
 *
 * @return 成功返回1，失败返回0
 *
 */
bit Dri_Timer0_RegisterCallback(Timer0_Callback);

/**
 * @brief 反注册回调函数，反注册的函数不会再被周期调用
 *
 * @return bit 反注册的结果，成功位1，失败为0
 */
bit Dri_Timer0_DeregisterCallback(Timer0_Callback);

#endif