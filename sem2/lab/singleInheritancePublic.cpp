#include <iostream>

using namespace std;

class A {
    int a;
    public:
        int b;
        void get() {
            cout<<"Enter 2 numbers: ";
            cin>>a>>b;
        }
        int geta() {
            return a;
        }
        void show() {
            cout<<"a = "<<geta()<<endl<<"b = "<<b<<endl;
        }
};

class D: public A {
    int c;
    public:
        void mul() {
            c = geta() * b;
        }
        void display() {
            cout<<"Result = "<<c<<endl;
        }
};

int main() {
    D d;
    d.get();
    d.mul();
    d.show();
    d.display();
    d.b = 20;
    d.mul();
    d.display();
    return 0;
}