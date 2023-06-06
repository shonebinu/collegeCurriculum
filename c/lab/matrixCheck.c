#include <stdio.h>

#define ROWS 3
#define COLS 3

void acceptMatrix(int matrix[][COLS], int rows, int cols);  
int areMatricesEqual(int matrix1[][COLS], int matrix2[][COLS], int rows, int cols);

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS];
    
    printf("Enter elements of matrix 1:\n");
    acceptMatrix(matrix1, ROWS, COLS);

    printf("\nEnter elements of matrix 2:\n");
    acceptMatrix(matrix2, ROWS, COLS);
    
    if (areMatricesEqual(matrix1, matrix2, ROWS, COLS)) {
        printf("\nThe two matrices are equal.\n");
    } else {
        printf("\nThe two matrices are not equal.\n");
    }
    
    return 0;
}

void acceptMatrix(int matrix[][COLS], int rows, int cols) {
    int i, j;
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int areMatricesEqual(int matrix1[][COLS], int matrix2[][COLS], int rows, int cols) {
    int i, j;
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return 0; // Return false if any elements are different
            }
        }
    }
    
    return 1; // Return true if all elements are equal
}
