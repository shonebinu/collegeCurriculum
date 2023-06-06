#include <stdio.h>

int main() {
    float principle, rate, time, interest;

    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("Enter the interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    interest = (principle * rate * time) / 100;

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
