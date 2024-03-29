#include <stdio.h>

struct Date {
    int d, m, y;
} D1, D2;

int elapsedTime(struct Date a, struct Date b) {
    
    int totalD1 = a.d + (a.m*30) + (a.y*360);
    int totalD2 = b.d + (b.m*30) + (b.y*360);

    return totalD2 - totalD1;
}

struct Date elapsedDate(int days) {
    
    struct Date D3 = {0,0,0};
    D3.m = days / 30;
    D3.d = days % 30;
    D3.y = D3.m / 12;
    D3.m =  D3.m % 12;

    return D3;
}

int main() {
    printf("Enter the day, month and year of D1: ");
    scanf("%d %d %d", &D1.d, &D1.m, &D1.y);
    printf("Enter the day, month and year of D2: ");
    scanf("%d %d %d", &D2.d, &D2.m, &D2.y);
    printf("D1: %02d/%02d/%04d\n", D1.d, D1.m, D1.y);
    printf("D2: %02d/%02d/%04d\n", D2.d, D2.m, D2.y);

    //printf("Days elapsed between D2 and D1 -> (D2 - D1): %d\n", elapsedTime(D1, D2));

    struct Date D3 = elapsedDate(elapsedTime(D1, D2));
    printf("\nElapsed time: \n");
    printf("%02d/%02d/%04d\n", D3.d, D3.m, D3.y);

    return 0;
}