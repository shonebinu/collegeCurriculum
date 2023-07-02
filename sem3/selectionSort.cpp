#include <iostream>

using namespace std;

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

class Array {
    public:
        int a[10], n;
        void create();
        void selectionSort();
        void display();
};

void Array::create() {
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) cin>>a[i];
}

void Array::selectionSort() {
    int small, loc;
    for (int i = 0; i < n-1; i++) {
        small = a[i], loc = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < small) small = a[j], loc = j;
        }
        swap(a, i, loc); /* or
        int temp = a[loc];
        a[loc] = a[i];
        a[i] = temp;
        */
    }
}

void Array::display() {
    cout<<"The elements are: ";
    for (int i = 0; i < n; i++) cout<<a[i]<<"\t";
    cout<<endl;
}

int main() {
    Array object;
    object.create();
    object.selectionSort();
    object.display();
    return 0;
}