#include <iostream>
#define MAX 15
using namespace std;

class Array {
  public:
  int array[MAX][MAX], triplet[MAX][MAX], trans[MAX][MAX], row, cols, nonZero, k; // k = iterative element
  void create();
  void traversal();
  void sparse();
  void transpose();
};

void Array::create() {
  cout << "Enter the number of rows and cols: ";
  cin >> row >> cols;
  cout << "Enter the elements: " << endl;
  for (int i = 0; i < row; i++) 
    for (int j = 0; j < cols; j++)
      cin >> array[i][j];
}

void Array::traversal() {
  cout << "The matrix: " << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < cols; j++)
      cout << array[i][j] << " ";
  cout << endl;
  }
}

void Array::sparse() {
  nonZero = 0, k = 1;
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

void Array::transpose() {
  int l = 1; // to iterate

  for (int i = 0; i < cols; i++) {
    for (int j = 1; j <= nonZero; j++) {
      if (i == triplet[j][1]) {
        trans[l][0] = triplet[j][1];
        trans[l][1] = triplet[j][0];
        trans[l][2] = triplet[j][2];
        l++;
      }
    } 
  } 
  trans[0][0] = cols;
  trans[0][1] = row;
  trans[0][2] = nonZero;

  cout << "The transpose is: " << endl;
  for (int i = 0; i <= nonZero; i++) {
    for (int j = 0; j < 3; j++)
      cout << trans[i][j] << " ";
    cout << endl;
  }
}

int main() {
  Array object;
  object.create();
  object.traversal();
  object.sparse();
  object.transpose();
  return 0;
}

