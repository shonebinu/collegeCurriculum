#include <stdio.h>

int main()
{
  int nums[3][2] = {
      {1, 2},
      {3, 4},
      {5, 6}};
  // printf("%d", nums[1][1]); Accessing the elements.
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d, ", nums[i][j]);
    }
    printf("\n");
  }
  return 0;
}