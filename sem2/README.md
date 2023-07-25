# Sem 2

## C++ Record
1. [Program to perform all arithematic operations using default arguments.](./lab/defaultArg.cpp)
2. [Program to find the volume of cube, cylinder and rectangular box using function overloading within a class.](./lab/overloading.cpp)
3. [Program to create class student with 3 data members and member functions.](./lab/studentAgeDifferentitate.cpp)
4. [Program to create a class employee having data members employee id, name, designation and salary using the concept array of objects and print the salaryship of employee using nesting of member functions. ](./lab/employessNesting.cpp)
5. [Program to implement the concept of static data members and member functions. ](./lab/staticDataFunc.cpp)
6. [Program to implement friend function with two classes.](./lab/friendFunc.cpp)
7. [Program to perform time addition using object as function arguments and returning objects.](./lab/timeObjArg-RetArg.cpp)
8. [Program to implement constructor overloading for complex numbers.](./lab/consOverComplex.cpp)
9. [Program to implement the concept of copy constructor.](./lab/copyConstructor.cpp)
10. [Program to implement the concept of dynamic constructor.](./lab/dynamicConstructor.cpp)
11. [Program with class rectangle with data members length & breadth and member functions to calculate the area. The class has 2 constructors having one parameter(length = breadth) and two parameters.](./lab/rectangle.cpp)
12. [Program to overload unary minus operator with member function.](./lab/overloadUnaryMinusMemb.cpp)
13. [Program with class distance with data members km and m. C++ program to add 2 distances using the concept of binary operator overloading(+ operator).](./lab/distanceBinaryOverloading.cpp)
14. [Program to find the difference between 2 vector objects with the concept of operator overloading using friend functions.](./lab/vectorDifference.cpp)
15. [Program to perform addition of 2 matrix object by operator overloading using friend function.](./lab/matrixAddOverload.cpp)
16. [Program to implement the concept of single inheritance.](./lab/singleInheritancePublic.cpp)
17. [Program to implement the concept of multiple inheritance.](./lab/multipleInheritance.cpp)
18. [Program to implement the concept of multilevel inheritance.](./lab/multiLevelInheritance.cpp) 
19. [Program to implement the concept of hierarchical inheritance.](./lab/hierarchialInheritance.cpp)
20. [Program to implement the concept of hybrid inheritance.](./lab/hybridInheritance.cpp)
21. [Program to implement the concept of virtual base class.](./lab/virtualBaseClass.cpp)
22. [Program to implement constructors in derived class.](./lab/constructorDerivedClass.cpp)
23. [Program to implement the concept of 'this' pointer.](./lab/thisPointer.cpp)
24. [Program to implement the concept of virtual function.](./lab/virtualFunction.cpp)
25. [Program to implement the concept of run time polymorphism.](./lab/runTimePolymorphism.cpp)

## Previous Year Questions and Answers
[Consolidated previous year question papers](./prevQns/cppDbms.pdf)

### C++ Previous Year Questions with Answers
1. [Create a class Student with three data members name, age and address and member functions read(), display() and getAge(). Write a C++ program to read the data of n students and display the details of students whose age greater than the average age.](./prevQns/studentAverage.cpp)
2. Create a class Time with data members hour, minute and second and member functions readTime(), displayTime() and an overloaded operator '+'. Write a C++ program to find the sum of two Time objects. (use 24 hours format).


### DBMS Previous Year Questions with Answers

#### Question 1

TABLE 1: BOOK
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | --- 
BookId | Varchar(5) | Primary Key 
Book_Name | Varchar(20) | Not Null
Author_Name | Varchar(20) |
Price | Number(5) |

TABLE 2: PUBLISHER
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | --- 
Pub_Id | Varchar(5) | Primary Key 
Pub_Name | Varchar(20) | Not Null
BookId | Varchar(5) | Foreign Key

##### Write SQL queries for the following:

1. Create the above tables.
```sql
CREATE TABLE book(bookid VARCHAR(5) PRIMARY KEY, book_name VARCHAR(20) NOT NULL, author_name VARCHAR(20), price NUMERIC(5, 0));

CREATE TABLE publisher(pub_id VARCHAR(5) PRIMARY KEY, pub_name VARCHAR(20) NOT NULL, bookid VARCHAR(5) REFERENCES book(bookid));
```
2. Insert 5 records into each table.
```sql

```

#### Question 2

TABLE 1: COLLEGE
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
COLL_CODE | NUMBER(5) | PRIMARY KEY
COLL_NAME | VARCHAR(25) | NOT NULL
COLL_PLACE | VARCHAR(25) |
STARTING_DATE | DATE 
CONTACT NUMBER | VARCHAR(10)

TABLE 2: COURSE
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
COLL_CODE | NUMBER(5) | PRIMARY KEY
COLL_NAME | VARCHAR(25) | NOT NULL
DEPARTMENT | VARCHAR(25)
C_CODE | NUMBER(5) | FOREIGN KEY

##### Write SQL queries for the following:

1. Create the above tables.
```sql

```
2. Insert 5 records into each table.
```sql

```

