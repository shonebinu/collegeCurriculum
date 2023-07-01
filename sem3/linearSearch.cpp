#include <iostream>

using namespace std;

class Array {
    public:
        int a[10], n;
        void create();
        void linearSearch(int);
};
 
void Array::create() {
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
}

void Array::linearSearch(int item) {
    int loc = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == item) {
            loc = i;
            break;
        }
    }
    if (loc == -1) cout<<"Unsuccessful search"<<endl;
    else cout<<a[loc]<<" is found at the array index"<<loc<<endl;
}

int main() {
    Array object;
    int item;
    object.create();
    cout<<"Enter the value of item: ";
    cin>>item;
    object.linearSearch(item);
    return 0;
}