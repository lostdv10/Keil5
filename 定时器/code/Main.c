#include <STC89C5xRC.H>
#include "app.h"

static u16 counter = 0;

void ToggleLED()
{
    counter++;
    if (counter == 500)
    {
        counter = 0;
        P00     = ~P00;
    }
}

void main()
{
    Dri_Timer0_Init();//
    // Dri_Timer0_RegisterCallback(ToggleLED);
    // Display_Series_Num();
    Display_Bias();
    while (1)
        ;
}