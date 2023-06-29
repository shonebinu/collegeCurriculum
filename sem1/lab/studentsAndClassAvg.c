#include <stdio.h>

struct Student {
    int mark1, mark2;
    float avg;
};

int main() {
    int n;
    float sub1=0, sub2=0;
    printf("How many students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Student %d\n", i+1);
        printf("Subject 1 marks and subject 2 marks: ");
        scanf("%d %d", &students[i].mark1, &students[i].mark2);
        students[i].avg = (students[i].mark1 + students[i].mark2) / 2.0;
        sub1 += students[i].mark1;
        sub2 += students[i].mark2;
    }
    sub1 /= n, sub2 /= n;
    printf("Average marks of each students: \n");
    for (int i = 0; i < n; i++) {
        printf("Student %d \t Average Marks %.2f\n", i+1, students[i].avg);
    }
    printf("Class average of sub1: %.2f\nClass average of sub2: %.2f\n", sub1, sub2);
    return 0;
}