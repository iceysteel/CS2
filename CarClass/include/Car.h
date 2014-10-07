#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>

using namespace std;

class Car
{
    public:
        Car();
        int getYear();
        string getMake();
        int getSpeed();
        void accelerate();
        void brake();
        void yearString(int year, string mk);
        virtual ~Car();
    protected:
    private:
        int yearModel;
        string make;
        int speed;

};

#endif // CAR_H
