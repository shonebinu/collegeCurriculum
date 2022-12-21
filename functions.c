#include <stdio.h>

int main() // "function" is just a synonym of "method"
{
  printf("Top\n\n");
  sayHi("Shone Binu", 18);
  sayHi("Oscar Matrick", 94);
  printf("\nBotton\n");
  return 0;
}

void sayHi(char name[], int age)
{
  printf("Hello %s, you are %d.\n", name, age);
}