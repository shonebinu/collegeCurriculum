#include <iostream>

using namespace std;

class Student {
    protected:
        int rno;
    public:
        void getm() {
            cout<<"Enter Roll Number: ";
            cin>>rno;
        }
        void putm() {
            cout<<"Roll Number = "<<rno<<endl;
        }
};

class Test: public Student {
    protected:
        int m1, m2;
    public:
        void getn() {
            cout<<"Enter two marks: ";
            cin>>m1>>m2;
        }
        void putn() {
            cout<<"Mark 1 = "<<m1<<endl<<"Mark 2 = "<<m2<<endl;
        }
};

class P: public Test {
    int p;
    public:
        void dis() {
            p = m1+m2;
            putm();
            putn();
            cout<<"Total Marks = "<<p;
        }
};

int main() {
    P p;
    p.getm();
    p.getn();
    p.dis();
}