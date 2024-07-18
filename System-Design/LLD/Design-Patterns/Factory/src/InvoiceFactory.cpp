#include "InvoiceFactory.hpp"
#include "Invoice.hpp"

Document *InvoiceFactory::createDocument() const
{
    return new Invoice();
}