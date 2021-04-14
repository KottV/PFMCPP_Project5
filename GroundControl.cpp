/*Definitions*/
#include <iostream>
#include "GroundControl.h"

struct GroundControl;
struct SpaceShip;
struct Knob;

GroundControl::GroundControl()
{
    knob.cvalue = 1.0f;
}

GroundControl::~GroundControl()
{
    knob.cvalue = 0.0f;
}

bool GroundControl::setOrbit(SpaceShip ship1)
{
    std::cout << ship1.orbitHeight << std::endl;
    return 1;
}

Knob GroundControl::adjustSignal(SpaceShip ship1, Knob knob1)
{
    float threshold;

    threshold = ship1.orbitHeight / 100;
    knob1.pvalue = knob1.setValue(knob.pvalue, threshold);

    return knob1;
}
