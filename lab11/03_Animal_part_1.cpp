#include <iostream>
using namespace std;

class Animal
{
private:
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
int Animal::getHappiness(){
    return this->happiness;
}
int Animal::getEnergy(){
    return this->energy;
}
int Animal::getFullness(){
    return this->fullness;
}
void Animal::eat(int food)
{   
    if(food <= 0) return;
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
    if(hour <= 0) return;
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
    if(hour <= 0) return;
    this->energy += hour * 10;
    this->fullness -= hour* 10;
    this->limitStat();
}

int main()
{
    return 0;
}