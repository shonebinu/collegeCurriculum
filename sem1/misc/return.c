#include <stdio.h>

int cube(int num)
{
  return num * num * num;
  printf("This printf doesn't get printed, because when using 'return' keyword, the function breaks and exits.");
}

int main()
{
  printf("Answer: %d\n", cube(7));
  return 0;
}

// It's better to define the function above the 'calling function'.

/*

I can prototype the function if the 'function' is below the 'calling function' so that the program works well without breaking.

To prototype, I just have to type in the function signature before the 'calling function'.

Eg:


#include <stdio.h>

int cube(int num);

int main()
{
  printf("Answer: %d\n", cube(7));
  return 0;
}

int cube(int num)
{
  return num * num * num;
  printf("This printf doesn't get printed, because when using 'return' keyword, the function breaks and exits.");
}



*/