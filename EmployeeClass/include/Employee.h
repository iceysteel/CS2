#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee
{
    public:
        Employee();
        virtual ~Employee();
        void makeNewEmpwAll(string n, int id, string depart, string pos);
        void makeNewEmpwSome(string n, int id);
        void display();
    protected:
    private:
        string name;
        int idNumber;
        string department;
        string position;


};

#endif // EMPLOYEE_H
