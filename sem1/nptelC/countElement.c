#include <stdio.h>

int main() {
    int count = 0, arr[5] = {3, 2, 3, 5, 3}, num = 3;
    for (int i = 0; i < 5; i++) if (arr[i] == num) count++;
    printf("%d", count);
    return 0;
}