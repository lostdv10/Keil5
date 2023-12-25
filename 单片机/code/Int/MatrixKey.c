#include "MatrixKey.h"


#define KEYIN P2

u8 Int_MatrixKeyboard_CheckKey()
{
    // ��P20��0
    KEYIN = 0xFE;
    if (KEYIN == 0xEE)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xEE)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFE)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFE)
                        return 5;
                }
            }
        }
    }
    if (KEYIN == 0xDE)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xDE)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFE)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFE)
                        return 6;
                }
            }
        }
    }
    if (KEYIN == 0xBE)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xBE)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFE)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFE)
                        return 7;
                }
            }
        }
    }
    if (KEYIN == 0x7E)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0x7E)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFE)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFE)
                        return 8;
                }
            }
        }
    }
    KEYIN = 0xFD;
    if (KEYIN == 0xED)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xED)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFD)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFD)
                        return 9;
                }
            }
        }
    }
    if (KEYIN == 0xDD)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xDD)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFD)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFD)
                        return 10;
                }
            }
        }
    }
    if (KEYIN == 0xBD)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xBD)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFD)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFD)
                        return 11;
                }
            }
        }
    }
    if (KEYIN == 0x7D)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0x7D)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFD)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFD)
                        return 12;
                }
            }
        }
    }

    KEYIN = 0xFB;
    if (KEYIN == 0xEB)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xEB)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFB)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFB)
                        return 13;
                }
            }
        }
    }
    if (KEYIN == 0xDB)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xDB)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFB)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFB)
                        return 14;
                }
            }
        }
    }
    if (KEYIN == 0xBB)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xBB)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFB)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFB)
                        return 15;
                }
            }
        }
    }
    if (KEYIN == 0x7B)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0x7B)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xFB)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xFB)
                        return 16;
                }
            }
        }
    }

    KEYIN = 0xF7;
    if (KEYIN == 0xE7)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xE7)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xF7)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xF7)
                        return 17;
                }
            }
        }
    }
    if (KEYIN == 0xD7)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xD7)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xF7)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xF7)
                        return 18;
                }
            }
        }
    }
    if (KEYIN == 0xB7)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0xB7)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xF7)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xF7)
                        return 19;
                }
            }
        }
    }
    if (KEYIN == 0x77)
    {
        // ����
        Util_Delay1MS(10);
        if (KEYIN == 0x77)
        {
            // SW5�������ˣ��ȴ�����̧�𣬷���5
            while (1)
            {
                if (KEYIN == 0xF7)
                {
                    // �����п��ܱ�̧������
                    Util_Delay1MS(10);
                    if (KEYIN == 0xF7)
                        return 20;
                }
            }
        }
    }
    // û�а���������
    return 0;
}