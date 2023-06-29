#include <stdio.h>

int main() {
    int n;
    printf("Number of elements: ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (numbers[i] < numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    if (n % 2 == 1) {
        printf("Median: %d\n", numbers[n/2]);
    } else {
        printf("Median: %.2f\n", ((numbers[n/2] + numbers[(n/2) - 1])/2.0));
    }
    return 0;
}