## Simple
<img width="1430" alt="Screenshot 2024-01-17 at 9 15 21 AM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/bbdb7aff-91c3-46a6-8262-97e968be6b26">

## Monolith
<img width="1440" alt="Screenshot 2024-01-17 at 9 16 37 AM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/4207a2a5-6715-41bd-b247-30e87f2c50cf">

## Layered 

_`Advantages:`_

_Modularity: Layered architectures are highly modular, with each layer responsible for a specific set of functions. This modularity makes it easier to understand, develop, and maintain each layer independently._

_Ease of Development: Due to the clear separation of functionalities into layers, development can be distributed among different teams or individuals, focusing on specific layers. This simplifies the development process and allows for parallel development._

_Portability: Layers can be designed to be independent of each other, which can enhance portability. For example, changing the hardware abstraction layer might not affect higher-level layers._

<img width="1440" alt="Screenshot 2024-01-17 at 9 26 39 AM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/20c06059-d8f8-4486-a6a5-5f732fadaec0">

_`Disadvantages:`_

_Performance Overhead: Communication between layers can introduce performance overhead. Passing data and control between layers may require additional processing, leading to reduced system performance._

_Rigidity: Changes in one layer might require modifications in multiple layers, making the system rigid and less adaptable to changes._

_Limited Flexibility: It might be challenging to add new features or modify existing ones without affecting other layers. This limitation can hinder the system's flexibility._

## Microkernel

_`Advantages:`_

_Modularity and Extensibility: Similar to layered architectures, microkernels emphasize modularity. However, microkernels take it a step further by reducing the core of the operating system to the bare minimum. This enhances extensibility, allowing developers to add or remove components more easily._

_Isolation and Fault Tolerance: By keeping only essential components in the kernel and moving other services into user space, microkernels offer better isolation. This isolation can improve fault tolerance since a failure in one component is less likely to affect others._

_Dynamic Updates: Microkernels support dynamic updates, allowing components to be added, removed, or updated without requiring a system reboot. This feature is beneficial for systems that need continuous availability._

<img width="1440" alt="Screenshot 2024-01-17 at 9 29 11 AM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/bd198cb6-6cea-437c-b812-6d3caafc4219">

_`Disadvantages:`_

_Performance Overhead: Communication between user space components and the microkernel can introduce performance overhead. Context switches between user space and kernel space may be more frequent compared to monolithic kernels._

_Complexity: Developing and maintaining a microkernel-based system can be more complex than a monolithic system. The need for inter-process communication (IPC) mechanisms and the separation of components can increase system complexity._

_Learning Curve: Understanding and developing for a microkernel architecture might require a steeper learning curve for developers compared to monolithic architectures._

## Module
<img width="1440" alt="Screenshot 2024-01-17 at 9 30 55 AM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/2ecdd8b9-3596-47ac-a66b-9975635d86e9">
