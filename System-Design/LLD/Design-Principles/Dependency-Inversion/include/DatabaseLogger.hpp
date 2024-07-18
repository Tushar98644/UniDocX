#ifndef DATABASELOGGER_HPP
#define DATABASELOGGER_HPP

#include "ILogger.hpp"

using namespace std;

class DatabaseLogger : public ILogger {
public:
    void log(const string& message) const override;
};

#endif
