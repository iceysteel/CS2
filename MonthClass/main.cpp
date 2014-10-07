#include <iostream>
#include <string>
#include "Month.h"

using namespace std;

int main()
{
    Month third;
    third.intConstructor(3);
    third.print();

    Month first;
    first.nameConstructor("January");
    first.print();


    return 0;
}

