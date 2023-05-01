#include <iostream>

using namespace std;

class Student {
    protected:
        int rno;
    public:
        void getno() {
            cout<<"Enter the roll no: ";
            cin>>rno;
        }
        void putno() {
            cout<<"Roll no: "<<rno<<endl;
        }
};

class Test: public Student {
    protected:
        int m1, m2;
    public:
        void getm() {
            cout<<"Enter two marks: ";
            cin>>m1>>m2;
        }
        void putm() {
            cout<<"Mark 1: "<<m1<<endl<<"Mark 2: "<<m2<<endl;
        }
};

class Sports {
    protected:
        int score;
    public:
        void getscore() {
            cout<<"Enter score: ";
            cin>>score;
        }
        void putscore() {
            cout<<"Score: "<<score<<endl;
        }
};

class Result: public Test, public Sports {
    int total;
    public:
        void display() {
            total = m1+m2+score;
            putno();
            putm();
            putscore();
            cout<<"Total: "<<total;
        }
};

int main() {
    Result p;
    p.getno();
    p.getm();
    p.getscore();
    p.display();
    return 0;
}