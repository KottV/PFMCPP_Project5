/*
 Project 5: Part 4 / 4
 video: Chapter 3 Part 7

 Create a branch named Part4
 
 Don't #include what you don't use
 
 1) Your task is to refactor your Chapter 3 Part 4 task into separate source and header files.
         Add files via the pane on the left.
 
 2) Put all of your declarations for each class in .h files
         One header file per class ( i.e. Raider.h for a class named "Raider" )
 
 3) Put all of your implementations in .cpp files.
         one cpp file per class ( i.e. Raider.cpp for a class named "Raider" )
 
 4) Put all of your Wrapper classes in a single Wrappers.h file
         if you implemented your wrapper class functions in-class, you'll need to move them to Wrappers.cpp
 
 5) NO IN-CLASS IMPLEMENTATION ALLOWED.
         the only exception is the existing Atomic.h and LeakedObjectDetector.h
 
 6) for every .cpp file you have to make, insert it into the .replit file after 'main.cpp'.  Don't forget the spaces between file names.
 If you need help with this step, send me a DM.
 
 7) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Remember, your Chapter 3 Part 4 task worked when it was all in one file. so you shouldn't need to edit any of it.  
         just split it up into source files and provide the appropriate #include directives.
 */
//#pragma once

#include <iostream>
#include "Wrappers.h"
#include "Cat.h"

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //SpaceShipWrapper spaceShip1Wrapper (new SpaceShip());
    //spaceShip1Wrapper.ptrSpaceShip->orbitHeight = 40;
    
    CatWrapper cat1Wrapper(new Cat());
    cat1Wrapper.ptrCat->name = "Pusya";
    cat1Wrapper.ptrCat->eat ('F');
    
    CatWrapper cat2Wrapper(new Cat());
    cat2Wrapper.ptrCat->name = "Matroskin";
    cat2Wrapper.ptrCat->eat ('C');
    
   /*
    for (int i = 2; i < 5; ++i) 
    spaceShip1Wrapper.ptrSpaceShip->totalLoops += spaceShip1Wrapper.ptrSpaceShip->makeLoop(i, 6);
    
    // dock the ship
    std::cout << "\nShip status:\n" ;
    std::cout << "name: " << spaceShip1Wrapper.ptrSpaceShip->name << std::endl;
    std::cout << "\n" << (spaceShip1Wrapper.ptrSpaceShip->dock()  ? "free fly" : "docked" ) << std::endl;
    
    std::cout << spaceShip1Wrapper.ptrSpaceShip->totalLoops<< std::endl;
    
    spaceShip1Wrapper.ptrSpaceShip->orbitHeight = 50;
    spaceShip1Wrapper.ptrSpaceShip->shipStatus();

    KnobWrapper volumeWrapper (new Knob());

    volumeWrapper.ptrKnob->pvalue = volumeWrapper.ptrKnob->setValue(volumeWrapper.ptrKnob->pvalue, 10);
    volumeWrapper.ptrKnob->pvalue = volumeWrapper.ptrKnob->setValue(volumeWrapper.ptrKnob->pvalue, 4);
    volumeWrapper.ptrKnob->pvalue = volumeWrapper.ptrKnob->setValue(volumeWrapper.ptrKnob->pvalue, 0);

    MarsLabWrapper vesnaWrapper (new MarsLab());
    SpaceShipWrapper navigatorWrapper (new SpaceShip());
    KnobWrapper signalWrapper (new Knob());
    GroundControlWrapper fCenterWrapper (new GroundControl());
    fCenterWrapper.ptrGroundControl->ship = *navigatorWrapper.ptrSpaceShip;
    fCenterWrapper.ptrGroundControl->knob = *signalWrapper.ptrKnob;
    for (float orbit = 0.0f; orbit < 2000; orbit+=100.0f)
    {
        navigatorWrapper.ptrSpaceShip->orbitHeight = orbit;
        fCenterWrapper.ptrGroundControl->setOrbit(*navigatorWrapper.ptrSpaceShip);
        *signalWrapper.ptrKnob = fCenterWrapper.ptrGroundControl->adjustSignal(*navigatorWrapper.ptrSpaceShip, *signalWrapper.ptrKnob);
    }
    */
    std::cout << "good to go!" << std::endl;
}


