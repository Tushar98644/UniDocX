#ifndef FILELOGGER_HPP
#define FILELOGGER_HPP

#include "ILogger.hpp"

class FileLogger : public ILogger {
public:
    void log(const std::string& message) const override;
};

#endif
