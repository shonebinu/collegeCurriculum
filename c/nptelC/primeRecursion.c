#include <stdio.h>

int is_prime(int n, int i) {
    if (i == 1) return 1;
    if (n <= 2) return (n==2) ? 1 : 0;
    if (n % i == 0) return 0;
    return is_prime(n, i-1);
}

int main() {
    int num = 4;
    printf("%d", is_prime(num, num/2));
    return 0;
}