#include <stdio.h>

int main() {
    int upper = 0, lower = 0;
    char ch[100];
    //scanf(" %[^\n]s", ch);  
    fgets(ch, sizeof(ch), stdin);
    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') lower++;
        else if (ch[i] >= 'A' && ch[i] <= 'Z') upper++; 
    }
    printf("%d %d", upper, lower);
    //puts(ch);
    printf("%s", ch);
    return 0;
}
