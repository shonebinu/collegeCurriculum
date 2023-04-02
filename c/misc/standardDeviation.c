//Formula = sqrt(sigma(x-mean)^2 / n)
#include <stdio.h>
#include <math.h>

int main() {
    int sample[5] = {2, 3, 6, 6, 8};
    int mean, sum = 0;

    for (int i = 0; i < 5; i++) sum += sample[i];
    mean = sum/5;
  
    sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += (sample[i] - mean)*(sample[i] - mean);
    }
    

    float sd = sum/5.0;

    printf("Standard Deviation: %lf", sqrt(sd));
    return 0;
}