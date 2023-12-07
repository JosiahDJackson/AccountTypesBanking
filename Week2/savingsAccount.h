#include "bankAccount.h"

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class savingsAccount : public bankAccount {
public:
    savingsAccount(int accountNumber, double balance, double interestRate)
        : bankAccount(accountNumber, balance), interestRate(interestRate) {}

    double getInterestRate() const;
    void setInterestRate(double interestRate);
    void postInterest();
    void withdraw(double amount) override;

private:
    double interestRate;
};

#endif // !SAVINGSACCOUNT_H

