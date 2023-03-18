#include <stdio.h>

double pi(int);

int main() {
    printf("\n%lf", pi(100000000));
    return 0;
}

double pi(int n) {
    double value = 0;
    double sign = 1;
    for (int i = 1; i <= n; i+=2) {
        value += sign * 4.0 / i;
        sign = -sign;
    }
    return value;
}

//Leibniz Formula algorithm to generate the value of Pi. 
// The longer the iteration, the better result it produces. 
// 4/1 - 4/3 + 4/5 - 4/7 + 4/9 ...