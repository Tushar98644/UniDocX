#ifndef MULTIFUNCTIONPRINTER_HPP
#define MULTIFUNCTIONPRINTER_HPP

#include "TextPrinter.hpp"
#include "PhotoPrinter.hpp"
#include "PDFPrinter.hpp"

using namespace std;

class MultiFunctionPrinter : public TextPrinter, public PhotoPrinter, public PDFPrinter {
public:
    void printDocument(const string& document) const override;
    void printText(const string& text) const override;
    void printPhoto(const string& photo) const override;
    void printPDF(const string& pdf) const override;
};

#endif