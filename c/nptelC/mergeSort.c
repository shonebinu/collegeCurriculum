#include <stdio.h>

void merge(int a[], int b[], int c[], int aS, int bS) {
    int temp;
    for (int i = 0; i < aS; i++) {
        c[i] = a[i];
    }
    for (int j = 0; j < bS; j++) {
        c[j+aS] = b[j];
    }
    for (int i = 0; i < aS+bS; i++) {
        for (int j = 0; j < i; j++) {
            if (c[i] < c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp; 
            }
        }
    }
}

int main() {
    int a[3] = {1, 3, 5}, b[3] = {2, 4, 6}, c[6], aS = 3, bS = 3;
    merge(a, b, c, aS, bS);
    for (int i = 0; i < aS+bS; i++) printf("%d ", c[i]);
    return 0;
}