/*
new UDT 5:
with 2 member functions
*/
#pragma once
#include "LeakedObjectDetector.h"
#include "SpaceShip.h"
#include "Knob.h"

struct GroundControl
{
    SpaceShip ship;
    //   SpaceShipWrapper shipWrapper;
    Knob knob;
    GroundControl();
    ~GroundControl();

    bool setOrbit(SpaceShip);
    Knob adjustSignal(SpaceShip, Knob);

    JUCE_LEAK_DETECTOR(GroundControl)
};

