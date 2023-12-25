#ifndef __DRI_TIMER0_H__
#define __DRI_TIMER0_H__
#include <STC89C5xRC.H>
#include "Util.h"

typedef void (*Timer0_Callback)(void);

#define MAX_CALLBACK_COUNT 4

/**
 * @brief ��ʱ����ʼ��
 *
 */
void Dri_Timer0_Init();

/**
 * @brief �ṩע����ڣ����������ע����ɵĺ���������1000Hz��Ƶ�ʱ�����
 *
 * @return �ɹ�����1��ʧ�ܷ���0
 *
 */
bit Dri_Timer0_RegisterCallback(Timer0_Callback);

/**
 * @brief ��ע��ص���������ע��ĺ��������ٱ����ڵ���
 *
 * @return bit ��ע��Ľ�����ɹ�λ1��ʧ��Ϊ0
 */
bit Dri_Timer0_DeregisterCallback(Timer0_Callback);

#endif