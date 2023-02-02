#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  int length, start, end;
  char temp;

  printf("Enter a string: ");
  scanf("%s", str);

  length = strlen(str);
  end = length - 1;

  for (start = 0; start < length / 2; start++)
  {
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    end--;
  }

  printf("Reversed string: %s\n", str);

  return 0;
}
