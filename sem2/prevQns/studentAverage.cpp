#include <iostream>
#include <string>

using namespace std;

class Student {
    char name[20], address[30];
    int age;
    public:
        void read();
        int getAge();
        void display();
};

void Student::read() {
    cout<<"Enter the name, age and address: ";
    cin>>name>>age>>address;
}

void Student::display() {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Address: "<<address<<endl;
}

int Student::getAge() { 
    return age;
}

int main() {
    int n, sum=0;
    float avg;
    cout<<"Enter the number of students: ";
    cin>>n;
    Student stu[n];
    for (int i = 0; i < n; i++) {
        stu[i].read();
        sum += stu[i].getAge();
    }
    avg = (float)sum/n;
    for (int i = 0; i < n; i++) {
        if (stu[i].getAge() > avg) stu[i].display();
    }
    return 0;
}