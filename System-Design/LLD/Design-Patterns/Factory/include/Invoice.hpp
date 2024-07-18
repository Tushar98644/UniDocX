#ifndef INVOICE_HPP
#define INVOICE_HPP

#include "Document.hpp"
#include <string>

using namespace std;

class Invoice : public Document {
public: 
     string getType() const override {
         return "Invoice";
     }  
};   

#endif