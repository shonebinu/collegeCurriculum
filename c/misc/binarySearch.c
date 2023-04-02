#include <stdio.h>

int binarySearch(int x[], int size, int key) {
    int L, R, mid;
    L = -1; R = size;
    while (L + 1 != R) {
        mid = (L+R) / 2;
        if (x[mid] > key)
            R = mid;
        else L = mid;
    }
    if (L >= 0 && x[L] == key) return L;
    else return -1;
}

int main() {
    int array[5] = {1, 4, 2, 5, 9};
    printf("Location: %d\n", binarySearch(array, 5, 5));
    return 0;
}