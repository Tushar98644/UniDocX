#include "FileLogger.hpp"
#include "DatabaseLogger.hpp"
#include "Report.hpp"

int main() {
    FileLogger fileLogger;
    DatabaseLogger databaseLogger;

    Report fileReport(fileLogger);
    fileReport.generateReport("File report data");

    Report dbReport(databaseLogger);
    dbReport.generateReport("Database report data");

    return 0;
}
