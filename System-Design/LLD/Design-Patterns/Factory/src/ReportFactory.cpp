#include "ReportFactory.hpp"
#include "Report.hpp"

Document *ReportFactory::createDocument() const
{
    return new Report();
}