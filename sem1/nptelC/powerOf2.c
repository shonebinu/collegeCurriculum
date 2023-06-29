#include <stdio.h>

int main() {
    float num = 6;
    while (num > 2) {
        num /= 2;
    }
    if (num == 2) {
        printf("Power of 2");
    } else {
        printf("Not power of 2");
    }
    return 0;
}