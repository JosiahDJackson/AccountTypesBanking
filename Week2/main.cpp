#include <iostream>
#include <iomanip>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"


int main() {
    int accountNumber = 1000;

    checkingAccount jackAccount(accountNumber++, 1000, 100, 0.02, 10);
    checkingAccount lisaAccount(accountNumber++, 450, 50, 0.02, 5);
    savingsAccount samirAccount(accountNumber++, 9300, 0.03);
    savingsAccount ritaAccount(accountNumber++, 32, 0.03);

    jackAccount.deposit(1000);
    lisaAccount.deposit(2300);
    samirAccount.deposit(800);
    ritaAccount.deposit(500);

    jackAccount.postInterest();
    lisaAccount.postInterest();
    samirAccount.postInterest();
    ritaAccount.postInterest();

    std::cout << "***********************************" << std::endl;

    jackAccount.print();
    lisaAccount.print();
    samirAccount.print();
    ritaAccount.print();

    std::cout << "***********************************" << std::endl << std::endl;

    jackAccount.writeCheck(250);
    lisaAccount.writeCheck(350);
    samirAccount.withdraw(120);
    ritaAccount.withdraw(290);

    std::cout << "********After withdrawals ***************" << std::endl;

    jackAccount.print();
    lisaAccount.print();
    samirAccount.print();
    ritaAccount.print();

    std::cout << "***********************************" << std::endl << std::endl;

    return 0;
}