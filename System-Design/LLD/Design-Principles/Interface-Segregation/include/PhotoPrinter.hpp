#ifndef PHOTOPRINTER_HPP
#define PHOTOPRINTER_HPP

#include <string>
#include "Printer.hpp"

using namespace std;

class PhotoPrinter : public Printer {
public:
    virtual void printPhoto(const string& photo) const = 0;
};

#endif