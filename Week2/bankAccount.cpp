#include "bankAccount.h"

void bankAccount::setAccountNumber(int accountNumber) {
    this->accountNumber = accountNumber;
}

int bankAccount::getAccountNumber() const {
    return accountNumber;
}

double bankAccount::getBalance() const {
    return balance;
}

void bankAccount::deposit(double amount) {
    balance += amount;
}

void bankAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    }
    else {
        std::cout << "Warning: Insufficient funds for withdrawal.\n";
    }
}

void bankAccount::print() const {
    std::cout << "Account Number: " << accountNumber << "\nBalance: $" << balance << "\n";
}