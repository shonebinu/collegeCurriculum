
#include <stdio.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubble_sort(int x[], int n) {
    int i, j;
    for(i=n-1; i>0; i--)
    for(j=0; j <i; j++)
        if (x[j] > x[j+1]) swap(&x[j], &x[j+1]);
}

int main() {
    int array[5] = {2, 1, 5,  3, 4};
    bubble_sort(array, 5);
    for (int i = 0; i < 5; i++) printf("%d ", array[i]);
    return 0;
}
