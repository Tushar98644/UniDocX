#include "FileLogger.hpp"
#include <iostream>

void FileLogger::log(const std::string& message) const {
    std::cout << "Logging to file: " << message << std::endl;
}
