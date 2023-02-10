#include <stdio.h>

void main() {
  int x, y, *ptr_x, *ptr_y, temp;

  printf("Enter the values of x and y: ");
  scanf("%d %d", &x, &y);

  ptr_x = &x;
  ptr_y = &y;

  temp = *ptr_y;
  *ptr_y = *ptr_x;
  *ptr_x = temp;

  printf("%d %d", x, y);
}