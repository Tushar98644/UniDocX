#ifndef ILOGGER_HPP
#define ILOGGER_HPP

#include <string>

using namespace std;

class ILogger {
public:
    virtual ~ILogger() = default;
    virtual void log(const string& message) const = 0;
};

#endif