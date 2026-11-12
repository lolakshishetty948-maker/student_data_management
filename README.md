Student Record Management System in C

Project Overview

The **Student Record Management System** is a menu-driven application developed using the C programming language. It is designed to manage student records efficiently using a **Singly Linked List** and Dynamic Memory Allocation.

The application allows users to add, delete, modify, search, display, sort, reverse, and save student records. It also supports file handling to store student information permanently and retrieve it when the application is restarted.
 Features

- **Add Student:** Add new student records with automatically generated unique roll numbers.
- **Delete Student:** Delete records using roll number or student name.
- **Display Records:** View all student details in a tabular format.
- **Modify Student:** Update student name and percentage using roll number, name, or percentage.
- **Sort Records:** Sort students alphabetically by name or by percentage in descending order.
- **Save Records:** Store student information in `student.dat`.
- **Load Records:** Automatically retrieve previously saved records when the application starts.
- **Delete All Records:** Delete all student nodes and release allocated memory.
- **Reverse List:** Reverse the linked list by modifying node pointers.
- **Exit Options:** Save and exit or exit without saving.

 Technologies Used

- Programming Language: C
- Data Structure: Singly Linked List
- Dynamic Memory Allocation: `malloc()` and `free()`
- File Handling: `fopen()`, `fputc()`, `fclose()`
- Compiler: GCC
- Operating System: Linux / Ubuntu

 Project Structure


Student-Record-Management-System/
│
├── student.h
├── main.c
├── add.c
├── delete.c
├── show.c
├── modify.c
├── sort.c
├── reverse.c
├── save.c
├── student.dat
└── README.md


 Compilation

Compile all source files using GCC:

```bash
gcc main.c add.c delete.c show.c modify.c sort.c reverse.c save.c -o student
```

## Execution

Run the executable:

```bash
./student
```

 Main Menu

******** STUDENT RECORD MENU ********

a/A : Add new record
d/D : Delete a record
s/S : Show the list
m/M : Modify a record
v/V : Save records
e/E : Exit
t/T : Sort the list
l/L : Delete all the records
r/R : Reverse the list

Enter your choice:

Concepts Implemented

1. Structures and Pointers
2. Singly Linked Lists
3. Dynamic Memory Allocation
4. Insertion and Deletion Operations
5. Searching and Sorting
6. Linked List Reversal
7. File Handling
8. Modular Programming
9. Input Validation
10. Memory Management

Learning Outcomes

- Gained practical experience in implementing linked lists using C.
- Understood dynamic memory allocation and de allocation.
- Improved problem-solving skills through searching, sorting, insertion, and deletion operations.
- Learned file handling techniques for permanent data storage.
- Developed a modular menu-driven application using multiple C source files.

