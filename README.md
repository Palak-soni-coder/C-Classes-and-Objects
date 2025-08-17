# Classes, Objects, Methods, Public and Private in C++

##  Introduction
In C++, **classes and objects** are the most important concepts of Object-Oriented Programming.  
- A **class** is a user-defined data type that contains **data members** (variables) and **member functions** (methods).  
- An **object** is an instance of a class that actually stores data and can call methods.  

Together, they allow programmers to model **real-world entities** in programs.

---

##  Class
- A **class** is a blueprint for creating objects.  
- It contains:
  - **Private Members** (default): hidden from outside the class.  
  - **Public Members**: accessible from anywhere in the program.  

---

##  Object
- An **object** is created from a class.  
- Objects represent real-world entities (like Car, Student, Bank Account).  
- Each object has:
  - Its own **set of data members**.  
  - Ability to **call the methods** defined in the class.  

---

##  Methods (Member Functions)
- Functions defined inside a class are called **methods**.  
- They define the behavior of the object.  
- Can be:
  - Defined **inside** the class (inline).  
  - Defined **outside** the class (using scope resolution `::`).  

---

##  Public vs Private Members

### Public
- Can be accessed by anyone (inside or outside the class).  
- Typically include **methods** that allow interaction with objects.  

### Private
- Accessible only within the class.  
- Generally used for **data members** to ensure **encapsulation and security**.  

---

