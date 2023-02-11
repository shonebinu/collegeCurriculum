#include <iostream>
#include <array>
#include <vector>

using namespace std;

void printArray(string items[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << items[i] << endl;
  }
}

void printSTDArray(array<string, 5> items)
{
  printArray(items.data(), items.size()); // conversion
  //   for (int i = 0; i < items.size(); i++)
  //   {
  //     cout << items[i] << endl;
  //   }
}

void printVector(vector<string> items)
{
  printArray(items.data(), items.size());
  // for (int i = 0; i < items.size(); i++)
  // {
  //   cout << items[i] << endl;
  // }
}

int main()
{
  string foods1[5] = {"tacos", "honey", "apples", "oranges", "banana"};
  array<string, 5> foods2 = {"tacos", "honey", "apples", "oranges", "banana"};
  vector<string> foods3 = {"tacos", "honey", "apples", "oranges", "banana"};

  printArray(foods1, sizeof(foods1) / sizeof(foods1[0]));
  printSTDArray(foods2);
  printVector(foods3);

  return 0;
}