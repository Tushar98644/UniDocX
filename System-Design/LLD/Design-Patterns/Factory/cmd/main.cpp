#include <iostream>
#include "ReportFactory.hpp"
#include "InvoiceFactory.hpp"

int main() {
    DocumentFactory* reportFactory = new ReportFactory();
    Document* report = reportFactory->createDocument();
    std::cout << "Created document: " << report->getType() << std::endl;
    delete report;
    delete reportFactory;

    DocumentFactory* invoiceFactory = new InvoiceFactory();
    Document* invoice = invoiceFactory->createDocument();
    std::cout << "Created document: " << invoice->getType() << std::endl;
    delete invoice;
    delete invoiceFactory;

    return 0;
}
