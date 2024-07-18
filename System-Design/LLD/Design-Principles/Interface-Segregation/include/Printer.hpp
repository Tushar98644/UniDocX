#ifndef PRINTER_HPP
#define PRINTER_HPP

#include <string>

using namespace std;

class Printer {
public:
    virtual ~Printer() = default;
    virtual void printDocument(const string& document) const = 0;
};

#endif