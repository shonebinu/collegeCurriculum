#include <stdio.h>

void main()
{
  int num, i, upto;
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("Upto limit: ");
  scanf("%d", &upto);
  for (i = 1; i <= upto; i++)
  {
    printf("%d x %d = %d\n", num, i, num * i);
  }
}