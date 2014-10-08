#include <iostream>
#include <string>
#include "Month.h"

using namespace std;

int main()
{
    cout << "Int constructor with 3 passed in" << endl;
    Month third;
    third.intConstructor(3);
    third.print();

    cout << "Name constructor with \"January\" passed in" << endl;
    Month first;
    first.nameConstructor("January");
    first.print();

    cout << "Before and after ++" << endl;
    first.print();
    ++first;
    first.print();

    cout << "Before and after --" << endl;
    first.print();
    --first;
    first.print();





    return 0;
}

