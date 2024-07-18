## Open-Closed Principle

The Open-Closed Principle states that a software module should be open for extension but closed for modification. This means that a class should be easily extendable without modifying the class itself. New

### Example

Consider a class shape that has a method `draw` which draws different shapes like circle, square, rectangle, etc. If we want to add a new shape, we need to modify the `draw` method which violates the Open-Closed Principle.

```cpp
class Shape {
public:
    void draw() {
        if (type == "circle") {
            drawCircle();
        } else if (type == "square") {
            drawSquare();
        } else if (type == "rectangle") {
            drawRectangle();
        }
    }
};
```

To make the class open for extension but closed for modification, we can create a new class for each shape that extends the `Shape` class and overrides the `draw` method.

```cpp
class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        drawCircle();
    }
};

class Square : public Shape {
public:
    void draw() {
        drawSquare();
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        drawRectangle();
    }
};
```

Now, we can add a new shape by creating a new class that extends the `Shape` class without modifying the `Shape` class.
