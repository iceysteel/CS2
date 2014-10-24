#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


class BankAccount
{
    public:
        BankAccount(double bal, double anIntRate);
        virtual ~BankAccount();
        virtual void deposit(double amount);
        virtual void withdraw(double amount);
        virtual void calcInt();
        virtual void monthlyProc();
    protected:
        double balance;
        int depositsThisMonth;
        int withdrawals;
        double annualInterestRate;
        double monthlyServiceCharges;
    private:
};

#endif // BANKACCOUNT_H
