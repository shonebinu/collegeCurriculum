#include <stdio.h>
void main()
{
  int num, decimal_num, remainder, base = 1, binary = 0;
  printf("Enter a decimal integer\n");
  scanf("%d", &num);
  decimal_num = num;
  while (num > 0)
  {
    remainder = num % 2;
    binary += (remainder * base);
    num /= 2;
    base *= 10;
  }
  printf("Input number = %d\n", decimal_num);
  printf("It's binary equivalent is = %d\n", binary);
}