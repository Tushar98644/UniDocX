#include "SimpleTextPrinter.hpp"
#include <iostream>

using namespace std;

void SimpleTextPrinter::printDocument(const string& document) const {
    std::cout << "Printing text document: " << document << std::endl;
}

void SimpleTextPrinter::printText(const string& text) const {
    std::cout << "Printing text: " << text << std::endl;
}