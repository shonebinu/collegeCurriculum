// done myself entirely

#include <iostream>

using namespace std;

class Array {
  public:
    int array[10][10], m, n, triplet[10][3];
    void create();
    void toTriplet();
    void tripletAdd(Array);
};

int main() {
  Array array;
  array.create();
  cout<<endl<<"The sparse matrix in triplet form: \n";
  array.toTriplet();
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
  int k = 1, nonZero = 0;
  triplet[0][0] = m, triplet[0][1] = n;
  for (int i = 0; i < m; i++) 
    for (int j = 0; j < n; j++) 
      if (array[i][j] != 0) {
      triplet[k][0] = i+1;
      triplet[k][1] = j+1;
      triplet[k][2] = array[i][j];
      k++, nonZero++;
      }
    triplet[0][2] = nonZero;  

    //printing the triplet form
    for (int i = 0; i < k; i++) {
      for (int j = 0; j < 3; j++)
        cout<<triplet[i][j]<<" ";
      cout<<endl;
    }
  }
