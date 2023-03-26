#include <iostream>

using namespace std;

class Student {
    int age;
    string name, address;
    public:
        void read() {
            cout<<"Enter name, age and address: ";
            cin>>name>>age>>address;
        }
        void display() {
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<address<<endl;
        }
        int getage() {
            return age;
        }
};

int main() {
    Student s;
    s.read();
    s.display();
    cout<<s.getage()<<endl;
    return 0;
}