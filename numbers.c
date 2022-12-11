#include <stdio.h>
#include <math.h>

int main(){

    printf("%f\n", 5.0);
    printf("%f\n", 5.0+4.5);

    printf("%f\n", 5 + 4.5);

    printf("%f\n", 5 + 3); //This won't work well

    printf("%d\n", 5/4);

    printf("%f\n", 5/4); //This won't work well

    printf("%f\n", 5/4.0);

    
    printf("%f\n", pow(2, 3)); //there is floor, ceil, sqrt

    return 0;
}