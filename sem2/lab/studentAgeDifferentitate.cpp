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
    Student s[10];
    int n, m;
    cout<<"How many students: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        s[i].read();
    }
    cout<<"Age criteria: ";
    cin>>m;
    for (int i = 0; i < n; i++) {
        if (m < s[i].getage()) s[i].display();
    }
    return 0;
}