#include "AreaCalculator.hpp"

using namespace std;

double AreaCalculator::calculateTotalArea(const vector<Shape*>& shapes) const {
    double totalArea = 0.0;
    for (const Shape* shape : shapes) {
        totalArea += shape->getArea();
    }
    return totalArea;
}
