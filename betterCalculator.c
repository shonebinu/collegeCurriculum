#include <stdio.h>

int main()
{
  double num1;
  double num2;
  char op;

  printf("Enter a number: ");
  scanf("%lf", &num1);

  printf("Enter operator: ");
  scanf(" %c", &op); // Every time we want to scan a character from the user, we need to put a space before "%c", otherwise, it won't work

  printf("Enter a number: ");
  scanf("%lf", &num2);

  if (op == '+')
  {
    printf("%f", num1 + num2);
  }
  else if (op == '-')
  {
    printf("%f", num1 - num2);
  }
  else if (op == '/')
  {
    printf("%f", num1 / num2);
  }
  else if (op == '*')
  {
    printf("%f", num1 * num2);
  }
  else
  {
    printf("Invalid Operator.");
  }

  return 0;
}