
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
  char string[20];
  int vowels = 0;
  printf("Enter the string: ");
  scanf("%s", string);
  for (int i = 0; i < strlen(string); i++)
  {
    if (tolower(string[i]) == 'a' ||
        tolower(string[i]) == 'e' ||
        tolower(string[i]) == 'i' ||
        tolower(string[i]) == 'o' ||
        tolower(string[i]) == 'u')
    {
      vowels++;
    }
  }
  printf("The number of vowels in the given string: %d", vowels);
}
