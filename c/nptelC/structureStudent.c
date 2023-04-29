#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    int score;
};

int main() {
    struct student s[20];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i].rollno);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].score);
    }
    struct student temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (s[i].score > s[j].score) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", s[i].score);
    }
}
