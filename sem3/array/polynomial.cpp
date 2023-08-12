#include <iostream>

using namespace std;

class Polynomial {
  public:
    int degree, coef[10];
    void read();
    void display();
    Polynomial add(Polynomial);
};

void Polynomial::read() {
  int i;
  cout<<"\nEnter the degree of Polynomial: ";
  cin>>degree;
  cout<<"\nEnter coefficients: ";
  for (i = 0; i <= degree; i++) {
    cin >> coef[i];
  }
}

void Polynomial::display() {
  int i;
  for(i = degree; i > 0; i--) 
    cout << coef[i] << "x^" << i << " + ";

  cout << coef[0] << " = 0"<<endl;
}

Polynomial Polynomial::add(Polynomial p) {
  int m, i;
  Polynomial ob;

  if (degree < p.degree) m  = degree;
  else m = p.degree;

  for (i = 0; i <= m; i++)
    ob.coef[i] = coef[i] + p.coef[i];

  if (degree >= m) {
    for (i = m + 1; i <= degree; i++)
      ob.coef[i] = coef[i];
    ob.degree = degree;
  }

  if (p.degree > m) {
    for (i = m + 1; i <= p.degree; i++) 
      ob.coef[i] = p.coef[i];
    ob.degree = p.degree;
  }
  return ob;
}

int main() {
  Polynomial p1, p2, p3;
  p1.read();
  p1.display();
  p2.read();
  p2.display();
  p3 = p1.add(p2);
  cout << "\nResultant Polynomial is: ";
  p3.display();
  return 0;
}
