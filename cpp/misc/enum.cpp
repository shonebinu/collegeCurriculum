#include <iostream>

using namespace std;

enum Example
{
  A,
  B,
  C
};

int main()
{

  Example value = B;
  cout << value << endl;

  int val = C; // this also works!
  cout << val << endl;

  return 0;
}