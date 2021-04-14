/*
  Definitions
 */
#include <iostream>
#include "Knob.h"

Knob::~Knob()
{
    std::cout << "Knob deconstructed" << std::endl;
}

Knob::Led::Led()
{
    std::cout << "Ignite the led num: " << num << " with bright: " << brightness << std::endl;
}

Knob::Led::~Led()
{
    std::cout << "Lights down" << std::endl;
}

int Knob::roundNum(float num)
{
    int n = 0;

    for (float i = 0.0f; i <= 20.0f; i += 0.5f)
    {
        if (i >= num)
            return n / 2;

        ++n;
    }

    return 0;
}

void Knob::Led::set()
{
    std::cout << num << " " << brightness << std::endl;
}

float Knob::setValue(float pval, float cval)
{

    int pvalInt = roundNum(pval);
    int cvalInt = roundNum(cval);

    Knob::Led led;
    led.num = pvalInt;

    float step = 1.0f / (cval + 1.0f);

    std::cout << "pval: " << pval << " cval: " << cval << std::endl;

    if (pval < cval)
    {
        led.brightness = 0;

        for (led.num = 0; led.num <= cvalInt; ++led.num)
        {
            led.brightness += step;
            led.set();
        }
    }
    else
    {
        while (led.num > cvalInt)
        {
            led.brightness = 0;
            led.set();
            --led.num;
        }

        led.brightness = (cvalInt != 0 ? 1 : 0);
        for (led.num = cvalInt; led.num >= 0; --led.num)
        {
            led.set();
            led.brightness -= step;
        }
    }

    return cval;
}
