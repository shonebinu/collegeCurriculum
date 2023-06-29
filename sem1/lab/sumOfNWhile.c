#include <stdio.h>

void main()
{
  int sum = 0, i, num;
  printf("Enter the number: ");
  scanf("%d", &num);
  while (num != 0)
  {
    sum += num;
    num--;
  }
  printf("Sum : %d", sum);
}