#include <iostream>

using namespace std;

class Array {
    public:
        int array[10], n;
        void traversal();
};

void Array::traversal() {
    int i;
    for (i = 0; i < n; i++)
        cout<<array[i]<<" ";
    cout<<endl;
}

int main() {
    int i;
    Array object;
    cout<<"Enter the array size: ";
    cin>>object.n;
    cout<<"Enter the array elements: ";
    for (i = 0; i < object.n; i++)
        cin>>object.array[i];
    cout<<"Array Traversal: "<<endl;
    object.traversal();
    return 0;
}