### Interface Segregation Principle (ISP)

The Interface Segregation Principle states that a client should not be forced to implement interfaces they do not use. Instead of having one large interface, break it down into smaller, more specific interfaces so that clients only need to know about the methods that are of interest to them.

#### Problem

Consider an `Printer` interface that has two methods: `print` and `scan`. A `Scanner` class that only needs to scan documents will still have to implement the `print` method, which is unnecessary.

#### Solution

Split the `Printer` interface into two separate interfaces: `Print` and `Scan`. The `Scanner` class can now implement the `Scan` interface without being forced to implement the `Print` method.

#### Before ISP

```cpp
class Printer {
public:
    virtual void print() = 0;
    virtual void scan() = 0;
};

class Scanner : public Printer {
public:
    void print() override {
        // Empty implementation
    }

    void scan() override {
        // Code to scan document
    }
};
```

#### After ISP

```cpp
class Print {
public:
    virtual void print() = 0;
};

class Scan {
public:
    virtual void scan() = 0;
};

class Scanner : public Scan {
public:
    void scan() override {
        // Code to scan document
    }
};
```
