#include <stdio.h>

int main() {
    int n, sum = 0, sumSquares = 0, sumOdd = 0, sumEven = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    do {
        sum += n, sumSquares += (n*n);
        if (n % 2 == 0) sumEven += n;
        else sumOdd += n;
        n--;
    } while (n > 0);
    printf("Sum = %d \nSum of Squares = %d \nSum of Odd: %d \nSum of Even: %d\n", sum, sumSquares, sumOdd, sumEven);
    return 0;
}