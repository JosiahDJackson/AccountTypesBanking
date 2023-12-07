#include "bankAccount.h"

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class checkingAccount : public bankAccount {
public:
    checkingAccount(int accountNumber, double balance, double minimumBalance, double interestRate, double serviceCharge)
        : bankAccount(accountNumber, balance),
        minimumBalance(minimumBalance), interestRate(interestRate), serviceCharge(serviceCharge) {}

    double getMinimumBalance() const;
    void setMinimumBalance(double minimumBalance);
    double getInterestRate() const;
    void setInterestRate(double interestRate);
    double getServiceCharge() const;
    void setServiceCharge(double serviceCharge);
    void postInterest();
    void writeCheck(double amount);
    void withdraw(double amount) override;

private:
    double minimumBalance;
    double interestRate;
    double serviceCharge;
};

#endif // !CHECKINGACCOUNT_H

