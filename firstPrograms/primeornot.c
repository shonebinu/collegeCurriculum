// Prime or not?
#include <stdio.h>
int main() {

    int num, i;
    
    printf("Enter the number you want to check? \n");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("The entered number is not a prime number. \n");
        return 0;
    }
    
    for (i = 2; i < ((num/2)+1); i++) {
        if (num % i == 0) {
            printf("The entered number is not a prime number. \n");
            return 0;
        }
    }

    printf("The entered number is a prime number. \n");

    return 0;
}