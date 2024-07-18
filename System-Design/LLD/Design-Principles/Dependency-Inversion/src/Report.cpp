#include "Report.hpp"
#include <iostream>

Report::Report(const ILogger& logger) : logger(logger) {}

void Report::generateReport(const std::string& data) {
    // Simulate report generation
    std::cout << "Generating report with data: " << data << std::endl;
    logger.log("Report generated with data: " + data);
}
