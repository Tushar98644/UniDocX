#ifndef FILELOGGER_HPP
#define FILELOGGER_HPP

#include "ILogger.hpp"

using namespace std;

class FileLogger : public ILogger {
public:
    void log(const string& message) const override;
};

#endif
