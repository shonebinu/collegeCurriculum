#include <iostream>

using namespace std;

int main() {
  int array[10][10], m, n, count = 0;
  cout<<"Enter the no. of rows and colums: ";
  cin>>m>>n;
  cout<<"Enter the elements: ";
  for (int i = 0; i < m; i++) 
    for (int j = 0; j < n; j++) {
      cin>>array[i][j];
      if (array[i][j] == 0) count++;
    }
if (count > (m*n)/2)
  cout<<"The given matrix is a sparse matrix.";
else 
  cout<<"The given matrix is not a sparse matrix.";
} 
