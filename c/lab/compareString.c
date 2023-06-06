#include <stdio.h>

int main() {
    int check = 0;
    char str1[50], str2[50];
    printf("Enter two strings to be compared: \n");
    printf("String 1: ");
    fgets(str1, 20, stdin);//scanf("%[^\n]s", str1);
    printf("String 2: ");
    fgets(str2, 20, stdin);
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            check = 1;
            break;
        }
    }
    if (check) printf("Both strings aren't the same.\n");
    else printf("Both strings are the same.\n");
    return 0;
}