/*
 copied UDT 1:
 */
#include "LeakedObjectDetector.h"

struct Cat
{
    std::string name;
    int paw;
    char colour;
    bool gender; //0 female, 1 male
    float age;
    int liveNumber;
    Cat();
    ~Cat();

    bool eat(char foodType);
    void sleep(float time);
    void mew(int count);

    JUCE_LEAK_DETECTOR(Cat)
};

Cat::Cat()
{
    paw = 4;
    colour = 'B';
    gender = 0; //0 female, 1 male
    age = 3.5f;
    liveNumber = 9;
}

Cat::~Cat()
{
    if (liveNumber > 0)
        --liveNumber;
}

