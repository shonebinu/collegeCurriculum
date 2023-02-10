#include <stdio.h>

int main()
{

  int index = 1;
  while (index <= 5)
  {
    printf("Shone %d\n", index);
    index++;
  }

  index = 6;
  while (index <= 5) // since it checks the condition before running the loop, nothing is executed
  {
    printf("Shone %d\n", index);
    index++;
  }

  // index = 6
  do
  {
    printf("Shone %d\n", index);
    index++;
  } while (index <= 5); // here, 6 print's because the condition is checked only after the loop ran once

  return 0;
}