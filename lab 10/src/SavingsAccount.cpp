#include "SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount()
{
    //ctor
}

SavingsAccount::~SavingsAccount()
{
    //dtor
}

SavingsAccount::void withdraw(double amount)
{
    if(balance >= 25)
    {
        balance = balance - amount;
    }
    else
    {
        status = false;
        cout << "Sorry, this transaction can't be completed because the account is inactive" << endl;
    }
}

SavingsAccount::void deposit(double amount)
{
    if(balance >= 25)
    {
        status = true;
        balance = balance + amount;
    }
    else
    {
        if((balance + amount) >= 25)
        {
            status = true;
            cout << "account is now active" << endl;
        }
        else
        {
            status = false;
            cout << "account is  still inactive" << endl;
        }
        balance = balance + amount;

    }
}
