/*
Project 5: Part 2 / 4
 video: Chapter 3 Part 1

Create a branch named Part2

 The 'this' keyword
 
 The purpose of this project part is to show you how accessing member variables of objects INSIDE member functions is very similar to accessing member variables of objects OUTSIDE of member functions, via 'this->' and via the '.' operator.
 This project part will break the D.R.Y. rule, but that is fine for the purpose of this project part.
 
 
 1) if you don't have any std::cout statements in main() that access member variables of your U.D.Ts
         write some.
    You can copy some from your Project3's main() if needed.
 
 2) For each std::cout statement in main() that accessed member variables of your types or printed out the results of your member function calls,
        a) write a member function that prints the same thing out, but uses the proper techniques inside the member functions to access the same member variables/functions.
        b) be explicit with your use of 'this->' in those member functions so we see how you're accessing/calling those member variables and functions *inside*
        c) call that member function after your std::cout statement in main.
        d) you should see 2 (almost) identical messages in the program output for each member function you add:
            one for the std::cout line, and one for the member function's output
 
 
 3) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 */

/*
 example:
 */
#include <iostream>
namespace Example
{
    //a User-Defined Type
    struct MyFoo
    {
        MyFoo() { std::cout << "creating MyFoo" << std::endl; }
        ~MyFoo() { std::cout << "destroying MyFoo" << std::endl; }
		
		// 2a) the member function whose function body is almost identical to the std::cout statement in main.
        void memberFunc() 
		{ 
            // 2b) explicitly using 'this' inside this member function.
			std::cout << "MyFoo returnValue(): " << this->returnValue() << " and MyFoo memberVariable: " << this->memberVariable << std::endl; 
		}  
		
        int returnValue() { return 3; }
        float memberVariable = 3.14f;
    };
    
    int main()
    {
        //an instance of the User-Defined Type named mf
        MyFoo mf;
		
        // 1) a std::cout statement that uses mf's member variables
        std::cout << "mf returnValue(): " << mf.returnValue() << " and mf memberVariable: " << mf.memberVariable << std::endl; 
		
        // 2c) calling mf's member function.  the member function's body is almost identical to the cout statement above.
        mf.memberFunc();
        return 0;
    }
}


#include <iostream>

/*
 copied UDT 1:
 */
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
    void sleep (float time);
    void mew (int count);
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

/*
 copied UDT 2:
 */

struct SpaceShip
{
    float orbitHeight{1000.f};
    std::string engineType{"rocket"};
    int crewNum{3};
    int totalLoops {0};
    std::string country{"RU"};
    std::string name{"Proton"};
    SpaceShip();
    ~SpaceShip();

    struct CrewMember
    {   
        int memberId{0};
        std::string name{"Rob"};
        std::string jobRole{"scientist"};
        float weight{70.f};
        float age{33.3f};

        CrewMember();
        ~CrewMember();

        void examineAnimal(int date, float time, Cat cat);
        bool recordTest(int date, float time, int testNum=0);
        void examineCrew (int date, float time, CrewMember memberId);
    };
    
    void shipStatus();
    bool dock();
    int makeLoop(int planetNum = 3, int loopCount = 1);
    bool takeOf(float startTime);
};

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

/*
 copied UDT 3:
 */

struct Knob
{
    float pvalue{0.0f};
    float cvalue{0.0f};
    Knob() {}
    ~Knob();

    struct Led
    {
        int num = 0;
        float brightness = 0.0f;
        Led();
        ~Led();

        void set ();
    };
    
    int roundNum(float);
    float setValue(float, float);
};

Knob::~Knob() 
{
    std::cout << "Knob deconstructed" << std::endl;
}

Knob::Led::Led()
{
    std::cout << "Ignite the led num: " << num << " with bright: " << brightness << std::endl;
}

Knob::Led::~Led()
{
    std::cout << "Lights down" << std::endl;
}


/*
  Definitions
 */

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

    return (testNum !=0);
}

void SpaceShip::CrewMember::examineCrew (int date, float time, CrewMember id)
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
    std::cout << "\n" << ( this->dock()  ? "free fly" : "docked" ) << std::endl;
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
    this->totalLoops += loop;
    return loop;
}

bool SpaceShip::takeOf(float startTime)
{
    //SpaceShip Rassvet;
    ++startTime;
    return (orbitHeight != 0.0f);
}

bool Cat::eat(char foodType)
{
    if (foodType == 'F')
    {
        std::cout << this->name << " thanking you" << std::endl;
        this->mew(3);
        return true;
    }
    else
    {
        std::cout << this->name << " won't eat that" << std::endl;
        return false;
    }
}

