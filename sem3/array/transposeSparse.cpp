#include <iostream>

using namespace std;

class Array {
  public:
    int array[10][10], b[10][10], r, c, t = 0;
    void sparse();
    void create();
    void transpose();
};

void Array::create() {
  cout<<"Enter the no. of rows and colums: ";
  cin>>r>>c;
  cout<<"Enter the elements: \n";
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      cin>>array[i][j];
}

void Array::sparse() {
  int p = 1;
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

void Array::transpose() {
  int st[10][10], k = 1;

  for (int i = 1; i <= c; i++) 
    for (int j = 1; j <= t; j++) 
      if (b[j][1] == i) {
        st[k][0] = b[j][1];
        st[k][1] = b[j][0];
        st[k][2] = b[j][2];
        k++;
      }
  st[0][0] = c;
  st[0][1] = r;
  st[0][2] = t;

  cout<<"\nTranpose is: "<<endl;
  for (int i = 0; i <= t; i++) {
    for (int j = 0; j < 3; j++)
      cout<<st[i][j]<<" ";
    cout<<endl;
  }
}

int main() {
  Array object;
  object.create();
  cout<<"\nThe given matrix is: \n";
  for (int i = 0; i < object.r; i++) {
    for (int j = 0; j < object.c; j++)
      cout<<object.array[i][j]<<" ";
    cout<<endl;
  }
  object.sparse();
  object.transpose();
}

