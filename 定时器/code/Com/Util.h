#ifndef __UTIL_H__
#define __UTIL_H__
#include "STC89C5xRC.H"

#define FOSC 11059200 // ʱ��Ƶ��
#define NT   12       // ��Ƭ��������12Tģʽ��

typedef unsigned int u16;
typedef unsigned char u8;

/**
 * @brief ��ʱn ms
 *
 * @param n Ҫ��ʱ��ʱ��
 */
void Delay1ms(unsigned int n);

#endif
