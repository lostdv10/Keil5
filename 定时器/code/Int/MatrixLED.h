#ifndef MATRIXLED_H_
#define MATRIXLED_H_

#include "Util.h"

#define SER P36
#define SCK P34
#define RCK P35

void Matrix_Init();

void Matrix_SetPic(u8 *pic);

void Martrix_Refresh();
#endif