/*
  Definitions
 */
#include <iostream>
#include "Cat.h"

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

bool Cat::eat(char foodType)
{
    if (foodType == 'F')
    {
        std::cout << this->name << " thanking you" << std::endl;
        this->mew(3);
        return true;
    }
    std::cout << this->name << " won't eat that" << std::endl;
    return false;
}

void Cat::sleep(float time)
{
    ++time;
}

void Cat::mew(int count)
{
    //    --count;
    std::cout << this->name << " says:" << std::endl;
    for (int i = 1; i <= count; ++i)
        std::cout << "mew" << std::endl;
}
