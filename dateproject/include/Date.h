#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date
{
    public:
        Date();
        void display1();
        void display2();
        void display3();
        void storeDayMonthYear();
        virtual ~Date();
        void setMonth(int m);

       // Month operator++();
//        Month operator++(int);
  //      Month operator--();
    //    Month operator--(int);

    private:
        int day;
        int month;
        int year;
        string monthString;

};

#endif // DATE_H
