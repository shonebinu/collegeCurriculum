// Write a C program to calculate the Sum of First and the Last Digit of a given Number. For example if the number is 1234 the result is 1+4 = 5.

#include <stdio.h>

int main() {
    int num = 45632;
    int last = num % 10, first = num;
    while (first >= 10) {
        first /= 10;
    }
    printf("%d", first + last);
    return 0;
}