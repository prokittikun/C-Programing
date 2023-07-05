#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Bird
: public Animal

{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

class Pet
{
protected:
    string name;
public:
    Pet(string);
    string getName();
    void setName(string);
};

class OwnedBird
: public Bird, public Pet

{
public:
    OwnedBird(string, int, int, int);
};
void Animal::limitStat()
{
    if (this->happiness < 0)
    {
        this->happiness = 0;
    }
    else if (this->happiness > MAX_HAPPINESS)
    {
        this->happiness = MAX_HAPPINESS;
    }

    if (this->energy < 0)
    {
        this->energy = 0;
    }
    else if (this->energy > MAX_ENERGY)
    {
        this->energy = MAX_ENERGY;
    }

    if (this->fullness < 0)
    {
        this->fullness = 0;
    }
    else if (this->fullness > MAX_FULLNESS)
    {
        this->fullness = MAX_FULLNESS;
    }
}
Animal::Animal(int happiness, int energy, int fullness)
{
    this->happiness = happiness;
    this->energy = energy;
    this->fullness = fullness;
    this->limitStat();
}

int Animal::getHappiness()
{
    return this->happiness;
}
int Animal::getEnergy()
{
    return this->energy;
}
int Animal::getFullness()
{
    return this->fullness;
}
void Animal::eat(int food)
{
    if (food <= 0)
        return;
    this->fullness += food;
    if (this->fullness > MAX_FULLNESS)
    {
        this->happiness -= 10;
        this->limitStat();
    }
    this->limitStat();
}
void Animal::play(int hour)
{
    if (hour <= 0)
        return;
    if (this->energy == 0 || this->fullness == 0)
    {
        return;
    }
    this->energy -= hour * 10;
    this->fullness -= hour * 20;
    this->happiness += hour * 5;
    this->limitStat();
}

void Animal::sleep(int hour)
{
    if (hour <= 0)
        return;
    this->energy += hour * 10;
    this->fullness -= hour * 10;
    this->limitStat();
}

Bird::Bird(int happiness, int energy, int fullness) : Animal(happiness, energy, fullness)
{
    
}

void Bird::fly(int hour)
{
    if (hour <= 0)
        return;
    this->energy -= hour * 5;
    this->limitStat();
}
void Bird::sing()
{
    this->happiness += 5;
    this->limitStat();
}
Pet::Pet(string name)
{
    this->name = name;
}

string Pet::getName()
{
    return this->name;
}
void Pet::setName(string name)
{
    this->name = name;
}

OwnedBird::OwnedBird(string name, int happiness, int energy, int fullness) : Bird(happiness, energy, fullness), Pet(name)
{
}
int main()
{
    char action;
    int hour;
    int happiness, energy, fullness;
    cin >> happiness >> energy >> fullness;
    OwnedBird animal("Dobby", happiness, energy, fullness);
    while (1) {
        cin >> action;
        if (action == 'q') break;
        cin >> hour;
        switch (action) {
            case 'e':
                animal.eat(hour);
                break;
            case 'p':
                animal.play(hour);
                break;
            case 's':
                animal.sleep(hour);
                break;
            case 'f':
                animal.fly(hour);
                break;
            case 'i':
                for (int i = 0; i < hour; i++)
                    animal.sing();
                break;
            case 'n':
                if (hour < 5)
                    animal.setName("Debby");
                else
                    animal.setName("Shogun");
                break;
        }
    }
}