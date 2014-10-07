#include "Time.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Time::Time(int y, string mo, int d, int h, int m, int s)
{
    setTime(y, mo, d, h, m, s);
}

void Time::setTime(int y, string mo, int d, int h, int m, int s)
{
    setYear(y);
    setMonth(mo);
    setDay(d);
    setHr(h);
    setMin(m);
    setSec(s);
}

void Time::setYear(int y)
{
    year = y;
}

void Time::setMonth(string mo)
{
    month = mo;
}

void Time::setDay(int d)
{
    day = (d >= 0 && d < 31) ? d : 0;
}

void Time::setHr(int h)
{
    hour = (h >= 0 && h < 24) ? h : 0;
}

void Time::setMin(int m)
{
    minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::setSec(int s)
{
    second = (s >= 0 && s < 60) ? s : 0;
}

int Time::getYear() const
{
    return year;
}

string Time::getMonth() const
{
    return month;
}

int Time::getDay() const
{
    return day;
}

int Time::getHr() const
{
    return hour;
}


int Time::getMin() const
{
    return minute;
}

int Time::getSec() const
{
    return second;
}

void Time::printUniversal() const
{
    cout << month << " " << day << ", " << year << " /// " << setfill('0') << setw(2) << hour << " : " << setw(2) << minute << " : " << setw(2) << second << endl;
}

void Time::Tic(int y, string mo, int d, int h, int m, int s)
{
    string arrayMo[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    int j = 0;

    for ( int i = 0; i < 12; i++)
    {
        if (mo == arrayMo[i])
            j=i;
    }

    if (s < 59)
        second = s + 1;

    if (m < 59 && s == 59)
    {
        minute = m + 1;
        second = 0;
    }

    if (h < 10 && m == 59 && s == 59)
    {
        hour = h + 1;
        minute = 0;
        second = 0;
    }

    if ( d < 31 && h==11 && m==59 && s==59)
    {
        day = day + 1;
        hour = 0;
        minute = 0;
        second = 0;
    }

    if ( j < 11 && d == 31 && h==11 && m==59 && s==59)
    {
        month = arrayMo[j+1];
        day = 0;
        hour = 0;
        minute = 0;
        second = 0;
    }

    if ( j == 11 && d == 31 && h==11 && m==59 && s==59)
    {
        year = y + 1;
        month = arrayMo[0];
        day = 0;
        hour = 0;
        minute = 0;
        second = 0;
    }

}
