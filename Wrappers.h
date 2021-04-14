/*
  Wrappers
*/

/*
#include "GroundControl.h"
#include "Knob.h"
#include "MarsLab.h"
#include "SpaceShip.h"
*/
struct Cat;
struct CatWrapper
{
    Cat* ptrCat = nullptr;

    CatWrapper(Cat* ptr) : ptrCat(ptr) {}
    ~CatWrapper()
    {
        delete ptrCat;
    }
};
/*
struct SpaceShipWrapper
{
    SpaceShip* ptrSpaceShip = nullptr;

    SpaceShipWrapper(SpaceShip* ptr) : ptrSpaceShip(ptr) {}
    ~SpaceShipWrapper()
    {
        delete ptrSpaceShip;
    }
};

struct KnobWrapper
{
    Knob* ptrKnob = nullptr;

    KnobWrapper(Knob* ptr) : ptrKnob(ptr) {}
    ~KnobWrapper()
    {
        delete ptrKnob;
    }
};

struct MarsLabWrapper
{
    MarsLab* ptrMarsLab = nullptr;

    MarsLabWrapper(MarsLab* ptr) : ptrMarsLab(ptr) {}
    ~MarsLabWrapper()
    {
        delete ptrMarsLab;
    }
};

struct GroundControlWrapper
{
    GroundControl* ptrGroundControl = nullptr;

    GroundControlWrapper(GroundControl* ptr) : ptrGroundControl(ptr) {}
    ~GroundControlWrapper()
    {
        delete ptrGroundControl;
    }
};
*/