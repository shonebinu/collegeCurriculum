/*

*****
****
***
**
*

*/


#include <stdio.h>

int main() {
    int N = 5;
    for (int i = 0; i < N; i++) {
        for (int j = N; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}