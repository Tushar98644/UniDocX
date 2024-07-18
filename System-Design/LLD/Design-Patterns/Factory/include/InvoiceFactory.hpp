#ifndef INVOICEFACTORY_HPP
#define INVOICEFACTORY_HPP

#include "DocumentFactory.hpp"

class InvoiceFactory : public DocumentFactory {
public:
    Document* createDocument() const override;
};

#endif