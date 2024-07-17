#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {

private:
    double width;
    double height;

public:
    Rectangle(double width, double height);
    double getArea() const override;
};

#endif
