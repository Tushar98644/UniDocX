#ifndef REPORT_FACTORY_HPP
#define REPORT_FACTORY_HPP

#include "DocumentFactory.hpp"

class ReportFactory : public DocumentFactory {
public:
    Document* createDocument() const override;
};

#endif