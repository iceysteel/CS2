#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

Date::Date()
{
    day = 0;
    month = 0;
    year = 0;//ctor
    monthString = "";
}

Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;//ctor
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    monthString = months[(m - 1)];
}

Date::setMonth(int m)
{
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    monthString = months[(m - 1)];
}

Date::~Date()
{
    //dtor
}

void Date::display1()
{
    cout << month << "/" << day << "/" << year << endl;
}

void Date::display2()
{
    cout << monthString << " " << day << ", " << year << endl;
}

void Date::display3()
{
    cout << day << " " << monthString << " " << year << endl;
}
void Date::storeDayMonthYear()
{
    int d = 0;
    do
    {
        cout << "input the day" << endl;

        cin >> d;

    }while(d > 31 || d < 1);

    day = d;

    int m = 0;

    do
    {
        cout << "input the month" << endl;

        cin >> m;

    } while( m > 12 || m < 1);

    month = m;

    // get the month in string form
    if(month == 1)
    {
        monthString = "January";
    }
    else if(month == 3)
    {
        monthString = "March";
    }
    else if(month == 4)
    {
        monthString = "April";
    }
    else if(month == 5)
    {
        monthString = "May";
    }
    else if(month == 6)
    {
        monthString = "June";
    }
    else if(month == 7)
    {
        monthString = "July";
    }
    else if(month == 8)
    {
        monthString = "August";
    }
    else if(month == 9)
    {
        monthString = "September";
    }
    else if(month == 10)
    {
        monthString = "October";
    }
    else if(month == 11)
    {
        monthString = "November";
    }
    else if(month == 12)
    {
        monthString = "December";
    }
    else if(month == 2)
    {
        monthString = "February";
    };
    //this is a comment

    cout << "input the year" << endl;
    cin >> year;
}


// finish this implemention ljkgkljhkljfhkljsdhfkljhsdklfjhskldjfhskdjf

Date Date::operator++()
  {
    if(day < 31)
    {
        if(month < 12)
        {
            day = 1;
            setMonth(1);
            year++;
        }
        else
        {

            day = 1;
        }
    }
    else
    {

    }



    //old code begins
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

Date Date::operator++(int)
  {
    Month tmp(*this);
    operator++();
    return tmp;
  }

Date Date::operator--()
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

Date Date::operator--(int)
  {
    Month tmp(*this);
    operator--();
    return tmp;
  }



