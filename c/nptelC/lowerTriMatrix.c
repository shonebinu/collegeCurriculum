/*

Input

2 3 4
5 6 7
4 5 6


Output

2 0 0
5 6 0
4 5 6

*/

#include <stdio.h>

int main() {
    int matrix[3][3] = {{2, 3, 4}, {5, 6, 7}, {4, 5, 6}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i+1; j++) {
            printf("%d ", matrix[i][j]);
        }
        for (int j = i+1; j < 3; j++) {
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}