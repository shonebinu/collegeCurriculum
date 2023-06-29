#include <iostream>

using namespace std;

class BC {
    public:
        void dis() {
            cout<<"Display base"<<endl;
        }
        virtual void show() {
            cout<<"Show base"<<endl;
        }
};

class DC: public BC {
    public:
        void dis() {
            cout<<"Display derived"<<endl;
        }
        void show() {
            cout<<"Show derived"<<endl;
        }
};

int main() {
    BC b;
    DC d;
    BC *bptr;
    bptr = &b;
    bptr -> dis();
    bptr -> show();
    bptr = &d;
    bptr -> dis();
    bptr -> show();
    return 0;
}