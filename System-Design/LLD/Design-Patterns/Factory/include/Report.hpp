#ifndef REPORT_HPP
#define REPORT_HPP

#include "Document.hpp"
#include <string>

using namespace std;

class Report : public Document {
public:
    string getType() const override
    {
        return "Report";
    }
};

#endif