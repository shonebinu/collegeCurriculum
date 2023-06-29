#include <stdio.h>

int main() {
    int a, b, min, max;
    char op;
    printf("Choose an operation (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(op) {
        case '+': printf("%d + %d = %d\n", a, b, a+b);
                break;
        case '-': printf("%d - %d = %d\n", a, b, a-b);
                break;
        case '*': printf("%d * %d = %d\n", a, b, a*b);
                break;
        case '/': printf("%d / %d = %d\n", a, b, a/b);
                break;
        default: printf("Wrong choice!\n");
    }
    min = a<b ? a : b;
    max = a>b ? a : b;

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    return 0;
}