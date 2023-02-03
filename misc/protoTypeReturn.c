
#include <stdio.h>

int cube(int num);

int main()
{
  printf("Answer: %d\n", cube(8));
  return 0;
}

int cube(int num)
{
  return num * num * num;
  printf("This printf doesn't get printed, because when using 'return' keyword, the function breaks and exits.");
}
