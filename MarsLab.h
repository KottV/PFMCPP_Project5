/*
 new UDT 4:
 with 2 member functions
 */
#pragma once
#include "LeakedObjectDetector.h"

struct SpaceShip;
struct Cat;

struct MarsLab
{
    SpaceShip ship;
    Cat cat;
    MarsLab();
    ~MarsLab();

    bool deliverCrew(SpaceShip);
    void feedCat(Cat);

    JUCE_LEAK_DETECTOR(MarsLab)
};

