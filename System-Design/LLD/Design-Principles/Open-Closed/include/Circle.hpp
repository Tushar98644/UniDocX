#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {

private:
    double radius;
    
public:
    Circle(double radius);
    double getArea() const override;
};

#endif
