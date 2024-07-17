#include <iostream>
#include <vector>
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "AreaCalculator.hpp"

using namespace std;

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    vector<Shape*> shapes = {&circle, &rectangle};
    
    for (const Shape* shape : shapes) {
        cout << "Area of " << shape->getType() << ":" << shape->getArea() << endl;
    }
    
    AreaCalculator calculator;
    double totalArea = calculator.calculateTotalArea(shapes);

    cout << "Total Area: " << totalArea << endl;

    return 0;
}
