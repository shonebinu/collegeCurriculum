#include <stdio.h>

int main()
{
  int age = 30;
  double gpa = 3.14;
  char grade = 'A';

  double *pGpa = &gpa;

  char *pGrade = &grade;

  printf("age's memory address: %p\n", &age);

  printf("gpa's memory address: %p\n", pGpa);

  printf("grade's memory adddress: %p\n", pGrade);
  return 0;
}