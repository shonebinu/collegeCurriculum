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
1. [Create a class **Student** with three data members **name**, **age** and **address** and member functions **read()**, **display()** and **getAge()**. Write a C++ program to read the data of **n** students and display the details of students whose age greater than the average age.](./prevQns/studentAverage.cpp)

2. [Create a class **Time** with data members **hour**, **minute** and **second** and member functions **readTime()**, **displayTime()** and an **overloaded operator '+'**. Write a C++ program to find the sum of two Time objects. (use 24 hours format).](./prevQns/timeAddition.cpp)

3. [Create a class **Rectangle** with data members **length** and **breadth** and member function to calculate the **Area (length*breadth)**. The class has **two constructors** (1) having one parameter (assumme same values for both length and breadth) and (2) having two parameters. Write C++ program to create objects of the Rectangle class having one and two parameters and print their area.](./prevQns/area.cpp)

4. [Design a base class **Person** with data members **name**, **address** and **phone_number**. Derive a class **Employee** with data member **emp_number** from **Person**. Derive a class **Manager** with data members **designation**, **department_name** and **basic_salary** from **Employee**. Write a CPP program to accept all details of **'n' managers**.](./prevQns/multiLevel.cpp)

5. [Write a C++ program to design a class **Shape** with data member **volume** and **three overloaded member functions** to find the **volume of cube, cuboid and cone**. Use another member function **display** to print the volume of three shapes.](./prevQns/volume.cpp)
```
volume of cube = side^3 
volume of cone = 3.14*radius*radius*height/3
volume of cuboid = length*width*height
```

6. [Create a class **Vector** contains data members **a, b, c** as coefficients of **i, j, k** and member functions to **read** and **display** vector objects. Write a C++ program to find the difference between two vector objects using the concept **operator overloading with friend function**. Eg:](./prevQns/vector.cpp)
<code>(a<sub>1</sub>i + b<sub>1</sub>j + c<sub>1</sub>k) - (a<sub>2</sub>i + b<sub>2</sub>j + c<sub>2</sub>k) = (a<sub>1</sub> - a<sub>2</sub>)i + (b<sub>1</sub> - b<sub>2</sub>)j + (c<sub>1</sub> - c<sub>2</sub>)k</code>


7. Create classes       <br><br><ins>**Student**</ins> <br>Data members : *stud_id, stud_name, stud_age*  <br>Member functions: *readstud(), displaystud()*   <br><ins>**Course</ins>** <br>Data members : *course_name, department*  <br>Member functions : *readcourse(), displaycourse()* <br><ins>**Admission</ins>** <br>Data members : *adm_no, adm_date*    <br>Member functions: *readadm(), displayadm()*. <br><br> <ins>[Write a CPP program to inherit student and course classes to admission.](./prevQns/multiple.cpp)</ins>

8. [Write a CPP program to perform addition of two Matrix objects by operator overloading using friend function.](./lab/matrixAddOverload.cpp)
   
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
CREATE TABLE book(bookid VARCHAR(5) PRIMARY KEY, book_name VARCHAR(20) NOT NULL,
author_name VARCHAR(20), price NUMERIC(5, 0));

CREATE TABLE publisher(pub_id VARCHAR(5) PRIMARY KEY, pub_name VARCHAR(20) NOT NULL,
bookid VARCHAR(5) REFERENCES book(bookid));
```
2. Insert 5 records into each table.
```sql
INSERT INTO book (bookid, book_name, author_name, price)
VALUES
    ('B001', 'Book 1', 'Author 1', 2000),
    ('B002', 'Book 2', 'Author 2', 3500),
    ('B003', 'Book 3', 'Author 3', 5000),
    ('B004', 'Book 4', 'Author 4', 6000),
    ('B005', 'Book 5', 'Author 5', 4500);

INSERT INTO publisher (pub_id, pub_name, bookid)
VALUES
    ('P001', 'PHI', 'B001'),
    ('P002', 'Publisher 2', 'B002'),
    ('P003', 'Publisher 3', 'B003'),
    ('P004', 'Publisher 4', 'B004'),
    ('P005', 'Publisher 5', 'B005');
