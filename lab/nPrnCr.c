#include <stdio.h>

int rec(int num);

void main()
{
  int n, r, nPr, nCr;
  printf("Enter the values of 'n' and 'r': ");
  printf("n : ");
  scanf("%d", &n);
  printf("r : ");
  scanf("%d", &r);
}

int rec(int num)
{
  if (num <= 1)
  {
    return 1;
  }
  return num * rec(num - 1);
}