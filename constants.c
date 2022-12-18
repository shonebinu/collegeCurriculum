#include <stdio.h>
int main()
{
  int num = 5;
  printf("%d\n", num);
  num = 6;
  printf("%d\n", num);

  const int NO = 10; // or  "int const no = 10;" // It is prefered to use full cap letters for constants
  printf("%d\n", NO);
  NO = 1000; // This won't work. Const variable can't be changed.
  printf("%d\n", NO);

  return 0;
}