#include <stdio.h>

int main() {
    int n;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    int numbers[n];
    int evenCount = 0, oddCount = 0, sumEven = 0, divOddBy7 = 0;
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            evenCount++;
            sumEven += numbers[i];
        } else {
            oddCount++;
            if (numbers[i] % 7 == 0) {
                divOddBy7++;
            }
        }
    }
    printf("\nResults: \n");
    printf("Number of even numbers: %d\nNumber of odd numbers: %d\n", evenCount, oddCount);
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Number of odd numbers divisible by 7: %d\n", divOddBy7);
    return 0;
}