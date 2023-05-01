#include <iostream>

using namespace std;

class M {
    protected:
        int m;
    public:
        void getm() {
            cout<<"Enter m: ";
            cin>>m;
        }
};

class N {
    protected:
        int n;
    public:
        void getn() {
            cout<<"Enter n: ";
            cin>>n;
        }
};

class P: public M, public N {
    int p;
    public:
        void dis() {
            p = m*n;
            cout<<m<<endl<<n<<endl<<p;
        }
};

int main() {
    P p;
    p.getm();
    p.getn();
    p.dis();
    return 0;
}