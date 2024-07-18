## Depen

## Dependency Inversion Principle

The Dependency Inversion Principle states that high-level modules should not depend on low-level modules. Both should depend on abstractions. Additionally, abstractions should not depend on details. Details should depend on abstractions.

### Problem

Consider a `Logger` class that logs messages to a file. A `UserService` class that needs to log messages will have to depend on the `Logger` class directly. If the `Logger` class changes, the `UserService` class will also need to change.

### Solution

Create an `ILogger` interface that the `Logger` class implements. The `UserService` class can now depend on the `ILogger` interface instead of the `Logger` class directly. If the `Logger` class changes, the `UserService` class will not need to change.

### Before DIP

```cpp
class Logger {
public:
    void log(const std::string& message) {
        // Code to log message to file
    }
};

class UserService
{
public:
    void createUser(const std::string& username) {
        Logger logger;
        logger.log("User created: " + username);
        // Code to create user
    }
};
```

### After DIP

```cpp
class ILogger {
public:
    virtual void log(const std::string& message) = 0;
};

class Logger : public ILogger {
public:
    void log(const std::string& message) override {
        // Code to log message to file
    }
};

class UserService
{
public:
    UserService(ILogger& logger) : logger(logger) {}

    void createUser(const std::string& username) {
        logger.log("User created: " + username);
        // Code to create user
    }

private:
    ILogger& logger;
};
```