```
3. Display the details of book published by "PHI".
```sql
SELECT * FROM book WHERE bookid
IN (SELECT bookid FROM publisher WHERE pub_name = 'PHI');

-- or --

SELECT b.bookid, b.book_name, b.author_name, b.price FROM book AS b 
JOIN publisher AS p ON b.bookid = p.bookid 
WHERE p.pub_name = 'PHI';
```
4. Delete all books having price greater than 5000.
```sql
-- Delete records from the PUBLISHER table first
DELETE FROM publisher
WHERE bookid IN (SELECT bookid FROM book WHERE price > 5000);

-- Now, delete records from the BOOK table
DELETE FROM book
WHERE price > 5000;
```
5. List the details of books and its publishers in ascending order of their price.
```sql
SELECT b.bookid, b.book_name, b.author_name, b.price, p.pub_name 
FROM book AS b
JOIN publisher AS p ON b.bookid = p.bookid 
ORDER BY price ASC;
``````

#### Question 2

TABLE 1: COLLEGE
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
COLL_CODE | NUMBER(5) | PRIMARY KEY
COLL_NAME | VARCHAR(25) | NOT NULL
COLL_PLACE | VARCHAR(25) |
STARTING_DATE | DATE 
CONTACT_NUMBER | VARCHAR(10)

TABLE 2: COURSE
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
COURSE_CODE | NUMBER(5) | PRIMARY KEY
COURSE_NAME | VARCHAR(25) | NOT NULL
DEPARTMENT | VARCHAR(25)
C_CODE | NUMBER(5) | FOREIGN KEY

##### Write SQL queries for the following:

1. Create the above tables.
```sql
CREATE TABLE college(coll_code INT, coll_name VARCHAR(25) NOT NULL, 
coll_place VARCHAR(25), starting_date DATE, contact_number VARCHAR(10),
PRIMARY KEY(coll_code));

CREATE TABLE course(course_code INT PRIMARY KEY, 
course_name VARCHAR(25) NOT NULL,
department VARCHAR(25),
c_code INT,
FOREIGN KEY(c_code) REFERENCES college(coll_code));
```
2. Insert 5 records into each table.
```sql
INSERT INTO college (coll_code, coll_name, coll_place, starting_date, contact_number)
VALUES
    (1, 'ABC College', 'City A', '1990-05-15', '1234567890'),
    (2, 'XYZ College', 'City B', '2000-09-20', '9876543210'),
    (3, 'PQR College', 'City A', '1985-03-10', '5555555555'),
    (4, 'LMN College', 'City C', '2005-11-28', '1112223333'),
    (5, 'EFG College', 'City B', '1995-07-08', '4447778888');

INSERT INTO course (course_code, course_name, department, c_code)
VALUES
    (101, 'BCA', 'Computer Science', 1),
    (102, 'BBA', 'Management', 2),
    (103, 'BSc', 'Science', 3),
    (104, 'BCA', 'Computer Science', 4),
    (105, 'MCA', 'Computer Science', 4),
    (106, 'MBA', 'Management', 5);
```
3. Display the details of all colleges offering BCA course in the ascending order of college name.
```sql
SELECT * FROM college WHERE coll_code
IN 
(SELECT c_code FROM course WHERE course_name = 'BCA')
ORDER BY coll_name ASC;
```
4. Delete records of colleges started on or before 01/01/1990.
```sql
DELETE FROM course WHERE c_code IN
(SELECT coll_code FROM college WHERE starting_date <= '1990-01-01');

DELETE FROM college WHERE starting_date <= '1990-01-01';
```
5. Display the Count of colleges in the same place.
```sql
SELECT coll_place, COUNT(coll_name) 
AS college_count FROM college
GROUP BY coll_place;
```

#### Question 3

