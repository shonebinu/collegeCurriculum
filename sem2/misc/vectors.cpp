// Vectors are dynamic arrays, instead of defining the size statically at the compile time, vectors can grow and shrink at rum time
#include <iostream>
#include <vector> //need this header for vectors

using namespace std;

int main()
{

  vector<string> foods = {"grapes", "carrots", "lemons"};

  foods.push_back("mango"); // a method

  // for (int i = 0; i < foods.size(); i++)
  //   cout << food << endl;

  for (auto food : foods)
    cout << food << endl;

  vector<string> cars;
  cars = {"BMW", "Benz", "Audi"};

  for (auto car : cars)
    cout << car << endl;

  return 0;
}