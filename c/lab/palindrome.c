#include <stdio.h>

void main()
{
  int num, rev = 0, rem, dup;
  printf("Enter the number: ");
  scanf("%d", &num);
  dup = num;
  while (num > 0)
  {
    rem = num % 10;
    rev = (rev * 10) + rem;
    num /= 10;
  }
  if (dup == rev)
  {
    printf("The number is palindrome.");
  }
  else
  {
    printf("The number is not a palindrome.");
  }
}