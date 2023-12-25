#include "Util.h"
#include <INTRINS.H>

void Delay1ms(unsigned int n) //@11.0592MHz
{
    unsigned char data i, j;

    while (n--)
    {
        _nop_();
        i = 2;
        j = 199;
        do
        {
            while (--j)
                ;
        } while (--i);
    }
}
