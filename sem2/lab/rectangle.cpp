#include <iostream>

using namespace std;

class Rectangle {
    int length, breadth;
    public:
        void area() {
            cout<<"Area = "<<length*breadth<<endl;
        }
        Rectangle(int a) {
            length = breadth = a;
        }
        Rectangle(int a, int b) {
            length = a;
            breadth = b;
        }
};

int main() {
    Rectangle a(10), b(10, 20);
    a.area();
    b.area();
    return 0;
}