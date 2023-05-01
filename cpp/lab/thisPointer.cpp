#include <iostream>

using namespace std;

class Person {
    char name[10];
    int age;
    public:
        void read() {
            cout<<"Enter name and age: ";
            cin>>name>>age;
        }
        Person greater(Person x) {
            if (x.age >= age) {
                return x;
            } else {
                return *this;
            }
        }
        void dis() {
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
        }
};

int main() {
    Person p, p1;
    p.read();
    p1.read();
    Person p2 = p.greater(p1);
    cout<<"Greater person: "<<endl;
    p2.dis();
    return 0;
}