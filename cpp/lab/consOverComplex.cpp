#include <iostream>

using namespace std;

class Complex {
    int a, b;
    public:
        Complex() {
            a=b=0;
        }
        Complex(int i) {
            a=b=i;
        }
        Complex(int j, int k) {
            a = j;
            b = k;
        } 
        void display() {
            cout<<a<<" + i"<<b<<endl;
        }
        friend Complex sum(Complex p, Complex q) {
            Complex c;
            c.a = p.a + q.a;
            c.b = p.b + q.b;
            return c;
        }
};

int main() {
    Complex c1, c2(10), c3(2, 3);
    c1 = sum(c2, c3);
    c2.display();
    c3.display();
    c1.display();
    return 0;
}