#ifndef TEXTPRINTER_HPP
#define TEXTPRINTER_HPP

#include <string>
#include "Printer.hpp"

using namespace std;

class TextPrinter : public Printer {
public:
    virtual void printText(const string& text) const = 0;
};

#endif