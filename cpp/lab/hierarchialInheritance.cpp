#include <iostream>

using namespace std;

class Staff {
    protected:
        int staff_id;
        char name[10];
    public:
        void get() {
            cout<<"Enter the staff id and name: ";
            cin>>staff_id>>name;
        }
        void put() {
            cout<<"Staff ID: "<<staff_id<<endl<<"Name: "<<name<<endl;;
        }
};

class Teacher: public Staff {
    protected:
        char subject[10], publication[10];
    public:
        void get1() {
            get();
            cout<<"Enter the subject and publication: ";
            cin>>subject>>publication;
        }
        void put1() {
            put(); 
            cout<<"Subject: "<<subject<<endl<<"Publication: "<<publication<<endl;
        }
};

class Typist: public Staff {
    protected:
        int wpm;
    public:
        void get2() {
            get();
            cout<<"Enter the typing speed: ";
            cin>>wpm;
        }
        void put2() {
            put();
            cout<<"Typing speed: "<<wpm<<endl;
        }
};

class Officer: public Staff {
    protected:
        char grade;
    public:
        void get3() {
            get();
            cout<<"Enter the grade: ";
            cin>>grade;
        }
        void put3() {
            put();
            cout<<"Grade: "<<grade<<endl;
        }
};

class Part_time: public Typist {
    protected:
        int daily_wage;
    public:
        void get4() {
            get2();
            cout<<"Enter the daily wage: ";
            cin>>daily_wage;
        }
        void put4() {
            put2();
            cout<<"Daily wage: "<<daily_wage<<endl;
        }
};

class Regular: public Typist {
    protected:
        int monthly_wage;
    public:
        void get5() {
            get2();
            cout<<"Enter the Monthly Wage: ";
            cin>>monthly_wage;
        }
        void put5() {
            put2();
            cout<<"Monthly Wage: "<<monthly_wage<<endl;
        }
};

int main() {
    Teacher t;
    Officer o;
    Part_time p;
    Regular r;
    t.get1();
    t.put1();
    o.get3();
    o.put3();
    p.get4();
    p.put4();
    r.get5();
    r.put5();
    return 0;
}