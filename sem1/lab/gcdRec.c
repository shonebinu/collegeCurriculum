#include <stdio.h>

int gcd(int a, int b) {
    if (b != 0) return gcd(b, a % b);
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d: %d", a, b, gcd(a, b));
    return 0;
}