TABLE 1: DEPARTMENT
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
DEPT_ID | VARCHAR(10) | PRIMARY KEY
DEPT_NAME | VARCHAR(15) | NOT NULL

TABLE 2: TEACHER
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
TEACH_ID | VARCHAR(10) | PRIMARY KEY
NAME | VARCHAR(15) | NOT NULL
DEPT_ID |VARCHAR(10) | FOREIGN KEY
SUBJECT | VARCHAR(15) |

##### Write SQL queries for the following:

1. Create the above tables.
```sql
CREATE TABLE department (
    dept_id VARCHAR(10) PRIMARY KEY,
    dept_name VARCHAR(15) NOT NULL
);

CREATE TABLE teacher (
    teach_id VARCHAR(10),
    name VARCHAR(15) NOT NULL,
    dept_id VARCHAR(10),
    subject VARCHAR(15),
    FOREIGN KEY (dept_id) REFERENCES department(dept_id),
    PRIMARY KEY (teach_id)
);
```
2. Insert 5 records into each table.
```sql
INSERT INTO department (dept_id, dept_name)
VALUES
    ('D001', 'Computer Application'),
    ('D002', 'Mathematics'),
    ('D003', 'Physics'),
    ('D004', 'English'),
    ('D005', 'History');

INSERT INTO teacher (teach_id, name, dept_id, subject)
VALUES
    ('TI01', 'John Smith', 'D001', 'Database Management'),
    ('TI02', 'Jane Doe', 'D002', 'Calculus'),
    ('TI03', 'Michael Johnson', 'D001', 'Software Engineering'),
    ('TI04', 'Emily Williams', 'D003', 'Physics I'),
    ('TI05', 'Robert Brown', 'D001', 'Networking');
```
3. Update subject of the teacher to 'COMPUTER NETWORK' whose TEACH_ID is "TI05".
```sql
UPDATE teacher SET subject='Computer Network'
WHERE teach_id='TI05';
```
4. Display the number of teachers in each department.
```sql
SELECT dept_name, COUNT(name) AS teacher_count FROM department JOIN 
teacher ON department.dept_id = teacher.dept_id
GROUP BY dept_name;
```
5. Display the details of all teachers in the Department of Computer Application.
```sql
SELECT * FROM teacher WHERE dept_id 
IN
(SELECT dept_id FROM department WHERE dept_name = 'Computer Application');
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
CREATE TABLE department(dept_id INT PRIMARY KEY,
dept_name VARCHAR(10) NOT NULL);

CREATE TABLE manager(mgr_id VARCHAR(5) PRIMARY KEY,
name VARCHAR(25) NOT NULL, 
dept_id INT,
contact_no INT,
salary INT,
FOREIGN KEY(dept_id) REFERENCES department(dept_id));
```
2. Insert 5 records into each table.
```sql
INSERT INTO department (dept_id, dept_name)
VALUES
    (1, 'Sales'),
    (2, 'Marketing'),
    (3, 'Finance'),
    (4, 'HR'),
    (5, 'Operations');

INSERT INTO manager (mgr_id, name, dept_id, contact_no, salary)
VALUES
    ('M001', 'John Smith', 1, 1234567890, 55000),
    ('M002', 'Jane Doe', 2, 9876543210, 60000),
    ('M003', 'Michael Johnson', 1, 5555555555, 48000),
    ('M004', 'Emily Williams', 3, 1112223333, 72000),
    ('M005', 'Robert Brown', 1, 4447778888, 49000);
```
3. Allow an increment of Rs. 2500 for managers whose salary is less than 50000
```sql
UPDATE manager SET salary = salary + 2500 
WHERE salary < 50000;
```
4. Display the details of managers who is getting maximum salary.
```sql
SELECT * FROM manager WHERE salary = 
(SELECT MAX(salary) FROM manager);
```
5. Display the details of manager who are working in sales department.
```sql
SELECT * FROM manager WHERE dept_id IN
(SELECT dept_id FROM department WHERE dept_name = 'Sales');
``` 

