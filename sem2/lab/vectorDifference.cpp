#include <iostream>
using namespace std;

class Vector {
private:
    int a, b, c; // coefficients of i, j, k
public:
    void read() {
        cout << "Enter the coefficients of i, j, k: ";
        cin >> a >> b >> c;
    }

    void display() {
        cout << "(" << a << "i + " << b << "j + " << c << "k)";
    }

    friend Vector operator-(Vector, Vector);
};

Vector operator-(Vector a, Vector b) {
    Vector c;
    c.a = a.a - b.a;
    c.b = a.b - b.b;
    c.c = a.c - b.c;
    return c;
}

int main() {
    Vector v1, v2, v3;

    v1.read();
    cout << "v1 = ";
    v1.display();
    cout << endl;

    v2.read();  
    cout << "v2 = ";
    v2.display();
    cout << endl;

    v3 = v1-v2;
    cout << "v1 - v2 = ";
    v3.display();
    cout << endl;

    return 0;
}
