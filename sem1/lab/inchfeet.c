#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

struct Distance addDistances(struct Distance d1, struct Distance d2);

int main() {
    struct Distance distance1, distance2, sum;
    
    // Read the first distance
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inch);
    
    // Read the second distance
    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inch);
    
    // Add the distances
    sum = addDistances(distance1, distance2);
    
    // Display the result
    printf("\nSum of distances: %d feet %d inches\n", sum.feet, sum.inch);
    
    return 0;
}

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    
    // Add the inches
    result.inch = d1.inch + d2.inch;
    
    // Add the carry-over feet from inches
    result.feet = d1.feet + d2.feet + (result.inch / 12);
    
    // Adjust the inches
    result.inch = result.inch % 12;
    
    return result;
}
