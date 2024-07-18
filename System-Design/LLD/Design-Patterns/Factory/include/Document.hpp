#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <string>

using namespace std;

class Document {
public:
    virtual ~Document() = default;
    virtual string getType() const = 0;
};

#endif