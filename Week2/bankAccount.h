#include <iostream>
#include <iomanip>

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class bankAccount {
public:
    bankAccount(int accountNumber, double balance)
        : accountNumber(accountNumber), balance(balance) {}

    void setAccountNumber(int accountNumber);
    int getAccountNumber() const;
    double getBalance() const;
    void deposit(double amount);
    virtual void withdraw(double amount);
    void print() const;

private:
    int accountNumber;
    double balance;
};

#endif // !BANKACCOUNT_H
