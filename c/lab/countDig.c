#include <stdio.h>

void main()
{
  int num, digs = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  while (num > 0)
  {
    digs++;
    num /= 10;
  }
  printf("Number of digits : %d", digs);
}