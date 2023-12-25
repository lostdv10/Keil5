#ifndef __UTIL_H__
#define __UTIL_H__
#include "STC89C5xRC.H"

#define FOSC 11059200 // 时钟频率
#define NT   12       // 单片机运行在12T模式下

typedef unsigned int u16;
typedef unsigned char u8;

/**
 * @brief 延时n ms
 *
 * @param n 要延时的时长
 */
void Delay1ms(unsigned int n);

#endif
