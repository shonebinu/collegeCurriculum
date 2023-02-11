#include <iostream>
using namespace std;

class Chef // Super-class
{
public:
  void makeChicken()
  {
    cout << "The chef makes chicken" << endl;
  }
  void makeSalad()
  {
    cout << "The chef makes salad" << endl;
  }
  void makeSpecialDish()
  {
    cout << "The chef makes bbg ribs" << endl;
  }
};

class ItalianChef : public Chef // inheritance // Sub-class
{
public:
  void makePasta()
  {
    cout << "The chef makes pasta" << endl;
  }
  void makeSpecialDish() // fn overwriting
  {
    cout << "The chef makes chichekn parm" << endl;
  }
};

int main()
{
  Chef chef;
  chef.makeChicken();

  chef.makeSpecialDish();

  ItalianChef italianChef;
  italianChef.makeChicken();
  italianChef.makePasta();

  italianChef.makeSpecialDish();

  return 0;
}