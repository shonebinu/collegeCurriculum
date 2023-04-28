#include <stdio.h>

int main() {
    int arr[5] = {0, 2, 1, 5, 4};
    int lar = arr[0];
    for (int i = 1; i < 5; i++) 
        if (arr[i] > lar) lar = arr[i];
    printf("%d", lar);
    return 0;
}