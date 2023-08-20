#include <iostream>

using namespace std;

void swap(int&, int&);

int main() {

  int length = 5;
  int list[] = { 100, 20, 80, 60, 40 };


  for (int i = 0; i < length; i++)
    cout << list[i] << '\t';
  
  return 0;
}

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

