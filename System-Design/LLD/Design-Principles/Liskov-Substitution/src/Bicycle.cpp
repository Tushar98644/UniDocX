#include "Bicycle.hpp"
#include <iostream>

Bicycle::Bicycle() {}

void Bicycle::startEngine() const {
    std::cout << "Bicycles don't have engines, but you start pedaling." << std::endl;
}

void Bicycle::stopEngine() const {
    std::cout << "Bicycles don't have engines, but you stop pedaling." << std::endl;
}

void Bicycle::move(double distance) const {
    std::cout << "Bicycle moved " << distance << " kilometers." << std::endl;
}