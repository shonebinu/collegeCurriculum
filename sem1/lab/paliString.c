#include <stdio.h>
#include <string.h>

void main()
{
  char str[20];
  int i, check = 0;
  printf("Enter a string: ");
  scanf("%s", str);
  for (i = 0; i < strlen(str); i++)
  {
    if (str[i] != str[strlen(str) - 1 - i])
    {
      check = 1;
      break;
    }
  }
  if (check == 1)
  {
    printf("The string is not a palindrome.");
  }
  else if (check == 0)
  {
    printf("The string is a palindrome.");
  }
}