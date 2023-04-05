#include <iostream>
using namespace std;

class ABC;
class XYZ {
    int x;
    public:
        void setvalue(int i) {
            x = i;
        }
        friend void max(XYZ, ABC);
};

class ABC {
    int a;
    public:
        void setvalue(int j) {
            a = j;
        }
        friend void max(XYZ, ABC);
};

void max(XYZ m, ABC n) {
    if (m.x >= n.a) 
        cout<<"Greatest number is: "<<m.x;
    else 
        cout<<"Greatest number is: "<<n.a;
}

int main() {
    XYZ p;
    ABC q;
    p.setvalue(10);
    q.setvalue(20);
    max(p, q);
    return 0;
}