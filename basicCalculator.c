#include <stdio.h>

int main()
{
  float num1, num2;
  printf("Enter first number: ");
  scanf("%f", &num1);
  printf("Enter the second number: ");
  scanf("%f", &num2);

  printf("Answer : %f\n", num1 + num2);

  return 0;
}