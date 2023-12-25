#ifndef __MATRIXKEY_H__
#define __MATRIXKEY_H__
#include <STC89C5xRC.H>
#include "Util.h"

/**
 * @brief 查看是否有矩阵按键被按下
 *
 * @return u8 返回被按下的按键编号，没有按键被按下返回0
 */
u8 Int_MatrixKeyboard_CheckKey();

#endif