#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 5},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j, sum = 0;

    // Calculating sum of right diagonals
    for (i = 0; i < SIZE; i++) {
        sum += matrix[i][SIZE - 1 - i];
    }

    // Displaying the matrix
    printf("Matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Displaying the sum of right diagonals
    printf("\nSum of right diagonals: %d\n", sum); //17

    return 0;
}
