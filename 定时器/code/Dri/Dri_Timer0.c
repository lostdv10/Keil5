#include "Dri_Timer0.h"
#include <STDIO.H>

#define T1MS (65536 - FOSC / NT / 1000)

static u16 s_timer0_counter = 0;
static Timer0_Callback s_timer0_callbacks[MAX_CALLBACK_COUNT];

void Dri_Timer0_Init()
{
    u8 i;
    // ���жϿ���
    EA = 1;

    // ��ʱ���жϿ���
    ET0 = 1;

    // ���ö�ʱ��0�Ĺ���ģʽ��16λ��ʱ��
    TMOD &= 0xF0;
    TMOD |= 0x01;

    // ���ö�ʱ���ĳ�ʼֵ
    TL0 = T1MS;
    TH0 = T1MS >> 8;

    // ��ʱ��0�Ŀ���
    TR0 = 1;

    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        s_timer0_callbacks[i] = NULL;
    }
}

bit Dri_Timer0_RegisterCallback(Timer0_Callback callback)
{
    // �ж����������û�б�ע���
    u8 i;
    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        if (s_timer0_callbacks[i] == callback)
        {
            // ����ú�����ע�����ֱ�ӷ���
            return 1;
        }
    }

    // ע��ú���
    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        if (s_timer0_callbacks[i] == NULL)
        {
            s_timer0_callbacks[i] = callback;
            return 1;
        }
    }

    return 0;
}

bit Dri_Timer0_DeregisterCallback(Timer0_Callback callback)
{
    u8 i;
    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        if (s_timer0_callbacks[i] == callback)
        {
            s_timer0_callbacks[i] = NULL;
            return 1;
        }
    }
    return 0;
}

/**
 * @brief 1ms����һ���������
 *
 */
void Dri_Timer0_Func() interrupt 1
{
    u8 i;
    // �����´ν���ʱ���жϵ�ʱ��
    TL0 = T1MS;
    TH0 = T1MS >> 8;

    // �������еĻص�����
    for (i = 0; i < MAX_CALLBACK_COUNT; i++)
    {
        if (s_timer0_callbacks[i])
        {
            s_timer0_callbacks[i]();
        }
    }
}