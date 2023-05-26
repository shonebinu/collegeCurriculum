#include <stdio.h>
#define PI 3.14152

float volume(int rad, int hei) {
    return PI*rad*rad*hei;
}

int main() {
    int radius, height;
    printf("Enter the cylinder's radius and height: ");
    scanf("%d %d", &radius, &height);
    printf("Volume of the cylinder: %.2f\n", volume(radius, height));
    printf("Total Surface Area of the cylinder: %.2f\n", 2*PI*radius*(radius+height));
    return 0;
}