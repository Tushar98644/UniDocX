#ifndef VEHICLE_HPP
#define VEHICLE_HPP

class Vehicle {
public:
    virtual ~Vehicle() = default;
    virtual void startEngine() const = 0;
    virtual void stopEngine() const = 0;
    virtual void move(double distance) const = 0;
};

#endif