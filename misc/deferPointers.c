#include <stdio.h>

int main()
{
  int age = 30;
  int *pAge = &age;

  printf("%p", pAge);
  printf("\n%d\n", *pAge);

  printf("%d", *&age);

  return 0;
}