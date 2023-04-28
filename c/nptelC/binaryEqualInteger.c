#include <stdio.h>

int binary(int num) {
    if (num == 0) return 0;
    return (num % 2) + (10 * binary(num / 2));
}

int main() {
    printf("%d", binary(25));
    return 0;
}
