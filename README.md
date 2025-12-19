---

# 👨‍💼 Employee Management System (C++ | OOP)

This project is a **menu-driven Employee Management System** implemented in **C++** using **Object-Oriented Programming (OOP)** concepts such as **inheritance, polymorphism, abstraction, and virtual functions**.

The program allows the user to create either a **Manager** or a **Worker**, calculate their salary dynamically, and display employee details.

---

## 📌 Features

* Menu-driven program
* Supports two types of employees:

  * Manager
  * Worker
* Demonstrates runtime polymorphism
* Uses abstract base class
* Dynamic memory allocation
* Proper memory management

---

## 🧠 OOP Concepts Used

* Class and Object
* Inheritance
* Virtual Functions
* Pure Virtual Function (Abstraction)
* Runtime Polymorphism
* Constructor and Destructor
* Dynamic Binding

---

## 🏗️ Class Description

### 🔹 Employee (Base Class)

* Abstract class
* Contains common employee details
* Declares a pure virtual function for salary calculation

### 🔹 Manager (Derived Class)

* Inherits from `Employee`
* Salary is fixed

### 🔹 Worker (Derived Class)

* Inherits from `Employee`
* Salary depends on working hours

---

## 📐 UML Class Diagram

```
                ┌─────────────────────────┐
                │        Employee         │
                ├─────────────────────────┤
                │ # name : string         │
                │ # id : int              │
                │ # salary : double       │
                ├─────────────────────────┤
                │ + input() : void        │
                │ + display() : void      │
                │ + calculateSalary()=0   │
                │ + ~Employee()           │
                └───────────▲─────────────┘
                            │
            ┌───────────────┴───────────────┐
            │                               │
┌─────────────────────────┐   ┌─────────────────────────┐
│         Manager         │   │          Worker          │
├─────────────────────────┤   ├─────────────────────────┤
│                         │   │ - hours : int            │
├─────────────────────────┤   ├─────────────────────────┤
│ + calculateSalary()     │   │ + input()                │
│                         │   │ + calculateSalary()      │
└─────────────────────────┘   └─────────────────────────┘
```

---

## ▶️ Program Flow

1. Display menu (Manager / Worker / Exit)
2. Create object dynamically using base class pointer
3. Take employee input
4. Calculate salary using overridden function
5. Display employee details
6. Delete object to free memory
7. Repeat until exit

---

## 🧾 Sample Menu

```
1. Manager
2. Worker
3. Exit
Choice:
```

---

## ▶️ How to Compile and Run

### Compile

```bash
g++ employee.cpp -o employee
```

### Run

```bash
./employee
```

---

## 📁 Project Structure

```
Employee-Management-System/
│
├── employee.cpp
└── README.md
```

---

## 🎯 Learning Outcomes

* Understanding **abstract base classes**
* Using **virtual functions and polymorphism**
* Implementing **inheritance correctly**
* Managing memory using `new` and `delete`
* Designing programs using **UML diagrams**

---

## ⚠️ Important Notes

* `virtual ~Employee()` ensures correct destructor call
* `Employee* e` enables runtime polymorphism
* `calculateSalary()` behaves differently for each derived class

---

## 🙌 Conclusion

This project demonstrates a **clear and practical use of Object-Oriented Programming in C++**.
It is suitable for:

* College practicals
* OOP exams
* GitHub portfolio
* Resume projects

---

⭐ If you found this project useful, consider giving it a star!

---
