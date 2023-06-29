#include <stdio.h>

int main() {
    int size, i, j, count = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Input %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }

    // Counting duplicate elements
    for (i = 0; i < size; i++) {
        int frequency = 1; // Keeps track of the frequency of current element
        // Check if the element has already been counted as a duplicate
        if (array[i] == -1)
            continue;

        for (j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                frequency++;
                array[j] = -1; // Mark the duplicate element
            }
        }
        
        if (frequency > 1)
            count++;
    }

    printf("Total number of duplicate elements found in the array is: %d\n", count);

return 0;
}