#include<iostream>

using namespace std;

class item {
    static int count;
    int code;
    public: void setcode() {
        code = ++count;
    }
    void showcode() {
        cout << code;
    }
    static void showcount() {
        cout << count;
    }
};
int item::count;
int main() {
    item t1, t2;
    t1.setcode();
    t2.setcode();
    item::showcount();
    item t3;
    t3.setcode();
    item::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return (0);
}