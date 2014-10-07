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


    cout << "input the year" << endl;
    cin >> year;

}
