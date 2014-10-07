#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

Employee::Employee()
{
    name = "";
    department = "";
    position = "";
    idNumber = 0;
}

Employee::~Employee()
{
    //dtor
}

void Employee::makeNewEmpwAll(string n, int id, string depart, string pos)
{
    name = n;
    department = depart;
    position = pos;
    idNumber = id;
}

void Employee::makeNewEmpwSome(string n, int id)
{
    name = n;
    department = "";
    position = "";
    idNumber = id;
}

void Employee::display()
{
    std::cout << "name: " << name << std::endl;
    std::cout << "id: " << idNumber << std::endl;
    std::cout << "department: " << department << std::endl;
    std::cout << "position: " << position << std::endl;
}
