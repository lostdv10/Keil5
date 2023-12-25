#include "Int_Button.h"
#include "Dri_Timer0.h"

#define SW1 P42

static u8 s_sw1_status = 0xFF;

/**
 * @brief �ڲ�������ע�ᵽ��ʱ���ж��У�ÿms����һ�Σ����°�����״̬
 *
 */
static void Int_Button_UpdateStatus()
{
    s_sw1_status <<= 1;
    s_sw1_status |= SW1;
}

void Int_Button_Init()
{
    Dri_Timer0_RegisterCallback(Int_Button_UpdateStatus);
}

u8 Int_Button_GetSW1Status()
{
    return s_sw1_status;
}
