#include <iostream>

using namespace std;

int add(int a = 20, int b = 10) {
    return a+b;
}

int sub(int a = 20, int b = 10) {
    return a-b;
}

int mult(int a = 20, int b = 10) {
    return a*b;
}

int divi(int a = 20, int b = 10) {
    return a/b;
}

int main() {
    cout<<"\t MENU";
    cout<<"\n1. Add \n2.Sub \n3. Mul \n4. Div\n";
    cout<<"Enter your choice: ";
    int a;
    cin>>a;
    switch (a)
    {
        case 1: cout<<add()<<endl;
                break;
        case 2: cout<<sub()<<endl;
                break;
        case 3: cout<<mult()<<endl;
                break;
        case 4: cout<<divi()<<endl;
                break;
        default: cout<<"Wrong Input";
    }
    return 0;
}