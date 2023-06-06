#include <stdio.h>

#define SIZE 5 // Define the size of the array

int main() {
    int array[SIZE];
    int i, max, min;

    printf("Enter %d elements in the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Assume the first element as the initial maximum and minimum
    max = min = array[0];

    // Finding maximum and minimum elements
    for (i = 1; i < SIZE; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}
