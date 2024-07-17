#include "Account.hpp"

using namespace std;

Account::Account(const string& name, double balance)
    : name(name), balance(balance) {}


string Account::getName() const {
    return name;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        throw runtime_error("Insufficient funds");
    }
}