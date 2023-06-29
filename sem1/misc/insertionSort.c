
#include <stdio.h>

void insertSort(int list[], int size) {
    int item, j;
    for (int i = 1; i < size; i++) {
        item = list[i];
        for (j = i-1; (j >= 0) && (list[j] > item); j--)
            list[j+1] = list[j];
        list[j+1] = item;
    }
}

int main() {
    int array[5] = {2, 1, 4, 3, 5};
    insertSort(array, 5);
    for (int i = 0; i < 5; i++) printf("%d ", array[i]);
    return 0;
}
