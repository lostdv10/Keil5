#ifndef __INT_BUTTON_H__
#define __INT_BUTTON_H__
#include <STC89C5xRC.h>
#include "Util.h"

/**
 * @brief ����ģ���ʼ��������ע��ص�����
 *
 */
void Int_Button_Init();

/**
 * @brief ��ȡSW1�İ���״̬
 *
 * @return u8 ���ذ���״̬
 *            �����0xFF���������ȶ�̧��
 *            �����0x00, �������ȶ�����
 *            �����������������
 */
u8 Int_Button_GetSW1Status();

#endif