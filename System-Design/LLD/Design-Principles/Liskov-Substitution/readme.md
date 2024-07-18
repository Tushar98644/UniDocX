## Liskov Substitution Principle

The Liskov Substitution Principle (LSP) states that objects of a superclass shall be replaceable with objects of its subclasses without breaking the application. That requires the objects of your subclasses to behave in the same way as the objects of your superclass.

The Liskov Substitution Principle is the third principle of the SOLID principles. It was introduced by Barbara Liskov in 1987.

## Example

Let's say we have a class `Vehicle` and subclassess `Car` and `Bike`. The `Vehicle` class has a method `startEngine()`. According to Liskov Substitution Principle, the `startEngine()` method should work in the same way for `Car` and `Bike` as it works for `Vehicle`.

```cpp
class Vehicle {
public:
    void startEngine() {
        cout << "Engine started" << endl;
    }
};

class Car : public Vehicle {
};

class Bike : public Vehicle {
};
```

In the above example, the `startEngine()` method works in the same way for `Car` and `Bike` as it works for `Vehicle`. So, the Liskov Substitution Principle is satisfied.

## Violation of Liskov Substitution Principle

Let's say we have a class `Bird` and subclassess `Duck` and `Ostrich`. The `Bird` class has a method `fly()`. According to Liskov Substitution Principle, the `fly()` method should work in the same way for `Duck` and `Ostrich` as it works for `Bird`.

```cpp
class Bird {
public:
    void fly() {
        cout << "Bird is flying" << endl;
    }
};

class Duck : public Bird {
};

class Ostrich : public Bird {
};
```

In the above example, the `fly()` method works in the same way for `Duck` and `Ostrich` as it works for `Bird`. But, the `Ostrich` class should not have the `fly()` method because ostriches can't fly. So, the Liskov Substitution Principle is violated.

## Summary

The Liskov Substitution Principle states that objects of a superclass shall be replaceable with objects of its subclasses without breaking the application. That requires the objects of your subclasses to behave in the same way as the objects of your superclass.

