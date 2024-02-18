# Design-Patterns-C
Introduction

Introduction. In this section we look at useful information that you need before getting started, where to find code examples for this training, how to get additional help and where you can ask questions regarding this course. This is a brief introduction to this course.

Creational Patterns

Object Pattern. This is a way to group data into objects that can be instantiated and destroyed. We also introduce concept of classes and member functions.

Opaque Pattern. This pattern gives us three ways of making the implementation of the object private and exposing only a handle to the object. This can also be referred to as opaque objects pattern.

Singleton Pattern. The singleton pattern is a design pattern used to ensure that a class has only one instance, while providing a global access point to this instance.

Factory Pattern. The factory design pattern is a creational design pattern that provides an interface for creating objects in a super class, but allows sub-classes to alter the type of objects that will be created.

Structural Patterns

Callback Pattern. Deals with object oriented callbacks that are bound to instances of objects. Allows callbacks to operate on specific instances of objects.

Inheritance Pattern. Inheritance pattern is used for implementing inheritance relationships between objects and components in a C program. It is useful as a way to create a hierarchy of objects instead of having to manage a large application where all details are at the same level of abstraction.

Virtual API Pattern. Virtual API pattern is a way of implementing virtual functions in C and making the handles to opaque objects also "smart". The virtual api pattern gives us polymorphism - where we can use the same interface for several implementations without knowing about these implementations.

Bridge Pattern. This pattern builds upon the virtual api pattern and is the pattern to use when you need to bridge two distinct hierarchies of objects. We cover an example in Rust and in C where we look at how this pattern can be used in practice.

Behavioral Patterns

Return Value Pattern. This pattern standardizes the way that function handle return values. This is valuable because return values in C are the primary way to signal status of an operation. Therefore we must have a clear way of communicating with caller through standardized return value.

Concurrency Patterns

Concurrency Introduction. In this section we are going to look at concurrency itself as a pattern for software development as well as when and why we should consider concurrency as a valuable tool in our toolbox.

Spinlock / Interrupt Masking Pattern. Masking interrupts is the simplest pattern for data integrity has to do with protecting shared data that is accessed by interrupts. A generic implementation of this is often done in the form of spinlock. Here we look at how we need to protect data from corruption by making sure interrupt never runs when we are modifying it.

Semaphore Pattern. A semaphore is one level above a spinlock and outlines a pattern of signalling between interrupt handlers and application level threads (and also between multiple threads in our application). In this module we look at the actual implementation of a semaphore, its use cases and important considerations. A semaphore is the most basic, thread aware synchronization primitive in any RTOS system.

Mutex Pattern. The mutex is slightly different from the semaphore in that it prevents starvation by means of priority inheritance. It is the primary pattern that should be used by an application thread for mutually exclusive access to a resource with respect to other threads. In this module we will look at an implementation of mutex, how it works and how it differs from implementations of other primitives.

Conditional Variable Pattern. The conditional variable pattern builds upon the mutex pattern to implement a way of signaling and waking up one or more threads from another thread or from an interrupt handler. This pattern is useful for checking for arbitrarily complex conditions in response to an asynchronous event in a safe manner.
