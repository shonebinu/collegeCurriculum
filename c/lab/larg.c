#include <stdio.h>

int lar(int arr[], int length) {
    int largest = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > largest) largest = arr[i];
    }
    return largest;
}

int main() {
    int arr[50], n;
    printf("Enter the array length: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The largest element: %d\n", lar(arr, n));
    return 0;
}