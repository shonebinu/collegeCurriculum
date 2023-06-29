#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *element;
    scanf("%d", &n);

    element = (float*) calloc(n, sizeof(float));
    if(element == NULL) {
        printf("Error");
        exit(0);
    }
    int i;
    for (i = 0; i < n; i++) {
        scanf("%f", element + i);
    }

    for (i = 1; i < n; i++) {
        if (*element < *(element + i))
            *element = *(element + i);
    }

    printf("Largest element = %.2f", *element);
    return 0;
}


/*

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array
    arr = (int *) calloc(n, sizeof(int));

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest element in the array
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the largest element
    printf("The largest element is: %d\n", max);

    // Free the memory allocated for the array
    free(arr);

    return 0;
}


*/