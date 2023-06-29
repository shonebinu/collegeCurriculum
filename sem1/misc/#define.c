#include <stdio.h>
#define op +

int main() {
  int a = 7, b = 5;
  int c = a op b;
  printf("%d\n", c);

  return 0;
}