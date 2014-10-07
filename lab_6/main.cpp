#include <iostream>
#include <string>
#include "Time.h"

using namespace std;

int main()
{
    Time time1(2010, "December", 20, 11, 59, 59);
    time1.printUniversal();
    time1.Tic(2010, "December", 20, 11, 59, 59);
    time1.printUniversal();

    return 0;
}
