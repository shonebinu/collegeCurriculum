#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[50];
    int vow=0, upper=0, lower=0, space=0, punc=0, digits=0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    printf("Enter the text: ");
    scanf("%[^\n]s", text); // gets(text) in older compilers or use fgets

    for (int i = 0; i < strlen(text); i++) {
        for (int j = 0; j < 5; j++) {
            if (text[i] == vowels[j] || text[i] == vowels[j]-32) vow++;
        }
        if (isupper(text[i]) != 0) upper++;
        else if(islower(text[i]) != 0) lower++;
        else if(text[i] == ' ') space++;
        else if(isdigit(text[i]) != 0) digits++;
        else punc++;
    }
    printf("\nUpperCase Letters = %d\nLowerCase Letters = %d\nWhite Spaces = %d\nNumerical Digits = %d\nPunctuations = %d\nVowels = %d\n", upper, lower, space, digits, punc, vow);

    return 0;
}