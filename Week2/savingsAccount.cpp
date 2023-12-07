#include "savingsAccount.h"

    double savingsAccount::getInterestRate() const {
        return interestRate;
    }

    void savingsAccount::setInterestRate(double interestRate) {
        this->interestRate = interestRate;
    }

    void savingsAccount::postInterest() {
        double interestAmount = getBalance() * interestRate;
        deposit(interestAmount);
    }

    void savingsAccount::withdraw(double amount) {
        if (getBalance() >= amount) {
            bankAccount::withdraw(amount);
        }
        else {
            std::cout << "Warning: Insufficient funds for withdrawal.\n";
        }
    }
