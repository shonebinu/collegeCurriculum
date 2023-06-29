#include <stdio.h>

int main() {
    int arr[5] = {9, 10, 11, 1, 20};
    int pos = 3;
    for (int i = pos-1; i < 5; i++) arr[i] = arr[i + 1];
    for (int i = 0; i < 4; i++) printf("%d ", arr[i]);
}