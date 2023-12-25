#ifndef __DERAIL_H_
#define __DERAIL_H_
#include <STC89C5xRC.H>
#include "Util.h"

#define SW1 P42
#define SW2 P43
#define SW3 P32
#define SW4 P33

bit Int_KeyBoard_IsSW1Pressed();
bit Int_KeyBoard_IsSW2Pressed();
bit Int_KeyBoard_IsSW3Pressed();
bit Int_KeyBoard_IsSW4Pressed();

#endif