#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

using namespace std;

class Account {

private:
    string name;
    double balance;

public:
    Account(const string& name, double balance);

    string getName() const;
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);

};

#endif
