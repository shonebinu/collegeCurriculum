#include <iostream>
using namespace std;

void swap(int[], int, int);
int partition(int[], int, int);
void quickSort(int[], int, int);
void traversal(int[], int);

class QuickArray {
public:
    int array[10], n;
    void creation();
    void quickSort(int, int);
    void traversal();
};
 
int main() {
    QuickArray object;
    object.creation();
    object.quickSort(0, object.n - 1);
    object.traversal();
    return 0;
}

void QuickArray::creation() {
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) 
        cin >> array[i];
}

void QuickArray::quickSort(int beg, int end) {
    if (beg < end) {
        int pivot = partition(array, beg, end);
        quickSort(beg, pivot - 1);
        quickSort(pivot + 1, end);
    }
}

void QuickArray::traversal() {
    cout << "Array: " << endl;
    for (int i = 0; i < n; i++) 
        cout << array[i] << '\t';
    cout << endl;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return (i + 1);
}

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

