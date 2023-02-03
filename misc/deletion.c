#include <stdio.h>

void main()
{
  int array[10], n, del, pos;
  printf("Enter the number of elements of the array: ");
  scanf("%d", &n);
  printf("Enter the elements: \n");
  for (int i = 0; i < n; i++)
  {
    printf("array[%d]: ", i);
    scanf("%d", &array[i]);
  }
  printf("The array is: ");
  for (int i = 0; i < n; i++)
    printf("%d ", array[i]);

  printf("\nEnter the element you want to delete: ");
  scanf("%d", &del);
  for (int i = 0; i < n; i++)
  {
    if (array[i] == del)
    {
      pos = i;
      break;
    }
  }

  for (int i = pos; i < n; i++)
  {
    array[i] = array[i + 1];
  }

  printf("The new array: ");
  for (int i = 0; i < n - 1; i++)
    printf("%d ", array[i]);
}