#include <stdio.h>

int primeCheck(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int line = 4, num = 2;
    for (int i = 1; i <= line; i++) {
        for (int j = 1; j <= i; j++) {
            while (!primeCheck(num)) num++;
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}