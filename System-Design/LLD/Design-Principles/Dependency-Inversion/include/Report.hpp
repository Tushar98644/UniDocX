#ifndef REPORT_HPP
#define REPORT_HPP

#include "ILogger.hpp"
#include <string>

using namespace std;

class Report {
private:
    const ILogger& logger;

public:
    Report(const ILogger& logger);
    void generateReport(const string& data);
};

#endif
