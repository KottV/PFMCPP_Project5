/*
 copied UDT 1:
 */
#pragma once
#include "LeakedObjectDetector.h"

struct Cat
{
    std::string name;
    int paw;
    char colour;
    bool gender; //0 female, 1 male
    float age;
    int liveNumber;
    Cat();
    ~Cat();

    bool eat(char foodType);
    void sleep(float time);
    void mew(int count);

    JUCE_LEAK_DETECTOR(Cat)
};



