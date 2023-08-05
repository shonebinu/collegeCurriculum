#include <iostream>

using namespace std;

class Person {
  protected:
    char name[10], address[20], ph_no[10];

  public:
    void getDetails() {
      cout<<"Enter the name: ";
      cin>>name;
      cout<<"Enter the address: ";
      cin>>address;
      cout<<"Enter the phone number: ";
      cin>>ph_no;
    }
};

class Employee: public Person {
  protected:
    int emp_number;

  public:
    void getId() {
      cout<<"Enter the employee number: ";
      cin>>emp_number;
    }
};

class Manager: public Employee {
  protected:
    char designation[10], department_name[10];
    int basic_salary;

  public:
    void getAll() {
      getDetails();
      getId();
      cout<<"Enter the designation: ";
      cin>>designation;
      cout<<"Enter the department name: ";
      cin>>department_name;
      cout<<"Enter the basic salary: ";
      cin>>basic_salary;
    }

    void printAll() {
      cout<<endl<<"Name: "<<name<<endl;
      cout<<"Address: "<<address<<endl;
      cout<<"Phone number: "<<ph_no<<endl;

      cout<<"Employee number: "<<emp_number<<endl;

      cout<<"Designation: "<<designation<<endl;
      cout<<"Department: "<<department_name<<endl;
      cout<<"Basic Salary: "<<basic_salary<<endl;
    }
};

int main() {
  int n;
  cout<<"Enter the number of managers: ";
  cin>>n;

  Manager managers[n];

  for (int i = 0; i < n; i++) {
    cout<<"Enter the details of the Manager "<<i+1<<" :"<<endl;
    managers[i].getAll();
    cout<<endl<<endl;
  }


  cout<<"\n\nThe entered details: "<<endl;

  for (int i = 0; i < n; i++) {
    cout<<"The details of manager "<<i+1<<" :"<<endl;
    managers[i].printAll();
    cout<<endl<<endl;
  }

  return 0;
}
