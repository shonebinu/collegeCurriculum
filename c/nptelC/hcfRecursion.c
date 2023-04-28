#include <stdio.h>

int HCF(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return HCF(b, a % b);
    }
}

int main() {
    printf("%d", HCF(HCF(455, 50), HCF(60, 200)));
    return 0;
}