#include <stdio.h>

int binarySearch(int x[], int size, int key) {
    int left = 0, right = size-1, mid;
    while(left <= right) {
        mid = (right + left) / 2; // or mid = left + (right - left) / 2; (for avoiding overflows)
        if (x[mid] == key) return mid;
        else if (key < x[mid]) right = mid - 1;
        else if (key > x[mid]) left = mid; + 1;
    }
    return -1;
}

int main() {
    int array[5] = {1, 4, 2, 5, 9};
    printf("Location: %d\n", binarySearch(array, 5, 5));
    return 0;
}
