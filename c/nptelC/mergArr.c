#include <stdio.h>

int main() {
    int arr1[3] = {15, 45, 25}, arr2[3] = {60, 70, 80}, arr3[6];
    for (int i = 0; i < 3; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < 3; i++) {
        arr3[3+i] = arr2[i];
    }
    for (int i = 0; i < 6; i++) printf("%d ", arr3[i]);
    return 0;
}