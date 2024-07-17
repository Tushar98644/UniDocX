#include <iostream>
#include "Account.hpp"
#include "ReportGenerator.hpp"

int main() { 
    // Create an Account object
    Account account("John Doe", 1000.0);

    // Display account details
    cout << "Account Name: " << account.getName() << endl;
    cout << "Initial Balance: " << account.getBalance() << endl;

    // Perform some transactions
    account.deposit(500.0);
    account.withdraw(200.0);

    // Display updated account details
    cout << "Updated Balance: " << account.getBalance() << endl;

    // Create a ReportGenerator object
    ReportGenerator reportGenerator;

    // Generate a report for the account
    reportGenerator.generateReport(account);

    return 0;
}
