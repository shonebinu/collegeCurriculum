#include <iostream>
#include <array>
using namespace std;

int main()
{
  string foods[] = {
      "grape",
      "carrots",
      "lemons"}; // regular way of defining arrays

  for (int i = 0; i < 3; i++) // regular traversing
    cout << foods[i] << endl;

  // new way of defining arrays -> easier to get the array size with this method

  array<string, 3> cars = {"BMW", "Benz", "Audi"}; // needs the header "array"

  for (int i = 0; i < cars.size(); i++)
    cout << cars[i] << endl;

  // new looping method
  for (auto car : cars) // or use "string" in the place of auto (defining type)
    cout << car << endl;

  return 0;
}

// array's are static