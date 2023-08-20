#include <iostream>

using namespace std;

void swap(int&, int&);

int main() {

  int length = 5;
  int list[] = { 100, 20, 80, 60, 40 };

  for (int i = length - 1; i > 0; i--) 
    for (int j = 0; j < i; j++)
      if (list[j] > list[j + 1]) 
        swap(list[j], list[j + 1]);
  

  for (int i = 0; i < length; i++)
    cout << list[i] << '\t';
  
  return 0;
}

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}
