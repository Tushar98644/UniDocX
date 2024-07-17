#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>

using namespace std;

class Shape {

protected:
    string type; // Type stored in each shape subclass

public:
    virtual double getArea() const = 0; // Pure virtual function
    virtual ~Shape() = default;

    string getType() const { 
        return type;
    }
};

#endif 
