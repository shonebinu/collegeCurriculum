#include <iostream>

using namespace std;

class Array {
  public:
    int a[10][10], b[10][10], r, c, t;
    void sparse();
    void create();
    void traversal();
    void spadd(Array);
};

void Array::traversal() {
  int i, j;
  cout<<"The given matrix is: "<<endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) 
      cout<<a[i][j]<<" ";
    cout<<endl;
  }
}

void Array::create() {
  int i, j;
  cout<<"\t SPARSE MATRIX \n";
  cout<<"\t ______________ \n";
  cout<<"Enter the order of matrix: ";
  cin>>r>>c;
  cout<<"Enter the elements: \n";
  for (i = 0; i < r; i++) 
    for (j = 0; j < c; j++)
      cin>>a[i][j];
}

void Array::sparse() {
  int p;
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

void Array::spadd(Array ob) {
  //Addition
  int i, j, s, sum[10][10];
  i = j = s = 2;
  if (r == ob.r && c == ob.c) {
    while ((i <= t) && (j <= ob.t)) {
      if (b[i][0] == ob.b[j][0]) { // if rows are equal
        if (b[i][1] == ob.b[j][1]) { // if columns are equal
          sum[s][0] = b[1][0];
          sum[s][1] = b[i][1];
          sum[s][2] = b[i][2] + ob.b[j][2];
          i++, j++, s++;
        } else { // if columns are not equal
          if (b[i][1] < ob.b[j][1]) {
            sum[s][0] = b[i][0];
            sum[s][1] = b[i][1];
            sum[s][2] = b[i][2];
            i++, s++;
          } else {
            sum[s][0] = ob.b[j][0];
            sum[s][1] = ob.b[j][1];
            sum[s][2] = ob.b[j][2];
            j++, s++;
          }
         }
      }
      else { // if rows are not equal
        if (b[i][0] < ob.b[j][0]) {
          sum[s][0] = b[i][0];
          sum[s][1] = b[i][1];
          sum[s][2] = b[i][2];
          i++, s++;
        } else {
          sum[s][0] = ob.b[j][0];
          sum[s][1] = ob.b[j][1];
          sum[s][2] = ob.b[j][2];
          j++, s++;
        }
      }
    } // end of while
    while (i < t+1) {
      sum[s][0] = b[i][0];
      sum[s][1] = b[i][1];
      sum[s][2] = b[i][2];
      s++, i++;
    }
    while (j < ob.t+1) {
      sum[s][0] = ob.b[j][0];
      sum[s][1] = ob.b[j][1];
      sum[s][2] = ob.b[j][2];
      j++, s++;
    }
    // end of addition and subtraction
  sum[0][0] = r;
  sum[0][1] = c;
  sum[0][2] = s-2;
  // displaying the sum of MATRIX 
  cout<<"\n\nThe sum is: \n\nRow\tColumn\tElement";
  cout<<"\n_______________________________________\n";
  for (i = 0; i < s; i++) {
    cout<<sum[i][0]<<'\t'<<sum[i][1]<<'\t'<<sum[i][2]<<'\n';
  }
  } else {
    cout<<"Addition not possible.\n";
  }
}

int main() {
  int i, j;
  Array ob, ob1;
  ob.create();
  ob1.create();
  ob.traversal();
  ob1.traversal();
  ob.sparse();
  ob1.sparse();
  ob.spadd(ob1);
  return 0;
}
