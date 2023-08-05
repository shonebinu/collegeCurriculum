#include <iostream>

using namespace std;

class Rectangle {
  int length, breadth;

  public:
    
    Rectangle(int a) {
      length = breadth = a;
    }

    Rectangle(int a, int b) {
      length = a;
      breadth = b;
    }

    int getArea() {
      return length*breadth;
    }
};


int main() {
  Rectangle first(10), second(10, 20);
  cout<<"Area of first Rectangle = "<<first.getArea()<<endl;
  cout<<"Area of second Rectangle = "<<second.getArea()<<endl;
  return 0;
}
