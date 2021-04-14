#include "Wrappers.h"
#include "Cat.h"
#include "SpaceShip.h"
#include "Knob.h"
#include "MarsLab.h"
#include "GroundControl.h"

CatWrapper::CatWrapper(Cat* ptr) : ptrCat(ptr) {}
CatWrapper::~CatWrapper()
{
    delete ptrCat;
}

SpaceShipWrapper::SpaceShipWrapper(SpaceShip* ptr) : ptrSpaceShip(ptr) {}
SpaceShipWrapper::~SpaceShipWrapper()
{
    delete ptrSpaceShip;
}

KnobWrapper::KnobWrapper(Knob* ptr) : ptrKnob(ptr) {}
KnobWrapper::~KnobWrapper()
{
    delete ptrKnob;
}

MarsLabWrapper::MarsLabWrapper(MarsLab* ptr) : ptrMarsLab(ptr) {}
MarsLabWrapper::~MarsLabWrapper()
{
    delete ptrMarsLab;
}

GroundControlWrapper::GroundControlWrapper(GroundControl* ptr) : ptrGroundControl(ptr) {}
GroundControlWrapper::~GroundControlWrapper()
{
    delete ptrGroundControl;
}
