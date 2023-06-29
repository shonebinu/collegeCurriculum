#include <stdio.h>

void main()
{
  const int ROWS = 5;
  int row, col;
  for (row = 0; row < ROWS; ++row)
  {
    for (col = 1; col <= row; ++col)
      printf(" ");
    for (col = 1; col <= ROWS - row; ++col)
      printf("* ");
    printf("\n");
  }
}