#### Question 5

TABLE 1: SAILOR
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
SAIL_ID | NUMBER | PRIMARY KEY 
SAILOR_NAME | VARCHAR(15) | NOT NULL
AGE | NUMBER |

TABLE 2: RESERVE_BOAT
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
BOAT_ID | VARCHAR(10) | PRIMARY KEY
BOAT_NAME | VARCHAR(15) | NOT NULL
BOAT_COLOR | VARCHAR(10) | RED, BLUE, GREEN
SAIL_ID | NUMBER | FOREIGN KEY


##### Write SQL queries for the following:

1. Create the above tables.
```sql
CREATE TABLE sailor (
    sail_id INT PRIMARY KEY,
    sailor_name VARCHAR(15) NOT NULL,
    age INT
);                
                    
CREATE TABLE reserve_boat (
    boat_id VARCHAR(10) PRIMARY KEY,
    boat_name VARCHAR(15) NOT NULL,
    boat_color VARCHAR(10) CHECK (boat_color IN ('red', 'blue', 'green')),
    sail_id INT,
    FOREIGN KEY (sail_id) REFERENCES sailor(sail_id)
);
```
2. Insert 5 records into each table.
```sql
INSERT INTO sailor (sail_id, sailor_name, age)
VALUES
    (1, 'John', 30),
    (2, 'Jane', 28),
    (3, 'Michael', 35),
    (4, 'Emily', 22),
    (5, 'Robert', 40);
   
INSERT INTO reserve_boat (boat_id, boat_name, boat_color, sail_id)
VALUES
    ('B001', 'Boat 1', 'red', 1),
    ('B002', 'Boat 2', 'blue', 2),
    ('B003', 'Boat 3', 'green', 3),
    ('B004', 'Boat 4', 'red', 4),
    ('B005', 'Boat s', 'green', 5);
```
3. Display all the boat names ending with "s".
```sql
SELECT * FROM reserve_boat 
WHERE boat_name LIKE '%s';
```
4. Display the details of sailors who have reserved a 'red' and 'green' boat.
```sql
SELECT * FROM sailor WHERE sail_id IN
(SELECT sail_id FROM reserve_boat 
WHERE boat_color IN ('red', 'green'));
```
5. Create a view contains list of all sailors whose age in between 25 and 45.
```sql
CREATE VIEW sailors_age_view AS
SELECT * FROM sailor 
WHERE age BETWEEN 25 AND 45;
```


#### Question 6

TABLE 1: PRODUCT
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
PRODUCT_NUM | VARCHAR(6) | PRIMARY KEY
PRODUCT_NAME | VARCHAR(15) | NOT NULL
QTY_IN_HAND | NUMBER(8) | 
UNIT_PRICE | NUMBER(8, 2) | NOT NULL, CANNOT BE ZERO

TABLE 2: SALES
COLUMN NAME | DATA TYPE | CONSTRAINTS
--- | --- | ---
BILL_NUM | VARCHAR(6) | PRIMARY KEY
QUANTITY | NUMBER(8) | 
PRODUCT_NUM | VARCHAR(6) |FOREIGN KEY


##### Write SQL queries for the following:

