#include <stdio.h>

int main() {
    int N=12, sum = 0;
    for (int i = 0; i < N+1; i+=2) sum += i;
    printf("%d", sum);
    return 0;
}