void Cat::sleep (float time)
{
    ++time;
}

void Cat::mew (int count)
{
//    --count;
    std::cout << this->name << " says:" << std::endl;
    for (int i=1; i <= count; ++i)
        std::cout << "mew" << std::endl;
}

int Knob::roundNum(float num)
{
    int n = 0;

    for (float i = 0.0f; i <= 20.0f; i+=0.5f)
    {
        if (i >= num )
            return n / 2;

        ++n;
    }

    return 0;
}

void Knob::Led::set()
    {
        std::cout << num << " " << brightness << std::endl;
    }

float Knob::setValue(float pval, float cval)
{

    int pvalInt = roundNum(pval);
    int cvalInt = roundNum(cval);

    Knob::Led led;
    led.num = pvalInt;

    float step = 1.0f / (cval + 1.0f);

    std::cout << "pval: " << pval << " cval: " << cval << std::endl;

    if (pval < cval)
    {
        led.brightness = 0;

        for (led.num = 0; led.num <= cvalInt; ++led.num)
        {
            led.brightness += step;
            led.set();
        }
    }
    else
    {
        while (led.num > cvalInt)
        {
            led.brightness = 0;
            led.set();
            --led.num;
        }

        led.brightness = (cvalInt != 0 ? 1 : 0);
        for (led.num = cvalInt; led.num >= 0; --led.num)
        {
            led.set();
            led.brightness -= step;
        }
    }

    return cval;
}
/*
 new UDT 4:
 with 2 member functions
 */
struct MarsLab
{
    SpaceShip ship;
    Cat cat;
    MarsLab();
    ~MarsLab();
    
    bool deliverCrew(SpaceShip);
    void feedCat(Cat);

 };
 
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
    
    for (int i=0; i < ship1.crewNum; ++i)
    {
        doc.examineCrew (1, 2.0f, doc);
    }
    
    return true;
}

void MarsLab::feedCat(Cat cat1)
{
    cat1.eat('F');
}

/*
 new UDT 5:
 with 2 member functions
 */

struct GroundControl
{
    SpaceShip ship;
    Knob knob;
    GroundControl();
    ~GroundControl();

    bool setOrbit(SpaceShip);
    Knob adjustSignal(SpaceShip, Knob);
};

GroundControl::GroundControl()
{
    knob.cvalue = 1.0f;
}

GroundControl::~GroundControl()
{
    knob.cvalue = 0.0f;
}

bool GroundControl::setOrbit(SpaceShip ship1)
{
    std::cout << ship1.orbitHeight << std::endl;
    return 1;
}

Knob GroundControl::adjustSignal(SpaceShip ship1, Knob knob1)
{
    float threshold;
    
    threshold = ship1.orbitHeight / 100;
    knob1.pvalue = knob1.setValue(knob.pvalue, threshold);

    return knob1;
}


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

    SpaceShip spaceShip1;
    spaceShip1.orbitHeight = 40;
    
    Cat cat1;
    cat1.name = "Pusya";
    cat1.eat ('F');
    
    Cat cat2;
    cat2.name = "Matroskin";
    cat2.eat ('C');
    
   
    for (int i = 2; i < 5; ++i) 
    spaceShip1.totalLoops += spaceShip1.makeLoop(i, 6);
    
    // dock the ship
    std::cout << "\nShip status:\n" ;
    std::cout << "name: " << spaceShip1.name << std::endl;
    std::cout << "\n" << ( spaceShip1.dock()  ? "free fly" : "docked" ) << std::endl;
    
    std::cout << spaceShip1.totalLoops<< std::endl;
    
    spaceShip1.orbitHeight = 50;
    spaceShip1.shipStatus();
/*    

    volume.pvalue = volume.setValue(volume.pvalue, 10);
    volume.pvalue = volume.setValue(volume.pvalue, 4);
    volume.pvalue = volume.setValue(volume.pvalue, 0);

    MarsLab vesna;
    SpaceShip navigator;
    Knob signal;
    GroundControl fCenter;
    fCenter.ship = navigator;
    fCenter.knob = signal;
/*
    for (float orbit = 0.0f; orbit < 2000; orbit+=100.0f)
    {
        navigator.orbitHeight = orbit;
        fCenter.setOrbit(navigator);
        signal = fCenter.adjustSignal(navigator, signal);
    }
*/
    std::cout << "good to go!" << std::endl;
}


