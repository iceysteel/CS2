#include "Car.h"
#include <string>
#include <iostream>

using namespace std;

Car::Car()
{
    speed = 0;
    yearModel = 0;
    make = "";
    //ctor
}

Car::~Car()
{
    //dtor
}

void Car::yearString(int year, string mk)
{
    speed = 0;
    yearModel = year;
    make = mk;
    //ctor
}

int Car::getYear()
{
    return yearModel;
}

string Car::getMake()
{
    return make;
}

int Car::getSpeed()
{
    return speed;
}

void Car::accelerate()
{
    speed = speed + 5;
}

void Car::brake()
{
    speed = speed - 5;
}
