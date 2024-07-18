## What is the Factory Design Pattern?

The Factory Design Pattern helps create objects without having to specify the exact class of the object that will be created. It provides a way to delegate the responsibility of instantiating objects to subclasses. This makes the code more flexible and easier to maintain.

## The Problem

Imagine you have a program that creates different types of documents, such as Reports and Invoices. Without the Factory Pattern, your code might look something like this:

```cpp
#include <iostream>

class Report {
public:
    std::string getType() const { return "Report"; }
};

class Invoice {
public:
    std::string getType() const { return "Invoice"; }
};

int main() {
    Report* report = new Report();
    Invoice* invoice = new Invoice();

    std::cout << "Created document: " << report->getType() << std::endl;
    std::cout << "Created document: " << invoice->getType() << std::endl;

    delete report;
    delete invoice;

    return 0;
}
```

## Issues with This Approach

- Hardcoded Types: The types of documents are hardcoded in the main function. If you need to add a new document type, you'll have to modify the main function.
- Scalability: Adding new types of documents requires changes in multiple places in the code.
- Maintenance: The code becomes harder to maintain as the number of document types grows.

## The Solution

The Factory Design Pattern solves these problems by introducing a factory class that is responsible for creating objects. The factory class has a method that takes a type as an argument and returns an object of the specified type. This way, the responsibility of creating objects is delegated to the factory class, making the code more flexible and easier to maintain.

Here's how the Factory Pattern can be applied to the document creation example:

```cpp
#include <iostream>

class Document {
public:
    virtual std::string getType() const = 0;
};

class Report : public Document {
public:
    std::string getType() const override { return "Report"; }
};

class Invoice : public Document {
public:
    std::string getType() const override { return "Invoice"; }
};

class DocumentFactory {
public:
    static Document* createDocument(const std::string& type) {
        if (type == "Report") {
            return new Report();
        } else if (type == "Invoice") {
            return new Invoice();
        } else {
            return nullptr;
        }
    }
};

int main() {
    Document* report = DocumentFactory::createDocument("Report");
    Document* invoice = DocumentFactory::createDocument("Invoice");

    std::cout << "Created document: " << report->getType() << std::endl;
    std::cout << "Created document: " << invoice->getType() << std::endl;

    delete report;
    delete invoice;

    return 0;
}
```
