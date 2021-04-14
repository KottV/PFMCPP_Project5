/*
 copied UDT 2:
 */
#include "LeakedObjectDetector.h"

struct Cat;

struct SpaceShip
{
    float orbitHeight{ 1000.f };
    std::string engineType{ "rocket" };
    int crewNum{ 3 };
    int totalLoops{ 0 };
    std::string country{ "RU" };
    std::string name{ "Proton" };
    SpaceShip();
    ~SpaceShip();

    struct CrewMember
    {
        int memberId{ 0 };
        std::string name{ "Rob" };
        std::string jobRole{ "scientist" };
        float weight{ 70.f };
        float age{ 33.3f };

        CrewMember();
        ~CrewMember();

        void examineAnimal(int date, float time, Cat cat);
        bool recordTest(int date, float time, int testNum = 0);
        void examineCrew(int date, float time, CrewMember memberId);
    };

    void shipStatus();
    bool dock();
    int makeLoop(int planetNum = 3, int loopCount = 1);
    bool takeOf(float startTime);

    JUCE_LEAK_DETECTOR(SpaceShip)
};


