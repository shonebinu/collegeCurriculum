#include <stdio.h>
#include <limits.h>

int main() {
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf("The range of signed integer in my system is from : %d to %d\n", var1, var2);



    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;
    printf("The range of unsigned integer in my system is from: %u to %u\n", var3, var4);



    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;
    printf("The range of short signed integer in my system is from: %d to %d\n", var5, var6);


 
    short unsigned int var7 = 0; // unsigned short (also works, order doesn't matter)
    short unsigned int var8 = USHRT_MAX;
    printf("The range of short unsigned integer in my system is from: %u to %u\n", var7, var8);

    return 0;
}