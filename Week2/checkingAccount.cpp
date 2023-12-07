#include "checkingAccount.h"

double checkingAccount::getMinimumBalance() const {
    return minimumBalance;
}

void checkingAccount::setMinimumBalance(double minimumBalance) {
    this->minimumBalance = minimumBalance;
}

double checkingAccount::getInterestRate() const {
    return interestRate;
}

void checkingAccount::setInterestRate(double interestRate) {
    this->interestRate = interestRate;
}

double checkingAccount::getServiceCharge() const {
    return serviceCharge;
}

void checkingAccount::setServiceCharge(double serviceCharge) {
    this->serviceCharge = serviceCharge;
}

void checkingAccount::postInterest() {
    double interestAmount = getBalance() * interestRate;
    deposit(interestAmount);
}

void checkingAccount::writeCheck(double amount) {
    withdraw(amount);
}

void checkingAccount::withdraw(double amount) {
    if (getBalance() < amount) {
        std::cout << "Warning: Insufficient funds for withdrawal.\n";
    }else{
        double newBalance = getBalance() - amount;
        if (newBalance < minimumBalance) {
            if (newBalance < 0) {
                std::cout << "Error: Account balance cannot go below zero. Service charge applied.\n";
                newBalance -= serviceCharge;
            }
            std::cout << "Service charge applied.\n";
            newBalance -= serviceCharge;
        }
        deposit(-amount);
    }
}