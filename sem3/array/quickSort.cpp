#include <iostream>

using namespace std;

void swap(int[], int, int);

class QuickArray {
    public:
        int array[10], n;
        void creation();
        void quickSort(int, int);
        void traversal();
};

void QuickArray::creation() {
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) 
        cin>>array[i];
}

void QuickArray::quickSort(int beg, int end) {
    int low, high, pivot;
    if (beg < end) {
        pivot = beg;
        low = beg;
        high = end;
        while (low < high) {
            while(array[low] <= array[pivot] && low < end) low++;
            while(array[high] > array[pivot]) high--;
            if (low < high) {
                swap(array, low, high); // swap a[low] & a[high]
            }
        }
        swap(array, pivot, high);
        quickSort(beg, high-1);
        quickSort(high+1, end);
    }
}

void QuickArray::traversal() {
    cout<<"Array: "<<endl;
    for (int i = 0; i < n; i++) cout<<array[i]<<'\t';
    cout<<endl;
}

int main() {
    QuickArray object;
    object.creation();
    object.quickSort(0, object.n - 1);
    object.traversal();
    return 0;
}

void swap(int arr[], int a, int b) {
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
