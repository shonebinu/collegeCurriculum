#include <stdio.h>

void main()
{
  int num, rem, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  while (num > 0)
  {
    sum += (num % 10);
    num /= 10;
  }
  printf("The sum: %d", sum);
}