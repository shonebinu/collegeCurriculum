#include <stdio.h>

int linearSearch(int a[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (a[i] == key) return i;
    }
    return -1;
}

int main() {
    int array[5] = {1, 4, 2, 5, 9};
    printf("Location: %d\n", linearSearch(array, 5, 5));
    return 0;
}