#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main()
{
    Car chevy;
    chevy.yearString(2006, "Chevorlet");
    cout << "Accelerating..." << endl;

    for(int i = 0; i < 5; i++)
    {
        chevy.accelerate();
        cout << "The speed is : " << chevy.getSpeed() << endl;
    }

    cout << "Braking..." << endl;

    for(int i = 0; i < 5; i++)
    {
        chevy.brake();
        cout << "The speed is : " << chevy.getSpeed() << endl;
    }



    cout << "End!" << endl;
    return 0;
}
