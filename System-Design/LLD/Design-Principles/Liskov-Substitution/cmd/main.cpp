#include <iostream>
#include "Car.hpp"
#include "Bicycle.hpp"

int main() {
    Vehicle* car = new Car();
    Vehicle* bicycle = new Bicycle();

    car->startEngine();
    car->move(10);
    car->stopEngine();

    bicycle->startEngine();
    bicycle->move(5);
    bicycle->stopEngine();

    delete car;
    delete bicycle;

    return 0;
}