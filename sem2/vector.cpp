#include <iostream>
#include <iterator>

using namespace std;

class Vector {
  int a, b, c;

  public:
    void read() {
      cout<<"Enter the coefficient of i, j and k: ";
      cin>>a>>b>>c;
    }

    void display() {
      cout<<"("<<a<<"i + "<<b<<"j + "<<c<<"k)";
    }

    friend Vector operator-(Vector, Vector);
};

Vector operator-(Vector first, Vector second) {
  Vector third;
  third.a = first.a - second.a;
  third.b = first.b - second.b;
  third.c = first.c - second.c;
  return third;
}


int main() {

  Vector first, second, third;
  first.read();
  second.read();
  
  third = first - second;

  first.display();
  cout<<" - ";
  second.display();
  cout<<" = ";
  third.display();
  cout<<endl;

  return 0;
}
