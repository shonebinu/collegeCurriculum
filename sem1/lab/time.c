#include <stdio.h>

struct Time {
    int hh, mm, ss;
};

struct Time timeDifference(struct Time t1, struct Time t2) {
    struct Time t3 = {0, 0, 0};
    long int difference = (t2.ss + t2.mm*60 + t2.hh*3600) - (t1.ss + t1.mm*60 + t1.hh*3600);
    t3.mm = difference / 60;
    t3.ss = difference % 60;
    t3.hh = t3.mm / 60;
    t3.mm = t3.mm % 60;
    return t3;
}

int main() {
    struct Time T1, T2;
    printf("Enter T1 time (HH:MM:SS): ");
    scanf("%d %d %d", &T1.hh, &T1.mm, &T1.ss);
    printf("Enter T2 time (HH:MM:SS): ");
    scanf("%d %d %d", &T2.hh, &T2.mm, &T2.ss);
    struct Time T3 = timeDifference(T1, T2);

    printf("\nT1: %02d:%02d:%02d\n", T1.hh, T1.mm, T1.ss);
    printf("T2: %02d:%02d:%02d\n", T2.hh, T2.mm, T2.ss);
    printf("Time difference(T2 - T1): \n");
    printf("%02d:%02d:%02d\n", T3.hh, T3.mm, T3.ss);

    return 0;
}