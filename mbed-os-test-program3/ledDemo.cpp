#include "mbed.h"

void Led(DigitalOut &ledpin)
{
   for(int i = 0; i < 4; ++i)
    {
        ledpin = !ledpin;
        ThisThread::sleep_for(500ms);
    }

    ledpin = 0;
}


void Led2(DigitalOut &ledpin)
{
   for(int i = 0; i < 6; ++i)
    {
        ledpin = !ledpin;
        ThisThread::sleep_for(500ms);
    }
    ledpin = 0;
}




