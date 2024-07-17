#ifndef AREACALCULATOR_HPP
#define AREACALCULATOR_HPP

#include "Shape.hpp"
#include <vector>

using namespace std;

class AreaCalculator {
public:
    double calculateTotalArea(const vector<Shape*>& shapes) const;
};

#endif
