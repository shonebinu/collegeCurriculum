#include <stdio.h>

int main() {
    int N = 1234, count=0;
    while (N > 0) {
        count++;
        N /= 10;
    }
    printf("%d", count);
}