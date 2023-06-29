#include <iostream>

using namespace std;

class Time {
    int h, m, s;
    public:
        void gettime();
        void puttime();
        Time add(Time);
};

void Time::gettime() {
    cout<<"Enter hours, minutes and seconds: ";
    cin>>h>>m>>s;
}
void Time::puttime() {
    cout<<"Hours: "<<h<<endl;
    cout<<"Minutes: "<<m<<endl;
    cout<<"Seconds: "<<s<<endl;
}

Time Time::add(Time t1) {
    Time t2;
    t2.s = s + t1.s;
    t2.m = t2.s/60;
    t2.s = t2.s % 60;
    t2.m = m + t2.m + t1.m;
    t2.h = t2.m/60;
    t2.m = t2.m % 60;
    t2.h = h+t1.h+t2.h;
    return t2;
}

int main() {
    Time a, b, c;
    a.gettime();
    b.gettime();
    c=a.add(b);
    a.puttime();
    b.puttime();
    c.puttime();
    return 0;
}