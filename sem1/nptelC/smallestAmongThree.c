#include <stdio.h>

int main() {
    int n1 = 10, n2 = 4, n3 = 9;

    if (n1 <= n2) {
        if (n1 <= n3) {
            printf("%d", n1);
        } else {
            printf("%d", n3);
        }
    } else {
        if (n2 <= n3) {
            printf("%d", n2);
        } else {
            printf("%d", n3);
        }
    }
    return 0;
}