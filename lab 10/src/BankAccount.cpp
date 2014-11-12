#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(double bal, double anIntRate)
{
    balance = bal;
    annualInterestRate = anIntRate;
}

BankAccount::~BankAccount()
{
    //dtor
}

BankAccount::virtual void deposit(double amount)
{
    balance = balance + amount;
    depositsThisMonth++;
}

BankAccount::virtual void withdraw(double amount)
{
    balance = balance - amount;
    withdrawals++;
}

BankAccount::virtual void calcInt()
{
    double monthlyInterestRate = (annualInterestRate / 12);
    double monthlyInterest = balance * monthlyInterestRate;
    balance = balance + monthlyInterest;
}

BankAccount::virtual void monthlyProc()
{
    balance = balance - monthlyServiceCharges;
    calcInt();
    withdrawals = 0;
    depositsThisMonth = 0;
    monthlyServiceCharges = 0;
}
