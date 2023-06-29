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