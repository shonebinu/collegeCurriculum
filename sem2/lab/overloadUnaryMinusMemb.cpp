#include <iostream>

using namespace std;

class Space {
    int x, y, z;
    public:
        void setvalue(int a, int b, int c) {
            x = a, y = b, z = c;
        }
        void operator-() {
            x = -x;
            y = -y;
            z = -z;
        }
        void display() {
            cout<<x<<endl<<y<<endl<<z<<endl;
        }
};

int main() {
    Space s;
    s.setvalue(10, 20, 30);
    s.display();
    -s;
    cout<<"After overloading: "<<endl;
    s.display();
    return 0;
}