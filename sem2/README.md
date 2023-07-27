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

3. Create a class Rectangle with data members length and breadth and member function to calculate the Area (length*breadth). The class has two constructors (1) having one parameter (assumme same values for both length and breadth) and (2) having two parameters. Write C++ program to create objects of the Rectangle class having one and two parameters and print their area.

4. Design a base class Person with data members name, address and phone_number. Derive a class Employee with data member emp_number from Person. Derive a class Manager with data members designation department_name and basic_salary from Employee. Write a CPP program to accept all details of 'n' managers.

5. Write a C++ program to design a class Shape with data member volume and three overloaded member functions to find the volume of cube, cuboid and cone. Use another member function display to print the volume of three shapes. `volume of cube=side^3, volume of cuboid=length*width*height, volume of cone = 3.14*radius*radius*height/3`.

6. Create a class Vector contains data members a, b, c as coefficients of i,j,k and member functions to read and display vector objects. Write a C++ program to find the difference between two vector objects using the concept operator overloading with friend function. <br> Eg. (ai+ b1j t eik)- (ai + bj + ek) = (a -a)i + (bi-b:)j (C c:)k.

7. Create classes       <br><ins>**Student**</ins> (Data members: stud_id, stud_name, stud_age  <br>Member functions: readstud(), displaystud())   <br><ins>**Course</ins>** (Data members : course_name, department  <br>Member functions : readcourse(), displaycourse() ) and  <br><ins>**Admission</ins>** (Data members: adm_no, adm_date    <br>Member functions: readadm(), displayadm() ). <br> *Write a CPP program to inherit student and course classes to admission.*

8. Write a CPP program to perform addition of two Matrix objects by operator overloading using friend function.
   
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
3. Display the details of book published by "PHI"
```sql

```
4. Delete all books having price greater than 5000.
```sql

```
5. List the details of books and its publishers in ascending order of their price.
```sql

``````

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
3. Display the details of all colleges offering BCA course in the ascending order of college name.
```sql

```
4. Delete records of colleges started on or before 01/01/1990.
```sql

```
5. Display the Count of colleges in the same place
```sql

```

#### Question 3

TABLE 1: DEPARTMENT
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
DEPT_ID | VARCHAR(10) | PRIMARY KEY
DEPT_NAME | VARCAHR(15) | NOT NULL

TABLE 2: TEACHER
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
TEACH_ID | VARCAHR(10) | PRIMARY KEY
NAME | VARCHAR(15) | NOT NULL
DEPT_ID |VARCHAR(10) | FOREIGN KEY
SUBJECT | VARCAHR(15) |

##### Write SQL queries for the following:

1. Create the above tables.
```sql

```
2. Insert 5 records into each table.
```sql

```
3. Update subject of the teacher to 'COMPUTER NETWORK' whose TEACH_ID is "TI05.
```sql

```
4. Display the number of teachers in each department.
```sql

```
5. Display the details of all teachers in the Department of Computer Applictions.
```sql

```

#### Question 4

TABLE 1: MANAGER
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
MGR_ID | VARCAHR(5) | PRIMARY KEY
NAME | VARCHAR(25) | NOT NULL
DEPT_ID | NUMBER(5) | FOREIGN KEY
CONTACT_NO | NUMBER(10) |
SALARY | NUMBER(10) |

TABLE 2: DEPARTMENT
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
DEPT_ID | NUMER(5) | PRIMARY KEY
DEPT_NAME | VARACHAR(10) | NOT NULL


##### Write SQL queries for the following:

1. Create the above tables.
```sql

```
2. Insert 5 records into each table.
```sql

```
3. Allow an increment of Rs. 2500 for managers whose salary is less than 50000
```sql

```
4. Display the details of managers who is getting maximum salary.
```sql

```
5. Display the details of manager who are working in sales department.
```sql

``` 

#### Question 5

TABLE 1: SAILOR
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
SAIL_ID | NUMBER | PRIMARY KEY 
SAILOR_NAME | VARACHAR(15) | NOT NULL
AGE | NUMBER |

TABLE 2: RESERVE_BOAT
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
BOAT_ID | VARCHAR(10) | PRIMARY KEY
BOAT_NAME | VARCHAR(15) | NOT NULL
BOAT_COLOR | VARACHAR(10) | RED,BLUE,GREEN
SAIL_ID | NUMBER | FOREIGN KEY


##### Write SQL queries for the following:

1. Create the above tables.
```sql

```
2. Insert 5 records into each table.
```sql

```
3. Display all the endiing with "s".
```sq1

```
4. Display the details who have reserved a 'red' and 'green' boat.
```sq1

```
5. Create a view contains list of all sailors whose age in between 25 and 45.
```sq1

```


#### Question 6

TABLE 1: PRODUCT
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
PRODUCT_NUM | VARCHAR(6) | PRIMARY KEY
PRODUCT_NAME | VARCHAR(15) | NOT NULL
QTY_IN_HAND | NUMBER(8) | 
UNIT_PRICE | NUMBER(8,2) | NOT NULL,CANNOT BE ZERO

TABLE 2: SALES
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
BILL_NUM | VARCHAR(6) | PRIMARY KEY
QUANTITY | NUMBER(8) | 
PRODUCT_NUM | VARCHAR(6) |FOREIGN KEY


##### Write SQL queries for the following:

1. Create the above tables.
```sql

```
2. Insert 5 records into each table.
```sql

```
3. List the Product num, name and Quantity for the Bill_ num K10T.
```sql

```
4. Increase the product price of all products by 10%.
```sql

```
5. Display the details of products having highest unit price.
```sql

```

#### Question 7

TABLE 1: CUSTOMER
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
CUST_ID | VARCHAR(10) | PRIMARY KEY
NAME | VARCHAR(15) | NOT NULL
LOCATION | VARCHAR(15) |
AGE | NUMBER |

TABLE 2: ORDERS
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
ORDER_ID | VARACHAR(10) | PRIMARY KEY
PRODUCT | VARACHAR(15) | NOT NULL
CUST_ID | VARCHAR(10) | FOREIGN KEY
ORDER_DATE | DATE 
ORDER_DATE | NUMBER


##### Write SQL queries for the following:

1. Create the above tables.
```sql

```
2. Insert 5 records into each table.
```sql

```
3. Change the location of customer to Kochi whose cust_id is CTI00
```sql

```
5. Display the details of younger customer in the group.
```sql

``` 
7. Display name, location, order_amt and order_dale of custoner who placed the highest order.
```sql

```

#### Question 8

TABLE 1: EMPLOYEE
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
EMP_NUM | NUMBER(5) | PRIMARY KEY
EMP_NAME | VARCHAR(25) | NOT NULL
DESIGNATION | VARCHAR(20) |
SALARY | NUMBER(5)

TABLE 2: PROJECT
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
PROJ_ID | VARCHAR(5) | PRIMARY KEY
PROJ_NAME | VARCHAR(25) | 
EMP_NUM | NUMBER(5) | FOREIGN KEY


##### Write SQL queries for the following:

1. Create the above tables.
```sql

```
2. Insert 5 records into each table.
```sql

```
3. Display the details of employees in alphabetical order of EMP_NAME whose name contains "kumar".
```sql

``` 
4. List EMP_NUM. EMP_NAME and DESIGNATION of employees who have not assigned any projects.
```sql

```
5. Display the details of project in which MANAGER with highest pay Works.
```sql

```




 


