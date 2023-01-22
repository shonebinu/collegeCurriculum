#include <stdio.h>

void main()
{
  int array[5] = {3, 1, 5, 2, 4};
  int temp;
  for (int i = 0; i < 5; i++)
  {
    for (int j = i; j < 5; j++)
    {
      if (array[j] < array[i])
      {
        temp = array[j];
        array[j] = array[i];
        array[i] = temp;
      }
    }
  }
  for (int i = 0; i < 5; i++)
    printf("%d ", array[i]);
}