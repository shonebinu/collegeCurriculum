#include <stdio.h>

int main() {
    char line[81], ch; // 80 character per line is an old standard
    int c = 0;
    do {
        ch = getchar();
        line[c] = ch;
        c++;
    } while (ch != '\n');
    c=c-1;
    line[c] = '\0';

    printf("%s", line);

    return 0;
}

/* ALTERNATIVE Approach

    char line[81];
    scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]", line); //Reads a string containing uppercase characters and blank spaces.

    ---

    char line[81];
    scanf("%[^\n]", line); //Reads a string containing any characters.

*/