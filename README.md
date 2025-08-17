# EXPERIMENT - 11
# Name:- Palak Soni
# Class:- ENTC A3
# PRN- 24070123069
# Title:-OOPS In C++ (Classes and objects)

---

# Classes, Objects, Methods, Public and Private in C++

##  Introduction
In C++, **classes and objects** are the foundation of Object-Oriented Programming (OOP).  
They allow us to combine **data** (variables) and **functions** (methods) into a single unit.  

- A **class** is a blueprint or template.  
- An **object** is a real-world entity created from a class.  
- **Methods** are functions that operate on the data of the object.  
- **Access specifiers** (public, private) control **how the members of a class can be accessed**.  

This design ensures **encapsulation, data security, and modularity**.

---

##  Class
- A **class** is defined using the keyword `class`.  
- By default, all members of a class are **private**, unless explicitly declared otherwise.  
- A class typically contains:  
  - **Data Members** (variables, usually private).  
  - **Member Functions** (methods, usually public).  

 Think of a **class** as a **blueprint of a house**. It describes the design, but does not actually build the house.

---

##  Object
- An **object** is an **instance of a class**.  
- When an object is created, memory is allocated for its data members.  
- Multiple objects of the same class can exist independently.  

 Continuing the house analogy: a **class is the blueprint**, but the **house you live in** is the object.

---

##  Methods (Member Functions)
- **Member functions** define the **behavior of objects**.  
- They are written inside the class and can directly access data members.  
- Methods can be:
  - **Public**: accessible to the outside world.  
  - **Private**: used only internally within the class.  
- Methods may be defined **inside** or **outside** the class using **scope resolution (::)**.  

---

## Access Specifiers in Detail

### 1. Public
- Declared using the keyword `public:`.  
- Accessible **inside and outside** the class.  
- Typically used for:
  - **Interfaces** (methods to interact with the object).  
  - **Special variables** that are safe to be accessed directly.  

### 2. Private
- Declared using the keyword `private:` (default in C++).  
- Accessible **only within the class**.  
- Protects data from being accidentally or maliciously changed.  
- Typically used for:
  - **Data Members** like `balance`, `password`, `rollNumber`.  

---

##  Comparison: Public vs Private

| Feature              | Public Members                          | Private Members                         |
|----------------------|------------------------------------------|------------------------------------------|
| Accessibility        | Accessible from anywhere                 | Accessible only within the class         |
| Typical Usage        | Methods, safe variables                  | Sensitive data, internal calculations    |
| Encapsulation Role   | Interface between class and outside world | Hides details and ensures data security  |

---

## ✅ Advantages of Using Public and Private
- Provides **Encapsulation**: keeps sensitive data hidden.  
- Ensures **Security**: prevents unauthorized modification.  
- Promotes **Data Integrity**: public methods validate before updating values.  
- Improves **Code Maintenance**: clear separation of internal (private) and external (public) parts of the class.  

---

## Conclusion
- **Classes** are blueprints, and **objects** are real instances.  
- **Private members** ensure that sensitive data is hidden from direct access.  
- **Public methods** act as the interface through which outside code interacts with the object.  
- Together, they implement **Encapsulation**, one of the key pillars of OOP.  


