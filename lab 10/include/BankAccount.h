#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


class BankAccount
{
    public:
        BankAccount(double bal, double anIntRate);
        virtual ~BankAccount();
    protected:
    private:
        double balance;
        int depositsThisMonth;
        int withdrawals;
        double annualInterestRate;
        double monthlyServiceCharges;
};

#endif // BANKACCOUNT_H
