#include "Employee.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
    Employee susan;
    Employee mark;
    Employee joy;

    susan.makeNewEmpwAll("Susan Meyers", 47899, "Accounting", "Vice President");
    mark.makeNewEmpwAll("Mark Jones", 39119, "IT", "Programmer");
    joy.makeNewEmpwAll("Joy Rogers", 81774, "Manufacturing", "Engineer");

    susan.display();
    mark.display();
    joy.display();

    return 0;
}
