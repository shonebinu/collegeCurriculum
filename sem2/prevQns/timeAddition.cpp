#include <iostream>

using namespace std;

class Time {
    int hour, minute, second;
    public:
        void readTime();
        void displayTime();
        friend Time operator+(Time, Time);
};

void Time::readTime() { 
    cout<<"Enter the time(hour, minute, second): ";
    cin>>hour>>minute>>second;
}

void Time::displayTime() {
    cout<<"The time is(HH:MM:SS): "<<hour<<":"<<minute<<":"<<second<<endl;
}

Time operator+(Time a, Time b) {
    Time result;
    result.hour = a.hour + b.hour;
    result.minute = a.minute + b.minute;
    result.second = a.second + b.second;

    result.minute += result.second / 60;
    result.second = result.second % 60;

    result.hour += result.minute / 60;
    result.minute = result.minute % 60;

    return result;
}

int main() {
    cout<<"\tTIME ADDITION (24 HOUR FORMAT)\n\n";
    Time time1, time2;

    cout<<"Enter Time 1: \n";
    time1.readTime();

    cout<<"\nEnter Time 2: \n";
    time2.readTime();

    Time result = time1+time2;
    cout<<"\nTIME 1"<<endl;
    time1.displayTime();
    cout<<"\nTIME 2"<<endl;
    time2.displayTime();

    cout<<"\nAdded TIME"<<endl;
    result.displayTime();
    return 0;
}