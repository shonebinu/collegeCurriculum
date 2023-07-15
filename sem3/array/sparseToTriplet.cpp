#include <iostream>

using namespace std;

class Array {
  public:
      int array[10][10], b[10][10], r, c, t, p; // b = tripletForm array, r = no. of rows, c = no. of colums, t = no. of non-zero elements, p = iterative element to create the new array
      void create();
      void traversal();
      void sparse();
};

void Array::create() {
  cout<<"Enter the number of rows and colums: ";
  cin>>r>>c;
  cout<<"Enter the elements: "<<endl;
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++) 
      cin>>array[i][j];
}

void Array::traversal() {
  cout<<"\nThe Matrix: "<<endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++)
      cout<<array[i][j]<<" ";
    cout<<endl;
  }
}

void Array::sparse() {
  t = 0, p = 1;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (array[i][j] != 0) {
        b[p][0] = i+1;
        b[p][1] = j+1;
        b[p][2] = array[i][j];
        p++, t++;
      }
    }
  }
  b[0][0] = r;
  b[0][1] = c;
  b[0][2] = t;
  cout<<"\nThe above matrx in 3-tupled form: \n";
  for (int i = 0; i <= t; i++) {
    for (int j = 0; j < 3; j++)
      cout<<b[i][j]<<" ";
    cout<<endl;
  }
}

int main() {
  Array object;
  object.create();
  object.traversal();
  object.sparse();
}
