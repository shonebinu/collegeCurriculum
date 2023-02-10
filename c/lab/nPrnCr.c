#include <stdio.h>

int rec(int num);

void main()
{
  int n, r, nPr, nCr;
  printf("Enter the values of 'n' and 'r': \n");
  printf("n : ");
  scanf("%d", &n);
  printf("r : ");
  scanf("%d", &r);
  nPr = rec(n) / (rec(n - r));
  nCr = nPr / rec(r);
  printf("nPr = %d\n", nPr);
  printf("nCr = %d", nCr);
}

int rec(int num)
{
  if (num <= 1)
  {
    return 1;
  }
  return num * rec(num - 1);
}