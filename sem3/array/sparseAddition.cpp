#include <iostream>
#define MAX 15
using namespace std;

class Array {
  public:
  int array[MAX][MAX], triplet[MAX][MAX], added[MAX][MAX], row, cols;
  void create();
  void sparse();
  void sparseAdd(Array);
};

void Array::create() {
  cout << "Enter the number of rows and cols: ";
  cin >> row >> cols;
  cout << "Enter the elements: " << endl;
  for (int i = 0; i < row; i++) 
    for (int j = 0; j < cols; j++)
      cin >> array[i][j];
}

void Array::sparse() {
  int nonZero = 0, k = 1;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < cols; j++) {
      if (array[i][j] != 0) {
        triplet[k][0] = i;
        triplet[k][1] = j;
        triplet[k][2] = array[i][j];
        k++, nonZero++;
      }
    }
  }
  triplet[0][0] = row;
  triplet[0][1] = cols;
  triplet[0][2] = nonZero;
  cout << "3 tuple form: " << endl;
  for (int i = 0; i <= nonZero; i++) {
    for (int j = 0; j < 3; j++) 
      cout << triplet[i][j] << " ";
    cout << endl;
  }
}

void Array::sparseAdd(Array ob) {
  if (row != ob.row || cols != ob.cols) {
    cout << "The matrices can't be added" << endl;
    return;
  }
  int i, j, k;
  i = j = k = 1; // start from 2nd row
  
  while (i <= triplet[0][2] && j <= ob.triplet[0][2]) {
    if (triplet[i][0] == ob.triplet[j][0] && triplet[i][1] == ob.triplet[i][1]) {
      added[k][0] = triplet[i][0];
      added[k][1] = triplet[j][1];
      added[k][2] = triplet[i][2] + ob.triplet[i][2];
      i++, j++, k++;
    } else if (triplet[i][0] < ob.triplet[j][0] || (triplet[i][0] == ob.triplet[j][0] && triplet[i][1] < ob.triplet[i][1])) {
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

  // if one of the matrix remains
  while (i <= triplet[0][2]) {
    added[k][0] = triplet[i][0];
    added[k][1] = triplet[i][1];
    added[k][2] = triplet[i][2];
    i++, k++;
  }
  while (j <= ob.triplet[0][2]) {
    added[k][0] = ob.triplet[i][0];
    added[k][1] = ob.triplet[i][1];
    added[k][2] = ob.triplet[i][2];
    j++, k++;
  }

  added[0][0] = triplet[0][0];
  added[0][1] = triplet[0][1];
  added[0][2] = k - 1;

  cout << endl << "The sum: " << endl;
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < 3; j++) 
      cout << added[i][j] << " ";
    cout << endl;
  }
}

int main() {
  Array obj1, obj2;
  obj1.create();
  obj1.sparse();

  obj2.create();
  obj2.sparse();
  
  obj1.sparseAdd(obj2);
  return 0;
}

