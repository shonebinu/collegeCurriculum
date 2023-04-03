
#include <stdio.h>


int min_loc(int x[], int k, int size) {
    int j, pos;
    pos = k;
    for (j = k+1; j < size; j++)
        if (x[j] < x[pos]) pos = j;
    return pos;
}

void selsort(int x[], int size) {
    int k, m, temp;
    for (k = 0; k < size-1; k++) {
        m = min_loc(x, k, size);
        if (m != k) {
            temp = x[k];
            x[k] = x[m];
            x[m] = temp;
        }
    }
}


int main() {
    int array[5] = {2, 3, 1, 5, 4};
    selsort(array, 5);
    for (int i = 0; i < 5; i++) printf("%d ", array[i]);
    return 0;
}
