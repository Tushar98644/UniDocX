# Design Principles
The design principles are the set of guidelines that help us to design software that is easy to maintain, extend, and test. These principles are the foundation of good software design.

## SOLID Principles
- **SOLID** is an acronym for the first five object-oriented design (OOD) principles by Robert C. Martin (Uncle Bob).

### 1. Single Responsibility Principle (SRP)
- A class should have one, and only one, reason to change.
- A class should have only one job.

### 2. Open/Closed Principle (OCP)
- Software entities should be open for extension, but closed for modification.
- The design and writing of the code should be done in a way that new functionality should be added with minimum changes in the existing code.

### 3. Liskov Substitution Principle (LSP)
- Objects of a superclass shall be replaceable with objects of its subclasses without affecting the functionality of the program.
- Derived types must be completely substitutable for their base types.

### 4. Interface Segregation Principle (ISP)
- A client should never be forced to implement an interface that it doesn't use, or clients shouldn't be forced to depend on methods they do not use.
- Many client-specific interfaces are better than one general-purpose interface.

### 5. Dependency Inversion Principle (DIP)
- High-level modules should not depend on low-level modules. Both should depend on abstractions.
- Abstractions should not depend on details. Details should depend on abstractions.




