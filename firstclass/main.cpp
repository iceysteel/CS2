#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Car car1;
    car1.pumpGas(15);
    car1.goFast(4);
    car1.goFast(8);
    car1.display();

    car1.goSlow(2);

    return 0;
}
