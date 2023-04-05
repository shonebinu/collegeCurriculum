#include<iostream>

using namespace std;

class employee {
    int id;
    char name[20];
    char title[20];
    int basicpay, da, pf, hra;
    public: void getdata() {
        cin >> id >> name >> title >> basicpay >> da >> pf >> hra;
    }
    void salaryslip() {
        cout << "ID:" << id << endl;
        cout << "NAme:" << name << endl;
        cout << "title:" << title << endl;
        cout << "salary:" << salary() << endl;
    }

    int salary() {
        return basicpay + da + pf - hra;
    }
};

int main() {
    employee emp[20];
    int n;
    cout << "enter no of employee:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        emp[i].getdata();
    }
    for (int i = 0; i < n; i++) {
        emp[i].salaryslip();
    }
}