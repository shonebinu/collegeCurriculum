#include <stdio.h>

int main()
{
  int i;
  for (i = 1; i <= 5; i++)
  {
    printf("%d\n", i);
  }

  int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
  for (i = 0; i <= 5; i++)
    printf("%d ", luckyNumbers[i]); // if only one statement below the loop, no need for the curly braces
  return 0;
}