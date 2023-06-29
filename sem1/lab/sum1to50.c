#include <stdio.h>

int main() {
   int sum = 0;
   for (int i = 0; i <= 50; i+=2) sum += i; // or n^2 if it was sum of first 50 natural numbers, here it's asking for a range
   printf("Sum of all odd numbers between 1 to 50: %d\n", sum);
   return 0; 
}