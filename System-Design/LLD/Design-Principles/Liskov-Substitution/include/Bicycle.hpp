#ifndef BICYCLE_HPP
#define BICYCLE_HPP

#include "Vehicle.hpp"

class Bicycle : public Vehicle {
public:
    Bicycle();
    void startEngine() const override;
    void stopEngine() const override;
    void move(double distance) const override;
};

#endif