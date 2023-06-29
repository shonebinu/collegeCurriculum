#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int l=0, r=n-1;
    while (l <= r) {
        int mid = (l + r) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        else if (arr[mid] < x) {
            l = mid + 1; //We add 1 to mid because we already know that the value at index mid is not the target value, so we don't need to include it in any future search.
        } else {
            r = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int result = binarySearch(arr, n, x);

    if (result == -1) {
        printf("Not found");
    } else {
        printf("%d", result);
    }
    return 0;
}