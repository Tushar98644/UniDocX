#include "Car.hpp"
#include <iostream>

Car::Car() : engineState("stopped"), mileage(0.0) {}

void Car::startEngine() const {
    std::cout << "Car engine started." << std::endl;
}

void Car::stopEngine() const {
    std::cout << "Car engine stopped." << std::endl;
}

void Car::move(double distance) const {
    std::cout << "Car moved " << distance << " kilometers." << std::endl;
}