#include "ReportGenerator.hpp"
#include "Account.hpp"

#include <iostream>

using namespace std;

void ReportGenerator::generateReport(const Account &account)
{
    cout << "Account Report\n";
    cout << "Name: " << account.getName() << "\n";
    cout << "Balance: " << account.getBalance() << "\n";
}