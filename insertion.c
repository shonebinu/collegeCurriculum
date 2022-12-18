#include <stdio.h>

void main()
{
  int ele, i, pos, num[11] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  for (i = 0; i < 10; i++)
  {
    printf("%d ", num[i]);
  }
  printf("\n");

  printf("Enter the element you want to add: ");
  scanf("%d", &ele);

  printf("Enter the position you want to add it to: ");
  scanf("%d", &pos);

  for (i = 10; i >= pos - 1; i--)
  {
    num[i + 1] = num[i];
  }

  num[pos - 1] = ele;

  for (i = 0; i < 11; i++)
  {
    printf("%d ", num[i]);
  }

  printf("\n");
}