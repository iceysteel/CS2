#include <iostream>
#include "car.h"
using namespace std;
Car::Car()
{
    //ctor
    speed = 0;
    tank = 0;
}

Car::~Car()
{
    //dtor
}

void Car::goFast(double mph)
{
    speed = speed + mph;
    tank = tank - 3;
}

void Car::goSlow(double mph)
{
    speed = speed - mph;
    tank = tank -3;
}

bool Car::pumpGas(int gallons)
{
    bool full = false;
    if((tank + gallons) > 12)
    {
        tank = 12;
        full = true;
    }
    else
    {
        tank = tank + gallons;
    }

    return full;
}

void Car::display()
{
    cout << "the speed in mph is " << speed << endl;
    cout << "the tank is holding " << tank << " gallons" << endl;
}
