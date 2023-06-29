#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, temp = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp += matrix[i][j];
        }
        printf("%d ", temp);
        temp = 0;
    }
    return 0;
}