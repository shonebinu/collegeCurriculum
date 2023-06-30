#include <iostream>

using namespace std;

class Array {
    public:
        int array[10], n;
        void traversal();
        void deletion(int);
};

void Array::traversal() {
    int i;
    for (i = 0; i < n; i++)
        cout<<array[i]<<" ";
    cout<<endl;
}

void Array::deletion(int pos) {
    int i;
    for (i = pos-1; i < n; i++) {
        array[i] = array[i+1];
    }
    n--;
}

int main() {
    Array object;
    int i, pos;
    cout<<"Enter the size: ";
    cin>>object.n;
    cout<<"Enter the elements of the array: ";
    for (i = 0; i < object.n; i++)
        cin>>object.array[i];
    cout<<"Enter the position to be deleted: ";
    cin>>pos;
    cout<<"Current Array: "<<endl;
    object.traversal();
    object.deletion(pos);
    cout<<"Array after deletion: "<<endl;
    object.traversal();
    return 0;
}