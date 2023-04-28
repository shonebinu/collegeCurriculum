#include <stdio.h>

int main() {
    int sum = 0, n = 11;
    for (int i = 1; i < n+1; i+=2) sum += i*i;
    printf("%d", sum);
    return 0;
}