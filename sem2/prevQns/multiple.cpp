#include <iostream>

using namespace std;

class Student {
  int stud_id, stud_age;
  char stud_name[10];

  public:
    void readstud() {
      cout<<"Enter the student id, name and age: ";
      cin>>stud_id>>stud_name>>stud_age;
    }

    void displaystud() {
      cout<<"Student ID: "<<stud_id<<endl;
      cout<<"Student Name: "<<stud_name<<endl;
      cout<<"Student Age: "<<stud_age<<endl;
    }
};

class Course {
  char course_name[10], department[10];

  public:
    void readcourse() {
      cout<<"Enter the course name and department: ";
      cin>>course_name>>department;
    }

    void displaycourse() {
      cout<<"Course Name: "<<course_name<<endl;
      cout<<"Department: "<<department<<endl;
    }
};

class Admission: public Student, public Course {
  int adm_no;
  char adm_date[10];

  public:
    void readadm() {
      cout<<"Enter admission no. and admission date: ";
      cin>>adm_no>>adm_date;
    }

    void displayadm() {
      cout<<"Admission number: "<<adm_no<<endl;
      cout<<"Admission date: "<<adm_date<<endl;
    }
};

int main() {

  Admission one;

  one.readstud();
  one.readcourse();
  one.readadm();

  cout<<endl;

  one.displaystud();
  one.displaycourse();
  one.displayadm();

  return 0;
}
