#ifndef  DOCUMENT_FACTORY_HPP
#define DOCUMENT_FACTORY_HPP   

#include "Document.hpp"

class DocumentFactory {
public:
    virtual ~DocumentFactory() = default;
    virtual Document* createDocument() const = 0;
};

#endif
