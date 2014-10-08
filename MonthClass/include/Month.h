#ifndef MONTH_H
#define MONTH_H
#include <string>
#include <iostream>
using namespace std;

class Month
{
    public:
        Month();
        void nameConstructor(string n);
        void intConstructor(int m);

        virtual ~Month();
        //get functions
        int getMonthNumber();
        string getName();
        //set functions
        void setMonthNumber();
        void setName();

        void print();

        Month operator++();
        Month operator++(int);
        Month operator--();
        Month operator--(int);
    protected:
    private:
        string name;
        int monthNumber;

};

#endif // MONTH_H
