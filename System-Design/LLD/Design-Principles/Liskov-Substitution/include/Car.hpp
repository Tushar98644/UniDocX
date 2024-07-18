#ifndef CAR_HPP
#define CAR_HPP

#include "Vehicle.hpp"
#include <string>

class Car : public Vehicle {
private:
    std::string engineState;
    double mileage;

public:
    Car();
    void startEngine() const override;
    void stopEngine() const override;
    void move(double distance) const override;
};

#endif