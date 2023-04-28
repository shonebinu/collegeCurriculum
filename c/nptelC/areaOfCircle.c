// Write a C Program to calculates the area (floating point number with two decimal places) of a Circle given it’s radius (integer value). The value of Pi is 3.14.

#include <stdio.h>
#define PI 3.14

int main() {
    int radius = 10;
    float area = PI * radius * radius;
    printf("%.2f", area);
    return 0;
}