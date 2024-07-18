#ifndef REPORT_HPP
#define REPORT_HPP

#include "ILogger.hpp"
#include <string>

class Report {
private:
    const ILogger& logger;

public:
    Report(const ILogger& logger);
    void generateReport(const std::string& data);
};

#endif
