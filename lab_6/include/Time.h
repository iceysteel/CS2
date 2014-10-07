#ifndef TIME_H
#define TIME_H
#include <string>
using namespace std;

class Time
{
private:
    int year;
    string month;
    int day;
    int hour;
    int minute;
    int second;

public:
    Time(int = 0, string = " ", int = 0, int = 0, int = 0, int = 0);

    void setTime(int, string, int, int, int, int);
    void setYear(int);
    void setMonth(string);
    void setDay(int);
    void setHr(int);
    void setMin(int);
    void setSec(int);
    void Tic(int, string, int, int, int, int);
    int getYear() const;
    string getMonth() const;
    int getDay() const;
    int getHr() const;
    int getMin() const;
    int getSec() const;
    void printUniversal() const;
};


#endif
