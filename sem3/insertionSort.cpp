#include <iostream>

using namespace std;

class Array {
    public:
        int a[10], n;
        void creation();
        void insertionSort();
        void display();
};

void Array::creation() {
    cout<<"Enter the limit: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for (int i = 0; i < n; i++) cin>>a[i];
}

void Array::insertionSort() {
    int j, temp;
    for (int i = 1; i < n; i++) {
        temp = a[i];
        j = i-1;
        while (a[j] > temp && j >= 0) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

void Array::display() {
    cout<<"The elements are: \n";
    for (int i = 0; i < n; i++) cout<<a[i]<<"\t";
    cout<<endl;
}


int main() {
    Array object;
    object.creation();
    object.insertionSort();
    object.display();
    return 0;
}