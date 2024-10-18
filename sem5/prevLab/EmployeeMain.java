/*
Write a Java program which creates a class named 'Employee' having the following
members: Name, Age, Phone number, Address, Salary. It also has a method named
'printSalary( )' which prints the salary of the Employee. Two classes 'Officer' and
'Manager' inherits the 'Employee' class. The 'Officer' and 'Manager' classes have
data members 'specialization' and 'department' respectively. Now, assign name, age,
phone number, address and salary to an officer and a manager by making an object of
both of these classes and print the same.
 */

class Employee {
  String name;
  int age;
  String phoneNumber;
  String address;
  double salary;

  Employee(String name, int age, String phoneNumber, String address, double salary) {
    this.name = name;
    this.age = age;
    this.phoneNumber = phoneNumber;
    this.address = address;
    this.salary = salary;
  }

  void printSalary() {
    System.out.println("Salary: " + salary);
  }

  void printDetails() {
    System.out.println("Name: " + name);
    System.out.println("Age: " + age);
    System.out.println("Phone Number: " + phoneNumber);
    System.out.println("Address: " + address);
  }
}

class Officer extends Employee {
  String specialization;

  Officer(String name, int age, String phoneNumber, String address, double salary, String specialization) {
    super(name, age, phoneNumber, address, salary);
    this.specialization = specialization;
  }

  void printDetails() {
    super.printDetails();
    System.out.println("Specialization: " + specialization);
    printSalary();
  }
}

class Manager extends Employee {
  String department;

  Manager(String name, int age, String phoneNumber, String address, double salary, String department) {
    super(name, age, phoneNumber, address, salary);
    this.department = department;
  }

  void printDetails() {
    super.printDetails();
    System.out.println("Department: " + department);
    printSalary();
  }
}

public class EmployeeMain {
  public static void main(String[] args) {
    Officer officer = new Officer("John Doe", 30, "1234567890", "123 Main St", 50000.0, "Software Development");

    Manager manager = new Manager("Jane Smith", 35, "9876543210", "456 Park Ave", 70000.0, "Marketing");

    System.out.println("Officer Details:");
    officer.printDetails();

    System.out.println("\nManager Details:");
    manager.printDetails();
  }
}