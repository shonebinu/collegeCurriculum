#include <stdio.h>
#include <limits.h>

int main() {
    int var1 = INT_MIN;
    int var2 = INT_MAX;

    printf("The range of signed integer in my system is from : %d to %d", var1, var2);



    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;

    printf("The range of unsigned integer in my system is from: %u to %u", var3, var4);

    return 0;
}