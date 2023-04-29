#include <stdio.h>

void factorial(int num, unsigned long long *result);

int main() {
    int num;
    unsigned long long result = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    factorial(num, &result);
    
    printf("Factorial of %d = %llu\n", num, result);
    
    return 0;
}

void factorial(int num, unsigned long long *result) {
    if (num < 0) {
        printf("Error: Input must be a non-negative integer.\n");
        return;
    }
    
    for (int i = 1; i <= num; i++) {
        *result *= i;
    }
}

// lld for long long
// ld for long int
