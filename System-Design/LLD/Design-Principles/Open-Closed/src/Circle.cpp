#include "Circle.hpp"
#include <cmath>

Circle::Circle(double radius) : radius(radius) {
    type = "Circle"; 
}

double Circle::getArea() const {
    return M_PI * radius * radius;
}
