# C++ Programs – Classes and Objects

## Aim

To understand and implement the concept of **classes, objects, data members, member functions, encapsulation, abstraction, and user interaction** in C++ through simple programs that calculate the volume of a cube.

---

## Software Used

* **Mingw Compiler**
* **Visual Studio Code**
* **Online C++ Compiler**

---

## Programs Overview

### 1. `classes.cpp`

**Theory:**
This program demonstrates the **basic definition of a class** in C++. A class is a user-defined data type that binds variables and functions together. Here, the cube dimensions (`height`, `width`, `length`) are declared as **public data members** and initialized directly within the class.
The concept of **object instantiation** is shown in `main()`, where an object `c1` is created. The object is used to access class members directly to compute the volume.

**Algorithm:**

1. Define a class `cube` with public members: `height`, `width`, and `length`.
2. Assign default values to them inside the class.
3. In `main()`, create an object of the class.
4. Calculate the cube’s volume using object members (`vol = height × width × length`).
5. Display the result.

---

### 2. `class_p2.cpp`

**Theory:**
This program introduces **member functions** within a class. Instead of calculating the volume in `main()`, the logic is encapsulated in a member function `volume()`.
This highlights the concept of **data abstraction**, as the details of calculation are hidden inside the class, and the user only needs to call the function to get the result.

**Algorithm:**

1. Define a class `cube` with public members: `height`, `width`, `length`.
2. Add a member function `volume()` to calculate and return the volume.
3. In `main()`, create an object of `cube`.
4. Call the `volume()` function using the object.
5. Print the returned result.

---

### 3. `classes_p3.cpp`

**Theory:**
This program emphasizes **encapsulation and data hiding**. The cube dimensions are declared as **private members**, meaning they cannot be accessed directly from outside the class. Instead, the public function `volume()` is provided to calculate and return the result.
This approach ensures better **data security** and follows one of the core principles of OOP, where internal details are hidden and only essential features are exposed.

**Algorithm:**

1. Define a class `cube` with `private` members: `height`, `width`, `length`.
2. Add a `public` member function `volume()` to calculate and return the volume.
3. In `main()`, create an object of the class.
4. Call the `volume()` function to get the cube’s volume.
5. Print the result.

---

### 4. `class_p4.cpp`

**Theory:**
This program demonstrates **interaction with objects using user input**. Instead of pre-defining dimensions, the program asks the user to input values for height, width, and length.
It uses three member functions:

* `input()` → to take input from the user,
* `volume()` → to calculate volume,
* `disp()` → to display the result.

This program reflects a real-world use of OOP, where classes act as **blueprints**, and objects represent actual entities whose data is provided at runtime. It also shows **modularity** by separating input, processing, and output into different functions.

**Algorithm:**

1. Define a class `cube` with public members: `height`, `width`, `length`.
2. Create a function `input()` to take values from the user.
3. Create a function `volume()` to calculate volume.
4. Create a function `disp()` to print the volume.
5. In `main()`, create an object of `cube`.
6. Call `input()` and then `disp()` to show the result.

---

## Conclusion

* These programs gradually introduce **Object-Oriented Programming (OOP) concepts** in C++.
* `classes.cpp` → Shows **basic class and object creation** with direct access to data members.
* `class_p2.cpp` → Demonstrates **member functions** and the idea of **abstraction**.
* `classes_p3.cpp` → Implements **encapsulation** and **data hiding** by making variables private.
* `class_p4.cpp` → Adds **user interaction** and demonstrates modular design with multiple member functions.

Overall, these examples provide a step-by-step progression from **simple classes** to **encapsulated and interactive object-oriented programs**, laying the foundation for more advanced OOP concepts such as inheritance and polymorphism.

---

