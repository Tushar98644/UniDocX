#include "DatabaseLogger.hpp"
#include <iostream>

void DatabaseLogger::log(const std::string& message) const {
    std::cout << "Logging to database: " << message << std::endl;
}
