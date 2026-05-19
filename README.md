# Library Management System

## Overview

The Library Management System is a console-based application developed using C++ that helps manage library operations such as storing book records, searching books, updating information, deleting records, issuing books, and returning books.

The project was developed progressively in multiple versions to understand how real software systems evolve feature by feature using Object-Oriented Programming, File Handling, and Version Control concepts.

---

# Project Development Journey

This project was built incrementally through different stages.

## Version 1 — Basic Library System

Implemented:
- Add Book
- Display Books
- Menu Driven Program
- File Storage using `fstream`

Concepts Learned:
- Classes and Objects
- Functions
- Basic File Handling
- Console-Based Menus

---

## Version 2 — Search Functionality

Implemented:
- Search Book by ID

Concepts Learned:
- Searching Logic
- Record Traversal
- Conditional Statements
- String Handling

---

## Version 3 — Delete Functionality

Implemented:
- Delete Book Records

Concepts Learned:
- Temporary File Handling
- Record Filtering
- File Rewriting
- CRUD Operations

---

## Version 4 — Update Functionality

Implemented:
- Update Existing Book Details

Concepts Learned:
- Data Modification
- State Preservation
- Record Replacement

---

## Version 5 — Issue & Return System

Implemented:
- Issue Books
- Return Books
- Availability Status Tracking

Concepts Learned:
- State Management
- Real-World Workflow Logic
- Conditional Processing

---

# Features

- Add New Books
- Display Book Records
- Search Books by ID
- Update Book Details
- Delete Book Records
- Issue Books
- Return Books
- Availability Tracking
- Persistent File Storage

---

# Technologies Used

- C++
- File Handling
- Object-Oriented Programming
- Git & GitHub

---

# Core Concepts Implemented

## C++ Concepts
- Classes and Objects
- Functions
- Encapsulation
- Loops
- Conditional Statements
- String Manipulation

## File Handling Concepts
- `ifstream`
- `ofstream`
- File Append Mode
- Temporary Files
- Record Modification

## Software Development Concepts
- CRUD Operations
- Menu Driven Systems
- State Management
- Version Control
- Incremental Development

---

# Project Structure

```plaintext
Library-Management-System/
│
├── main.cpp
├── books.txt
├── README.md
├── .gitignore
└── Screenshots/
```

---

# How to Run

## Compile

```bash
g++ main.cpp -o library
```

## Run

### Windows PowerShell

```powershell
.\library.exe
```

### Linux / Mac

```bash
./library
```

---

# Sample Book Record Format

```plaintext
101|Harry Potter|J.K Rowling|Available
```

---

# Example Functionalities

## Add Book
Stores new book records into `books.txt`.

## Search Book
Finds books using Book ID.

## Delete Book
Removes a selected record permanently.

## Update Book
Edits existing book information.

## Issue Book
Changes status from:
```plaintext
Available → Issued
```

## Return Book
Changes status from:
```plaintext
Issued → Available
```

---

# Future Improvements

The following features can be added in future versions:

- Login Authentication
- Admin & User Roles
- Fine Calculation
- Due Date Tracking
- Binary File Handling
- Database Integration
- GUI Interface
- Web-Based Version

---

# Learning Outcomes

Through this project, the following practical skills were developed:

- Building real-world console applications
- Managing structured records using files
- Implementing CRUD systems
- Handling persistent data
- Using Git and GitHub for version control
- Developing projects incrementally through commits

---

# Version Control

The complete development history of this project is maintained using Git and GitHub commits, showcasing the gradual evolution of the application from a basic CRUD system to a more complete management system.

---

# Author

## Nihal Agarwal

BTech CSBS Student  
GITAM University Hyderabad

---

# Repository Purpose

This repository was created to:
- Practice C++ Programming
- Strengthen OOP Concepts
- Learn File Handling
- Build Real-World Logic
- Develop GitHub Project Experience
- Create Resume-Ready Projects