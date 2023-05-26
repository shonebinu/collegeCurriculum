#include <stdio.h>

int main() {
    int num, count_odd = 0, count_even = 0, sum_odd = 0, sum_even = 0;
    while(1) {
        printf("Enter a number (9999 to stop): ");
        scanf("%d", &num);

        if (num == 9999) break;
        if (num < 0) continue;

        if (num % 2 == 0) {
            sum_even += num;
            count_even++;
        } else {
            sum_odd += num;
            count_odd++;
        }
    }
    printf("\n");

    if (count_odd > 0) {
        float average_odd = (float)sum_odd / count_odd;
        printf("Average of odd numbers: %.2f\n", average_odd);
    } else {
        printf("No odd numbers were entered.\n");
    }

    if (count_even > 0) {
        float average_even = (float)sum_even / count_even;
        printf("Average of even numbers: %.2f\n", average_even);
    } else {
        printf("No even numbers were entered.\n");
    }
    return 0;
}