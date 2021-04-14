/*
 copied UDT 3:
 */
#include "LeakedObjectDetector.h"
#include "Atomic.h"

struct Knob
{
    float pvalue{ 0.0f };
    float cvalue{ 0.0f };
    Knob() {}
    ~Knob();

    struct Led
    {
        int num = 0;
        float brightness = 0.0f;
        Led();
        ~Led();

        void set();
    };

    int roundNum(float);
    float setValue(float, float);

    JUCE_LEAK_DETECTOR(Knob)
};

