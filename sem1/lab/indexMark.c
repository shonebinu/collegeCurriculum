#include <stdio.h>

struct Person {
    int appID;
    char name[10];
    int maths, physics, biology, chemistry;
    int indexMark;
};

int main() {
    int n;
    printf("How many students: ");
    scanf("%d", &n);
    struct Person person[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the applicant's ID and name: ");
        scanf("%d %s", &person[i].appID, person[i].name);
        printf("Enter the marks for the 4 subjects (Maths, Physics, Biology, Chemistry): ");
        scanf("%d %d %d %d", &person[i].maths, &person[i].physics, &person[i].biology, &person[i].chemistry);
        person[i].indexMark = person[i].physics + person[i].biology + person[i].chemistry + 2 * person[i].maths;
    }
    printf("\aApplicant ID\t\tName\t\tIndex Mark\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t\t%s\t\t%d\n", person[i].appID, person[i].name, person[i].indexMark);
    }
    return 0;
}