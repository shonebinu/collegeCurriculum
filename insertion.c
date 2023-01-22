#include <stdio.h>

void main()
{
  int array[10], n, pos, new;
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

  printf("\nIn which position do you want to add the new element: ");
  scanf("%d", &pos);
  printf("Enter the element you want to add to the array: ");
  scanf("%d", &new);

  for (int i = n - 1; i >= pos - 1; i--)
    array[i + 1] = array[i];

  array[pos - 1] = new;

  printf("The new array: ");
  for (int i = 0; i <= n; i++)
    printf("%d ", array[i]);
}