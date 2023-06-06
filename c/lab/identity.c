#include <stdio.h>

#define SIZE 3 // Define the size of the matrix

int isIdentityMatrix(int matrix[][SIZE]);

int main() {
    int matrix[SIZE][SIZE];
    int i, j;
    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    if (isIdentityMatrix(matrix)) {
        printf("\nThe given matrix is an identity matrix.\n");
    } else {
        printf("\nThe given matrix is not an identity matrix.\n");
    }
    
    return 0;
}

int isIdentityMatrix(int matrix[][SIZE]) {
    int i, j;
    
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            // Check if diagonal elements are 1 and non-diagonal elements are 0
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return 0; // Return false if any element is not as expected
            }
        }
    }
    
    return 1; // Return true if all elements are as expected
}
