#include <stdio.h>

int main() {

    int sum = 0;
    for (int i = 0; i <= 50; i++) sum += i; // or (n * (n+1)) / 2
    printf("Sum of first 50 natural numbers: %d\n", sum);
    return 0;

}