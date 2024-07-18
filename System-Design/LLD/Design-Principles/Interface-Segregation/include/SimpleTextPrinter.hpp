#ifndef SIMPLETEXTPRINTER_HPP
#define SIMPLETEXTPRINTER_HPP

#include "TextPrinter.hpp"

using namespace std;

class SimpleTextPrinter : public TextPrinter {
public:
    void printDocument(const string& document) const override;
    void printText(const string& text) const override;
};

#endif