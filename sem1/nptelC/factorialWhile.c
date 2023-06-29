#include <stdio.h>

int main() {
    int num = 5, fact = 1;
    while (num) {
        fact *= num;
        num--;
    }
    printf("%d", fact);
    return 0;
}