1. Create the above tables.
```sql
CREATE TABLE product(product_num VARCHAR(6) PRIMARY KEY,
  product_name VARCHAR(15) NOT NULL,
  qty_in_hand INT,
  unit_price NUMERIC(8, 2) NOT NULL,
  CHECK(unit_price != 0));

CREATE TABLE sales(bill_num VARCHAR(6) PRIMARY KEY,
  quantity INT,
  product_num VARCHAR(6),
  FOREIGN KEY(product_num) REFERENCES product(product_num));
```
2. Insert 5 records into each table.
```sql
INSERT INTO product (product_num, product_name, qty_in_hand, unit_price)
VALUES
    ('P001', 'Product 1', 100, 50.00),
    ('P002', 'Product 2', 75, 30.00),
    ('P003', 'Product 3', 200, 20.00),
    ('P004', 'Product 4', 50, 100.00),
    ('P005', 'Product 5', 300, 10.00);


INSERT INTO sales (bill_num, quantity, product_num)
VALUES
    ('K101', 5, 'P001'),
    ('K102', 3, 'P002'),
    ('K103', 10, 'P003'),
    ('K104', 2, 'P004'),
    ('K105', 8, 'P005');
```
3. List the Product_num, name and Quantity for the Bill_num "K101".
```sql
SELECT p.product_num, p.product_name, s.quantity FROM product AS p
JOIN sales AS s ON p.product_num = s.product_num 
WHERE s.bill_num = 'K101';
```
4. Increase the product price of all products by 10%.
```sql
UPDATE product SET unit_price = unit_price + (unit_price / 10);
````
5. Display the details of product having highest unit price.
```sql
SELECT * FROM product WHERE
unit_price = (SELECT MAX(unit_price)
FROM product);
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
ORDER_ID | VARCHAR(10) | PRIMARY KEY
PRODUCT | VARCHAR(15) | NOT NULL
CUST_ID | VARCHAR(10) | FOREIGN KEY
ORDER_DATE | DATE 
ORDER_AMT | NUMBER


##### Write SQL queries for the following:

1. Create the above tables.
```sql
CREATE TABLE customer(cust_id VARCHAR(10) PRIMARY KEY,
name VARCHAR(15) NOT NULL,
location VARCHAR(15),
age INT);

CREATE TABLE orders(order_id VARCHAR(10) PRIMARY KEY,
product VARCHAR(15) NOT NULL,
cust_id VARCHAR(10),
order_date DATE,
order_amt INT,
FOREIGN KEY(cust_id) REFERENCES customer(cust_id));
```
2. Insert 5 records into each table.
```sql
INSERT INTO customer (cust_id, name, location, age)
VALUES
    ('C1100', 'John Doe', 'New York', 30),
    ('C1200', 'Jane Smith', 'Los Angeles', 25),
    ('C1300', 'Michael Johnson', 'Chicago', 22),
    ('C1400', 'Emily Williams', 'Miami', 28),
    ('C1500', 'Robert Brown', 'San Francisco', 35);

INSERT INTO orders (order_id, product, cust_id, order_date, order_amt)
VALUES
    ('O101', 'Product 1', 'C1100', '2023-08-01', 1000),
    ('O102', 'Product 2', 'C1200', '2023-08-02', 750),
    ('O103', 'Product 1', 'C1300', '2023-08-03', 1200),
    ('O104', 'Product 3', 'C1400', '2023-08-04', 500),
    ('O105', 'Product 2', 'C1500', '2023-08-05', 1800),
    ('O106', 'Product 1', 'C1100', '2023-08-06', 800),
    ('O107', 'Product 3', 'C1300', '2023-08-07', 1500),
    ('O108', 'Product 2', 'C1200', '2023-08-08', 900),
    ('O109', 'Product 1', 'C1500', '2023-08-09', 1600),
    ('O110', 'Product 2', 'C1400', '2023-08-10', 700);
```
3. Change the location of customer to Kochi whose cust_id is "C1100".
```sql
UPDATE customer SET location='Kochi' WHERE cust_id='C1100'; 
```
5. Display the details of younger customer in the group.
```sql
SELECT * FROM customer
ORDER BY age ASC
LIMIT 1;

-- or --

SELECT * FROM customer
WHERE age = (SELECT MIN(age) FROM customer);
``` 
7. Display name, location, order_amt and order_date of customer who placed the highest order.
```sql
SELECT name, location, order_amt, order_date FROM customer 
JOIN orders ON orders.cust_id = customer.cust_id 
ORDER BY orders.order_amt DESC
LIMIT 1;
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
4. List EMP_NUM, EMP_NAME and DESIGNATION of employees who have not assigned any projects.
```sql

```
5. Display the details of project in which MANAGER with highest pay Works.
```sql

```




 


