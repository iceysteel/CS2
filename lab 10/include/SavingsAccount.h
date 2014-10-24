#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <BankAccount.h>


class SavingsAccount : public BankAccount
{
    public:
        SavingsAccount();
        virtual ~SavingsAccount();
        void withdraw(double amount);
        void deposit(double amount);
    protected:
    private:
        bool status;
};

#endif // SAVINGSACCOUNT_H
