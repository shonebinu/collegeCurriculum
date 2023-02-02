#include <stdio.h>

struct distance
{
  int feet;
  float inches;
};

int main()
{
  struct distance d1, d2, sum;

  printf("Enter first distance (feet): ");
  scanf("%d", &d1.feet);
  printf("Enter first distance (inches): ");
  scanf("%f", &d1.inches);
  printf("Enter second distance (feet): ");
  scanf("%d", &d2.feet);
  printf("Enter second distance (inches): ");
  scanf("%f", &d2.inches);

  sum.feet = d1.feet + d2.feet + (int)(d1.inches + d2.inches) / 12;
  sum.inches = (d1.inches + d2.inches) - (int)(d1.inches + d2.inches) / 12 * 12;

  printf("Sum of distances: %d feet %.1f inches\n", sum.feet, sum.inches);

  return 0;
}
