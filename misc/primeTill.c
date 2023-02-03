#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
  int i;
  for (i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int n, i, count = 0;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (i = 2; count < n; i++)
  {
    if (is_prime(i))
    {
      printf("%d ", i);
      count++;
    }
  }

  return 0;
}
