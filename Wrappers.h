/*
  Wrappers
*/

/*

*/
#pragma once

struct Cat;
struct GroundControl;
struct Knob;
struct MarsLab;
struct SpaceShip;

struct CatWrapper
{
    Cat* ptrCat = nullptr;

    CatWrapper(Cat* ptr) : ptrCat(ptr) {} FIXME: see #5 in main.cpp
    ~CatWrapper()
    { FIXME: see #5 in main.cpp
        delete ptrCat;
    }
};

struct SpaceShipWrapper
{
    SpaceShip* ptrSpaceShip = nullptr;

    SpaceShipWrapper(SpaceShip* ptr) : ptrSpaceShip(ptr) {} FIXME: see #5 in main.cpp
    ~SpaceShipWrapper()
    { FIXME: see #5 in main.cpp
        delete ptrSpaceShip;
    }
};

struct KnobWrapper
{
    Knob* ptrKnob = nullptr;

    KnobWrapper(Knob* ptr) : ptrKnob(ptr) {} FIXME: see #5 in main.cpp
    ~KnobWrapper()
    { FIXME: see #5 in main.cpp
        delete ptrKnob;
    }
};

struct MarsLabWrapper
{
    MarsLab* ptrMarsLab = nullptr;

    MarsLabWrapper(MarsLab* ptr) : ptrMarsLab(ptr) {} FIXME: see #5 in main.cpp
    ~MarsLabWrapper()
    { FIXME: see #5 in main.cpp
        delete ptrMarsLab;
    }
};

struct GroundControlWrapper
{
    GroundControl* ptrGroundControl = nullptr;

    GroundControlWrapper(GroundControl* ptr) : ptrGroundControl(ptr) {} FIXME: see #5 in main.cpp
    ~GroundControlWrapper()
    { FIXME: see #5 in main.cpp
        delete ptrGroundControl;
    }
};
