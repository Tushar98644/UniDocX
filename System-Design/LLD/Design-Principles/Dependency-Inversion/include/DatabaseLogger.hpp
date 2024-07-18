#ifndef DATABASELOGGER_HPP
#define DATABASELOGGER_HPP

#include "ILogger.hpp"

class DatabaseLogger : public ILogger {
public:
    void log(const std::string& message) const override;
};

#endif
