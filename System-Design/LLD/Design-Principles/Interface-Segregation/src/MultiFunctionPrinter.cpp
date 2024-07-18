#include "MultiFunctionPrinter.hpp"
#include <iostream>

using namespace std;

void MultiFunctionPrinter::printDocument(const string& document) const {
    cout << "Printing document: " << document << endl;
}

void MultiFunctionPrinter::printText(const string& text) const {
    cout << "Printing text: " << text << endl;
}

void MultiFunctionPrinter::printPhoto(const string& photo) const {
    cout << "Printing photo: " << photo << endl;
}

void MultiFunctionPrinter::printPDF(const string& pdf) const {
    cout << "Printing PDF: " << pdf << endl;
}