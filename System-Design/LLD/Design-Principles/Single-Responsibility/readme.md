# Single Responsibility Principle (SRP)

## Definition
The Single Responsibility Principle states that a class should have only one reason to change, meaning it should have only one job or responsibility.

## Example

### Problem
Consider an `Account` class that handles both account data and generating reports. This violates SRP because the class has more than one reason to change.

### Solution
Split the responsibilities into two separate classes: `Account` for account data and `ReportGenerator` for report generation.

### Before SRP
```cpp
class Account {
public:
    void generateReport() {
        // Code to generate report
    };

    // Other account-related methods
};
```

### After SRP
```cpp
class Account {
    // Account-related methods
};

class ReportGenerator {
public:
    void generateReport(Account account) {
        // Code to generate report
    }
};
```