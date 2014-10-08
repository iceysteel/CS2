#include "Month.h"
#include <string>
#include <iostream>
using namespace std;

Month::Month()
{
    monthNumber = 1;
    name = "January";
}

Month::~Month()
{
    //dtor
}

void Month::nameConstructor(string n)
{
    name = n;
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    int index = 0;
    while(name != months[index])
    {
        index++;
    }
    monthNumber = (index + 1);
}

void Month::intConstructor(int m)
{
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    monthNumber = m;
    name = months[(m - 1)];
}

void Month::print()
{
    cout << name << endl;
    cout << monthNumber << endl;

}

Month Month::operator++()
  {
    if(monthNumber < 12)
    {
        monthNumber++;
        this->intConstructor(monthNumber);
    }
    else
    {
        this->intConstructor(1);
    }

    // do actual increment
    return *this;
  }

Month Month::operator++(int)
  {
    Month tmp(*this);
    operator++();
    return tmp;
  }

Month Month::operator--()
  {
    if(monthNumber > 1)
    {
        monthNumber--;
        this->intConstructor(monthNumber);
    }
    else
    {
        this->intConstructor(12);
    }

    // do actual increment
    return *this;
  }

Month Month::operator--(int)
  {
    Month tmp(*this);
    operator--();
    return tmp;
  }
