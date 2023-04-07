#include <iostream>

using namespace std;

class Distance {
    int km, m;
    public:
        Distance() {}
        Distance(int a, int b) {
            km = a, m = b;
        }
        void display() {
            cout<<"Km: "<<km<<endl;
            cout<<"m: "<<m<<endl<<endl;
        }
        friend Distance operator+(Distance, Distance);
};

Distance operator+(Distance a, Distance b) {
    Distance c;
    c.m = a.m + b.m;
    c.km = c.m / 1000;
    c.m = c.m % 1000;
    c.km += a.km + b.km;
    return c;
}

int main() {
    Distance d1(19, 899), d2(100, 120);
    Distance d3 = d1+d2;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}