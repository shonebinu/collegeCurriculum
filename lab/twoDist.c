#include <stdio.h>

struct distance
{
  int feet;
  float inches;
};

struct distance add(struct distance a, struct distance b)
{
  a.feet += b.feet + (int)(a.inches + b.inches) / 12;
  a.inches = (a.inches + b.inches) - (int)(a.inches + b.inches) / 12 * 12;
  return a;
}

int main()
{
  struct distance d1, d2;

  printf("Enter first distance (feet): ");
  scanf("%d", &d1.feet);
  printf("Enter first distance (inches): ");
  scanf("%f", &d1.inches);
  printf("Enter second distance (feet): ");
  scanf("%d", &d2.feet);
  printf("Enter second distance (inches): ");
  scanf("%f", &d2.inches);

  d1 = add(d1, d2);
  printf("Sum of distances: %d feet %.1f inches\n", d1.feet, d1.inches);

  return 0;
}
