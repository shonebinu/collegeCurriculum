#include <stdio.h>

struct Student {
    char name[10];
    int roll, mark1, mark2, mark3, total, avg;
} s[25];

int main() {
    int no;
    printf("How many students: ");
    scanf("%d", &no);
    for (int i = 0; i < no; i++) {
        printf("Enter name, roll no, mark1, mark2, mark3: ");
        scanf("%s %d %d %d %d", s[i].name, &s[i].roll, &s[i].mark1, &s[i].mark2, &s[i].mark3);
        s[i].total = s[i].mark1 + s[i].mark2 + s[i].mark3;
        s[i].avg = s[i].total / 3;
    }
    struct Student high = s[0];
    for(int i = 0; i < no; i++) {
        if (s[i].avg > high.avg) high = s[i];
    }
    printf("\nStudent who has the best average: \n\n");
    printf("Name: %s \nRoll No: %d \nMark 1: %d \nMark 2: %d \nMark 3: %d \nTotal Mark : %d \nAverage Mark : %d \n", high.name, high.roll, high.mark1, high.mark2, high.mark3, high.total, high.avg);
    return 0;
}