#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height) : width(width), height(height) {
    type = "Rectangle";
}

double Rectangle::getArea() const {
    return width * height;
}
