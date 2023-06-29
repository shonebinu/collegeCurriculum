#include <stdio.h>

void main() {

    char name = 'S';
    char var = 65;

    printf("%c \n%c \n %d", name, var, name);

    //

    char var1 = -128;
    printf("%c", var1);
    //Negative values in char doesn't give us any super powers and all the negative values in the char is equal to some positive values in char (signed (-128 to 127))

}