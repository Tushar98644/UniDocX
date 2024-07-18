#include <iostream>
#include "MultiFunctionPrinter.hpp"
#include "SimpleTextPrinter.hpp"

int main() {
    TextPrinter* simpleTextPrinter = new SimpleTextPrinter();
    MultiFunctionPrinter* mfp = new MultiFunctionPrinter();

    simpleTextPrinter->printText("Simple Text Document");

    mfp->printText("MultiFunction Text Document");
    mfp->printPhoto("MultiFunction Photo Document");
    mfp->printPDF("MultiFunction PDF Document");

    delete simpleTextPrinter;
    delete mfp;

    return 0;
}