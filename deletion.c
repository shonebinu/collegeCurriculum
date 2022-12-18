#include <stdio.h>

void main()
{

  int ele, i, pos, num[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  for (i = 0; i < 10; i++)
  {
    printf("%d ", num[i]);
  }
  printf("\n");

  printf("Enter the element you want to remove: ");

  scanf("%d", &ele);

  for (i = 0; i < 10; i++)
  {
    if (num[i] == ele)
    {
      pos = i;
      break;
    }
  }

  printf("%d\n", i);

  for (i = pos; i < 10; i++)
  {
    num[i] = num[i + 1];
  }

  for (i = 0; i < 9; i++)
  {
    printf("%d ", num[i]);
  }

  printf("\n");
}