#include <iostream>

using namespace std;

class Array {
  public:
    int array[10][10], m, n, triplet[15][3], added[20][3];
    void create();
    void toTriplet();
    void tripletAdd(Array);
};

int main() {
  Array array, array1;

  array.create();
  array.toTriplet();

  array1.create();
  array1.toTriplet();

  array.tripletAdd(array1);

  return 0;
}

void Array::create() {
  cout<<"Enter the number of rows and columns: ";
  cin>>m>>n;
  cout<<"Enter the elements: "<<endl;
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      cin>>array[i][j];
}

void Array::toTriplet() {
  int k = 1;
  triplet[0][0] = m, triplet[0][1] = n;
  for (int i = 0; i < m; i++) 
    for (int j = 0; j < n; j++) 
      if (array[i][j] != 0) {
      triplet[k][0] = i+1;
      triplet[k][1] = j+1;
      triplet[k][2] = array[i][j];
      k++;
      }
    triplet[0][2] = k - 1; // no of non-zero elements  

    //printing the triplet form
  cout<<endl<<"The sparse matrix in triplet form: \n";
    for (int i = 0; i < k; i++) {
      for (int j = 0; j < 3; j++)
        cout<<triplet[i][j]<<" ";
      cout<<endl;
    }
    cout<<endl;
  }

void Array::tripletAdd(Array ob) {
  if (m != ob.m || n != ob.n) {
    cout<<"The matrices can't be added since the rows and columns of the matrices doesn't match."<<endl;
    return;
  }
  int i = 1, j = 1, k = 1; // start from second row
  while (i <= triplet[0][2] && j <= ob.triplet[0][2]) { // the number of elements is stored in [0][2]
    if (triplet[i][0] == ob.triplet[j][0] && triplet[i][1] == ob.triplet[j][1]) {
      added[k][0] = triplet[i][0], added[k][1] = triplet[i][1];
      added[k][2] = triplet[i][2] + ob.triplet[j][2];
      i++, j++, k++;
    } else if (triplet[i][0] < ob.triplet[j][0] || (triplet[i][0] == ob.triplet[j][0] && triplet[i][1] < ob.triplet[j][1])) {
      added[k][0] = triplet[i][0];
      added[k][1] = triplet[i][1];
      added[k][2] = triplet[i][2];
      i++, k++;
    } else {
      added[k][0] = ob.triplet[j][0];
      added[k][1] = ob.triplet[j][1];
      added[k][2] = ob.triplet[j][2];
      j++, k++;
    }
  }

  // if one of the matrices has elements remaining, copy them to the result matrix
  while (i <= triplet[0][2]) {
    added[k][0] = triplet[i][0];
    added[k][1] = triplet[i][1];
    added[k][2] = triplet[i][2];
    i++, k++;
  }
  while (j <= ob.triplet[0][2]) {
    added[k][0] = ob.triplet[j][0];
    added[k][1] = ob.triplet[j][1];
    added[k][2] = ob.triplet[j][2];
    j++, k++;
  }

  added[0][0] = triplet[0][0];
  added[0][1] = triplet[0][1];
  added[0][2] = k - 1;

  //printing the result triplet form after addition
  cout<<endl<<"The sum of the sparse matrices in triplet form: \n";
  for (i = 0; i < k; i++) {
    for (j = 0; j < 3; j++)
      cout<<added[i][j]<<" ";
    cout<<endl;
  }
}
