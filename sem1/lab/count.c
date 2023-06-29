#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[50];
    int alp=0, dig=0, spe=0;
    printf("Enter the string: ");
    scanf("%s", string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (isalpha(string[i]) != 0) alp++;
        else if (isdigit(string[i]) != 0) dig++;
        else spe++;
    }
    printf("Alphabets = %d \nDigits = %d \nSpecial Characters = %d\n", alp, dig, spe);
    return 0;
}