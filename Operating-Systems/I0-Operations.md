## I/O Operations

<img width="1440" alt="Screenshot 2024-01-14 at 8 14 55 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/37635154-8e47-475f-9607-9d8bc2c428cd">

## Interrupt-driven I/O
<img width="1440" alt="Screenshot 2024-01-14 at 8 21 12 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/6149eaa7-2770-4932-b98d-851e36e6816c">

## DMA(Direct Memory Access)
<img width="1095" alt="Screenshot 2024-01-14 at 8 23 29 PM" src="https://github.com/Tushar98644/UniDocX/assets/107763774/cbfaff21-4a0f-442d-82d8-83e3ed1c295e">

## Note

_An I/O device is connected to the machine by I/O port. And the devices have their dedicated device controller.
Device controller is nothing but intermediate hardware between the machine, I/O device and OS. The OS sends instructions to the CPU to manipulate I/O devices.Then CPU sends signals to these devices via device controller (of course, not only CPU,  device controllers have registers inside too). 
But how does OS know what device is connected and what instructions should it send to get device working? 
When a manufacturer makes a device, they will distribute its driver program along with it. This is because the OS will never have idea about the device. The only way to interact with the device is by talking to its driver program.
Lots of beginners think the OS will have full understanding of a device once the driver is installed, which is NOT true. Driver will never become a part of OS._

_It is the driver program sends instructions and receives data from the device and pass it to OS for use. The OS and Driver can talk to each other simply because they are both loaded on the memory.
You can think a driver as a daemon program, which long time resides on the memory space until system shuts down.
Above all, is why I/O device (those shinny RGB keyboards) stops working as soon as driver program crashes._

_Driver program or device driver can be located anywhere. hard disk, USB drive, specific device ROM, or even Floppy disk. We do not care about where it come from. We only care about "loading that driver program to the computer memory" so our OS knows how it should send instructions to it._
