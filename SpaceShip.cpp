/*
  Definitions
 */
#pragma once
#include <iostream>
#include "LeakedObjectDetector.h"
#include "SpaceShip.h"

SpaceShip::SpaceShip()
{
    std::cout << "Spaceship constructed." << std::endl;
}

SpaceShip::~SpaceShip()
{
    std::cout << "Spaceship deconstructed." << std::endl;
}

SpaceShip::CrewMember::CrewMember()
{
    std::cout << "CrewMember constructed." << std::endl;
}

SpaceShip::CrewMember::~CrewMember()
{
    std::cout << "CrewMember deconstructed." << std::endl;
}

void SpaceShip::CrewMember::examineAnimal(int date, float time, Cat cat)
{
    int testNum = 0;
    if (cat.liveNumber <= 9)
    {
        recordTest(date, time, ++testNum);
    }

    ++date;
    ++time;
}

bool SpaceShip::CrewMember::recordTest(int date, float time, int testNum)
{
    ++date;
    ++time;

    return (testNum != 0);
}

void SpaceShip::CrewMember::examineCrew(int date, float time, CrewMember id)
{
    int testNum = 0;
    if (id.weight >= 70.0f)
    {
        recordTest(date, time, ++testNum);
        ++date;
        ++time;
    }
}

void SpaceShip::shipStatus()
{
    std::cout << "\nShip status:\n";
    std::cout << "name: " << this->name << std::endl;
    std::cout << "\n" << (this->dock() ? "free fly" : "docked") << std::endl;
    std::cout << this->totalLoops << std::endl;
}

bool SpaceShip::dock()
{
    //SpaceShip Rassvet;
    if (orbitHeight != 40.0f)
    {
        return true;
    }
    return false;
}

int SpaceShip::makeLoop(int planetNum, int loopCount)
{
    int loop = 0;
    while (loop <= loopCount)
    {
        ++loop;
        if (loop == planetNum)
        {
            std::cout << "Planet " << planetNum << " Say bye!" << std::endl;
            return loop;
        }

    }
    //    this->totalLoops += loop;
    return loop;
}

bool SpaceShip::takeOf(float startTime)
{
    //SpaceShip Rassvet;
    ++startTime;
    return (orbitHeight != 0.0f);
}

