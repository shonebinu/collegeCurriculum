// Factorial using Recursion

#include <stdio.h>

int rec(int x)
{

  if (x <= 1)
    return 1;

  return x * rec(x - 1);
}

int main()
{

  int fact = 1, n;

  printf("Enter a number: ");
  scanf("%d", &n);

  fact *= rec(n);

  printf("%d! is %d\n", n, fact);

  return 0;
}