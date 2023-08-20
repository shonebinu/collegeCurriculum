#include <iostream>

using namespace std;

void swap(int&, int&);

class Array {
  public:
    int length, array[20];

    void read();
    void bubbleSort();
    void display();
};

int main() {
  Array object;
  object.read();
  object.bubbleSort();
  object.display();
  return 0;
}

void Array::read() {
  cout << "Enter the number of elements: ";
  cin >> length;
  cout << "Enter the elements: ";
  for (int i = 0; i < length; i++)
    cin >> array[i];
}

void Array::bubbleSort() {
  for (int i = length - 1; i > 0; i--)
    for (int j = 0; j < i; j++)
      if (array[j] > array[j + 1])
        swap(array[j], array[j + 1]);
}

void Array::display() {
  for (int i  = 0; i < length; i++)
    cout << array[i] << '\t';
}

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}
