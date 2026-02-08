# University Labs 5-7

This repository contains C++ solutions for laboratory works #5, #6, and #7, focusing on Object-Oriented Programming (OOP) concepts.

## Lab Descriptions

### Lab 5: Classes & Constructors
**File:** `lab5.cpp`
* **Topic:** Introduction to OOP, Constructors, Destructors, and Method Definitions.
* **Task:** Implement a `Date` class that manages dates (day, month, year). The program demonstrates the full lifecycle of an object, including:
    * **Parameterized Constructor** for initialization.
    * **Default Constructor** for empty objects.
    * **Copy Constructor** for cloning objects.
    * **Destructor** for cleanup.
    * Logic to check for **Leap Years** and modify date values.

### Lab 6: Inheritance & Object Logic
**File:** `lab6.cpp`
* **Topic:** Inheritance, Arrays of Objects, and Date Arithmetic.
* **Task:** Extend the `Date` class to create a `Friend` class.
* **Solution:**
    * The `Friend` class inherits from `Date` and adds a name property.
    * Implemented a logic algorithm `closestBirthday()` that calculates days remaining until a birthday, handling year wraparounds.
    * The `main` function processes an array of `Friend` objects to find who has the closest upcoming birthday relative to today.

### Lab 7: Polymorphism & Virtual Functions
**File:** `lab7.cpp`
* **Topic:** Polymorphism, Virtual Methods, and Overriding.
* **Task:** Create an automobile hierarchy to demonstrate how derived classes modify base class behavior.
* **Solution:**
    * **Base Class:** `Automobile` with virtual methods `cost()` and `upgrade()`.
    * **Derived Class:** `OtherMobile` overrides these methods to provide different pricing logic (`maxSpeed * 250` vs `100`) and upgrade mechanics.
    * Demonstrates how different objects respond uniquely to the same method calls (Polymorphism).
