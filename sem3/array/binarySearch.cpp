//The array need's to be sorted
#include <iostream>

using namespace std;

class Array {
    public:
        int a[10], n;
        void create();
        void binarySearch(int);
};

void Array::create() {
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) cin>>a[i];
}

void Array::binarySearch(int item) {
    int beg = 0, end = n-1, mid, loc;
    while (beg <= end) {
        mid = (beg + end)/2;

    if (item == a[mid]) {
        loc = mid;
        break;
    }
    else if (item < a[mid]) end = mid-1;
    else beg = mid+1;
    }
    if (beg > end) cout<<"Unsuccessful search"<<endl;
    else cout<<item<<" is found at the array index "<<loc<<endl;
}

int main() {
    Array object;
    int item;
    object.create();
    cout<<"Enter the item to search: ";
    cin>>item;
    object.binarySearch(item);
    return 0;
}

