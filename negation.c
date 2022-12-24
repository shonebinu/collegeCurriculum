#include <stdio.h>

int main()
{
  if (3 > 2)
  {
    printf("True\n"); // prints True
  }

  if (!(3 > 2))
  {
    printf("True");
  }
  else
  {
    printf("False"); // Prints False, since the negation operator negates whatever the answer
  }
  return 0;
}