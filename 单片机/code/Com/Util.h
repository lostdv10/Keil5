#ifndef _UTIL_H_
#define _UTIL_H_
#include <INTRINS.H>

#define FOSC 11059200 // 晶振频率
#define NT   12       // 单片机的工作周期为12T

// 8bit无符号数
typedef unsigned char u8;
// 16bit无符号数
typedef unsigned int u16;

/**
 * @brief 延时一定时长
 *
 * @param count 延时时长，单位1ms
 */
void Util_Delay1MS(u16 count);

#endif
