#include <stdio.h>
#include <string.h>

void main()
{
  char employeeName[50][50], temp[50];
  int n, i, j, choice;
  printf("Enter the number of Employee's: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("Enter the %dth Employee name: ", i + 1);
    scanf("%s", employeeName[i]);
  }
  printf("In which order (1 for ascending, 0 for descending): ");
  scanf("%d", &choice);
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (strcmp(employeeName[i], employeeName[j]) > 0 && choice == 1)
      {
        strcpy(temp, employeeName[i]);
        strcpy(employeeName[i], employeeName[j]);
        strcpy(employeeName[j], temp);
      }
      if (strcmp(employeeName[i], employeeName[j]) < 0 && choice == 0)
      {
        strcpy(temp, employeeName[i]);
        strcpy(employeeName[i], employeeName[j]);
        strcpy(employeeName[j], temp);
      }
    }
  }
  printf("The sorted array: ");
  for (i = 0; i < n; i++)
  {
    printf("%s ", employeeName[i]);
  }
}