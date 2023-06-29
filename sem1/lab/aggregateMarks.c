#include <stdio.h>

struct Student {
    int rollno;
    int mark1, mark2;
    float aggregatePercent;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the roll no, mark1, and mark2: ");
        scanf("%d %d %d", &students[i].rollno, &students[i].mark1, &students[i].mark2);
        students[i].aggregatePercent = (students[i].mark1 + students[i].mark2) / 200.0 * 100;
    }
    int passed = 0, failed = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].aggregatePercent >= 60) passed++;
        else if (students[i].aggregatePercent < 40) failed++;
    }
    printf("Number of students with aggregate marks of 60 percentage or more: %d\n", passed);
    printf("Number of students who've failed: %d", failed);
    return 0;
}