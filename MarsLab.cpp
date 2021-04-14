/*Definitions*/
#include <iostream>
#include "LeakedObjectDetector.h"
#include "Atomic.h""
#include "MarsLab.h"

struct MarsLab;
struct SpaceShip;
struct Cat;

MarsLab::MarsLab()
{
    feedCat(cat);
}

MarsLab::~MarsLab()
{
    ship.takeOf(0.0f);
}

bool MarsLab::deliverCrew(SpaceShip ship1)
{
    SpaceShip::CrewMember doc;

    for (int i = 0; i < ship1.crewNum; ++i)
    {
        doc.examineCrew(1, 2.0f, doc);
    }

    return true;
}

void MarsLab::feedCat(Cat cat1)
{
    cat1.eat('F');
}