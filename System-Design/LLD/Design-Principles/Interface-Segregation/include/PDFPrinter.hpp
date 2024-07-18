#ifndef PDFPRINTER_HPP
#define PDFPRINTER_HPP

#include <string>
#include "Printer.hpp"

using namespace std;

class PDFPrinter : public Printer {
public:
    virtual void printPDF(const string& pdf) const = 0;
};

#endif