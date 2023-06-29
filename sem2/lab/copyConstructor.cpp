#include <iostream>

using namespace std;

class Complex {
    int id;
    public:
        Complex() {}
        Complex(int a) {
            id = a;
        }
        Complex(Complex &x) {
            id = x.id;
        } // copy - constructor 
        void display() {
            cout<<"Code = "<<id<<endl;
        }
};

int main() {
    Complex a(100);
    Complex b(a); //copy - constructor call
    Complex c = a; //copy - constructor call
    Complex d;
    d = a; //copy - constructor call
    a.display();
    b.display();
    c.display();
    d.display();
    return 0;
}