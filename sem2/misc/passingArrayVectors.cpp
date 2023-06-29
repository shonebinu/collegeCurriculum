#include <iostream>
#include <array>
#include <vector>

using namespace std;

void printArray(string items[], int size)
{
  cout << items << endl;
  for (int i = 0; i < size; i++)
  {
    items[i] = "pie";
    // cout << items[i] << endl;
  }
}

void printSTDArray(array<string, 5> items)
{
  cout << &items << endl;
  for (int i = 0; i < items.size(); i++)
  {
    items[i] = "pie";
    //  cout << items[i] << endl;
  }
}

void printVector(vector<string> items)
{
  cout << &items << endl;
  for (int i = 0; i < items.size(); i++)
  {
    items[i] = "pie";
    // cout << items[i] << endl;
  }
}

int main()
{

  string foods1[5] = {"tacos", "honey", "apples", "oranges", "banana"};        // old school array
  array<string, 5> foods2 = {"tacos", "honey", "apples", "oranges", "banana"}; // standard array
  vector<string> foods3 = {"tacos", "honey", "apples", "oranges", "banana"};   // vector

  // On regular arrays, the pointer to the first element of the array is passed to function, so if there's any changes made insdie the function, it will also affect the original array of the global scope.
  cout << foods1 << endl;                                 // or &food1
  printArray(foods1, sizeof(foods1) / sizeof(foods1[0])); // this size trick doesn't work inside the fn defintion. cuz, when passing an array, it decays(loss of info) to a pointer. Only the pointer to first element is there

  cout << &foods2 << endl; // here foods2 doesn't work... need to use &
  printSTDArray(foods2);   // here, the values of the actual arrays are copied over -> so modifications inside the fn doesn't affect the original array

  cout << &foods3 << endl;
  printVector(foods3); // works like standard array -> vector is copied over

  for (auto f : foods1)
    cout << f << endl;

  cout << endl;

  for (auto f : foods2)
    cout << f << endl;

  cout << endl;

  for (auto f : foods3)
    cout << f << endl;

  return 0;
}