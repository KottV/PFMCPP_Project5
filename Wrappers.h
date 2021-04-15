/*
  Wrappers
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
    CatWrapper(Cat*);
    ~CatWrapper();
};

struct SpaceShipWrapper
{
    SpaceShip* ptrSpaceShip = nullptr;

    SpaceShipWrapper(SpaceShip*);
    ~SpaceShipWrapper();

};

struct KnobWrapper
{
    Knob* ptrKnob = nullptr;

    KnobWrapper(Knob*);
    ~KnobWrapper();
};

struct MarsLabWrapper
{
    MarsLab* ptrMarsLab = nullptr;

    MarsLabWrapper(MarsLab*);
    ~MarsLabWrapper();
};

struct GroundControlWrapper
{
    GroundControl* ptrGroundControl = nullptr;

    GroundControlWrapper(GroundControl*);
    ~GroundControlWrapper();
};
