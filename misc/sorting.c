#include <stdio.h>

void main()
{
  int array[10], n, temp;
  printf("Enter the number of elements of the array: ");
  scanf("%d", &n);
  printf("Enter the elements: \n");
  for (int i = 0; i < n; i++)
  {
    printf("array[%d]: ", i);
    scanf("%d", &array[i]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (array[j] < array[i])
      {
        temp = array[j];
        array[j] = array[i];
        array[i] = temp;
      }
    }
  }
  printf("The sorted array: ");
  for (int i = 0; i < n; i++)
    printf("%d ", array[i]);
}